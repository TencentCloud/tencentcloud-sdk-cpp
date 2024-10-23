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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_CREATEAUTHORIZATIONPOLICYREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_CREATEAUTHORIZATIONPOLICYREQUEST_H_

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
                * CreateAuthorizationPolicy请求参数结构体
                */
                class CreateAuthorizationPolicyRequest : public AbstractModel
                {
                public:
                    CreateAuthorizationPolicyRequest();
                    ~CreateAuthorizationPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取策略名称
                     * @return PolicyName 策略名称
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置策略名称
                     * @param _policyName 策略名称
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取策略版本
                     * @return PolicyVersion 策略版本
                     * 
                     */
                    int64_t GetPolicyVersion() const;

                    /**
                     * 设置策略版本
                     * @param _policyVersion 策略版本
                     * 
                     */
                    void SetPolicyVersion(const int64_t& _policyVersion);

                    /**
                     * 判断参数 PolicyVersion 是否已赋值
                     * @return PolicyVersion 是否已赋值
                     * 
                     */
                    bool PolicyVersionHasBeenSet() const;

                    /**
                     * 获取策略优先级，越小越优先
                     * @return Priority 策略优先级，越小越优先
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置策略优先级，越小越优先
                     * @param _priority 策略优先级，越小越优先
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
                     * 获取allow、deny
                     * @return Effect allow、deny
                     * 
                     */
                    std::string GetEffect() const;

                    /**
                     * 设置allow、deny
                     * @param _effect allow、deny
                     * 
                     */
                    void SetEffect(const std::string& _effect);

                    /**
                     * 判断参数 Effect 是否已赋值
                     * @return Effect 是否已赋值
                     * 
                     */
                    bool EffectHasBeenSet() const;

                    /**
                     * 获取connect、pub、sub
                     * @return Actions connect、pub、sub
                     * 
                     */
                    std::string GetActions() const;

                    /**
                     * 设置connect、pub、sub
                     * @param _actions connect、pub、sub
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
                     * 获取1,匹配保留消息；2,匹配非保留消息，3.匹配所有消息
                     * @return Retain 1,匹配保留消息；2,匹配非保留消息，3.匹配所有消息
                     * 
                     */
                    int64_t GetRetain() const;

                    /**
                     * 设置1,匹配保留消息；2,匹配非保留消息，3.匹配所有消息
                     * @param _retain 1,匹配保留消息；2,匹配非保留消息，3.匹配所有消息
                     * 
                     */
                    void SetRetain(const int64_t& _retain);

                    /**
                     * 判断参数 Retain 是否已赋值
                     * @return Retain 是否已赋值
                     * 
                     */
                    bool RetainHasBeenSet() const;

                    /**
                     * 获取0、1、2
                     * @return Qos 0、1、2
                     * 
                     */
                    std::string GetQos() const;

                    /**
                     * 设置0、1、2
                     * @param _qos 0、1、2
                     * 
                     */
                    void SetQos(const std::string& _qos);

                    /**
                     * 判断参数 Qos 是否已赋值
                     * @return Qos 是否已赋值
                     * 
                     */
                    bool QosHasBeenSet() const;

                    /**
                     * 获取资源
                     * @return Resources 资源
                     * 
                     */
                    std::string GetResources() const;

                    /**
                     * 设置资源
                     * @param _resources 资源
                     * 
                     */
                    void SetResources(const std::string& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取用户名
                     * @return Username 用户名
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置用户名
                     * @param _username 用户名
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取客户端
                     * @return ClientId 客户端
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置客户端
                     * @param _clientId 客户端
                     * 
                     */
                    void SetClientId(const std::string& _clientId);

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取IP地址
                     * @return Ip IP地址
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP地址
                     * @param _ip IP地址
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取备注信息
                     * @return Remark 备注信息
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注信息
                     * @param _remark 备注信息
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
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 策略名称
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 策略版本
                     */
                    int64_t m_policyVersion;
                    bool m_policyVersionHasBeenSet;

                    /**
                     * 策略优先级，越小越优先
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * allow、deny
                     */
                    std::string m_effect;
                    bool m_effectHasBeenSet;

                    /**
                     * connect、pub、sub
                     */
                    std::string m_actions;
                    bool m_actionsHasBeenSet;

                    /**
                     * 1,匹配保留消息；2,匹配非保留消息，3.匹配所有消息
                     */
                    int64_t m_retain;
                    bool m_retainHasBeenSet;

                    /**
                     * 0、1、2
                     */
                    std::string m_qos;
                    bool m_qosHasBeenSet;

                    /**
                     * 资源
                     */
                    std::string m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * 用户名
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 客户端
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * IP地址
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 备注信息
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_CREATEAUTHORIZATIONPOLICYREQUEST_H_
