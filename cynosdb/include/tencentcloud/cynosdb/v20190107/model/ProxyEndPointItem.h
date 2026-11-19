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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYENDPOINTITEM_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYENDPOINTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ProxyInstanceWeight.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 批量proxy接入点配置
                */
                class ProxyEndPointItem : public AbstractModel
                {
                public:
                    ProxyEndPointItem();
                    ~ProxyEndPointItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>vpc id</p>
                     * @return UniqueVpcId <p>vpc id</p>
                     * 
                     */
                    std::string GetUniqueVpcId() const;

                    /**
                     * 设置<p>vpc id</p>
                     * @param _uniqueVpcId <p>vpc id</p>
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
                     * 获取<p>子网ID</p>
                     * @return UniqueSubnetId <p>子网ID</p>
                     * 
                     */
                    std::string GetUniqueSubnetId() const;

                    /**
                     * 设置<p>子网ID</p>
                     * @param _uniqueSubnetId <p>子网ID</p>
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
                     * 获取<p>安全组列表</p>
                     * @return SecurityGroupIds <p>安全组列表</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>安全组列表</p>
                     * @param _securityGroupIds <p>安全组列表</p>
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
                     * 获取<p>权重模式</p><p>枚举值：</p><ul><li>system： 系统分配</li><li>custom： 自定义</li></ul>
                     * @return WeightMode <p>权重模式</p><p>枚举值：</p><ul><li>system： 系统分配</li><li>custom： 自定义</li></ul>
                     * 
                     */
                    std::string GetWeightMode() const;

                    /**
                     * 设置<p>权重模式</p><p>枚举值：</p><ul><li>system： 系统分配</li><li>custom： 自定义</li></ul>
                     * @param _weightMode <p>权重模式</p><p>枚举值：</p><ul><li>system： 系统分配</li><li>custom： 自定义</li></ul>
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
                     * 获取<p>是否自动添加只读实例</p><p>枚举值：</p><ul><li>yes： 是</li><li>no： 否</li></ul>
                     * @return AutoAddRo <p>是否自动添加只读实例</p><p>枚举值：</p><ul><li>yes： 是</li><li>no： 否</li></ul>
                     * 
                     */
                    std::string GetAutoAddRo() const;

                    /**
                     * 设置<p>是否自动添加只读实例</p><p>枚举值：</p><ul><li>yes： 是</li><li>no： 否</li></ul>
                     * @param _autoAddRo <p>是否自动添加只读实例</p><p>枚举值：</p><ul><li>yes： 是</li><li>no： 否</li></ul>
                     * 
                     */
                    void SetAutoAddRo(const std::string& _autoAddRo);

                    /**
                     * 判断参数 AutoAddRo 是否已赋值
                     * @return AutoAddRo 是否已赋值
                     * 
                     */
                    bool AutoAddRoHasBeenSet() const;

                    /**
                     * 获取<p>读写类型</p><p>枚举值：</p><ul><li>READWRITE： 读写</li><li>READONLY： 只读</li></ul>
                     * @return RwType <p>读写类型</p><p>枚举值：</p><ul><li>READWRITE： 读写</li><li>READONLY： 只读</li></ul>
                     * 
                     */
                    std::string GetRwType() const;

                    /**
                     * 设置<p>读写类型</p><p>枚举值：</p><ul><li>READWRITE： 读写</li><li>READONLY： 只读</li></ul>
                     * @param _rwType <p>读写类型</p><p>枚举值：</p><ul><li>READWRITE： 读写</li><li>READONLY： 只读</li></ul>
                     * 
                     */
                    void SetRwType(const std::string& _rwType);

                    /**
                     * 判断参数 RwType 是否已赋值
                     * @return RwType 是否已赋值
                     * 
                     */
                    bool RwTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否开启故障转移</p><p>枚举值：</p><ul><li>yes： 是</li><li>no： 否</li></ul>
                     * @return FailOver <p>是否开启故障转移</p><p>枚举值：</p><ul><li>yes： 是</li><li>no： 否</li></ul>
                     * 
                     */
                    std::string GetFailOver() const;

                    /**
                     * 设置<p>是否开启故障转移</p><p>枚举值：</p><ul><li>yes： 是</li><li>no： 否</li></ul>
                     * @param _failOver <p>是否开启故障转移</p><p>枚举值：</p><ul><li>yes： 是</li><li>no： 否</li></ul>
                     * 
                     */
                    void SetFailOver(const std::string& _failOver);

                    /**
                     * 判断参数 FailOver 是否已赋值
                     * @return FailOver 是否已赋值
                     * 
                     */
                    bool FailOverHasBeenSet() const;

                    /**
                     * 获取<p>一致性超时时间</p>
                     * @return ConsistencyTimeOut <p>一致性超时时间</p>
                     * 
                     */
                    int64_t GetConsistencyTimeOut() const;

                    /**
                     * 设置<p>一致性超时时间</p>
                     * @param _consistencyTimeOut <p>一致性超时时间</p>
                     * 
                     */
                    void SetConsistencyTimeOut(const int64_t& _consistencyTimeOut);

                    /**
                     * 判断参数 ConsistencyTimeOut 是否已赋值
                     * @return ConsistencyTimeOut 是否已赋值
                     * 
                     */
                    bool ConsistencyTimeOutHasBeenSet() const;

                    /**
                     * 获取<p>一致性类型。</p><p>枚举值：</p><ul><li>eventual： 最终一致性</li><li>global： 全局一致性</li><li>session： 会话一致性</li></ul><p>仅当 RwType 参数值为 READWRITE 时，才支持设置此项。</p>
                     * @return ConsistencyType <p>一致性类型。</p><p>枚举值：</p><ul><li>eventual： 最终一致性</li><li>global： 全局一致性</li><li>session： 会话一致性</li></ul><p>仅当 RwType 参数值为 READWRITE 时，才支持设置此项。</p>
                     * 
                     */
                    std::string GetConsistencyType() const;

                    /**
                     * 设置<p>一致性类型。</p><p>枚举值：</p><ul><li>eventual： 最终一致性</li><li>global： 全局一致性</li><li>session： 会话一致性</li></ul><p>仅当 RwType 参数值为 READWRITE 时，才支持设置此项。</p>
                     * @param _consistencyType <p>一致性类型。</p><p>枚举值：</p><ul><li>eventual： 最终一致性</li><li>global： 全局一致性</li><li>session： 会话一致性</li></ul><p>仅当 RwType 参数值为 READWRITE 时，才支持设置此项。</p>
                     * 
                     */
                    void SetConsistencyType(const std::string& _consistencyType);

                    /**
                     * 判断参数 ConsistencyType 是否已赋值
                     * @return ConsistencyType 是否已赋值
                     * 
                     */
                    bool ConsistencyTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否开启事务拆分。</p><p>开启后，在一个事务中拆分读和写到不同的实例上去执行。</p>
                     * @return TransSplit <p>是否开启事务拆分。</p><p>开启后，在一个事务中拆分读和写到不同的实例上去执行。</p>
                     * 
                     */
                    bool GetTransSplit() const;

                    /**
                     * 设置<p>是否开启事务拆分。</p><p>开启后，在一个事务中拆分读和写到不同的实例上去执行。</p>
                     * @param _transSplit <p>是否开启事务拆分。</p><p>开启后，在一个事务中拆分读和写到不同的实例上去执行。</p>
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
                     * 获取<p>接入模式</p><p>枚举值：</p><ul><li>nearby： 就近访问</li><li>balance： 均衡分配</li></ul>
                     * @return AccessMode <p>接入模式</p><p>枚举值：</p><ul><li>nearby： 就近访问</li><li>balance： 均衡分配</li></ul>
                     * 
                     */
                    std::string GetAccessMode() const;

                    /**
                     * 设置<p>接入模式</p><p>枚举值：</p><ul><li>nearby： 就近访问</li><li>balance： 均衡分配</li></ul>
                     * @param _accessMode <p>接入模式</p><p>枚举值：</p><ul><li>nearby： 就近访问</li><li>balance： 均衡分配</li></ul>
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
                     * 获取<p>实例及权重</p>
                     * @return InstanceWeights <p>实例及权重</p>
                     * 
                     */
                    std::vector<ProxyInstanceWeight> GetInstanceWeights() const;

                    /**
                     * 设置<p>实例及权重</p>
                     * @param _instanceWeights <p>实例及权重</p>
                     * 
                     */
                    void SetInstanceWeights(const std::vector<ProxyInstanceWeight>& _instanceWeights);

                    /**
                     * 判断参数 InstanceWeights 是否已赋值
                     * @return InstanceWeights 是否已赋值
                     * 
                     */
                    bool InstanceWeightsHasBeenSet() const;

                    /**
                     * 获取<p>描述信息</p>
                     * @return Description <p>描述信息</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述信息</p>
                     * @param _description <p>描述信息</p>
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
                     * 获取<p>自动负载模式</p><p>枚举值：</p><ul><li>static： 静态</li><li>dynamic： 自适应</li></ul>
                     * @return LoadBalanceMode <p>自动负载模式</p><p>枚举值：</p><ul><li>static： 静态</li><li>dynamic： 自适应</li></ul>
                     * 
                     */
                    std::string GetLoadBalanceMode() const;

                    /**
                     * 设置<p>自动负载模式</p><p>枚举值：</p><ul><li>static： 静态</li><li>dynamic： 自适应</li></ul>
                     * @param _loadBalanceMode <p>自动负载模式</p><p>枚举值：</p><ul><li>static： 静态</li><li>dynamic： 自适应</li></ul>
                     * 
                     */
                    void SetLoadBalanceMode(const std::string& _loadBalanceMode);

                    /**
                     * 判断参数 LoadBalanceMode 是否已赋值
                     * @return LoadBalanceMode 是否已赋值
                     * 
                     */
                    bool LoadBalanceModeHasBeenSet() const;

                    /**
                     * 获取<p>是否开启连接池</p><p>枚举值：</p><ul><li>yes： 打开</li><li>no： 不打开</li></ul>
                     * @return OpenConnectionPool <p>是否开启连接池</p><p>枚举值：</p><ul><li>yes： 打开</li><li>no： 不打开</li></ul>
                     * 
                     */
                    std::string GetOpenConnectionPool() const;

                    /**
                     * 设置<p>是否开启连接池</p><p>枚举值：</p><ul><li>yes： 打开</li><li>no： 不打开</li></ul>
                     * @param _openConnectionPool <p>是否开启连接池</p><p>枚举值：</p><ul><li>yes： 打开</li><li>no： 不打开</li></ul>
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
                     * 获取<p>连接池类型</p><p>枚举值：</p><ul><li>SessionConnectionPool： 会话级连接池</li><li>TransactionConnectionPool： 事物级连接池</li></ul>
                     * @return ConnectionPoolType <p>连接池类型</p><p>枚举值：</p><ul><li>SessionConnectionPool： 会话级连接池</li><li>TransactionConnectionPool： 事物级连接池</li></ul>
                     * 
                     */
                    std::string GetConnectionPoolType() const;

                    /**
                     * 设置<p>连接池类型</p><p>枚举值：</p><ul><li>SessionConnectionPool： 会话级连接池</li><li>TransactionConnectionPool： 事物级连接池</li></ul>
                     * @param _connectionPoolType <p>连接池类型</p><p>枚举值：</p><ul><li>SessionConnectionPool： 会话级连接池</li><li>TransactionConnectionPool： 事物级连接池</li></ul>
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
                     * 获取<p>连接池阀值</p>
                     * @return ConnectionPoolTimeOut <p>连接池阀值</p>
                     * 
                     */
                    int64_t GetConnectionPoolTimeOut() const;

                    /**
                     * 设置<p>连接池阀值</p>
                     * @param _connectionPoolTimeOut <p>连接池阀值</p>
                     * 
                     */
                    void SetConnectionPoolTimeOut(const int64_t& _connectionPoolTimeOut);

                    /**
                     * 判断参数 ConnectionPoolTimeOut 是否已赋值
                     * @return ConnectionPoolTimeOut 是否已赋值
                     * 
                     */
                    bool ConnectionPoolTimeOutHasBeenSet() const;

                private:

                    /**
                     * <p>vpc id</p>
                     */
                    std::string m_uniqueVpcId;
                    bool m_uniqueVpcIdHasBeenSet;

                    /**
                     * <p>子网ID</p>
                     */
                    std::string m_uniqueSubnetId;
                    bool m_uniqueSubnetIdHasBeenSet;

                    /**
                     * <p>安全组列表</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>权重模式</p><p>枚举值：</p><ul><li>system： 系统分配</li><li>custom： 自定义</li></ul>
                     */
                    std::string m_weightMode;
                    bool m_weightModeHasBeenSet;

                    /**
                     * <p>是否自动添加只读实例</p><p>枚举值：</p><ul><li>yes： 是</li><li>no： 否</li></ul>
                     */
                    std::string m_autoAddRo;
                    bool m_autoAddRoHasBeenSet;

                    /**
                     * <p>读写类型</p><p>枚举值：</p><ul><li>READWRITE： 读写</li><li>READONLY： 只读</li></ul>
                     */
                    std::string m_rwType;
                    bool m_rwTypeHasBeenSet;

                    /**
                     * <p>是否开启故障转移</p><p>枚举值：</p><ul><li>yes： 是</li><li>no： 否</li></ul>
                     */
                    std::string m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * <p>一致性超时时间</p>
                     */
                    int64_t m_consistencyTimeOut;
                    bool m_consistencyTimeOutHasBeenSet;

                    /**
                     * <p>一致性类型。</p><p>枚举值：</p><ul><li>eventual： 最终一致性</li><li>global： 全局一致性</li><li>session： 会话一致性</li></ul><p>仅当 RwType 参数值为 READWRITE 时，才支持设置此项。</p>
                     */
                    std::string m_consistencyType;
                    bool m_consistencyTypeHasBeenSet;

                    /**
                     * <p>是否开启事务拆分。</p><p>开启后，在一个事务中拆分读和写到不同的实例上去执行。</p>
                     */
                    bool m_transSplit;
                    bool m_transSplitHasBeenSet;

                    /**
                     * <p>接入模式</p><p>枚举值：</p><ul><li>nearby： 就近访问</li><li>balance： 均衡分配</li></ul>
                     */
                    std::string m_accessMode;
                    bool m_accessModeHasBeenSet;

                    /**
                     * <p>实例及权重</p>
                     */
                    std::vector<ProxyInstanceWeight> m_instanceWeights;
                    bool m_instanceWeightsHasBeenSet;

                    /**
                     * <p>描述信息</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>自动负载模式</p><p>枚举值：</p><ul><li>static： 静态</li><li>dynamic： 自适应</li></ul>
                     */
                    std::string m_loadBalanceMode;
                    bool m_loadBalanceModeHasBeenSet;

                    /**
                     * <p>是否开启连接池</p><p>枚举值：</p><ul><li>yes： 打开</li><li>no： 不打开</li></ul>
                     */
                    std::string m_openConnectionPool;
                    bool m_openConnectionPoolHasBeenSet;

                    /**
                     * <p>连接池类型</p><p>枚举值：</p><ul><li>SessionConnectionPool： 会话级连接池</li><li>TransactionConnectionPool： 事物级连接池</li></ul>
                     */
                    std::string m_connectionPoolType;
                    bool m_connectionPoolTypeHasBeenSet;

                    /**
                     * <p>连接池阀值</p>
                     */
                    int64_t m_connectionPoolTimeOut;
                    bool m_connectionPoolTimeOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYENDPOINTITEM_H_
