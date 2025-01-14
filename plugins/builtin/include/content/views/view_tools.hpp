#pragma once

#include <hex/api/content_registry.hpp>
#include <hex/ui/view.hpp>

#include <vector>

namespace hex::plugin::builtin {

    class ViewTools : public View {
    public:
        ViewTools();
        ~ViewTools() override = default;

        void drawContent() override;
        void drawAlwaysVisible() override;

    private:
        std::vector<ContentRegistry::Tools::impl::Entry>::iterator m_dragStartIterator;
    };

}