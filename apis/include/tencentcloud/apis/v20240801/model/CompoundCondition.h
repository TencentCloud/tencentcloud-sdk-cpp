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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_COMPOUNDCONDITION_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_COMPOUNDCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apis/v20240801/model/SimpleCondition.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * 匹配条件
                */
                class CompoundCondition : public AbstractModel
                {
                public:
                    CompoundCondition();
                    ~CompoundCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否启用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Enable <p>是否启用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>是否启用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enable <p>是否启用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>匹配信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Rules <p>匹配信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SimpleCondition> GetRules() const;

                    /**
                     * 设置<p>匹配信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rules <p>匹配信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRules(const std::vector<SimpleCondition>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * <p>是否启用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>匹配信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SimpleCondition> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_COMPOUNDCONDITION_H_
