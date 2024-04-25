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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEPROXYREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEPROXYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ProxyZone.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * CreateProxy请求参数结构体
                */
                class CreateProxyRequest : public AbstractModel
                {
                public:
                    CreateProxyRequest();
                    ~CreateProxyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
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
                     * 获取cpu核数
                     * @return Cpu cpu核数
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置cpu核数
                     * @param _cpu cpu核数
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取内存
                     * @return Mem 内存
                     * 
                     */
                    int64_t GetMem() const;

                    /**
                     * 设置内存
                     * @param _mem 内存
                     * 
                     */
                    void SetMem(const int64_t& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * 
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取私有网络ID，默认与集群私有网络ID保持一致
                     * @return UniqueVpcId 私有网络ID，默认与集群私有网络ID保持一致
                     * 
                     */
                    std::string GetUniqueVpcId() const;

                    /**
                     * 设置私有网络ID，默认与集群私有网络ID保持一致
                     * @param _uniqueVpcId 私有网络ID，默认与集群私有网络ID保持一致
                     * 
                     */
                    void SetUniqueVpcId(const std::string& _uniqueVpcId);

                    /**
                     * 判断参数 UniqueVpcId 是否已赋值
                     * @return UniqueVpcId 是否已赋值
                     * 
                     */
                    bool UniqueVpcIdHasBeenSet() const;

                    /**
                     * 获取私有网络子网ID，默认与集群子网ID保持一致
                     * @return UniqueSubnetId 私有网络子网ID，默认与集群子网ID保持一致
                     * 
                     */
                    std::string GetUniqueSubnetId() const;

                    /**
                     * 设置私有网络子网ID，默认与集群子网ID保持一致
                     * @param _uniqueSubnetId 私有网络子网ID，默认与集群子网ID保持一致
                     * 
                     */
                    void SetUniqueSubnetId(const std::string& _uniqueSubnetId);

                    /**
                     * 判断参数 UniqueSubnetId 是否已赋值
                     * @return UniqueSubnetId 是否已赋值
                     * 
                     */
                    bool UniqueSubnetIdHasBeenSet() const;

                    /**
                     * 获取数据库代理组节点个数（该参数不再建议使用，建议使用ProxyZones)
                     * @return ProxyCount 数据库代理组节点个数（该参数不再建议使用，建议使用ProxyZones)
                     * 
                     */
                    int64_t GetProxyCount() const;

                    /**
                     * 设置数据库代理组节点个数（该参数不再建议使用，建议使用ProxyZones)
                     * @param _proxyCount 数据库代理组节点个数（该参数不再建议使用，建议使用ProxyZones)
                     * 
                     */
                    void SetProxyCount(const int64_t& _proxyCount);

                    /**
                     * 判断参数 ProxyCount 是否已赋值
                     * @return ProxyCount 是否已赋值
                     * 
                     */
                    bool ProxyCountHasBeenSet() const;

                    /**
                     * 获取连接池类型：SessionConnectionPool(会话级别连接池 )
                     * @return ConnectionPoolType 连接池类型：SessionConnectionPool(会话级别连接池 )
                     * 
                     */
                    std::string GetConnectionPoolType() const;

                    /**
                     * 设置连接池类型：SessionConnectionPool(会话级别连接池 )
                     * @param _connectionPoolType 连接池类型：SessionConnectionPool(会话级别连接池 )
                     * 
                     */
                    void SetConnectionPoolType(const std::string& _connectionPoolType);

                    /**
                     * 判断参数 ConnectionPoolType 是否已赋值
                     * @return ConnectionPoolType 是否已赋值
                     * 
                     */
                    bool ConnectionPoolTypeHasBeenSet() const;

                    /**
                     * 获取是否开启连接池,yes-开启，no-不开启
                     * @return OpenConnectionPool 是否开启连接池,yes-开启，no-不开启
                     * 
                     */
                    std::string GetOpenConnectionPool() const;

                    /**
                     * 设置是否开启连接池,yes-开启，no-不开启
                     * @param _openConnectionPool 是否开启连接池,yes-开启，no-不开启
                     * 
                     */
                    void SetOpenConnectionPool(const std::string& _openConnectionPool);

                    /**
                     * 判断参数 OpenConnectionPool 是否已赋值
                     * @return OpenConnectionPool 是否已赋值
                     * 
                     */
                    bool OpenConnectionPoolHasBeenSet() const;

                    /**
                     * 获取连接池阈值：单位（秒）
                     * @return ConnectionPoolTimeOut 连接池阈值：单位（秒）
                     * 
                     */
                    int64_t GetConnectionPoolTimeOut() const;

                    /**
                     * 设置连接池阈值：单位（秒）
                     * @param _connectionPoolTimeOut 连接池阈值：单位（秒）
                     * 
                     */
                    void SetConnectionPoolTimeOut(const int64_t& _connectionPoolTimeOut);

                    /**
                     * 判断参数 ConnectionPoolTimeOut 是否已赋值
                     * @return ConnectionPoolTimeOut 是否已赋值
                     * 
                     */
                    bool ConnectionPoolTimeOutHasBeenSet() const;

                    /**
                     * 获取安全组ID数组
                     * @return SecurityGroupIds 安全组ID数组
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置安全组ID数组
                     * @param _securityGroupIds 安全组ID数组
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取描述说明
                     * @return Description 描述说明
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述说明
                     * @param _description 描述说明
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取数据库节点信息（该参数与ProxyCount需要任选一个输入）
                     * @return ProxyZones 数据库节点信息（该参数与ProxyCount需要任选一个输入）
                     * 
                     */
                    std::vector<ProxyZone> GetProxyZones() const;

                    /**
                     * 设置数据库节点信息（该参数与ProxyCount需要任选一个输入）
                     * @param _proxyZones 数据库节点信息（该参数与ProxyCount需要任选一个输入）
                     * 
                     */
                    void SetProxyZones(const std::vector<ProxyZone>& _proxyZones);

                    /**
                     * 判断参数 ProxyZones 是否已赋值
                     * @return ProxyZones 是否已赋值
                     * 
                     */
                    bool ProxyZonesHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * cpu核数
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存
                     */
                    int64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * 私有网络ID，默认与集群私有网络ID保持一致
                     */
                    std::string m_uniqueVpcId;
                    bool m_uniqueVpcIdHasBeenSet;

                    /**
                     * 私有网络子网ID，默认与集群子网ID保持一致
                     */
                    std::string m_uniqueSubnetId;
                    bool m_uniqueSubnetIdHasBeenSet;

                    /**
                     * 数据库代理组节点个数（该参数不再建议使用，建议使用ProxyZones)
                     */
                    int64_t m_proxyCount;
                    bool m_proxyCountHasBeenSet;

                    /**
                     * 连接池类型：SessionConnectionPool(会话级别连接池 )
                     */
                    std::string m_connectionPoolType;
                    bool m_connectionPoolTypeHasBeenSet;

                    /**
                     * 是否开启连接池,yes-开启，no-不开启
                     */
                    std::string m_openConnectionPool;
                    bool m_openConnectionPoolHasBeenSet;

                    /**
                     * 连接池阈值：单位（秒）
                     */
                    int64_t m_connectionPoolTimeOut;
                    bool m_connectionPoolTimeOutHasBeenSet;

                    /**
                     * 安全组ID数组
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 描述说明
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 数据库节点信息（该参数与ProxyCount需要任选一个输入）
                     */
                    std::vector<ProxyZone> m_proxyZones;
                    bool m_proxyZonesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEPROXYREQUEST_H_
