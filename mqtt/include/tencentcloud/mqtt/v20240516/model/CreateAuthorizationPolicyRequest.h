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
                     * 获取<p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     * @return InstanceId <p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     * @param _instanceId <p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
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
                     * 获取<p>策略名称，不能为空，3-64个字符，支持中文、字母、数字、“-”及“_”。</p>
                     * @return PolicyName <p>策略名称，不能为空，3-64个字符，支持中文、字母、数字、“-”及“_”。</p>
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置<p>策略名称，不能为空，3-64个字符，支持中文、字母、数字、“-”及“_”。</p>
                     * @param _policyName <p>策略名称，不能为空，3-64个字符，支持中文、字母、数字、“-”及“_”。</p>
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
                     * 获取<p>策略版本,默认为1，当前仅支持1</p>
                     * @return PolicyVersion <p>策略版本,默认为1，当前仅支持1</p>
                     * 
                     */
                    int64_t GetPolicyVersion() const;

                    /**
                     * 设置<p>策略版本,默认为1，当前仅支持1</p>
                     * @param _policyVersion <p>策略版本,默认为1，当前仅支持1</p>
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
                     * 获取<p>策略优先级，越小越优先，不能重复，优先级ID越小表示策略越优先检查生效。可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * @return Priority <p>策略优先级，越小越优先，不能重复，优先级ID越小表示策略越优先检查生效。可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置<p>策略优先级，越小越优先，不能重复，优先级ID越小表示策略越优先检查生效。可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * @param _priority <p>策略优先级，越小越优先，不能重复，优先级ID越小表示策略越优先检查生效。可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
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
                     * 获取<p>决策：<br>allow：允许符合该策略的设备的访问请求。<br>deny：拒绝覆盖该策略的设备的访问请求。<br>可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * @return Effect <p>决策：<br>allow：允许符合该策略的设备的访问请求。<br>deny：拒绝覆盖该策略的设备的访问请求。<br>可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * 
                     */
                    std::string GetEffect() const;

                    /**
                     * 设置<p>决策：<br>allow：允许符合该策略的设备的访问请求。<br>deny：拒绝覆盖该策略的设备的访问请求。<br>可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * @param _effect <p>决策：<br>allow：允许符合该策略的设备的访问请求。<br>deny：拒绝覆盖该策略的设备的访问请求。<br>可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
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
                     * 获取<p>操作,支持多选，多个操作用英文逗号隔开。可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。<br>connect：连接<br>pub：发布<br>sub：订阅</p>
                     * @return Actions <p>操作,支持多选，多个操作用英文逗号隔开。可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。<br>connect：连接<br>pub：发布<br>sub：订阅</p>
                     * 
                     */
                    std::string GetActions() const;

                    /**
                     * 设置<p>操作,支持多选，多个操作用英文逗号隔开。可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。<br>connect：连接<br>pub：发布<br>sub：订阅</p>
                     * @param _actions <p>操作,支持多选，多个操作用英文逗号隔开。可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。<br>connect：连接<br>pub：发布<br>sub：订阅</p>
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
                     * 获取<p>条件-保留消息，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。<br>1,匹配保留消息；<br>2,匹配非保留消息，<br>3.匹配保留和非保留消息</p>
                     * @return Retain <p>条件-保留消息，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。<br>1,匹配保留消息；<br>2,匹配非保留消息，<br>3.匹配保留和非保留消息</p>
                     * 
                     */
                    int64_t GetRetain() const;

                    /**
                     * 设置<p>条件-保留消息，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。<br>1,匹配保留消息；<br>2,匹配非保留消息，<br>3.匹配保留和非保留消息</p>
                     * @param _retain <p>条件-保留消息，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。<br>1,匹配保留消息；<br>2,匹配非保留消息，<br>3.匹配保留和非保留消息</p>
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
                     * 获取<p>条件：服务质量<br>0：最多一次<br>1：最少一次<br>2：精确一次<br>可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * @return Qos <p>条件：服务质量<br>0：最多一次<br>1：最少一次<br>2：精确一次<br>可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * 
                     */
                    std::string GetQos() const;

                    /**
                     * 设置<p>条件：服务质量<br>0：最多一次<br>1：最少一次<br>2：精确一次<br>可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * @param _qos <p>条件：服务质量<br>0：最多一次<br>1：最少一次<br>2：精确一次<br>可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
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
                     * 获取<p>资源，需要匹配的订阅，支持配置多条匹配规则，多个用英文逗号隔开。可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * @return Resources <p>资源，需要匹配的订阅，支持配置多条匹配规则，多个用英文逗号隔开。可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * 
                     */
                    std::string GetResources() const;

                    /**
                     * 设置<p>资源，需要匹配的订阅，支持配置多条匹配规则，多个用英文逗号隔开。可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * @param _resources <p>资源，需要匹配的订阅，支持配置多条匹配规则，多个用英文逗号隔开。可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
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
                     * 获取<p>条件-用户名</p>
                     * @return Username <p>条件-用户名</p>
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置<p>条件-用户名</p>
                     * @param _username <p>条件-用户名</p>
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
                     * 获取<p>条件：客户端ID，支持正则</p>
                     * @return ClientId <p>条件：客户端ID，支持正则</p>
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置<p>条件：客户端ID，支持正则</p>
                     * @param _clientId <p>条件：客户端ID，支持正则</p>
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
                     * 获取<p>条件：客户端IP地址，支持IP或者CIDR，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * @return Ip <p>条件：客户端IP地址，支持IP或者CIDR，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>条件：客户端IP地址，支持IP或者CIDR，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     * @param _ip <p>条件：客户端IP地址，支持IP或者CIDR，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
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
                     * 获取<p>备注信息，最长 128 字符</p>
                     * @return Remark <p>备注信息，最长 128 字符</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注信息，最长 128 字符</p>
                     * @param _remark <p>备注信息，最长 128 字符</p>
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

                private:

                    /**
                     * <p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>策略名称，不能为空，3-64个字符，支持中文、字母、数字、“-”及“_”。</p>
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * <p>策略版本,默认为1，当前仅支持1</p>
                     */
                    int64_t m_policyVersion;
                    bool m_policyVersionHasBeenSet;

                    /**
                     * <p>策略优先级，越小越优先，不能重复，优先级ID越小表示策略越优先检查生效。可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * <p>决策：<br>allow：允许符合该策略的设备的访问请求。<br>deny：拒绝覆盖该策略的设备的访问请求。<br>可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     */
                    std::string m_effect;
                    bool m_effectHasBeenSet;

                    /**
                     * <p>操作,支持多选，多个操作用英文逗号隔开。可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。<br>connect：连接<br>pub：发布<br>sub：订阅</p>
                     */
                    std::string m_actions;
                    bool m_actionsHasBeenSet;

                    /**
                     * <p>条件-保留消息，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。<br>1,匹配保留消息；<br>2,匹配非保留消息，<br>3.匹配保留和非保留消息</p>
                     */
                    int64_t m_retain;
                    bool m_retainHasBeenSet;

                    /**
                     * <p>条件：服务质量<br>0：最多一次<br>1：最少一次<br>2：精确一次<br>可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     */
                    std::string m_qos;
                    bool m_qosHasBeenSet;

                    /**
                     * <p>资源，需要匹配的订阅，支持配置多条匹配规则，多个用英文逗号隔开。可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     */
                    std::string m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * <p>条件-用户名</p>
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * <p>条件：客户端ID，支持正则</p>
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * <p>条件：客户端IP地址，支持IP或者CIDR，可参考 <a href="https://cloud.tencent.com/document/product/1778/109715">数据面授权策略说明</a>。</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>备注信息，最长 128 字符</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>授权资源，支持函数表达式</p>
                     */
                    std::vector<std::string> m_resourceItems;
                    bool m_resourceItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_CREATEAUTHORIZATIONPOLICYREQUEST_H_
