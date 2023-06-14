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

#ifndef TENCENTCLOUD_TEM_V20201221_MODEL_EKSSERVICE_H_
#define TENCENTCLOUD_TEM_V20201221_MODEL_EKSSERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20201221/model/PortMapping.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20201221
        {
            namespace Model
            {
                /**
                * eks service info
                */
                class EksService : public AbstractModel
                {
                public:
                    EksService();
                    ~EksService() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取service name
                     * @return Name service name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置service name
                     * @param _name service name
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
                     * 获取可用端口
                     * @return Ports 可用端口
                     * 
                     */
                    std::vector<int64_t> GetPorts() const;

                    /**
                     * 设置可用端口
                     * @param _ports 可用端口
                     * 
                     */
                    void SetPorts(const std::vector<int64_t>& _ports);

                    /**
                     * 判断参数 Ports 是否已赋值
                     * @return Ports 是否已赋值
                     * 
                     */
                    bool PortsHasBeenSet() const;

                    /**
                     * 获取yaml 内容
                     * @return Yaml yaml 内容
                     * 
                     */
                    std::string GetYaml() const;

                    /**
                     * 设置yaml 内容
                     * @param _yaml yaml 内容
                     * 
                     */
                    void SetYaml(const std::string& _yaml);

                    /**
                     * 判断参数 Yaml 是否已赋值
                     * @return Yaml 是否已赋值
                     * 
                     */
                    bool YamlHasBeenSet() const;

                    /**
                     * 获取服务名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceName 服务名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置服务名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceName 服务名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取版本名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionName 版本名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置版本名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionName 版本名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterIp 内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetClusterIp() const;

                    /**
                     * 设置内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterIp 内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterIp(const std::vector<std::string>& _clusterIp);

                    /**
                     * 判断参数 ClusterIp 是否已赋值
                     * @return ClusterIp 是否已赋值
                     * 
                     */
                    bool ClusterIpHasBeenSet() const;

                    /**
                     * 获取外网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalIp 外网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExternalIp() const;

                    /**
                     * 设置外网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _externalIp 外网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExternalIp(const std::string& _externalIp);

                    /**
                     * 判断参数 ExternalIp 是否已赋值
                     * @return ExternalIp 是否已赋值
                     * 
                     */
                    bool ExternalIpHasBeenSet() const;

                    /**
                     * 获取访问类型，可选值：
- EXTERNAL（公网访问）
- VPC（vpc内访问）
- CLUSTER（集群内访问）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 访问类型，可选值：
- EXTERNAL（公网访问）
- VPC（vpc内访问）
- CLUSTER（集群内访问）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置访问类型，可选值：
- EXTERNAL（公网访问）
- VPC（vpc内访问）
- CLUSTER（集群内访问）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 访问类型，可选值：
- EXTERNAL（公网访问）
- VPC（vpc内访问）
- CLUSTER（集群内访问）
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取子网ID，只在类型为vpc访问时才有值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId 子网ID，只在类型为vpc访问时才有值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID，只在类型为vpc访问时才有值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetId 子网ID，只在类型为vpc访问时才有值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取负载均衡ID，只在外网访问和vpc内访问才有值，默认自动创建
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoadBalanceId 负载均衡ID，只在外网访问和vpc内访问才有值，默认自动创建
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLoadBalanceId() const;

                    /**
                     * 设置负载均衡ID，只在外网访问和vpc内访问才有值，默认自动创建
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _loadBalanceId 负载均衡ID，只在外网访问和vpc内访问才有值，默认自动创建
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLoadBalanceId(const std::string& _loadBalanceId);

                    /**
                     * 判断参数 LoadBalanceId 是否已赋值
                     * @return LoadBalanceId 是否已赋值
                     * 
                     */
                    bool LoadBalanceIdHasBeenSet() const;

                    /**
                     * 获取端口映射
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PortMappings 端口映射
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PortMapping> GetPortMappings() const;

                    /**
                     * 设置端口映射
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _portMappings 端口映射
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPortMappings(const std::vector<PortMapping>& _portMappings);

                    /**
                     * 判断参数 PortMappings 是否已赋值
                     * @return PortMappings 是否已赋值
                     * 
                     */
                    bool PortMappingsHasBeenSet() const;

                private:

                    /**
                     * service name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 可用端口
                     */
                    std::vector<int64_t> m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * yaml 内容
                     */
                    std::string m_yaml;
                    bool m_yamlHasBeenSet;

                    /**
                     * 服务名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 版本名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * 内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_clusterIp;
                    bool m_clusterIpHasBeenSet;

                    /**
                     * 外网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_externalIp;
                    bool m_externalIpHasBeenSet;

                    /**
                     * 访问类型，可选值：
- EXTERNAL（公网访问）
- VPC（vpc内访问）
- CLUSTER（集群内访问）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 子网ID，只在类型为vpc访问时才有值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 负载均衡ID，只在外网访问和vpc内访问才有值，默认自动创建
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_loadBalanceId;
                    bool m_loadBalanceIdHasBeenSet;

                    /**
                     * 端口映射
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PortMapping> m_portMappings;
                    bool m_portMappingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20201221_MODEL_EKSSERVICE_H_
