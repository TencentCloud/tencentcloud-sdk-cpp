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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_AUTHORIZATIONPOLICYITEM_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_AUTHORIZATIONPOLICYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * AuthorizationPolicyItem
                */
                class AuthorizationPolicyItem : public AbstractModel
                {
                public:
                    AuthorizationPolicyItem();
                    ~AuthorizationPolicyItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则id
                     * @return Id 规则id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置规则id
                     * @param _id 规则id
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
                     * 获取集群id
                     * @return InstanceId 集群id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群id
                     * @param _instanceId 集群id
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
                     * 获取规则名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyName 规则名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置规则名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _policyName 规则名
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取规则语法版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version 规则语法版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetVersion() const;

                    /**
                     * 设置规则语法版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version 规则语法版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersion(const int64_t& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取越小越优先
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Priority 越小越优先
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置越小越优先
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _priority 越小越优先
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取allow/deny
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Effect allow/deny
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEffect() const;

                    /**
                     * 设置allow/deny
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _effect allow/deny
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Actions connect、pub、sub
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetActions() const;

                    /**
                     * 设置connect、pub、sub
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _actions connect、pub、sub
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Resources 资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResources() const;

                    /**
                     * 设置资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resources 资源
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取client
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientId client
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置client
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clientId client
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Username 用户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _username 用户
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ip IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ip IP地址
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取0，1，2
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Qos 0，1，2
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQos() const;

                    /**
                     * 设置0，1，2
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qos 0，1，2
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取1、2、3
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Retain 1、2、3
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRetain() const;

                    /**
                     * 设置1、2、3
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retain 1、2、3
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取1713164969433
                     * @return CreatedTime 1713164969433
                     * 
                     */
                    int64_t GetCreatedTime() const;

                    /**
                     * 设置1713164969433
                     * @param _createdTime 1713164969433
                     * 
                     */
                    void SetCreatedTime(const int64_t& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取1713164969433
                     * @return UpdateTime 1713164969433
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置1713164969433
                     * @param _updateTime 1713164969433
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 规则id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 集群id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 规则名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 规则语法版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 越小越优先
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * allow/deny
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_effect;
                    bool m_effectHasBeenSet;

                    /**
                     * connect、pub、sub
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_actions;
                    bool m_actionsHasBeenSet;

                    /**
                     * 资源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * client
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * 用户
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 0，1，2
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_qos;
                    bool m_qosHasBeenSet;

                    /**
                     * 1、2、3
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_retain;
                    bool m_retainHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 1713164969433
                     */
                    int64_t m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 1713164969433
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_AUTHORIZATIONPOLICYITEM_H_
