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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_PROXYADDRESS_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_PROXYADDRESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 数据库代理地址信息
                */
                class ProxyAddress : public AbstractModel
                {
                public:
                    ProxyAddress();
                    ~ProxyAddress() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>代理组地址ID</p>
                     * @return ProxyAddressId <p>代理组地址ID</p>
                     * 
                     */
                    std::string GetProxyAddressId() const;

                    /**
                     * 设置<p>代理组地址ID</p>
                     * @param _proxyAddressId <p>代理组地址ID</p>
                     * 
                     */
                    void SetProxyAddressId(const std::string& _proxyAddressId);

                    /**
                     * 判断参数 ProxyAddressId 是否已赋值
                     * @return ProxyAddressId 是否已赋值
                     * 
                     */
                    bool ProxyAddressIdHasBeenSet() const;

                    /**
                     * 获取<p>私有网络ID</p>
                     * @return UniqVpcId <p>私有网络ID</p>
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置<p>私有网络ID</p>
                     * @param _uniqVpcId <p>私有网络ID</p>
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
                     * 获取<p>私有子网ID</p>
                     * @return UniqSubnetId <p>私有子网ID</p>
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置<p>私有子网ID</p>
                     * @param _uniqSubnetId <p>私有子网ID</p>
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
                     * 获取<p>IP地址</p>
                     * @return Vip <p>IP地址</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>IP地址</p>
                     * @param _vip <p>IP地址</p>
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
                     * 获取<p>端口</p>
                     * @return VPort <p>端口</p>
                     * 
                     */
                    uint64_t GetVPort() const;

                    /**
                     * 设置<p>端口</p>
                     * @param _vPort <p>端口</p>
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
                     * 获取<p>权重分配模式；<br>系统自动分配：&quot;system&quot;， 自定义：&quot;custom&quot;</p>
                     * @return WeightMode <p>权重分配模式；<br>系统自动分配：&quot;system&quot;， 自定义：&quot;custom&quot;</p>
                     * 
                     */
                    std::string GetWeightMode() const;

                    /**
                     * 设置<p>权重分配模式；<br>系统自动分配：&quot;system&quot;， 自定义：&quot;custom&quot;</p>
                     * @param _weightMode <p>权重分配模式；<br>系统自动分配：&quot;system&quot;， 自定义：&quot;custom&quot;</p>
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
                     * 获取<p>延迟剔除阈值，最小取值：0</p>
                     * @return MaxDelay <p>延迟剔除阈值，最小取值：0</p>
                     * 
                     */
                    uint64_t GetMaxDelay() const;

                    /**
                     * 设置<p>延迟剔除阈值，最小取值：0</p>
                     * @param _maxDelay <p>延迟剔除阈值，最小取值：0</p>
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
                     * 获取<p>是否开启事务分离</p>
                     * @return TransSplit <p>是否开启事务分离</p>
                     * 
                     */
                    bool GetTransSplit() const;

                    /**
                     * 设置<p>是否开启事务分离</p>
                     * @param _transSplit <p>是否开启事务分离</p>
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
                     * 获取<p>是否开启故障转移</p>
                     * @return FailOver <p>是否开启故障转移</p>
                     * 
                     */
                    bool GetFailOver() const;

                    /**
                     * 设置<p>是否开启故障转移</p>
                     * @param _failOver <p>是否开启故障转移</p>
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
                     * 获取<p>是否开启连接池</p>
                     * @return ConnectionPool <p>是否开启连接池</p>
                     * 
                     */
                    bool GetConnectionPool() const;

                    /**
                     * 设置<p>是否开启连接池</p>
                     * @param _connectionPool <p>是否开启连接池</p>
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
                     * 获取<p>实例读权重分配</p>
                     * @return ProxyAllocation <p>实例读权重分配</p>
                     * 
                     */
                    std::vector<ProxyAllocation> GetProxyAllocation() const;

                    /**
                     * 设置<p>实例读权重分配</p>
                     * @param _proxyAllocation <p>实例读权重分配</p>
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
                     * 获取<p>接入模式</p><p>枚举值：</p><ul><li>nearby： 就近访问</li><li>balance： 均衡分配</li><li>direct_nearby： 纯网络转发就近访问</li><li>direct_balance： 纯网络转发均衡分配</li></ul>
                     * @return AccessMode <p>接入模式</p><p>枚举值：</p><ul><li>nearby： 就近访问</li><li>balance： 均衡分配</li><li>direct_nearby： 纯网络转发就近访问</li><li>direct_balance： 纯网络转发均衡分配</li></ul>
                     * 
                     */
                    std::string GetAccessMode() const;

                    /**
                     * 设置<p>接入模式</p><p>枚举值：</p><ul><li>nearby： 就近访问</li><li>balance： 均衡分配</li><li>direct_nearby： 纯网络转发就近访问</li><li>direct_balance： 纯网络转发均衡分配</li></ul>
                     * @param _accessMode <p>接入模式</p><p>枚举值：</p><ul><li>nearby： 就近访问</li><li>balance： 均衡分配</li><li>direct_nearby： 纯网络转发就近访问</li><li>direct_balance： 纯网络转发均衡分配</li></ul>
                     * 
                     */
                    void SetAccessMode(const std::string& _accessMode);

                    /**
                     * 判断参数 AccessMode 是否已赋值
                     * @return AccessMode 是否已赋值
                     * 
                     */
                    bool AccessModeHasBeenSet() const;

                    /**
                     * 获取<p>是否开启自动负载均衡</p>
                     * @return AutoLoadBalance <p>是否开启自动负载均衡</p>
                     * 
                     */
                    bool GetAutoLoadBalance() const;

                    /**
                     * 设置<p>是否开启自动负载均衡</p>
                     * @param _autoLoadBalance <p>是否开启自动负载均衡</p>
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
                     * 获取<p>是否把libra当作ro节点</p>
                     * @return ApNodeAsRoNode <p>是否把libra当作ro节点</p>
                     * 
                     */
                    bool GetApNodeAsRoNode() const;

                    /**
                     * 设置<p>是否把libra当作ro节点</p>
                     * @param _apNodeAsRoNode <p>是否把libra当作ro节点</p>
                     * 
                     */
                    void SetApNodeAsRoNode(const bool& _apNodeAsRoNode);

                    /**
                     * 判断参数 ApNodeAsRoNode 是否已赋值
                     * @return ApNodeAsRoNode 是否已赋值
                     * 
                     */
                    bool ApNodeAsRoNodeHasBeenSet() const;

                    /**
                     * 获取<p>libra节点故障，是否转发给其他节点</p>
                     * @return ApQueryToOtherNode <p>libra节点故障，是否转发给其他节点</p>
                     * 
                     */
                    bool GetApQueryToOtherNode() const;

                    /**
                     * 设置<p>libra节点故障，是否转发给其他节点</p>
                     * @param _apQueryToOtherNode <p>libra节点故障，是否转发给其他节点</p>
                     * 
                     */
                    void SetApQueryToOtherNode(const bool& _apQueryToOtherNode);

                    /**
                     * 判断参数 ApQueryToOtherNode 是否已赋值
                     * @return ApQueryToOtherNode 是否已赋值
                     * 
                     */
                    bool ApQueryToOtherNodeHasBeenSet() const;

                    /**
                     * 获取<p>地址所在地域名</p>
                     * @return Region <p>地址所在地域名</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地址所在地域名</p>
                     * @param _region <p>地址所在地域名</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * <p>代理组地址ID</p>
                     */
                    std::string m_proxyAddressId;
                    bool m_proxyAddressIdHasBeenSet;

                    /**
                     * <p>私有网络ID</p>
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * <p>私有子网ID</p>
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * <p>IP地址</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>端口</p>
                     */
                    uint64_t m_vPort;
                    bool m_vPortHasBeenSet;

                    /**
                     * <p>权重分配模式；<br>系统自动分配：&quot;system&quot;， 自定义：&quot;custom&quot;</p>
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
                     * <p>延迟剔除阈值，最小取值：0</p>
                     */
                    uint64_t m_maxDelay;
                    bool m_maxDelayHasBeenSet;

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
                     * <p>是否开启事务分离</p>
                     */
                    bool m_transSplit;
                    bool m_transSplitHasBeenSet;

                    /**
                     * <p>是否开启故障转移</p>
                     */
                    bool m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * <p>是否开启连接池</p>
                     */
                    bool m_connectionPool;
                    bool m_connectionPoolHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * <p>实例读权重分配</p>
                     */
                    std::vector<ProxyAllocation> m_proxyAllocation;
                    bool m_proxyAllocationHasBeenSet;

                    /**
                     * <p>接入模式</p><p>枚举值：</p><ul><li>nearby： 就近访问</li><li>balance： 均衡分配</li><li>direct_nearby： 纯网络转发就近访问</li><li>direct_balance： 纯网络转发均衡分配</li></ul>
                     */
                    std::string m_accessMode;
                    bool m_accessModeHasBeenSet;

                    /**
                     * <p>是否开启自动负载均衡</p>
                     */
                    bool m_autoLoadBalance;
                    bool m_autoLoadBalanceHasBeenSet;

                    /**
                     * <p>是否把libra当作ro节点</p>
                     */
                    bool m_apNodeAsRoNode;
                    bool m_apNodeAsRoNodeHasBeenSet;

                    /**
                     * <p>libra节点故障，是否转发给其他节点</p>
                     */
                    bool m_apQueryToOtherNode;
                    bool m_apQueryToOtherNodeHasBeenSet;

                    /**
                     * <p>地址所在地域名</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_PROXYADDRESS_H_
