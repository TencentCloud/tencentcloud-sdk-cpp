/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MCUBACKGROUNDCUSTOMRENDER_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MCUBACKGROUNDCUSTOMRENDER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 混流自定义渲染参数
                */
                class McuBackgroundCustomRender : public AbstractModel
                {
                public:
                    McuBackgroundCustomRender();
                    ~McuBackgroundCustomRender() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自定义渲染画面的宽度，单位为像素值，需大于0，且不能超过子布局的宽。
                     * @return Width 自定义渲染画面的宽度，单位为像素值，需大于0，且不能超过子布局的宽。
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置自定义渲染画面的宽度，单位为像素值，需大于0，且不能超过子布局的宽。
                     * @param _width 自定义渲染画面的宽度，单位为像素值，需大于0，且不能超过子布局的宽。
                     * 
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取自定义渲染画面的高度，单位为像素值，需大于0，且不能超过子布局的高。
                     * @return Height 自定义渲染画面的高度，单位为像素值，需大于0，且不能超过子布局的高。
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置自定义渲染画面的高度，单位为像素值，需大于0，且不能超过子布局的高。
                     * @param _height 自定义渲染画面的高度，单位为像素值，需大于0，且不能超过子布局的高。
                     * 
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取自定义渲染画面的圆角半径，单位为像素值，不能超过渲染画面Width和Height最小值的一半，不指定默认为0，表示直角。
                     * @return Radius 自定义渲染画面的圆角半径，单位为像素值，不能超过渲染画面Width和Height最小值的一半，不指定默认为0，表示直角。
                     * 
                     */
                    uint64_t GetRadius() const;

                    /**
                     * 设置自定义渲染画面的圆角半径，单位为像素值，不能超过渲染画面Width和Height最小值的一半，不指定默认为0，表示直角。
                     * @param _radius 自定义渲染画面的圆角半径，单位为像素值，不能超过渲染画面Width和Height最小值的一半，不指定默认为0，表示直角。
                     * 
                     */
                    void SetRadius(const uint64_t& _radius);

                    /**
                     * 判断参数 Radius 是否已赋值
                     * @return Radius 是否已赋值
                     * 
                     */
                    bool RadiusHasBeenSet() const;

                private:

                    /**
                     * 自定义渲染画面的宽度，单位为像素值，需大于0，且不能超过子布局的宽。
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 自定义渲染画面的高度，单位为像素值，需大于0，且不能超过子布局的高。
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 自定义渲染画面的圆角半径，单位为像素值，不能超过渲染画面Width和Height最小值的一半，不指定默认为0，表示直角。
                     */
                    uint64_t m_radius;
                    bool m_radiusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MCUBACKGROUNDCUSTOMRENDER_H_
