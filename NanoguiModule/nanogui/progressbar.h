/*
    nanogui/progressbar.h -- Standard widget for visualizing progress

    NanoGUI was developed by Wenzel Jakob <wenzel@inf.ethz.ch>.
    The widget drawing code is based on the NanoVG demo application
    by Mikko Mononen.

    All rights reserved. Use of this source code is governed by a
    BSD-style license that can be found in the LICENSE.txt file.
*/

#pragma once

NAMESPACE_BEGIN (nanogui)

class  ProgressBar : public Widget
{
   public:
      ProgressBar (Widget * parent);

      float value()
      {
         return mValue;
      }
      void setValue (float value)
      {
         mValue = value;
      }

      virtual ivec2 preferredSize (NVGcontext * ctx) const;
      virtual void draw (NVGcontext * ctx);
   protected:
      float mValue;
};

NAMESPACE_END (nanogui)
