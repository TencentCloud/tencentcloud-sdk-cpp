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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_LOADBALANCER_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_LOADBALANCER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/HealthChecker.h>
#include <tencentcloud/teo/v20220901/model/OriginGroupHealthStatus.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 负载均衡实例信息。
                */
                class LoadBalancer : public AbstractModel
                {
                public:
                    LoadBalancer();
                    ~LoadBalancer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例 ID。
                     * @return InstanceId 实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。
                     * @param _instanceId 实例 ID。
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
                     * 获取实例名称，可输入 1-200 个字符，允许字符为 a-z，A-Z，0-9，_，-。	
                     * @return Name 实例名称，可输入 1-200 个字符，允许字符为 a-z，A-Z，0-9，_，-。	
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置实例名称，可输入 1-200 个字符，允许字符为 a-z，A-Z，0-9，_，-。	
                     * @param _name 实例名称，可输入 1-200 个字符，允许字符为 a-z，A-Z，0-9，_，-。	
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取实例类型，取值有：
<li>HTTP：HTTP 专用型，支持添加 HTTP 专用型和通用型源站组，仅支持被站点加速相关服务引用（如域名服务和规则引擎）；</li>
<li>GENERAL：通用型，仅支持添加通用型源站组，能被站点加速服务（如域名服务和规则引擎）和四层代理引用。</li>
                     * @return Type 实例类型，取值有：
<li>HTTP：HTTP 专用型，支持添加 HTTP 专用型和通用型源站组，仅支持被站点加速相关服务引用（如域名服务和规则引擎）；</li>
<li>GENERAL：通用型，仅支持添加通用型源站组，能被站点加速服务（如域名服务和规则引擎）和四层代理引用。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置实例类型，取值有：
<li>HTTP：HTTP 专用型，支持添加 HTTP 专用型和通用型源站组，仅支持被站点加速相关服务引用（如域名服务和规则引擎）；</li>
<li>GENERAL：通用型，仅支持添加通用型源站组，能被站点加速服务（如域名服务和规则引擎）和四层代理引用。</li>
                     * @param _type 实例类型，取值有：
<li>HTTP：HTTP 专用型，支持添加 HTTP 专用型和通用型源站组，仅支持被站点加速相关服务引用（如域名服务和规则引擎）；</li>
<li>GENERAL：通用型，仅支持添加通用型源站组，能被站点加速服务（如域名服务和规则引擎）和四层代理引用。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取健康检查策略。详情请参考 [健康检查策略介绍](https://cloud.tencent.com/document/product/1552/104228)。
                     * @return HealthChecker 健康检查策略。详情请参考 [健康检查策略介绍](https://cloud.tencent.com/document/product/1552/104228)。
                     * 
                     */
                    HealthChecker GetHealthChecker() const;

                    /**
                     * 设置健康检查策略。详情请参考 [健康检查策略介绍](https://cloud.tencent.com/document/product/1552/104228)。
                     * @param _healthChecker 健康检查策略。详情请参考 [健康检查策略介绍](https://cloud.tencent.com/document/product/1552/104228)。
                     * 
                     */
                    void SetHealthChecker(const HealthChecker& _healthChecker);

                    /**
                     * 判断参数 HealthChecker 是否已赋值
                     * @return HealthChecker 是否已赋值
                     * 
                     */
                    bool HealthCheckerHasBeenSet() const;

                    /**
                     * 获取源站组间的流量调度策略，取值有：
<li>Pritory：按优先级顺序进行故障转移 。</li>
                     * @return SteeringPolicy 源站组间的流量调度策略，取值有：
<li>Pritory：按优先级顺序进行故障转移 。</li>
                     * 
                     */
                    std::string GetSteeringPolicy() const;

                    /**
                     * 设置源站组间的流量调度策略，取值有：
<li>Pritory：按优先级顺序进行故障转移 。</li>
                     * @param _steeringPolicy 源站组间的流量调度策略，取值有：
<li>Pritory：按优先级顺序进行故障转移 。</li>
                     * 
                     */
                    void SetSteeringPolicy(const std::string& _steeringPolicy);

                    /**
                     * 判断参数 SteeringPolicy 是否已赋值
                     * @return SteeringPolicy 是否已赋值
                     * 
                     */
                    bool SteeringPolicyHasBeenSet() const;

                    /**
                     * 获取实际访问某源站失败时的请求重试策略，详情请参考 [请求重试策略介绍](https://cloud.tencent.com/document/product/1552/104227)，取值有：
<li>OtherOriginGroup：单次请求失败后，请求优先重试下一优先级源站组；</li>
<li>OtherRecordInOriginGroup：单次请求失败后，请求优先重试同源站组内的其他源站。</li>
                     * @return FailoverPolicy 实际访问某源站失败时的请求重试策略，详情请参考 [请求重试策略介绍](https://cloud.tencent.com/document/product/1552/104227)，取值有：
<li>OtherOriginGroup：单次请求失败后，请求优先重试下一优先级源站组；</li>
<li>OtherRecordInOriginGroup：单次请求失败后，请求优先重试同源站组内的其他源站。</li>
                     * 
                     */
                    std::string GetFailoverPolicy() const;

                    /**
                     * 设置实际访问某源站失败时的请求重试策略，详情请参考 [请求重试策略介绍](https://cloud.tencent.com/document/product/1552/104227)，取值有：
<li>OtherOriginGroup：单次请求失败后，请求优先重试下一优先级源站组；</li>
<li>OtherRecordInOriginGroup：单次请求失败后，请求优先重试同源站组内的其他源站。</li>
                     * @param _failoverPolicy 实际访问某源站失败时的请求重试策略，详情请参考 [请求重试策略介绍](https://cloud.tencent.com/document/product/1552/104227)，取值有：
<li>OtherOriginGroup：单次请求失败后，请求优先重试下一优先级源站组；</li>
<li>OtherRecordInOriginGroup：单次请求失败后，请求优先重试同源站组内的其他源站。</li>
                     * 
                     */
                    void SetFailoverPolicy(const std::string& _failoverPolicy);

                    /**
                     * 判断参数 FailoverPolicy 是否已赋值
                     * @return FailoverPolicy 是否已赋值
                     * 
                     */
                    bool FailoverPolicyHasBeenSet() const;

                    /**
                     * 获取源站组健康状态。
                     * @return OriginGroupHealthStatus 源站组健康状态。
                     * 
                     */
                    std::vector<OriginGroupHealthStatus> GetOriginGroupHealthStatus() const;

                    /**
                     * 设置源站组健康状态。
                     * @param _originGroupHealthStatus 源站组健康状态。
                     * 
                     */
                    void SetOriginGroupHealthStatus(const std::vector<OriginGroupHealthStatus>& _originGroupHealthStatus);

                    /**
                     * 判断参数 OriginGroupHealthStatus 是否已赋值
                     * @return OriginGroupHealthStatus 是否已赋值
                     * 
                     */
                    bool OriginGroupHealthStatusHasBeenSet() const;

                    /**
                     * 获取负载均衡状态，取值有：
<li>Pending：部署中；</li>
<li>Deleting：删除中；</li>
<li>Running：已生效。</li>
                     * @return Status 负载均衡状态，取值有：
<li>Pending：部署中；</li>
<li>Deleting：删除中；</li>
<li>Running：已生效。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置负载均衡状态，取值有：
<li>Pending：部署中；</li>
<li>Deleting：删除中；</li>
<li>Running：已生效。</li>
                     * @param _status 负载均衡状态，取值有：
<li>Pending：部署中；</li>
<li>Deleting：删除中；</li>
<li>Running：已生效。</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取该负载均衡实例绑的四层代理实例的列表。
                     * @return L4UsedList 该负载均衡实例绑的四层代理实例的列表。
                     * 
                     */
                    std::vector<std::string> GetL4UsedList() const;

                    /**
                     * 设置该负载均衡实例绑的四层代理实例的列表。
                     * @param _l4UsedList 该负载均衡实例绑的四层代理实例的列表。
                     * 
                     */
                    void SetL4UsedList(const std::vector<std::string>& _l4UsedList);

                    /**
                     * 判断参数 L4UsedList 是否已赋值
                     * @return L4UsedList 是否已赋值
                     * 
                     */
                    bool L4UsedListHasBeenSet() const;

                    /**
                     * 获取该负载均衡实例绑定的七层域名列表。
                     * @return L7UsedList 该负载均衡实例绑定的七层域名列表。
                     * 
                     */
                    std::vector<std::string> GetL7UsedList() const;

                    /**
                     * 设置该负载均衡实例绑定的七层域名列表。
                     * @param _l7UsedList 该负载均衡实例绑定的七层域名列表。
                     * 
                     */
                    void SetL7UsedList(const std::vector<std::string>& _l7UsedList);

                    /**
                     * 判断参数 L7UsedList 是否已赋值
                     * @return L7UsedList 是否已赋值
                     * 
                     */
                    bool L7UsedListHasBeenSet() const;

                private:

                    /**
                     * 实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称，可输入 1-200 个字符，允许字符为 a-z，A-Z，0-9，_，-。	
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 实例类型，取值有：
<li>HTTP：HTTP 专用型，支持添加 HTTP 专用型和通用型源站组，仅支持被站点加速相关服务引用（如域名服务和规则引擎）；</li>
<li>GENERAL：通用型，仅支持添加通用型源站组，能被站点加速服务（如域名服务和规则引擎）和四层代理引用。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 健康检查策略。详情请参考 [健康检查策略介绍](https://cloud.tencent.com/document/product/1552/104228)。
                     */
                    HealthChecker m_healthChecker;
                    bool m_healthCheckerHasBeenSet;

                    /**
                     * 源站组间的流量调度策略，取值有：
<li>Pritory：按优先级顺序进行故障转移 。</li>
                     */
                    std::string m_steeringPolicy;
                    bool m_steeringPolicyHasBeenSet;

                    /**
                     * 实际访问某源站失败时的请求重试策略，详情请参考 [请求重试策略介绍](https://cloud.tencent.com/document/product/1552/104227)，取值有：
<li>OtherOriginGroup：单次请求失败后，请求优先重试下一优先级源站组；</li>
<li>OtherRecordInOriginGroup：单次请求失败后，请求优先重试同源站组内的其他源站。</li>
                     */
                    std::string m_failoverPolicy;
                    bool m_failoverPolicyHasBeenSet;

                    /**
                     * 源站组健康状态。
                     */
                    std::vector<OriginGroupHealthStatus> m_originGroupHealthStatus;
                    bool m_originGroupHealthStatusHasBeenSet;

                    /**
                     * 负载均衡状态，取值有：
<li>Pending：部署中；</li>
<li>Deleting：删除中；</li>
<li>Running：已生效。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 该负载均衡实例绑的四层代理实例的列表。
                     */
                    std::vector<std::string> m_l4UsedList;
                    bool m_l4UsedListHasBeenSet;

                    /**
                     * 该负载均衡实例绑定的七层域名列表。
                     */
                    std::vector<std::string> m_l7UsedList;
                    bool m_l7UsedListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_LOADBALANCER_H_
