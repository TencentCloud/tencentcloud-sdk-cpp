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
                     * 获取<p>策略规则ID</p>
                     * @return Id <p>策略规则ID</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>策略规则ID</p>
                     * @param _id <p>策略规则ID</p>
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
                     * 获取<p>MQTT集群ID</p>
                     * @return InstanceId <p>MQTT集群ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>MQTT集群ID</p>
                     * @param _instanceId <p>MQTT集群ID</p>
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
                     * 获取<p>策略规则名</p>
                     * @return PolicyName <p>策略规则名</p>
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置<p>策略规则名</p>
                     * @param _policyName <p>策略规则名</p>
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
                     * 获取<p>规则语法版本，当前仅支持1，默认为1</p>
                     * @return Version <p>规则语法版本，当前仅支持1，默认为1</p>
                     * 
                     */
                    int64_t GetVersion() const;

                    /**
                     * 设置<p>规则语法版本，当前仅支持1，默认为1</p>
                     * @param _version <p>规则语法版本，当前仅支持1，默认为1</p>
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
                     * 获取<p>策略优先级，优先级ID越小表示策略越优先检查生效。可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * @return Priority <p>策略优先级，优先级ID越小表示策略越优先检查生效。可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置<p>策略优先级，优先级ID越小表示策略越优先检查生效。可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * @param _priority <p>策略优先级，优先级ID越小表示策略越优先检查生效。可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
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
                     * 获取<p>决策<br>allow：允许符合该策略的设备的访问请求。<br>deny：拒绝覆盖该策略的设备的访问请求。<br>可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * @return Effect <p>决策<br>allow：允许符合该策略的设备的访问请求。<br>deny：拒绝覆盖该策略的设备的访问请求。<br>可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * 
                     */
                    std::string GetEffect() const;

                    /**
                     * 设置<p>决策<br>allow：允许符合该策略的设备的访问请求。<br>deny：拒绝覆盖该策略的设备的访问请求。<br>可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * @param _effect <p>决策<br>allow：允许符合该策略的设备的访问请求。<br>deny：拒绝覆盖该策略的设备的访问请求。<br>可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
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
                     * 获取<p>操作<br>connect：连接<br>pub：发布mqtt消息<br>sub：订阅mqtt消息<br>可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * @return Actions <p>操作<br>connect：连接<br>pub：发布mqtt消息<br>sub：订阅mqtt消息<br>可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * 
                     */
                    std::string GetActions() const;

                    /**
                     * 设置<p>操作<br>connect：连接<br>pub：发布mqtt消息<br>sub：订阅mqtt消息<br>可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * @param _actions <p>操作<br>connect：连接<br>pub：发布mqtt消息<br>sub：订阅mqtt消息<br>可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
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
                     * 获取<p>资源，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * @return Resources <p>资源，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * 
                     */
                    std::string GetResources() const;

                    /**
                     * 设置<p>资源，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * @param _resources <p>资源，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
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
                     * 获取<p>条件-连接设备ID，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * @return ClientId <p>条件-连接设备ID，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置<p>条件-连接设备ID，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * @param _clientId <p>条件-连接设备ID，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
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
                     * 获取<p>授权资源，支持函数表达式</p>
                     * @return ResourceItems <p>授权资源，支持函数表达式</p>
                     * 
                     */
                    std::vector<std::string> GetResourceItems() const;

                    /**
                     * 设置<p>授权资源，支持函数表达式</p>
                     * @param _resourceItems <p>授权资源，支持函数表达式</p>
                     * 
                     */
                    void SetResourceItems(const std::vector<std::string>& _resourceItems);

                    /**
                     * 判断参数 ResourceItems 是否已赋值
                     * @return ResourceItems 是否已赋值
                     * 
                     */
                    bool ResourceItemsHasBeenSet() const;

                    /**
                     * 获取<p>条件-用户名，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * @return Username <p>条件-用户名，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置<p>条件-用户名，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * @param _username <p>条件-用户名，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
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
                     * 获取<p>条件-客户端IP地址，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * @return Ip <p>条件-客户端IP地址，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>条件-客户端IP地址，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * @param _ip <p>条件-客户端IP地址，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
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
                     * 获取<p>条件-服务质量，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * @return Qos <p>条件-服务质量，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * 
                     */
                    std::string GetQos() const;

                    /**
                     * 设置<p>条件-服务质量，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * @param _qos <p>条件-服务质量，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
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
                     * 获取<p>条件-保留消息，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。<br>1：表示匹配retain消息<br>2：表示匹配非retain消息<br>3：表示匹配retain和非retain消息</p>
                     * @return Retain <p>条件-保留消息，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。<br>1：表示匹配retain消息<br>2：表示匹配非retain消息<br>3：表示匹配retain和非retain消息</p>
                     * 
                     */
                    int64_t GetRetain() const;

                    /**
                     * 设置<p>条件-保留消息，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。<br>1：表示匹配retain消息<br>2：表示匹配非retain消息<br>3：表示匹配retain和非retain消息</p>
                     * @param _retain <p>条件-保留消息，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。<br>1：表示匹配retain消息<br>2：表示匹配非retain消息<br>3：表示匹配retain和非retain消息</p>
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
                     * 获取<p>备注，长度不超过128个字符。</p>
                     * @return Remark <p>备注，长度不超过128个字符。</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注，长度不超过128个字符。</p>
                     * @param _remark <p>备注，长度不超过128个字符。</p>
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
                     * 获取<p>创建时间。毫秒级时间戳 。</p>
                     * @return CreatedTime <p>创建时间。毫秒级时间戳 。</p>
                     * 
                     */
                    int64_t GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间。毫秒级时间戳 。</p>
                     * @param _createdTime <p>创建时间。毫秒级时间戳 。</p>
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
                     * 获取<p>更新时间。毫秒级时间戳 。</p>
                     * @return UpdateTime <p>更新时间。毫秒级时间戳 。</p>
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间。毫秒级时间戳 。</p>
                     * @param _updateTime <p>更新时间。毫秒级时间戳 。</p>
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
                     * <p>策略规则ID</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>MQTT集群ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>策略规则名</p>
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * <p>规则语法版本，当前仅支持1，默认为1</p>
                     */
                    int64_t m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>策略优先级，优先级ID越小表示策略越优先检查生效。可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * <p>决策<br>allow：允许符合该策略的设备的访问请求。<br>deny：拒绝覆盖该策略的设备的访问请求。<br>可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     */
                    std::string m_effect;
                    bool m_effectHasBeenSet;

                    /**
                     * <p>操作<br>connect：连接<br>pub：发布mqtt消息<br>sub：订阅mqtt消息<br>可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     */
                    std::string m_actions;
                    bool m_actionsHasBeenSet;

                    /**
                     * <p>资源，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     */
                    std::string m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * <p>条件-连接设备ID，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * <p>授权资源，支持函数表达式</p>
                     */
                    std::vector<std::string> m_resourceItems;
                    bool m_resourceItemsHasBeenSet;

                    /**
                     * <p>条件-用户名，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * <p>条件-客户端IP地址，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>条件-服务质量，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     */
                    std::string m_qos;
                    bool m_qosHasBeenSet;

                    /**
                     * <p>条件-保留消息，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。<br>1：表示匹配retain消息<br>2：表示匹配非retain消息<br>3：表示匹配retain和非retain消息</p>
                     */
                    int64_t m_retain;
                    bool m_retainHasBeenSet;

                    /**
                     * <p>备注，长度不超过128个字符。</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>创建时间。毫秒级时间戳 。</p>
                     */
                    int64_t m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>更新时间。毫秒级时间戳 。</p>
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_AUTHORIZATIONPOLICYITEM_H_
