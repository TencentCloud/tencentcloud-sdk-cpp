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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEPROXYENDPOINTREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEPROXYENDPOINTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateProxyEndPoint请求参数结构体
                */
                class CreateProxyEndPointRequest : public AbstractModel
                {
                public:
                    CreateProxyEndPointRequest();
                    ~CreateProxyEndPointRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群 ID。</p>
                     * @return ClusterId <p>集群 ID。</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群 ID。</p>
                     * @param _clusterId <p>集群 ID。</p>
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
                     * 获取<p>私有网络 ID。</p>
                     * @return UniqueVpcId <p>私有网络 ID。</p>
                     * 
                     */
                    std::string GetUniqueVpcId() const;

                    /**
                     * 设置<p>私有网络 ID。</p>
                     * @param _uniqueVpcId <p>私有网络 ID。</p>
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
                     * 获取<p>私有网络子网 ID。</p>
                     * @return UniqueSubnetId <p>私有网络子网 ID。</p>
                     * 
                     */
                    std::string GetUniqueSubnetId() const;

                    /**
                     * 设置<p>私有网络子网 ID。</p>
                     * @param _uniqueSubnetId <p>私有网络子网 ID。</p>
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
                     * 获取<p>连接池类型：SessionConnectionPool（会话级别连接池）。</p>
                     * @return ConnectionPoolType <p>连接池类型：SessionConnectionPool（会话级别连接池）。</p>
                     * 
                     */
                    std::string GetConnectionPoolType() const;

                    /**
                     * 设置<p>连接池类型：SessionConnectionPool（会话级别连接池）。</p>
                     * @param _connectionPoolType <p>连接池类型：SessionConnectionPool（会话级别连接池）。</p>
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
                     * 获取<p>是否开启连接池。<br>yes：表示开启。<br>no：表示不开启。</p>
                     * @return OpenConnectionPool <p>是否开启连接池。<br>yes：表示开启。<br>no：表示不开启。</p>
                     * 
                     */
                    std::string GetOpenConnectionPool() const;

                    /**
                     * 设置<p>是否开启连接池。<br>yes：表示开启。<br>no：表示不开启。</p>
                     * @param _openConnectionPool <p>是否开启连接池。<br>yes：表示开启。<br>no：表示不开启。</p>
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
                     * 获取<p>连接池阈值：单位（秒），可选范围：0 - 300秒。</p>
                     * @return ConnectionPoolTimeOut <p>连接池阈值：单位（秒），可选范围：0 - 300秒。</p>
                     * 
                     */
                    int64_t GetConnectionPoolTimeOut() const;

                    /**
                     * 设置<p>连接池阈值：单位（秒），可选范围：0 - 300秒。</p>
                     * @param _connectionPoolTimeOut <p>连接池阈值：单位（秒），可选范围：0 - 300秒。</p>
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
                     * 获取<p>绑定的安全组 ID 数组。</p>
                     * @return SecurityGroupIds <p>绑定的安全组 ID 数组。</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>绑定的安全组 ID 数组。</p>
                     * @param _securityGroupIds <p>绑定的安全组 ID 数组。</p>
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
                     * 获取<p>描述说明。</p>
                     * @return Description <p>描述说明。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述说明。</p>
                     * @param _description <p>描述说明。</p>
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
                     * 获取<p>想要绑定的 vip 信息，需与 UniqueVpcId 对应。</p>
                     * @return Vip <p>想要绑定的 vip 信息，需与 UniqueVpcId 对应。</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>想要绑定的 vip 信息，需与 UniqueVpcId 对应。</p>
                     * @param _vip <p>想要绑定的 vip 信息，需与 UniqueVpcId 对应。</p>
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
                     * 获取<p>权重模式：<br>system：系统分配。<br>custom：自定义。</p>
                     * @return WeightMode <p>权重模式：<br>system：系统分配。<br>custom：自定义。</p>
                     * 
                     */
                    std::string GetWeightMode() const;

                    /**
                     * 设置<p>权重模式：<br>system：系统分配。<br>custom：自定义。</p>
                     * @param _weightMode <p>权重模式：<br>system：系统分配。<br>custom：自定义。</p>
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
                     * 获取<p>是否自动添加只读实例。<br>yes：表示自动添加只读实例。<br>no：表示不自动添加只读实例。</p>
                     * @return AutoAddRo <p>是否自动添加只读实例。<br>yes：表示自动添加只读实例。<br>no：表示不自动添加只读实例。</p>
                     * 
                     */
                    std::string GetAutoAddRo() const;

                    /**
                     * 设置<p>是否自动添加只读实例。<br>yes：表示自动添加只读实例。<br>no：表示不自动添加只读实例。</p>
                     * @param _autoAddRo <p>是否自动添加只读实例。<br>yes：表示自动添加只读实例。<br>no：表示不自动添加只读实例。</p>
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
                     * 获取<p>是否开启故障转移。<br>yes：表示开启，开启后，当数据库代理出现故障时，连接地址将会路由到主实例。<br>no：表示不开启。<br>说明：<br>仅当 RwType 参数值为 READWRITE 时，才支持设置此项。</p>
                     * @return FailOver <p>是否开启故障转移。<br>yes：表示开启，开启后，当数据库代理出现故障时，连接地址将会路由到主实例。<br>no：表示不开启。<br>说明：<br>仅当 RwType 参数值为 READWRITE 时，才支持设置此项。</p>
                     * 
                     */
                    std::string GetFailOver() const;

                    /**
                     * 设置<p>是否开启故障转移。<br>yes：表示开启，开启后，当数据库代理出现故障时，连接地址将会路由到主实例。<br>no：表示不开启。<br>说明：<br>仅当 RwType 参数值为 READWRITE 时，才支持设置此项。</p>
                     * @param _failOver <p>是否开启故障转移。<br>yes：表示开启，开启后，当数据库代理出现故障时，连接地址将会路由到主实例。<br>no：表示不开启。<br>说明：<br>仅当 RwType 参数值为 READWRITE 时，才支持设置此项。</p>
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
                     * 获取<p>一致性类型：<br>eventual：最终一致性。<br>global：全局一致性。<br>session：会话一致性。<br>说明：<br>仅当 RwType 参数值为 READWRITE 时，才支持设置此项。</p>
                     * @return ConsistencyType <p>一致性类型：<br>eventual：最终一致性。<br>global：全局一致性。<br>session：会话一致性。<br>说明：<br>仅当 RwType 参数值为 READWRITE 时，才支持设置此项。</p>
                     * 
                     */
                    std::string GetConsistencyType() const;

                    /**
                     * 设置<p>一致性类型：<br>eventual：最终一致性。<br>global：全局一致性。<br>session：会话一致性。<br>说明：<br>仅当 RwType 参数值为 READWRITE 时，才支持设置此项。</p>
                     * @param _consistencyType <p>一致性类型：<br>eventual：最终一致性。<br>global：全局一致性。<br>session：会话一致性。<br>说明：<br>仅当 RwType 参数值为 READWRITE 时，才支持设置此项。</p>
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
                     * 获取<p>读写属性：<br>READWRITE：表示读写分离。当此参数值为 READWRITE 时，才支持设置 FailOver、ConsistencyType 参数。<br>READONLY：表示只读。</p>
                     * @return RwType <p>读写属性：<br>READWRITE：表示读写分离。当此参数值为 READWRITE 时，才支持设置 FailOver、ConsistencyType 参数。<br>READONLY：表示只读。</p>
                     * 
                     */
                    std::string GetRwType() const;

                    /**
                     * 设置<p>读写属性：<br>READWRITE：表示读写分离。当此参数值为 READWRITE 时，才支持设置 FailOver、ConsistencyType 参数。<br>READONLY：表示只读。</p>
                     * @param _rwType <p>读写属性：<br>READWRITE：表示读写分离。当此参数值为 READWRITE 时，才支持设置 FailOver、ConsistencyType 参数。<br>READONLY：表示只读。</p>
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
                     * 获取<p>一致性超时时间。取值范围：0 ~ 1000000（微秒）。设置为0时，表示若只读实例出现延迟导致一致性策略不满足时，请求将一直等待。</p>
                     * @return ConsistencyTimeOut <p>一致性超时时间。取值范围：0 ~ 1000000（微秒）。设置为0时，表示若只读实例出现延迟导致一致性策略不满足时，请求将一直等待。</p>
                     * 
                     */
                    int64_t GetConsistencyTimeOut() const;

                    /**
                     * 设置<p>一致性超时时间。取值范围：0 ~ 1000000（微秒）。设置为0时，表示若只读实例出现延迟导致一致性策略不满足时，请求将一直等待。</p>
                     * @param _consistencyTimeOut <p>一致性超时时间。取值范围：0 ~ 1000000（微秒）。设置为0时，表示若只读实例出现延迟导致一致性策略不满足时，请求将一直等待。</p>
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
                     * 获取<p>是否开启事务拆分。开启后，在一个事务中拆分读和写到不同的实例上去执行。</p>
                     * @return TransSplit <p>是否开启事务拆分。开启后，在一个事务中拆分读和写到不同的实例上去执行。</p>
                     * 
                     */
                    bool GetTransSplit() const;

                    /**
                     * 设置<p>是否开启事务拆分。开启后，在一个事务中拆分读和写到不同的实例上去执行。</p>
                     * @param _transSplit <p>是否开启事务拆分。开启后，在一个事务中拆分读和写到不同的实例上去执行。</p>
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
                     * 获取<p>接入模式：<br>nearby：就近访问。<br>balance：均衡分配。</p>
                     * @return AccessMode <p>接入模式：<br>nearby：就近访问。<br>balance：均衡分配。</p>
                     * 
                     */
                    std::string GetAccessMode() const;

                    /**
                     * 设置<p>接入模式：<br>nearby：就近访问。<br>balance：均衡分配。</p>
                     * @param _accessMode <p>接入模式：<br>nearby：就近访问。<br>balance：均衡分配。</p>
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
                     * 获取<p>实例权重。</p>
                     * @return InstanceWeights <p>实例权重。</p>
                     * 
                     */
                    std::vector<ProxyInstanceWeight> GetInstanceWeights() const;

                    /**
                     * 设置<p>实例权重。</p>
                     * @param _instanceWeights <p>实例权重。</p>
                     * 
                     */
                    void SetInstanceWeights(const std::vector<ProxyInstanceWeight>& _instanceWeights);

                    /**
                     * 判断参数 InstanceWeights 是否已赋值
                     * @return InstanceWeights 是否已赋值
                     * 
                     */
                    bool InstanceWeightsHasBeenSet() const;

                private:

                    /**
                     * <p>集群 ID。</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>私有网络 ID。</p>
                     */
                    std::string m_uniqueVpcId;
                    bool m_uniqueVpcIdHasBeenSet;

                    /**
                     * <p>私有网络子网 ID。</p>
                     */
                    std::string m_uniqueSubnetId;
                    bool m_uniqueSubnetIdHasBeenSet;

                    /**
                     * <p>连接池类型：SessionConnectionPool（会话级别连接池）。</p>
                     */
                    std::string m_connectionPoolType;
                    bool m_connectionPoolTypeHasBeenSet;

                    /**
                     * <p>是否开启连接池。<br>yes：表示开启。<br>no：表示不开启。</p>
                     */
                    std::string m_openConnectionPool;
                    bool m_openConnectionPoolHasBeenSet;

                    /**
                     * <p>连接池阈值：单位（秒），可选范围：0 - 300秒。</p>
                     */
                    int64_t m_connectionPoolTimeOut;
                    bool m_connectionPoolTimeOutHasBeenSet;

                    /**
                     * <p>绑定的安全组 ID 数组。</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>描述说明。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>想要绑定的 vip 信息，需与 UniqueVpcId 对应。</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>权重模式：<br>system：系统分配。<br>custom：自定义。</p>
                     */
                    std::string m_weightMode;
                    bool m_weightModeHasBeenSet;

                    /**
                     * <p>是否自动添加只读实例。<br>yes：表示自动添加只读实例。<br>no：表示不自动添加只读实例。</p>
                     */
                    std::string m_autoAddRo;
                    bool m_autoAddRoHasBeenSet;

                    /**
                     * <p>是否开启故障转移。<br>yes：表示开启，开启后，当数据库代理出现故障时，连接地址将会路由到主实例。<br>no：表示不开启。<br>说明：<br>仅当 RwType 参数值为 READWRITE 时，才支持设置此项。</p>
                     */
                    std::string m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * <p>一致性类型：<br>eventual：最终一致性。<br>global：全局一致性。<br>session：会话一致性。<br>说明：<br>仅当 RwType 参数值为 READWRITE 时，才支持设置此项。</p>
                     */
                    std::string m_consistencyType;
                    bool m_consistencyTypeHasBeenSet;

                    /**
                     * <p>读写属性：<br>READWRITE：表示读写分离。当此参数值为 READWRITE 时，才支持设置 FailOver、ConsistencyType 参数。<br>READONLY：表示只读。</p>
                     */
                    std::string m_rwType;
                    bool m_rwTypeHasBeenSet;

                    /**
                     * <p>一致性超时时间。取值范围：0 ~ 1000000（微秒）。设置为0时，表示若只读实例出现延迟导致一致性策略不满足时，请求将一直等待。</p>
                     */
                    int64_t m_consistencyTimeOut;
                    bool m_consistencyTimeOutHasBeenSet;

                    /**
                     * <p>是否开启事务拆分。开启后，在一个事务中拆分读和写到不同的实例上去执行。</p>
                     */
                    bool m_transSplit;
                    bool m_transSplitHasBeenSet;

                    /**
                     * <p>接入模式：<br>nearby：就近访问。<br>balance：均衡分配。</p>
                     */
                    std::string m_accessMode;
                    bool m_accessModeHasBeenSet;

                    /**
                     * <p>实例权重。</p>
                     */
                    std::vector<ProxyInstanceWeight> m_instanceWeights;
                    bool m_instanceWeightsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEPROXYENDPOINTREQUEST_H_
