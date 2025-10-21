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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMPOLICYEVENTCONDITION_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMPOLICYEVENTCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/AlarmPolicyRule.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 告警策略事件触发条件
                */
                class AlarmPolicyEventCondition : public AbstractModel
                {
                public:
                    AlarmPolicyEventCondition();
                    ~AlarmPolicyEventCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警触发条件列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Rules 告警触发条件列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AlarmPolicyRule> GetRules() const;

                    /**
                     * 设置告警触发条件列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rules 告警触发条件列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRules(const std::vector<AlarmPolicyRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * 告警触发条件列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AlarmPolicyRule> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMPOLICYEVENTCONDITION_H_
