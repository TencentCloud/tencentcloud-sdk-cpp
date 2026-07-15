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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CREATECDBPROXYADDRESSREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CREATECDBPROXYADDRESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/ProxyAllocation.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * CreateCdbProxyAddress请求参数结构体
                */
                class CreateCdbProxyAddressRequest : public AbstractModel
                {
                public:
                    CreateCdbProxyAddressRequest();
                    ~CreateCdbProxyAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>代理组 ID。可通过 <a href="https://cloud.tencent.com/document/api/236/90585">DescribeCdbProxyInfo</a> 接口获取。</p>
                     * @return ProxyGroupId <p>代理组 ID。可通过 <a href="https://cloud.tencent.com/document/api/236/90585">DescribeCdbProxyInfo</a> 接口获取。</p>
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置<p>代理组 ID。可通过 <a href="https://cloud.tencent.com/document/api/236/90585">DescribeCdbProxyInfo</a> 接口获取。</p>
                     * @param _proxyGroupId <p>代理组 ID。可通过 <a href="https://cloud.tencent.com/document/api/236/90585">DescribeCdbProxyInfo</a> 接口获取。</p>
                     * 
                     */
                    void SetProxyGroupId(const std::string& _proxyGroupId);

                    /**
                     * 判断参数 ProxyGroupId 是否已赋值
                     * @return ProxyGroupId 是否已赋值
                     * 
                     */
                    bool ProxyGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>权重分配模式，<br>系统自动分配：&quot;system&quot;， 自定义：&quot;custom&quot;</p>
                     * @return WeightMode <p>权重分配模式，<br>系统自动分配：&quot;system&quot;， 自定义：&quot;custom&quot;</p>
                     * 
                     */
                    std::string GetWeightMode() const;

                    /**
                     * 设置<p>权重分配模式，<br>系统自动分配：&quot;system&quot;， 自定义：&quot;custom&quot;</p>
                     * @param _weightMode <p>权重分配模式，<br>系统自动分配：&quot;system&quot;， 自定义：&quot;custom&quot;</p>
                     * 
                     */
                    void SetWeightMode(const std::string& _weightMode);

                    /**
                     * 判断参数 WeightMode 是否已赋值
                     * @return WeightMode 是否已赋值
                     * 
                     */
                    bool WeightModeHasBeenSet() const;

                    /**
                     * 获取<p>是否开启延迟剔除，取值：&quot;true&quot; | &quot;false&quot;</p>
                     * @return IsKickOut <p>是否开启延迟剔除，取值：&quot;true&quot; | &quot;false&quot;</p>
                     * 
                     */
                    bool GetIsKickOut() const;

                    /**
                     * 设置<p>是否开启延迟剔除，取值：&quot;true&quot; | &quot;false&quot;</p>
                     * @param _isKickOut <p>是否开启延迟剔除，取值：&quot;true&quot; | &quot;false&quot;</p>
                     * 
                     */
                    void SetIsKickOut(const bool& _isKickOut);

                    /**
                     * 判断参数 IsKickOut 是否已赋值
                     * @return IsKickOut 是否已赋值
                     * 
                     */
                    bool IsKickOutHasBeenSet() const;

                    /**
                     * 获取<p>最小保留数量，最小取值：0</p>
                     * @return MinCount <p>最小保留数量，最小取值：0</p>
                     * 
                     */
                    uint64_t GetMinCount() const;

                    /**
                     * 设置<p>最小保留数量，最小取值：0</p>
                     * @param _minCount <p>最小保留数量，最小取值：0</p>
                     * 
                     */
                    void SetMinCount(const uint64_t& _minCount);

                    /**
                     * 判断参数 MinCount 是否已赋值
                     * @return MinCount 是否已赋值
                     * 
                     */
                    bool MinCountHasBeenSet() const;

                    /**
                     * 获取<p>延迟剔除阈值，最小取值：1，范围：1 - 10000，整数。</p>
                     * @return MaxDelay <p>延迟剔除阈值，最小取值：1，范围：1 - 10000，整数。</p>
                     * 
                     */
                    uint64_t GetMaxDelay() const;

                    /**
                     * 设置<p>延迟剔除阈值，最小取值：1，范围：1 - 10000，整数。</p>
                     * @param _maxDelay <p>延迟剔除阈值，最小取值：1，范围：1 - 10000，整数。</p>
                     * 
                     */
                    void SetMaxDelay(const uint64_t& _maxDelay);

                    /**
                     * 判断参数 MaxDelay 是否已赋值
                     * @return MaxDelay 是否已赋值
                     * 
                     */
                    bool MaxDelayHasBeenSet() const;

                    /**
                     * 获取<p>是否开启故障转移，取值：&quot;true&quot; | &quot;false&quot;</p>
                     * @return FailOver <p>是否开启故障转移，取值：&quot;true&quot; | &quot;false&quot;</p>
                     * 
                     */
                    bool GetFailOver() const;

                    /**
                     * 设置<p>是否开启故障转移，取值：&quot;true&quot; | &quot;false&quot;</p>
                     * @param _failOver <p>是否开启故障转移，取值：&quot;true&quot; | &quot;false&quot;</p>
                     * 
                     */
                    void SetFailOver(const bool& _failOver);

                    /**
                     * 判断参数 FailOver 是否已赋值
                     * @return FailOver 是否已赋值
                     * 
                     */
                    bool FailOverHasBeenSet() const;

                    /**
                     * 获取<p>是否自动添加RO，取值：&quot;true&quot; | &quot;false&quot;</p>
                     * @return AutoAddRo <p>是否自动添加RO，取值：&quot;true&quot; | &quot;false&quot;</p>
                     * 
                     */
                    bool GetAutoAddRo() const;

                    /**
                     * 设置<p>是否自动添加RO，取值：&quot;true&quot; | &quot;false&quot;</p>
                     * @param _autoAddRo <p>是否自动添加RO，取值：&quot;true&quot; | &quot;false&quot;</p>
                     * 
                     */
                    void SetAutoAddRo(const bool& _autoAddRo);

                    /**
                     * 判断参数 AutoAddRo 是否已赋值
                     * @return AutoAddRo 是否已赋值
                     * 
                     */
                    bool AutoAddRoHasBeenSet() const;

                    /**
                     * 获取<p>是否是只读，取值：&quot;true&quot; | &quot;false&quot;</p>
                     * @return ReadOnly <p>是否是只读，取值：&quot;true&quot; | &quot;false&quot;</p>
                     * 
                     */
                    bool GetReadOnly() const;

                    /**
                     * 设置<p>是否是只读，取值：&quot;true&quot; | &quot;false&quot;</p>
                     * @param _readOnly <p>是否是只读，取值：&quot;true&quot; | &quot;false&quot;</p>
                     * 
                     */
                    void SetReadOnly(const bool& _readOnly);

                    /**
                     * 判断参数 ReadOnly 是否已赋值
                     * @return ReadOnly 是否已赋值
                     * 
                     */
                    bool ReadOnlyHasBeenSet() const;

                    /**
                     * 获取<p>是否开启事务分离，取值：&quot;true&quot; | &quot;false&quot;</p>
                     * @return TransSplit <p>是否开启事务分离，取值：&quot;true&quot; | &quot;false&quot;</p>
                     * 
                     */
                    bool GetTransSplit() const;

                    /**
                     * 设置<p>是否开启事务分离，取值：&quot;true&quot; | &quot;false&quot;</p>
                     * @param _transSplit <p>是否开启事务分离，取值：&quot;true&quot; | &quot;false&quot;</p>
                     * 
                     */
                    void SetTransSplit(const bool& _transSplit);

                    /**
                     * 判断参数 TransSplit 是否已赋值
                     * @return TransSplit 是否已赋值
                     * 
                     */
                    bool TransSplitHasBeenSet() const;

                    /**
                     * 获取<p>读写权重分配</p>
                     * @return ProxyAllocation <p>读写权重分配</p>
                     * 
                     */
                    std::vector<ProxyAllocation> GetProxyAllocation() const;

                    /**
                     * 设置<p>读写权重分配</p>
                     * @param _proxyAllocation <p>读写权重分配</p>
                     * 
                     */
                    void SetProxyAllocation(const std::vector<ProxyAllocation>& _proxyAllocation);

                    /**
                     * 判断参数 ProxyAllocation 是否已赋值
                     * @return ProxyAllocation 是否已赋值
                     * 
                     */
                    bool ProxyAllocationHasBeenSet() const;

                    /**
                     * 获取<p>私有网络 ID。可通过 <a href="https://cloud.tencent.com/document/product/236/15872">DescribeDBInstances</a> 接口获取。</p>
                     * @return UniqVpcId <p>私有网络 ID。可通过 <a href="https://cloud.tencent.com/document/product/236/15872">DescribeDBInstances</a> 接口获取。</p>
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置<p>私有网络 ID。可通过 <a href="https://cloud.tencent.com/document/product/236/15872">DescribeDBInstances</a> 接口获取。</p>
                     * @param _uniqVpcId <p>私有网络 ID。可通过 <a href="https://cloud.tencent.com/document/product/236/15872">DescribeDBInstances</a> 接口获取。</p>
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取<p>私有子网 ID。可通过 <a href="https://cloud.tencent.com/document/product/236/15872">DescribeDBInstances</a> 接口获取。</p>
                     * @return UniqSubnetId <p>私有子网 ID。可通过 <a href="https://cloud.tencent.com/document/product/236/15872">DescribeDBInstances</a> 接口获取。</p>
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置<p>私有子网 ID。可通过 <a href="https://cloud.tencent.com/document/product/236/15872">DescribeDBInstances</a> 接口获取。</p>
                     * @param _uniqSubnetId <p>私有子网 ID。可通过 <a href="https://cloud.tencent.com/document/product/236/15872">DescribeDBInstances</a> 接口获取。</p>
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>是否开启连接池。默认关闭。<br>注意：如需使用数据库代理连接池能力，MySQL 8.0 主实例的内核小版本要大于等于 MySQL 8.0 20230630。</p>
                     * @return ConnectionPool <p>是否开启连接池。默认关闭。<br>注意：如需使用数据库代理连接池能力，MySQL 8.0 主实例的内核小版本要大于等于 MySQL 8.0 20230630。</p>
                     * 
                     */
                    bool GetConnectionPool() const;

                    /**
                     * 设置<p>是否开启连接池。默认关闭。<br>注意：如需使用数据库代理连接池能力，MySQL 8.0 主实例的内核小版本要大于等于 MySQL 8.0 20230630。</p>
                     * @param _connectionPool <p>是否开启连接池。默认关闭。<br>注意：如需使用数据库代理连接池能力，MySQL 8.0 主实例的内核小版本要大于等于 MySQL 8.0 20230630。</p>
                     * 
                     */
                    void SetConnectionPool(const bool& _connectionPool);

                    /**
                     * 判断参数 ConnectionPool 是否已赋值
                     * @return ConnectionPool 是否已赋值
                     * 
                     */
                    bool ConnectionPoolHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
                     * @return Desc <p>描述</p>
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _desc <p>描述</p>
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取<p>IP 地址。不填则默认为所选 VPC 下支持的随机一个 IP。</p>
                     * @return Vip <p>IP 地址。不填则默认为所选 VPC 下支持的随机一个 IP。</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>IP 地址。不填则默认为所选 VPC 下支持的随机一个 IP。</p>
                     * @param _vip <p>IP 地址。不填则默认为所选 VPC 下支持的随机一个 IP。</p>
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取<p>端口。默认值3306。</p>
                     * @return VPort <p>端口。默认值3306。</p>
                     * 
                     */
                    uint64_t GetVPort() const;

                    /**
                     * 设置<p>端口。默认值3306。</p>
                     * @param _vPort <p>端口。默认值3306。</p>
                     * 
                     */
                    void SetVPort(const uint64_t& _vPort);

                    /**
                     * 判断参数 VPort 是否已赋值
                     * @return VPort 是否已赋值
                     * 
                     */
                    bool VPortHasBeenSet() const;

                    /**
                     * 获取<p>安全组</p>
                     * @return SecurityGroup <p>安全组</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroup() const;

                    /**
                     * 设置<p>安全组</p>
                     * @param _securityGroup <p>安全组</p>
                     * 
                     */
                    void SetSecurityGroup(const std::vector<std::string>& _securityGroup);

                    /**
                     * 判断参数 SecurityGroup 是否已赋值
                     * @return SecurityGroup 是否已赋值
                     * 
                     */
                    bool SecurityGroupHasBeenSet() const;

                    /**
                     * 获取<p>连接池类型。可选值 transaction（事务级别连接池），connection（会话级别连接池），ConnectionPool 为 true 时生效。默认值：connection。</p>
                     * @return ConnectionPoolType <p>连接池类型。可选值 transaction（事务级别连接池），connection（会话级别连接池），ConnectionPool 为 true 时生效。默认值：connection。</p>
                     * 
                     */
                    std::string GetConnectionPoolType() const;

                    /**
                     * 设置<p>连接池类型。可选值 transaction（事务级别连接池），connection（会话级别连接池），ConnectionPool 为 true 时生效。默认值：connection。</p>
                     * @param _connectionPoolType <p>连接池类型。可选值 transaction（事务级别连接池），connection（会话级别连接池），ConnectionPool 为 true 时生效。默认值：connection。</p>
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
                     * 获取<p>是否开启自适应负载均衡。默认关闭。</p>
                     * @return AutoLoadBalance <p>是否开启自适应负载均衡。默认关闭。</p>
                     * 
                     */
                    bool GetAutoLoadBalance() const;

                    /**
                     * 设置<p>是否开启自适应负载均衡。默认关闭。</p>
                     * @param _autoLoadBalance <p>是否开启自适应负载均衡。默认关闭。</p>
                     * 
                     */
                    void SetAutoLoadBalance(const bool& _autoLoadBalance);

                    /**
                     * 判断参数 AutoLoadBalance 是否已赋值
                     * @return AutoLoadBalance 是否已赋值
                     * 
                     */
                    bool AutoLoadBalanceHasBeenSet() const;

                    /**
                     * 获取<p>接入模式。</p><p>枚举值：</p><ul><li>nearBy： 就近访问</li><li>balance： 均衡分配</li><li>direct_nearby： 纯网络转发就近访问</li><li>direct_balance： 纯网络转发均衡分配</li></ul><p>默认值：nearBy</p>
                     * @return AccessMode <p>接入模式。</p><p>枚举值：</p><ul><li>nearBy： 就近访问</li><li>balance： 均衡分配</li><li>direct_nearby： 纯网络转发就近访问</li><li>direct_balance： 纯网络转发均衡分配</li></ul><p>默认值：nearBy</p>
                     * 
                     */
                    std::string GetAccessMode() const;

                    /**
                     * 设置<p>接入模式。</p><p>枚举值：</p><ul><li>nearBy： 就近访问</li><li>balance： 均衡分配</li><li>direct_nearby： 纯网络转发就近访问</li><li>direct_balance： 纯网络转发均衡分配</li></ul><p>默认值：nearBy</p>
                     * @param _accessMode <p>接入模式。</p><p>枚举值：</p><ul><li>nearBy： 就近访问</li><li>balance： 均衡分配</li><li>direct_nearby： 纯网络转发就近访问</li><li>direct_balance： 纯网络转发均衡分配</li></ul><p>默认值：nearBy</p>
                     * 
                     */
                    void SetAccessMode(const std::string& _accessMode);

                    /**
                     * 判断参数 AccessMode 是否已赋值
                     * @return AccessMode 是否已赋值
                     * 
                     */
                    bool AccessModeHasBeenSet() const;

                private:

                    /**
                     * <p>代理组 ID。可通过 <a href="https://cloud.tencent.com/document/api/236/90585">DescribeCdbProxyInfo</a> 接口获取。</p>
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * <p>权重分配模式，<br>系统自动分配：&quot;system&quot;， 自定义：&quot;custom&quot;</p>
                     */
                    std::string m_weightMode;
                    bool m_weightModeHasBeenSet;

                    /**
                     * <p>是否开启延迟剔除，取值：&quot;true&quot; | &quot;false&quot;</p>
                     */
                    bool m_isKickOut;
                    bool m_isKickOutHasBeenSet;

                    /**
                     * <p>最小保留数量，最小取值：0</p>
                     */
                    uint64_t m_minCount;
                    bool m_minCountHasBeenSet;

                    /**
                     * <p>延迟剔除阈值，最小取值：1，范围：1 - 10000，整数。</p>
                     */
                    uint64_t m_maxDelay;
                    bool m_maxDelayHasBeenSet;

                    /**
                     * <p>是否开启故障转移，取值：&quot;true&quot; | &quot;false&quot;</p>
                     */
                    bool m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * <p>是否自动添加RO，取值：&quot;true&quot; | &quot;false&quot;</p>
                     */
                    bool m_autoAddRo;
                    bool m_autoAddRoHasBeenSet;

                    /**
                     * <p>是否是只读，取值：&quot;true&quot; | &quot;false&quot;</p>
                     */
                    bool m_readOnly;
                    bool m_readOnlyHasBeenSet;

                    /**
                     * <p>是否开启事务分离，取值：&quot;true&quot; | &quot;false&quot;</p>
                     */
                    bool m_transSplit;
                    bool m_transSplitHasBeenSet;

                    /**
                     * <p>读写权重分配</p>
                     */
                    std::vector<ProxyAllocation> m_proxyAllocation;
                    bool m_proxyAllocationHasBeenSet;

                    /**
                     * <p>私有网络 ID。可通过 <a href="https://cloud.tencent.com/document/product/236/15872">DescribeDBInstances</a> 接口获取。</p>
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * <p>私有子网 ID。可通过 <a href="https://cloud.tencent.com/document/product/236/15872">DescribeDBInstances</a> 接口获取。</p>
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * <p>是否开启连接池。默认关闭。<br>注意：如需使用数据库代理连接池能力，MySQL 8.0 主实例的内核小版本要大于等于 MySQL 8.0 20230630。</p>
                     */
                    bool m_connectionPool;
                    bool m_connectionPoolHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * <p>IP 地址。不填则默认为所选 VPC 下支持的随机一个 IP。</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>端口。默认值3306。</p>
                     */
                    uint64_t m_vPort;
                    bool m_vPortHasBeenSet;

                    /**
                     * <p>安全组</p>
                     */
                    std::vector<std::string> m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * <p>连接池类型。可选值 transaction（事务级别连接池），connection（会话级别连接池），ConnectionPool 为 true 时生效。默认值：connection。</p>
                     */
                    std::string m_connectionPoolType;
                    bool m_connectionPoolTypeHasBeenSet;

                    /**
                     * <p>是否开启自适应负载均衡。默认关闭。</p>
                     */
                    bool m_autoLoadBalance;
                    bool m_autoLoadBalanceHasBeenSet;

                    /**
                     * <p>接入模式。</p><p>枚举值：</p><ul><li>nearBy： 就近访问</li><li>balance： 均衡分配</li><li>direct_nearby： 纯网络转发就近访问</li><li>direct_balance： 纯网络转发均衡分配</li></ul><p>默认值：nearBy</p>
                     */
                    std::string m_accessMode;
                    bool m_accessModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CREATECDBPROXYADDRESSREQUEST_H_
