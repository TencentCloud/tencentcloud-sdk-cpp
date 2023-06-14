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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_COLORINFO_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_COLORINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * 整张图颜色信息。
                */
                class ColorInfo : public AbstractModel
                {
                public:
                    ColorInfo();
                    ~ColorInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取RGB颜色值（16进制），例如：291A18。
                     * @return Color RGB颜色值（16进制），例如：291A18。
                     * 
                     */
                    std::string GetColor() const;

                    /**
                     * 设置RGB颜色值（16进制），例如：291A18。
                     * @param _color RGB颜色值（16进制），例如：291A18。
                     * 
                     */
                    void SetColor(const std::string& _color);

                    /**
                     * 判断参数 Color 是否已赋值
                     * @return Color 是否已赋值
                     * 
                     */
                    bool ColorHasBeenSet() const;

                    /**
                     * 获取当前颜色标签所占比例。
                     * @return Percentage 当前颜色标签所占比例。
                     * 
                     */
                    double GetPercentage() const;

                    /**
                     * 设置当前颜色标签所占比例。
                     * @param _percentage 当前颜色标签所占比例。
                     * 
                     */
                    void SetPercentage(const double& _percentage);

                    /**
                     * 判断参数 Percentage 是否已赋值
                     * @return Percentage 是否已赋值
                     * 
                     */
                    bool PercentageHasBeenSet() const;

                    /**
                     * 获取颜色标签。蜜柚色，米驼色等。
                     * @return Label 颜色标签。蜜柚色，米驼色等。
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置颜色标签。蜜柚色，米驼色等。
                     * @param _label 颜色标签。蜜柚色，米驼色等。
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                private:

                    /**
                     * RGB颜色值（16进制），例如：291A18。
                     */
                    std::string m_color;
                    bool m_colorHasBeenSet;

                    /**
                     * 当前颜色标签所占比例。
                     */
                    double m_percentage;
                    bool m_percentageHasBeenSet;

                    /**
                     * 颜色标签。蜜柚色，米驼色等。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_COLORINFO_H_
