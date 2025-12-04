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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYMESSAGEENRICHMENTRULEREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYMESSAGEENRICHMENTRULEREQUEST_H_

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
                * ModifyMessageEnrichmentRule请求参数结构体
                */
                class ModifyMessageEnrichmentRuleRequest : public AbstractModel
                {
                public:
                    ModifyMessageEnrichmentRuleRequest();
                    ~ModifyMessageEnrichmentRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取消息属性增强规则ID
                     * @return Id 消息属性增强规则ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置消息属性增强规则ID
                     * @param _id 消息属性增强规则ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

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
                     * 获取策略名称，不能为空，3-64个字符，支持中文、字母、数字、“-”及“_”。
                     * @return RuleName 策略名称，不能为空，3-64个字符，支持中文、字母、数字、“-”及“_”。
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置策略名称，不能为空，3-64个字符，支持中文、字母、数字、“-”及“_”。
                     * @param _ruleName 策略名称，不能为空，3-64个字符，支持中文、字母、数字、“-”及“_”。
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
{"messageExpiryInterval":360,"responseTopic":"replies/${clientid}","correlationData":"${traceid}","userProperty":[{"key":"trace-id","value":"${traceid}"}]}
 BASE64后 eyJtZXNzYWdlRXhwaXJ5SW50ZXJ2YWwiOjM2MCwicmVzcG9uc2VUb3BpYyI6InJlcGxpZXMvJHtjbGllbnRpZH0iLCJjb3JyZWxhdGlvbkRhdGEiOiIke3RyYWNlaWR9IiwidXNlclByb3BlcnR5IjpbeyJrZXkiOiJ0cmFjZS1pZCIsInZhbHVlIjoiJHt0cmFjZWlkfSJ9XX0=
                     * @return Actions 规则执行的动作，JSON格式，需要Base64编码 
样例
{"messageExpiryInterval":360,"responseTopic":"replies/${clientid}","correlationData":"${traceid}","userProperty":[{"key":"trace-id","value":"${traceid}"}]}
 BASE64后 eyJtZXNzYWdlRXhwaXJ5SW50ZXJ2YWwiOjM2MCwicmVzcG9uc2VUb3BpYyI6InJlcGxpZXMvJHtjbGllbnRpZH0iLCJjb3JyZWxhdGlvbkRhdGEiOiIke3RyYWNlaWR9IiwidXNlclByb3BlcnR5IjpbeyJrZXkiOiJ0cmFjZS1pZCIsInZhbHVlIjoiJHt0cmFjZWlkfSJ9XX0=
                     * 
                     */
                    std::string GetActions() const;

                    /**
                     * 设置规则执行的动作，JSON格式，需要Base64编码 
样例
{"messageExpiryInterval":360,"responseTopic":"replies/${clientid}","correlationData":"${traceid}","userProperty":[{"key":"trace-id","value":"${traceid}"}]}
 BASE64后 eyJtZXNzYWdlRXhwaXJ5SW50ZXJ2YWwiOjM2MCwicmVzcG9uc2VUb3BpYyI6InJlcGxpZXMvJHtjbGllbnRpZH0iLCJjb3JyZWxhdGlvbkRhdGEiOiIke3RyYWNlaWR9IiwidXNlclByb3BlcnR5IjpbeyJrZXkiOiJ0cmFjZS1pZCIsInZhbHVlIjoiJHt0cmFjZWlkfSJ9XX0=
                     * @param _actions 规则执行的动作，JSON格式，需要Base64编码 
样例
{"messageExpiryInterval":360,"responseTopic":"replies/${clientid}","correlationData":"${traceid}","userProperty":[{"key":"trace-id","value":"${traceid}"}]}
 BASE64后 eyJtZXNzYWdlRXhwaXJ5SW50ZXJ2YWwiOjM2MCwicmVzcG9uc2VUb3BpYyI6InJlcGxpZXMvJHtjbGllbnRpZH0iLCJjb3JyZWxhdGlvbkRhdGEiOiIke3RyYWNlaWR9IiwidXNlclByb3BlcnR5IjpbeyJrZXkiOiJ0cmFjZS1pZCIsInZhbHVlIjoiJHt0cmFjZWlkfSJ9XX0=
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
                     * 获取规则优先级，数字越小，优先级越高，高优先级覆盖低优先级。UserProperty字段会合并
                     * @return Priority 规则优先级，数字越小，优先级越高，高优先级覆盖低优先级。UserProperty字段会合并
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置规则优先级，数字越小，优先级越高，高优先级覆盖低优先级。UserProperty字段会合并
                     * @param _priority 规则优先级，数字越小，优先级越高，高优先级覆盖低优先级。UserProperty字段会合并
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
                     * 获取备注信息，最长 128 字符
                     * @return Remark 备注信息，最长 128 字符
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注信息，最长 128 字符
                     * @param _remark 备注信息，最长 128 字符
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
                     * 消息属性增强规则ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。

                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 策略名称，不能为空，3-64个字符，支持中文、字母、数字、“-”及“_”。
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
{"messageExpiryInterval":360,"responseTopic":"replies/${clientid}","correlationData":"${traceid}","userProperty":[{"key":"trace-id","value":"${traceid}"}]}
 BASE64后 eyJtZXNzYWdlRXhwaXJ5SW50ZXJ2YWwiOjM2MCwicmVzcG9uc2VUb3BpYyI6InJlcGxpZXMvJHtjbGllbnRpZH0iLCJjb3JyZWxhdGlvbkRhdGEiOiIke3RyYWNlaWR9IiwidXNlclByb3BlcnR5IjpbeyJrZXkiOiJ0cmFjZS1pZCIsInZhbHVlIjoiJHt0cmFjZWlkfSJ9XX0=
                     */
                    std::string m_actions;
                    bool m_actionsHasBeenSet;

                    /**
                     * 规则优先级，数字越小，优先级越高，高优先级覆盖低优先级。UserProperty字段会合并
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 策略状态。 0:未定义；1:激活；2:不激活；默认不激活
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 备注信息，最长 128 字符
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYMESSAGEENRICHMENTRULEREQUEST_H_
