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

#ifndef TENCENTCLOUD_TDCPG_V20211118_MODEL_ENDPOINT_H_
#define TENCENTCLOUD_TDCPG_V20211118_MODEL_ENDPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdcpg
    {
        namespace V20211118
        {
            namespace Model
            {
                /**
                * 集群的连接点信息，包含访问数据库的相关网络信息
                */
                class Endpoint : public AbstractModel
                {
                public:
                    Endpoint();
                    ~Endpoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取连接点ID，集群内唯一
                     * @return EndpointId 连接点ID，集群内唯一
                     * 
                     */
                    std::string GetEndpointId() const;

                    /**
                     * 设置连接点ID，集群内唯一
                     * @param _endpointId 连接点ID，集群内唯一
                     * 
                     */
                    void SetEndpointId(const std::string& _endpointId);

                    /**
                     * 判断参数 EndpointId 是否已赋值
                     * @return EndpointId 是否已赋值
                     * 
                     */
                    bool EndpointIdHasBeenSet() const;

                    /**
                     * 获取连接点所属的集群ID
                     * @return ClusterId 连接点所属的集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置连接点所属的集群ID
                     * @param _clusterId 连接点所属的集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取连接点名字，默认和连接点ID一致
                     * @return EndpointName 连接点名字，默认和连接点ID一致
                     * 
                     */
                    std::string GetEndpointName() const;

                    /**
                     * 设置连接点名字，默认和连接点ID一致
                     * @param _endpointName 连接点名字，默认和连接点ID一致
                     * 
                     */
                    void SetEndpointName(const std::string& _endpointName);

                    /**
                     * 判断参数 EndpointName 是否已赋值
                     * @return EndpointName 是否已赋值
                     * 
                     */
                    bool EndpointNameHasBeenSet() const;

                    /**
                     * 获取连接点类型
 - RW : 读写
 - RO : 只读
                     * @return EndpointType 连接点类型
 - RW : 读写
 - RO : 只读
                     * 
                     */
                    std::string GetEndpointType() const;

                    /**
                     * 设置连接点类型
 - RW : 读写
 - RO : 只读
                     * @param _endpointType 连接点类型
 - RW : 读写
 - RO : 只读
                     * 
                     */
                    void SetEndpointType(const std::string& _endpointType);

                    /**
                     * 判断参数 EndpointType 是否已赋值
                     * @return EndpointType 是否已赋值
                     * 
                     */
                    bool EndpointTypeHasBeenSet() const;

                    /**
                     * 获取私有网络VPC实例ID
                     * @return VpcId 私有网络VPC实例ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络VPC实例ID
                     * @param _vpcId 私有网络VPC实例ID
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取私有网络VPC下子网实例ID
                     * @return SubnetId 私有网络VPC下子网实例ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置私有网络VPC下子网实例ID
                     * @param _subnetId 私有网络VPC下子网实例ID
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
                     * 获取私有网络VPC下用于访问数据库的IP
                     * @return PrivateIp 私有网络VPC下用于访问数据库的IP
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置私有网络VPC下用于访问数据库的IP
                     * @param _privateIp 私有网络VPC下用于访问数据库的IP
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取私有网络VPC下用于访问数据库的端口
                     * @return PrivatePort 私有网络VPC下用于访问数据库的端口
                     * 
                     */
                    uint64_t GetPrivatePort() const;

                    /**
                     * 设置私有网络VPC下用于访问数据库的端口
                     * @param _privatePort 私有网络VPC下用于访问数据库的端口
                     * 
                     */
                    void SetPrivatePort(const uint64_t& _privatePort);

                    /**
                     * 判断参数 PrivatePort 是否已赋值
                     * @return PrivatePort 是否已赋值
                     * 
                     */
                    bool PrivatePortHasBeenSet() const;

                    /**
                     * 获取公共网络用户访问数据库的IP
                     * @return WanIp 公共网络用户访问数据库的IP
                     * 
                     */
                    std::string GetWanIp() const;

                    /**
                     * 设置公共网络用户访问数据库的IP
                     * @param _wanIp 公共网络用户访问数据库的IP
                     * 
                     */
                    void SetWanIp(const std::string& _wanIp);

                    /**
                     * 判断参数 WanIp 是否已赋值
                     * @return WanIp 是否已赋值
                     * 
                     */
                    bool WanIpHasBeenSet() const;

                    /**
                     * 获取公共网络用户访问数据库的端口
                     * @return WanPort 公共网络用户访问数据库的端口
                     * 
                     */
                    uint64_t GetWanPort() const;

                    /**
                     * 设置公共网络用户访问数据库的端口
                     * @param _wanPort 公共网络用户访问数据库的端口
                     * 
                     */
                    void SetWanPort(const uint64_t& _wanPort);

                    /**
                     * 判断参数 WanPort 是否已赋值
                     * @return WanPort 是否已赋值
                     * 
                     */
                    bool WanPortHasBeenSet() const;

                    /**
                     * 获取公共网络用户访问数据库的域名
                     * @return WanDomain 公共网络用户访问数据库的域名
                     * 
                     */
                    std::string GetWanDomain() const;

                    /**
                     * 设置公共网络用户访问数据库的域名
                     * @param _wanDomain 公共网络用户访问数据库的域名
                     * 
                     */
                    void SetWanDomain(const std::string& _wanDomain);

                    /**
                     * 判断参数 WanDomain 是否已赋值
                     * @return WanDomain 是否已赋值
                     * 
                     */
                    bool WanDomainHasBeenSet() const;

                private:

                    /**
                     * 连接点ID，集群内唯一
                     */
                    std::string m_endpointId;
                    bool m_endpointIdHasBeenSet;

                    /**
                     * 连接点所属的集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 连接点名字，默认和连接点ID一致
                     */
                    std::string m_endpointName;
                    bool m_endpointNameHasBeenSet;

                    /**
                     * 连接点类型
 - RW : 读写
 - RO : 只读
                     */
                    std::string m_endpointType;
                    bool m_endpointTypeHasBeenSet;

                    /**
                     * 私有网络VPC实例ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络VPC下子网实例ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 私有网络VPC下用于访问数据库的IP
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * 私有网络VPC下用于访问数据库的端口
                     */
                    uint64_t m_privatePort;
                    bool m_privatePortHasBeenSet;

                    /**
                     * 公共网络用户访问数据库的IP
                     */
                    std::string m_wanIp;
                    bool m_wanIpHasBeenSet;

                    /**
                     * 公共网络用户访问数据库的端口
                     */
                    uint64_t m_wanPort;
                    bool m_wanPortHasBeenSet;

                    /**
                     * 公共网络用户访问数据库的域名
                     */
                    std::string m_wanDomain;
                    bool m_wanDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDCPG_V20211118_MODEL_ENDPOINT_H_
