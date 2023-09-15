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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEAUDITRULETEMPLATESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEAUDITRULETEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeAuditRuleTemplates请求参数结构体
                */
                class DescribeAuditRuleTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeAuditRuleTemplatesRequest();
                    ~DescribeAuditRuleTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则模板ID。
                     * @return RuleTemplateIds 规则模板ID。
                     * 
                     */
                    std::vector<std::string> GetRuleTemplateIds() const;

                    /**
                     * 设置规则模板ID。
                     * @param _ruleTemplateIds 规则模板ID。
                     * 
                     */
                    void SetRuleTemplateIds(const std::vector<std::string>& _ruleTemplateIds);

                    /**
                     * 判断参数 RuleTemplateIds 是否已赋值
                     * @return RuleTemplateIds 是否已赋值
                     * 
                     */
                    bool RuleTemplateIdsHasBeenSet() const;

                    /**
                     * 获取规则模板名称
                     * @return RuleTemplateNames 规则模板名称
                     * 
                     */
                    std::vector<std::string> GetRuleTemplateNames() const;

                    /**
                     * 设置规则模板名称
                     * @param _ruleTemplateNames 规则模板名称
                     * 
                     */
                    void SetRuleTemplateNames(const std::vector<std::string>& _ruleTemplateNames);

                    /**
                     * 判断参数 RuleTemplateNames 是否已赋值
                     * @return RuleTemplateNames 是否已赋值
                     * 
                     */
                    bool RuleTemplateNamesHasBeenSet() const;

                    /**
                     * 获取单次请求返回的数量。默认值20。
                     * @return Limit 单次请求返回的数量。默认值20。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置单次请求返回的数量。默认值20。
                     * @param _limit 单次请求返回的数量。默认值20。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量，默认值为 0。
                     * @return Offset 偏移量，默认值为 0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认值为 0。
                     * @param _offset 偏移量，默认值为 0。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取告警等级。1-低风险，2-中风险，3-高风险。
                     * @return AlarmLevel 告警等级。1-低风险，2-中风险，3-高风险。
                     * 
                     */
                    uint64_t GetAlarmLevel() const;

                    /**
                     * 设置告警等级。1-低风险，2-中风险，3-高风险。
                     * @param _alarmLevel 告警等级。1-低风险，2-中风险，3-高风险。
                     * 
                     */
                    void SetAlarmLevel(const uint64_t& _alarmLevel);

                    /**
                     * 判断参数 AlarmLevel 是否已赋值
                     * @return AlarmLevel 是否已赋值
                     * 
                     */
                    bool AlarmLevelHasBeenSet() const;

                    /**
                     * 获取告警策略。0-不告警，1-告警。
                     * @return AlarmPolicy 告警策略。0-不告警，1-告警。
                     * 
                     */
                    uint64_t GetAlarmPolicy() const;

                    /**
                     * 设置告警策略。0-不告警，1-告警。
                     * @param _alarmPolicy 告警策略。0-不告警，1-告警。
                     * 
                     */
                    void SetAlarmPolicy(const uint64_t& _alarmPolicy);

                    /**
                     * 判断参数 AlarmPolicy 是否已赋值
                     * @return AlarmPolicy 是否已赋值
                     * 
                     */
                    bool AlarmPolicyHasBeenSet() const;

                private:

                    /**
                     * 规则模板ID。
                     */
                    std::vector<std::string> m_ruleTemplateIds;
                    bool m_ruleTemplateIdsHasBeenSet;

                    /**
                     * 规则模板名称
                     */
                    std::vector<std::string> m_ruleTemplateNames;
                    bool m_ruleTemplateNamesHasBeenSet;

                    /**
                     * 单次请求返回的数量。默认值20。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认值为 0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 告警等级。1-低风险，2-中风险，3-高风险。
                     */
                    uint64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * 告警策略。0-不告警，1-告警。
                     */
                    uint64_t m_alarmPolicy;
                    bool m_alarmPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEAUDITRULETEMPLATESREQUEST_H_
