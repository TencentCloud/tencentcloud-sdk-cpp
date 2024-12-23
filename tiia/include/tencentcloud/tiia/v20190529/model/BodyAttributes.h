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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_BODYATTRIBUTES_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_BODYATTRIBUTES_H_

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
                * 属性列表。
                */
                class BodyAttributes : public AbstractModel
                {
                public:
                    BodyAttributes();
                    ~BodyAttributes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取属性值。
                     * @return Label 属性值。
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置属性值。
                     * @param _label 属性值。
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取置信度，取值0-1之间。
                     * @return Confidence 置信度，取值0-1之间。
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置置信度，取值0-1之间。
                     * @param _confidence 置信度，取值0-1之间。
                     * 
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取属性名称。
                     * @return Name 属性名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置属性名称。
                     * @param _name 属性名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 属性值。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 置信度，取值0-1之间。
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 属性名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_BODYATTRIBUTES_H_
