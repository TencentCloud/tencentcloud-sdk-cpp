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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_CANVAS_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_CANVAS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/LayoutParams.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * 混流画布参数
                */
                class Canvas : public AbstractModel
                {
                public:
                    Canvas();
                    ~Canvas() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取混流画布宽高配置
                     * @return LayoutParams 混流画布宽高配置
                     * 
                     */
                    LayoutParams GetLayoutParams() const;

                    /**
                     * 设置混流画布宽高配置
                     * @param _layoutParams 混流画布宽高配置
                     * 
                     */
                    void SetLayoutParams(const LayoutParams& _layoutParams);

                    /**
                     * 判断参数 LayoutParams 是否已赋值
                     * @return LayoutParams 是否已赋值
                     * 
                     */
                    bool LayoutParamsHasBeenSet() const;

                    /**
                     * 获取背景颜色，默认为黑色，格式为RGB格式，如红色为"#FF0000"
                     * @return BackgroundColor 背景颜色，默认为黑色，格式为RGB格式，如红色为"#FF0000"
                     * 
                     */
                    std::string GetBackgroundColor() const;

                    /**
                     * 设置背景颜色，默认为黑色，格式为RGB格式，如红色为"#FF0000"
                     * @param _backgroundColor 背景颜色，默认为黑色，格式为RGB格式，如红色为"#FF0000"
                     * 
                     */
                    void SetBackgroundColor(const std::string& _backgroundColor);

                    /**
                     * 判断参数 BackgroundColor 是否已赋值
                     * @return BackgroundColor 是否已赋值
                     * 
                     */
                    bool BackgroundColorHasBeenSet() const;

                private:

                    /**
                     * 混流画布宽高配置
                     */
                    LayoutParams m_layoutParams;
                    bool m_layoutParamsHasBeenSet;

                    /**
                     * 背景颜色，默认为黑色，格式为RGB格式，如红色为"#FF0000"
                     */
                    std::string m_backgroundColor;
                    bool m_backgroundColorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_CANVAS_H_
