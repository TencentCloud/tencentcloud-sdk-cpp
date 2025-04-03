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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCEINSTANCE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCEINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/Metadata.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 治理中心实例信息。
                */
                class GovernanceInstance : public AbstractModel
                {
                public:
                    GovernanceInstance();
                    ~GovernanceInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例id。
                     * @return Id 实例id。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置实例id。
                     * @param _id 实例id。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

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
                     * 获取实例所在命名空间名。
                     * @return Namespace 实例所在命名空间名。
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置实例所在命名空间名。
                     * @param _namespace 实例所在命名空间名。
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
                     * 获取实例ip地址。
                     * @return Host 实例ip地址。
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置实例ip地址。
                     * @param _host 实例ip地址。
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
                     * 获取实例端口信息。
                     * @return Port 实例端口信息。
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置实例端口信息。
                     * @param _port 实例端口信息。
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
                     * 获取通信协议。
                     * @return Protocol 通信协议。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置通信协议。
                     * @param _protocol 通信协议。
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
                     * 获取版本信息。
                     * @return Version 版本信息。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置版本信息。
                     * @param _version 版本信息。
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取负载均衡权重。
                     * @return Weight 负载均衡权重。
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置负载均衡权重。
                     * @param _weight 负载均衡权重。
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
                     * 获取是否开启健康检查。
                     * @return EnableHealthCheck 是否开启健康检查。
                     * 
                     */
                    bool GetEnableHealthCheck() const;

                    /**
                     * 设置是否开启健康检查。
                     * @param _enableHealthCheck 是否开启健康检查。
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
                     * 获取实例是否健康。
                     * @return Healthy 实例是否健康。
                     * 
                     */
                    bool GetHealthy() const;

                    /**
                     * 设置实例是否健康。
                     * @param _healthy 实例是否健康。
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
                     * 获取实例是否隔离。
                     * @return Isolate 实例是否隔离。
                     * 
                     */
                    bool GetIsolate() const;

                    /**
                     * 设置实例是否隔离。
                     * @param _isolate 实例是否隔离。
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
                     * 获取实例创建时间。
                     * @return CreateTime 实例创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置实例创建时间。
                     * @param _createTime 实例创建时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取实例修改时间。
                     * @return ModifyTime 实例修改时间。
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置实例修改时间。
                     * @param _modifyTime 实例修改时间。
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取元数据数组。
                     * @return Metadatas 元数据数组。
                     * 
                     */
                    std::vector<Metadata> GetMetadatas() const;

                    /**
                     * 设置元数据数组。
                     * @param _metadatas 元数据数组。
                     * 
                     */
                    void SetMetadatas(const std::vector<Metadata>& _metadatas);

                    /**
                     * 判断参数 Metadatas 是否已赋值
                     * @return Metadatas 是否已赋值
                     * 
                     */
                    bool MetadatasHasBeenSet() const;

                    /**
                     * 获取上报心跳间隔。
                     * @return Ttl 上报心跳间隔。
                     * 
                     */
                    uint64_t GetTtl() const;

                    /**
                     * 设置上报心跳间隔。
                     * @param _ttl 上报心跳间隔。
                     * 
                     */
                    void SetTtl(const uint64_t& _ttl);

                    /**
                     * 判断参数 Ttl 是否已赋值
                     * @return Ttl 是否已赋值
                     * 
                     */
                    bool TtlHasBeenSet() const;

                    /**
                     * 获取版本信息。
                     * @return InstanceVersion 版本信息。
                     * 
                     */
                    std::string GetInstanceVersion() const;

                    /**
                     * 设置版本信息。
                     * @param _instanceVersion 版本信息。
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
                     * 获取状态信息
                     * @return HealthStatus 状态信息
                     * 
                     */
                    std::string GetHealthStatus() const;

                    /**
                     * 设置状态信息
                     * @param _healthStatus 状态信息
                     * 
                     */
                    void SetHealthStatus(const std::string& _healthStatus);

                    /**
                     * 判断参数 HealthStatus 是否已赋值
                     * @return HealthStatus 是否已赋值
                     * 
                     */
                    bool HealthStatusHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Comment 描述
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置描述
                     * @param _comment 描述
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                private:

                    /**
                     * 实例id。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 实例所在服务名。
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * 实例所在命名空间名。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 实例ip地址。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 实例端口信息。
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 通信协议。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 版本信息。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 负载均衡权重。
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 是否开启健康检查。
                     */
                    bool m_enableHealthCheck;
                    bool m_enableHealthCheckHasBeenSet;

                    /**
                     * 实例是否健康。
                     */
                    bool m_healthy;
                    bool m_healthyHasBeenSet;

                    /**
                     * 实例是否隔离。
                     */
                    bool m_isolate;
                    bool m_isolateHasBeenSet;

                    /**
                     * 实例创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 实例修改时间。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 元数据数组。
                     */
                    std::vector<Metadata> m_metadatas;
                    bool m_metadatasHasBeenSet;

                    /**
                     * 上报心跳间隔。
                     */
                    uint64_t m_ttl;
                    bool m_ttlHasBeenSet;

                    /**
                     * 版本信息。
                     */
                    std::string m_instanceVersion;
                    bool m_instanceVersionHasBeenSet;

                    /**
                     * 状态信息
                     */
                    std::string m_healthStatus;
                    bool m_healthStatusHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCEINSTANCE_H_
