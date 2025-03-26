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
                     * 获取策略规则ID
                     * @return Id 策略规则ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置策略规则ID
                     * @param _id 策略规则ID
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
                     * 获取MQTT集群ID
                     * @return InstanceId MQTT集群ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置MQTT集群ID
                     * @param _instanceId MQTT集群ID
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
                     * 获取策略规则名
                     * @return PolicyName 策略规则名
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置策略规则名
                     * @param _policyName 策略规则名
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
                     * 获取规则语法版本，当前仅支持1，默认为1
                     * @return Version 规则语法版本，当前仅支持1，默认为1
                     * 
                     */
                    int64_t GetVersion() const;

                    /**
                     * 设置规则语法版本，当前仅支持1，默认为1
                     * @param _version 规则语法版本，当前仅支持1，默认为1
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
                     * 获取策略优先级，优先级ID越小表示策略越优先检查生效。可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     * @return Priority 策略优先级，优先级ID越小表示策略越优先检查生效。可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置策略优先级，优先级ID越小表示策略越优先检查生效。可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     * @param _priority 策略优先级，优先级ID越小表示策略越优先检查生效。可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
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
                     * 获取决策
allow：允许符合该策略的设备的访问请求。
deny：拒绝覆盖该策略的设备的访问请求。
可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     * @return Effect 决策
allow：允许符合该策略的设备的访问请求。
deny：拒绝覆盖该策略的设备的访问请求。
可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     * 
                     */
                    std::string GetEffect() const;

                    /**
                     * 设置决策
allow：允许符合该策略的设备的访问请求。
deny：拒绝覆盖该策略的设备的访问请求。
可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     * @param _effect 决策
allow：允许符合该策略的设备的访问请求。
deny：拒绝覆盖该策略的设备的访问请求。
可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
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
                     * 获取操作
connect：连接
pub：发布mqtt消息
sub：订阅mqtt消息
可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     * @return Actions 操作
connect：连接
pub：发布mqtt消息
sub：订阅mqtt消息
可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     * 
                     */
                    std::string GetActions() const;

                    /**
                     * 设置操作
connect：连接
pub：发布mqtt消息
sub：订阅mqtt消息
可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     * @param _actions 操作
connect：连接
pub：发布mqtt消息
sub：订阅mqtt消息
可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
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
                     * 获取资源，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     * @return Resources 资源，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     * 
                     */
                    std::string GetResources() const;

                    /**
                     * 设置资源，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     * @param _resources 资源，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
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
                     * 获取条件-连接设备ID，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     * @return ClientId 条件-连接设备ID，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置条件-连接设备ID，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     * @param _clientId 条件-连接设备ID，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
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
                     * 获取条件-用户名，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     * @return Username 条件-用户名，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置条件-用户名，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     * @param _username 条件-用户名，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
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
                     * 获取条件-客户端IP地址，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     * @return Ip 条件-客户端IP地址，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置条件-客户端IP地址，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     * @param _ip 条件-客户端IP地址，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
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
                     * 获取条件-服务质量，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     * @return Qos 条件-服务质量，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     * 
                     */
                    std::string GetQos() const;

                    /**
                     * 设置条件-服务质量，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     * @param _qos 条件-服务质量，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
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
                     * 获取条件-保留消息，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
1：表示匹配retain消息
2：表示匹配非retain消息
3：表示匹配retain和非retain消息
                     * @return Retain 条件-保留消息，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
1：表示匹配retain消息
2：表示匹配非retain消息
3：表示匹配retain和非retain消息
                     * 
                     */
                    int64_t GetRetain() const;

                    /**
                     * 设置条件-保留消息，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
1：表示匹配retain消息
2：表示匹配非retain消息
3：表示匹配retain和非retain消息
                     * @param _retain 条件-保留消息，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
1：表示匹配retain消息
2：表示匹配非retain消息
3：表示匹配retain和非retain消息
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

                    /**
                     * 获取创建时间。毫秒级时间戳 。
                     * @return CreatedTime 创建时间。毫秒级时间戳 。
                     * 
                     */
                    int64_t GetCreatedTime() const;

                    /**
                     * 设置创建时间。毫秒级时间戳 。
                     * @param _createdTime 创建时间。毫秒级时间戳 。
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
                     * 获取更新时间。毫秒级时间戳 。
                     * @return UpdateTime 更新时间。毫秒级时间戳 。
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间。毫秒级时间戳 。
                     * @param _updateTime 更新时间。毫秒级时间戳 。
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
                     * 策略规则ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * MQTT集群ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 策略规则名
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 规则语法版本，当前仅支持1，默认为1
                     */
                    int64_t m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 策略优先级，优先级ID越小表示策略越优先检查生效。可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 决策
allow：允许符合该策略的设备的访问请求。
deny：拒绝覆盖该策略的设备的访问请求。
可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     */
                    std::string m_effect;
                    bool m_effectHasBeenSet;

                    /**
                     * 操作
connect：连接
pub：发布mqtt消息
sub：订阅mqtt消息
可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     */
                    std::string m_actions;
                    bool m_actionsHasBeenSet;

                    /**
                     * 资源，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     */
                    std::string m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * 条件-连接设备ID，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * 条件-用户名，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 条件-客户端IP地址，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 条件-服务质量，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     */
                    std::string m_qos;
                    bool m_qosHasBeenSet;

                    /**
                     * 条件-保留消息，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
1：表示匹配retain消息
2：表示匹配非retain消息
3：表示匹配retain和非retain消息
                     */
                    int64_t m_retain;
                    bool m_retainHasBeenSet;

                    /**
                     * 备注，长度不超过128个字符。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 创建时间。毫秒级时间戳 。
                     */
                    int64_t m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 更新时间。毫秒级时间戳 。
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_AUTHORIZATIONPOLICYITEM_H_
