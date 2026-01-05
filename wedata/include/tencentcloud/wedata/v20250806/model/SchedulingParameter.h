/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_SCHEDULINGPARAMETER_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_SCHEDULINGPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 任务调度变量参数
                */
                class SchedulingParameter : public AbstractModel
                {
                public:
                    SchedulingParameter();
                    ~SchedulingParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamKey 参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParamKey() const;

                    /**
                     * 设置参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramKey 参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamKey(const std::string& _paramKey);

                    /**
                     * 判断参数 ParamKey 是否已赋值
                     * @return ParamKey 是否已赋值
                     * 
                     */
                    bool ParamKeyHasBeenSet() const;

                    /**
                     * 获取参数值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamValue 参数值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParamValue() const;

                    /**
                     * 设置参数值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramValue 参数值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamValue(const std::string& _paramValue);

                    /**
                     * 判断参数 ParamValue 是否已赋值
                     * @return ParamValue 是否已赋值
                     * 
                     */
                    bool ParamValueHasBeenSet() const;

                    /**
                     * 获取拓展参数json
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtProperties 拓展参数json
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtProperties() const;

                    /**
                     * 设置拓展参数json
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extProperties 拓展参数json
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtProperties(const std::string& _extProperties);

                    /**
                     * 判断参数 ExtProperties 是否已赋值
                     * @return ExtProperties 是否已赋值
                     * 
                     */
                    bool ExtPropertiesHasBeenSet() const;

                private:

                    /**
                     * 参数名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramKey;
                    bool m_paramKeyHasBeenSet;

                    /**
                     * 参数值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramValue;
                    bool m_paramValueHasBeenSet;

                    /**
                     * 拓展参数json
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extProperties;
                    bool m_extPropertiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_SCHEDULINGPARAMETER_H_
