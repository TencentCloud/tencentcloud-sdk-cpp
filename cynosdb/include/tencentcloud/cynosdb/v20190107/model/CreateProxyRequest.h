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
                     * 获取<p>集群ID</p>
                     * @return ClusterId <p>集群ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _clusterId <p>集群ID</p>
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
                     * 获取<p>cpu核数</p>
                     * @return Cpu <p>cpu核数</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>cpu核数</p>
                     * @param _cpu <p>cpu核数</p>
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
                     * 获取<p>内存</p>
                     * @return Mem <p>内存</p>
                     * 
                     */
                    int64_t GetMem() const;

                    /**
                     * 设置<p>内存</p>
                     * @param _mem <p>内存</p>
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
                     * 获取<p>代理内核版本。不传时默认使用最新稳定版本（白名单用户以appoint策略为准）；显式指定时将实时校验该版本是否在当前集群支持的代理版本集合内，不在则返回错误。集群存在已开启列存索引的只读实例时，所选版本需不低于列存转发要求的最低版本（如1.4.7）</p>
                     * @return ProxyVersion <p>代理内核版本。不传时默认使用最新稳定版本（白名单用户以appoint策略为准）；显式指定时将实时校验该版本是否在当前集群支持的代理版本集合内，不在则返回错误。集群存在已开启列存索引的只读实例时，所选版本需不低于列存转发要求的最低版本（如1.4.7）</p>
                     * 
                     */
                    std::string GetProxyVersion() const;

                    /**
                     * 设置<p>代理内核版本。不传时默认使用最新稳定版本（白名单用户以appoint策略为准）；显式指定时将实时校验该版本是否在当前集群支持的代理版本集合内，不在则返回错误。集群存在已开启列存索引的只读实例时，所选版本需不低于列存转发要求的最低版本（如1.4.7）</p>
                     * @param _proxyVersion <p>代理内核版本。不传时默认使用最新稳定版本（白名单用户以appoint策略为准）；显式指定时将实时校验该版本是否在当前集群支持的代理版本集合内，不在则返回错误。集群存在已开启列存索引的只读实例时，所选版本需不低于列存转发要求的最低版本（如1.4.7）</p>
                     * 
                     */
                    void SetProxyVersion(const std::string& _proxyVersion);

                    /**
                     * 判断参数 ProxyVersion 是否已赋值
                     * @return ProxyVersion 是否已赋值
                     * 
                     */
                    bool ProxyVersionHasBeenSet() const;

                    /**
                     * 获取<p>私有网络ID，默认与集群私有网络ID保持一致</p>
                     * @return UniqueVpcId <p>私有网络ID，默认与集群私有网络ID保持一致</p>
                     * 
                     */
                    std::string GetUniqueVpcId() const;

                    /**
                     * 设置<p>私有网络ID，默认与集群私有网络ID保持一致</p>
                     * @param _uniqueVpcId <p>私有网络ID，默认与集群私有网络ID保持一致</p>
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
                     * 获取<p>私有网络子网ID，默认与集群子网ID保持一致</p>
                     * @return UniqueSubnetId <p>私有网络子网ID，默认与集群子网ID保持一致</p>
                     * 
                     */
                    std::string GetUniqueSubnetId() const;

                    /**
                     * 设置<p>私有网络子网ID，默认与集群子网ID保持一致</p>
                     * @param _uniqueSubnetId <p>私有网络子网ID，默认与集群子网ID保持一致</p>
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
                     * 获取<p>数据库代理组节点个数（该参数不再建议使用，建议使用ProxyZones)</p>
                     * @return ProxyCount <p>数据库代理组节点个数（该参数不再建议使用，建议使用ProxyZones)</p>
                     * 
                     */
                    int64_t GetProxyCount() const;

                    /**
                     * 设置<p>数据库代理组节点个数（该参数不再建议使用，建议使用ProxyZones)</p>
                     * @param _proxyCount <p>数据库代理组节点个数（该参数不再建议使用，建议使用ProxyZones)</p>
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
                     * 获取<p>连接池类型：SessionConnectionPool(会话级别连接池 )</p>
                     * @return ConnectionPoolType <p>连接池类型：SessionConnectionPool(会话级别连接池 )</p>
                     * 
                     */
                    std::string GetConnectionPoolType() const;

                    /**
                     * 设置<p>连接池类型：SessionConnectionPool(会话级别连接池 )</p>
                     * @param _connectionPoolType <p>连接池类型：SessionConnectionPool(会话级别连接池 )</p>
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
                     * 获取<p>是否开启连接池,yes-开启，no-不开启</p>
                     * @return OpenConnectionPool <p>是否开启连接池,yes-开启，no-不开启</p>
                     * 
                     */
                    std::string GetOpenConnectionPool() const;

                    /**
                     * 设置<p>是否开启连接池,yes-开启，no-不开启</p>
                     * @param _openConnectionPool <p>是否开启连接池,yes-开启，no-不开启</p>
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
                     * 获取<p>连接池阈值：单位（秒）</p>
                     * @return ConnectionPoolTimeOut <p>连接池阈值：单位（秒）</p>
                     * 
                     */
                    int64_t GetConnectionPoolTimeOut() const;

                    /**
                     * 设置<p>连接池阈值：单位（秒）</p>
                     * @param _connectionPoolTimeOut <p>连接池阈值：单位（秒）</p>
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
                     * 获取<p>安全组ID数组</p>
                     * @return SecurityGroupIds <p>安全组ID数组</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>安全组ID数组</p>
                     * @param _securityGroupIds <p>安全组ID数组</p>
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
                     * 获取<p>描述说明</p>
                     * @return Description <p>描述说明</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述说明</p>
                     * @param _description <p>描述说明</p>
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
                     * 获取<p>数据库节点信息（该参数与ProxyCount需要任选一个输入）</p>
                     * @return ProxyZones <p>数据库节点信息（该参数与ProxyCount需要任选一个输入）</p>
                     * 
                     */
                    std::vector<ProxyZone> GetProxyZones() const;

                    /**
                     * 设置<p>数据库节点信息（该参数与ProxyCount需要任选一个输入）</p>
                     * @param _proxyZones <p>数据库节点信息（该参数与ProxyCount需要任选一个输入）</p>
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
                     * <p>集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>cpu核数</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>内存</p>
                     */
                    int64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * <p>代理内核版本。不传时默认使用最新稳定版本（白名单用户以appoint策略为准）；显式指定时将实时校验该版本是否在当前集群支持的代理版本集合内，不在则返回错误。集群存在已开启列存索引的只读实例时，所选版本需不低于列存转发要求的最低版本（如1.4.7）</p>
                     */
                    std::string m_proxyVersion;
                    bool m_proxyVersionHasBeenSet;

                    /**
                     * <p>私有网络ID，默认与集群私有网络ID保持一致</p>
                     */
                    std::string m_uniqueVpcId;
                    bool m_uniqueVpcIdHasBeenSet;

                    /**
                     * <p>私有网络子网ID，默认与集群子网ID保持一致</p>
                     */
                    std::string m_uniqueSubnetId;
                    bool m_uniqueSubnetIdHasBeenSet;

                    /**
                     * <p>数据库代理组节点个数（该参数不再建议使用，建议使用ProxyZones)</p>
                     */
                    int64_t m_proxyCount;
                    bool m_proxyCountHasBeenSet;

                    /**
                     * <p>连接池类型：SessionConnectionPool(会话级别连接池 )</p>
                     */
                    std::string m_connectionPoolType;
                    bool m_connectionPoolTypeHasBeenSet;

                    /**
                     * <p>是否开启连接池,yes-开启，no-不开启</p>
                     */
                    std::string m_openConnectionPool;
                    bool m_openConnectionPoolHasBeenSet;

                    /**
                     * <p>连接池阈值：单位（秒）</p>
                     */
                    int64_t m_connectionPoolTimeOut;
                    bool m_connectionPoolTimeOutHasBeenSet;

                    /**
                     * <p>安全组ID数组</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>描述说明</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>数据库节点信息（该参数与ProxyCount需要任选一个输入）</p>
                     */
                    std::vector<ProxyZone> m_proxyZones;
                    bool m_proxyZonesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEPROXYREQUEST_H_
