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
                     * @return PolicyName 策略名称，不能为空，3-64个字符，支持中文、字母、数字、“-”及“_”。
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置策略名称，不能为空，3-64个字符，支持中文、字母、数字、“-”及“_”。
                     * @param _policyName 策略名称，不能为空，3-64个字符，支持中文、字母、数字、“-”及“_”。
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
                     * 获取策略版本,默认为1，当前仅支持1
                     * @return PolicyVersion 策略版本,默认为1，当前仅支持1
                     * 
                     */
                    int64_t GetPolicyVersion() const;

                    /**
                     * 设置策略版本,默认为1，当前仅支持1
                     * @param _policyVersion 策略版本,默认为1，当前仅支持1
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
                     * 获取策略优先级，越小越优先，不能重复，优先级ID越小表示策略越优先检查生效。可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     * @return Priority 策略优先级，越小越优先，不能重复，优先级ID越小表示策略越优先检查生效。可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置策略优先级，越小越优先，不能重复，优先级ID越小表示策略越优先检查生效。可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     * @param _priority 策略优先级，越小越优先，不能重复，优先级ID越小表示策略越优先检查生效。可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
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
                     * 获取决策：
allow：允许符合该策略的设备的访问请求。
deny：拒绝覆盖该策略的设备的访问请求。
可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     * @return Effect 决策：
allow：允许符合该策略的设备的访问请求。
deny：拒绝覆盖该策略的设备的访问请求。
可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     * 
                     */
                    std::string GetEffect() const;

                    /**
                     * 设置决策：
allow：允许符合该策略的设备的访问请求。
deny：拒绝覆盖该策略的设备的访问请求。
可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     * @param _effect 决策：
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
                     * 获取操作,支持多选，多个操作用英文逗号隔开。可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
connect：连接
pub：发布
sub：订阅
                     * @return Actions 操作,支持多选，多个操作用英文逗号隔开。可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
connect：连接
pub：发布
sub：订阅
                     * 
                     */
                    std::string GetActions() const;

                    /**
                     * 设置操作,支持多选，多个操作用英文逗号隔开。可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
connect：连接
pub：发布
sub：订阅
                     * @param _actions 操作,支持多选，多个操作用英文逗号隔开。可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
connect：连接
pub：发布
sub：订阅
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
                     * 获取条件-保留消息，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
1,匹配保留消息；
2,匹配非保留消息，
3.匹配保留和非保留消息
                     * @return Retain 条件-保留消息，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
1,匹配保留消息；
2,匹配非保留消息，
3.匹配保留和非保留消息
                     * 
                     */
                    int64_t GetRetain() const;

                    /**
                     * 设置条件-保留消息，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
1,匹配保留消息；
2,匹配非保留消息，
3.匹配保留和非保留消息
                     * @param _retain 条件-保留消息，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
1,匹配保留消息；
2,匹配非保留消息，
3.匹配保留和非保留消息
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
                     * 获取条件：服务质量
0：最多一次
1：最少一次
2：精确一次
可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     * @return Qos 条件：服务质量
0：最多一次
1：最少一次
2：精确一次
可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     * 
                     */
                    std::string GetQos() const;

                    /**
                     * 设置条件：服务质量
0：最多一次
1：最少一次
2：精确一次
可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     * @param _qos 条件：服务质量
0：最多一次
1：最少一次
2：精确一次
可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
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
                     * 获取资源，需要匹配的订阅，支持配置多条匹配规则，多个用英文逗号隔开。可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。

                     * @return Resources 资源，需要匹配的订阅，支持配置多条匹配规则，多个用英文逗号隔开。可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。

                     * 
                     */
                    std::string GetResources() const;

                    /**
                     * 设置资源，需要匹配的订阅，支持配置多条匹配规则，多个用英文逗号隔开。可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。

                     * @param _resources 资源，需要匹配的订阅，支持配置多条匹配规则，多个用英文逗号隔开。可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。

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
                     * 获取条件-用户名
                     * @return Username 条件-用户名
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置条件-用户名
                     * @param _username 条件-用户名
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
                     * 获取条件：客户端ID，支持正则
                     * @return ClientId 条件：客户端ID，支持正则
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置条件：客户端ID，支持正则
                     * @param _clientId 条件：客户端ID，支持正则
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
                     * 获取条件：客户端IP地址，支持IP或者CIDR，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     * @return Ip 条件：客户端IP地址，支持IP或者CIDR，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置条件：客户端IP地址，支持IP或者CIDR，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     * @param _ip 条件：客户端IP地址，支持IP或者CIDR，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
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
                     * 腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 策略名称，不能为空，3-64个字符，支持中文、字母、数字、“-”及“_”。
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 策略版本,默认为1，当前仅支持1
                     */
                    int64_t m_policyVersion;
                    bool m_policyVersionHasBeenSet;

                    /**
                     * 策略优先级，越小越优先，不能重复，优先级ID越小表示策略越优先检查生效。可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 决策：
allow：允许符合该策略的设备的访问请求。
deny：拒绝覆盖该策略的设备的访问请求。
可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     */
                    std::string m_effect;
                    bool m_effectHasBeenSet;

                    /**
                     * 操作,支持多选，多个操作用英文逗号隔开。可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
connect：连接
pub：发布
sub：订阅
                     */
                    std::string m_actions;
                    bool m_actionsHasBeenSet;

                    /**
                     * 条件-保留消息，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
1,匹配保留消息；
2,匹配非保留消息，
3.匹配保留和非保留消息
                     */
                    int64_t m_retain;
                    bool m_retainHasBeenSet;

                    /**
                     * 条件：服务质量
0：最多一次
1：最少一次
2：精确一次
可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     */
                    std::string m_qos;
                    bool m_qosHasBeenSet;

                    /**
                     * 资源，需要匹配的订阅，支持配置多条匹配规则，多个用英文逗号隔开。可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。

                     */
                    std::string m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * 条件-用户名
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 条件：客户端ID，支持正则
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * 条件：客户端IP地址，支持IP或者CIDR，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)。
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

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

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_CREATEAUTHORIZATIONPOLICYREQUEST_H_
