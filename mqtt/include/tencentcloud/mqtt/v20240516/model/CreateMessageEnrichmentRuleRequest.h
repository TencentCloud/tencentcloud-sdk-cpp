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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_CREATEMESSAGEENRICHMENTRULEREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_CREATEMESSAGEENRICHMENTRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * CreateMessageEnrichmentRule请求参数结构体
                */
                class CreateMessageEnrichmentRuleRequest : public AbstractModel
                {
                public:
                    CreateMessageEnrichmentRuleRequest();
                    ~CreateMessageEnrichmentRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * @return InstanceId 腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * @param _instanceId 腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取规则名称
                     * @return RuleName 规则名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称
                     * @param _ruleName 规则名称
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取规则匹配条件，JSON格式，需要Base64编码
样例
{"clientId":"client-1","username":"client-1","topic":"home/room1"}
Base64后
eyJjbGllbnRJZCI6ImNsaWVudC0xIiwidXNlcm5hbWUiOiJjbGllbnQtMSIsInRvcGljIjoiaG9tZS9yb29tMSJ9
                     * @return Condition 规则匹配条件，JSON格式，需要Base64编码
样例
{"clientId":"client-1","username":"client-1","topic":"home/room1"}
Base64后
eyJjbGllbnRJZCI6ImNsaWVudC0xIiwidXNlcm5hbWUiOiJjbGllbnQtMSIsInRvcGljIjoiaG9tZS9yb29tMSJ9
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置规则匹配条件，JSON格式，需要Base64编码
样例
{"clientId":"client-1","username":"client-1","topic":"home/room1"}
Base64后
eyJjbGllbnRJZCI6ImNsaWVudC0xIiwidXNlcm5hbWUiOiJjbGllbnQtMSIsInRvcGljIjoiaG9tZS9yb29tMSJ9
                     * @param _condition 规则匹配条件，JSON格式，需要Base64编码
样例
{"clientId":"client-1","username":"client-1","topic":"home/room1"}
Base64后
eyJjbGllbnRJZCI6ImNsaWVudC0xIiwidXNlcm5hbWUiOiJjbGllbnQtMSIsInRvcGljIjoiaG9tZS9yb29tMSJ9
                     * 
                     */
                    void SetCondition(const std::string& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取规则执行的动作，JSON格式，需要Base64编码
样例
{"messageExpiryInterval":360,"responseTopic":"replies/devices/${clientid}","correlationData":"${traceid}","userProperty":[{"key":"trace-id","value":"${traceid}"}]}
BASE64后
eyJtZXNzYWdlRXhwaXJ5SW50ZXJ2YWwiOjM2MCwicmVzcG9uc2VUb3BpYyI6InJlcGxpZXMvZGV2aWNlcy8ke2NsaWVudGlkfSIsImNvcnJlbGF0aW9uRGF0YSI6IiR7dHJhY2VpZH0iLCJ1c2VyUHJvcGVydHkiOlt7ImtleSI6InRyYWNlLWlkIiwidmFsdWUiOiIke3RyYWNlaWR9In1dfQ==
                     * @return Actions 规则执行的动作，JSON格式，需要Base64编码
样例
{"messageExpiryInterval":360,"responseTopic":"replies/devices/${clientid}","correlationData":"${traceid}","userProperty":[{"key":"trace-id","value":"${traceid}"}]}
BASE64后
eyJtZXNzYWdlRXhwaXJ5SW50ZXJ2YWwiOjM2MCwicmVzcG9uc2VUb3BpYyI6InJlcGxpZXMvZGV2aWNlcy8ke2NsaWVudGlkfSIsImNvcnJlbGF0aW9uRGF0YSI6IiR7dHJhY2VpZH0iLCJ1c2VyUHJvcGVydHkiOlt7ImtleSI6InRyYWNlLWlkIiwidmFsdWUiOiIke3RyYWNlaWR9In1dfQ==
                     * 
                     */
                    std::string GetActions() const;

                    /**
                     * 设置规则执行的动作，JSON格式，需要Base64编码
样例
{"messageExpiryInterval":360,"responseTopic":"replies/devices/${clientid}","correlationData":"${traceid}","userProperty":[{"key":"trace-id","value":"${traceid}"}]}
BASE64后
eyJtZXNzYWdlRXhwaXJ5SW50ZXJ2YWwiOjM2MCwicmVzcG9uc2VUb3BpYyI6InJlcGxpZXMvZGV2aWNlcy8ke2NsaWVudGlkfSIsImNvcnJlbGF0aW9uRGF0YSI6IiR7dHJhY2VpZH0iLCJ1c2VyUHJvcGVydHkiOlt7ImtleSI6InRyYWNlLWlkIiwidmFsdWUiOiIke3RyYWNlaWR9In1dfQ==
                     * @param _actions 规则执行的动作，JSON格式，需要Base64编码
样例
{"messageExpiryInterval":360,"responseTopic":"replies/devices/${clientid}","correlationData":"${traceid}","userProperty":[{"key":"trace-id","value":"${traceid}"}]}
BASE64后
eyJtZXNzYWdlRXhwaXJ5SW50ZXJ2YWwiOjM2MCwicmVzcG9uc2VUb3BpYyI6InJlcGxpZXMvZGV2aWNlcy8ke2NsaWVudGlkfSIsImNvcnJlbGF0aW9uRGF0YSI6IiR7dHJhY2VpZH0iLCJ1c2VyUHJvcGVydHkiOlt7ImtleSI6InRyYWNlLWlkIiwidmFsdWUiOiIke3RyYWNlaWR9In1dfQ==
                     * 
                     */
                    void SetActions(const std::string& _actions);

                    /**
                     * 判断参数 Actions 是否已赋值
                     * @return Actions 是否已赋值
                     * 
                     */
                    bool ActionsHasBeenSet() const;

                    /**
                     * 获取规则优先级，数字越小，优先级越高，高优先级覆盖低低优先级。UserPropertiy字段会合并
                     * @return Priority 规则优先级，数字越小，优先级越高，高优先级覆盖低低优先级。UserPropertiy字段会合并
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置规则优先级，数字越小，优先级越高，高优先级覆盖低低优先级。UserPropertiy字段会合并
                     * @param _priority 规则优先级，数字越小，优先级越高，高优先级覆盖低低优先级。UserPropertiy字段会合并
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取策略状态。 0:未定义；1:激活；2:不激活；默认不激活
                     * @return Status 策略状态。 0:未定义；1:激活；2:不激活；默认不激活
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置策略状态。 0:未定义；1:激活；2:不激活；默认不激活
                     * @param _status 策略状态。 0:未定义；1:激活；2:不激活；默认不激活
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取备注，长度不超过128个字符。
                     * @return Remark 备注，长度不超过128个字符。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注，长度不超过128个字符。
                     * @param _remark 备注，长度不超过128个字符。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 规则匹配条件，JSON格式，需要Base64编码
样例
{"clientId":"client-1","username":"client-1","topic":"home/room1"}
Base64后
eyJjbGllbnRJZCI6ImNsaWVudC0xIiwidXNlcm5hbWUiOiJjbGllbnQtMSIsInRvcGljIjoiaG9tZS9yb29tMSJ9
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * 规则执行的动作，JSON格式，需要Base64编码
样例
{"messageExpiryInterval":360,"responseTopic":"replies/devices/${clientid}","correlationData":"${traceid}","userProperty":[{"key":"trace-id","value":"${traceid}"}]}
BASE64后
eyJtZXNzYWdlRXhwaXJ5SW50ZXJ2YWwiOjM2MCwicmVzcG9uc2VUb3BpYyI6InJlcGxpZXMvZGV2aWNlcy8ke2NsaWVudGlkfSIsImNvcnJlbGF0aW9uRGF0YSI6IiR7dHJhY2VpZH0iLCJ1c2VyUHJvcGVydHkiOlt7ImtleSI6InRyYWNlLWlkIiwidmFsdWUiOiIke3RyYWNlaWR9In1dfQ==
                     */
                    std::string m_actions;
                    bool m_actionsHasBeenSet;

                    /**
                     * 规则优先级，数字越小，优先级越高，高优先级覆盖低低优先级。UserPropertiy字段会合并
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 策略状态。 0:未定义；1:激活；2:不激活；默认不激活
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 备注，长度不超过128个字符。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_CREATEMESSAGEENRICHMENTRULEREQUEST_H_
