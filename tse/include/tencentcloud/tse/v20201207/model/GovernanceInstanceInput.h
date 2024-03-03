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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCEINSTANCEINPUT_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCEINSTANCEINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 实例信息
                */
                class GovernanceInstanceInput : public AbstractModel
                {
                public:
                    GovernanceInstanceInput();
                    ~GovernanceInstanceInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例所在服务名。
                     * @return Service 实例所在服务名。
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置实例所在服务名。
                     * @param _service 实例所在服务名。
                     * 
                     */
                    void SetService(const std::string& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取实例服务所在命名空间。
                     * @return Namespace 实例服务所在命名空间。
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置实例服务所在命名空间。
                     * @param _namespace 实例服务所在命名空间。
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取实例负载均衡权重信息。不填默认为100。
                     * @return Weight 实例负载均衡权重信息。不填默认为100。
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置实例负载均衡权重信息。不填默认为100。
                     * @param _weight 实例负载均衡权重信息。不填默认为100。
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取实例默认健康信息。不填默认为健康。
                     * @return Healthy 实例默认健康信息。不填默认为健康。
                     * 
                     */
                    bool GetHealthy() const;

                    /**
                     * 设置实例默认健康信息。不填默认为健康。
                     * @param _healthy 实例默认健康信息。不填默认为健康。
                     * 
                     */
                    void SetHealthy(const bool& _healthy);

                    /**
                     * 判断参数 Healthy 是否已赋值
                     * @return Healthy 是否已赋值
                     * 
                     */
                    bool HealthyHasBeenSet() const;

                    /**
                     * 获取实例隔离信息。不填默认为非隔离。
                     * @return Isolate 实例隔离信息。不填默认为非隔离。
                     * 
                     */
                    bool GetIsolate() const;

                    /**
                     * 设置实例隔离信息。不填默认为非隔离。
                     * @param _isolate 实例隔离信息。不填默认为非隔离。
                     * 
                     */
                    void SetIsolate(const bool& _isolate);

                    /**
                     * 判断参数 Isolate 是否已赋值
                     * @return Isolate 是否已赋值
                     * 
                     */
                    bool IsolateHasBeenSet() const;

                    /**
                     * 获取实例ip。
                     * @return Host 实例ip。
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置实例ip。
                     * @param _host 实例ip。
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取实例监听端口。
                     * @return Port 实例监听端口。
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置实例监听端口。
                     * @param _port 实例监听端口。
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取实例使用协议。不填默认为空。
                     * @return Protocol 实例使用协议。不填默认为空。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置实例使用协议。不填默认为空。
                     * @param _protocol 实例使用协议。不填默认为空。
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取实例版本。不填默认为空。
                     * @return InstanceVersion 实例版本。不填默认为空。
                     * 
                     */
                    std::string GetInstanceVersion() const;

                    /**
                     * 设置实例版本。不填默认为空。
                     * @param _instanceVersion 实例版本。不填默认为空。
                     * 
                     */
                    void SetInstanceVersion(const std::string& _instanceVersion);

                    /**
                     * 判断参数 InstanceVersion 是否已赋值
                     * @return InstanceVersion 是否已赋值
                     * 
                     */
                    bool InstanceVersionHasBeenSet() const;

                    /**
                     * 获取是否启用健康检查。不填默认不启用。
                     * @return EnableHealthCheck 是否启用健康检查。不填默认不启用。
                     * 
                     */
                    bool GetEnableHealthCheck() const;

                    /**
                     * 设置是否启用健康检查。不填默认不启用。
                     * @param _enableHealthCheck 是否启用健康检查。不填默认不启用。
                     * 
                     */
                    void SetEnableHealthCheck(const bool& _enableHealthCheck);

                    /**
                     * 判断参数 EnableHealthCheck 是否已赋值
                     * @return EnableHealthCheck 是否已赋值
                     * 
                     */
                    bool EnableHealthCheckHasBeenSet() const;

                    /**
                     * 获取上报心跳时间间隔。若 EnableHealthCheck 为不启用，则此参数不生效；若 EnableHealthCheck 启用，此参数不填，则默认 ttl 为 5s。
                     * @return Ttl 上报心跳时间间隔。若 EnableHealthCheck 为不启用，则此参数不生效；若 EnableHealthCheck 启用，此参数不填，则默认 ttl 为 5s。
                     * 
                     */
                    uint64_t GetTtl() const;

                    /**
                     * 设置上报心跳时间间隔。若 EnableHealthCheck 为不启用，则此参数不生效；若 EnableHealthCheck 启用，此参数不填，则默认 ttl 为 5s。
                     * @param _ttl 上报心跳时间间隔。若 EnableHealthCheck 为不启用，则此参数不生效；若 EnableHealthCheck 启用，此参数不填，则默认 ttl 为 5s。
                     * 
                     */
                    void SetTtl(const uint64_t& _ttl);

                    /**
                     * 判断参数 Ttl 是否已赋值
                     * @return Ttl 是否已赋值
                     * 
                     */
                    bool TtlHasBeenSet() const;

                private:

                    /**
                     * 实例所在服务名。
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * 实例服务所在命名空间。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 实例负载均衡权重信息。不填默认为100。
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 实例默认健康信息。不填默认为健康。
                     */
                    bool m_healthy;
                    bool m_healthyHasBeenSet;

                    /**
                     * 实例隔离信息。不填默认为非隔离。
                     */
                    bool m_isolate;
                    bool m_isolateHasBeenSet;

                    /**
                     * 实例ip。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 实例监听端口。
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 实例使用协议。不填默认为空。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 实例版本。不填默认为空。
                     */
                    std::string m_instanceVersion;
                    bool m_instanceVersionHasBeenSet;

                    /**
                     * 是否启用健康检查。不填默认不启用。
                     */
                    bool m_enableHealthCheck;
                    bool m_enableHealthCheckHasBeenSet;

                    /**
                     * 上报心跳时间间隔。若 EnableHealthCheck 为不启用，则此参数不生效；若 EnableHealthCheck 启用，此参数不填，则默认 ttl 为 5s。
                     */
                    uint64_t m_ttl;
                    bool m_ttlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCEINSTANCEINPUT_H_
