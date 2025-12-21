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
                     * 获取集群 ID。
                     * @return ClusterId 集群 ID。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群 ID。
                     * @param _clusterId 集群 ID。
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
                     * 获取私有网络 ID，默认与集群私有网络 ID 保持一致。
                     * @return UniqueVpcId 私有网络 ID，默认与集群私有网络 ID 保持一致。
                     * 
                     */
                    std::string GetUniqueVpcId() const;

                    /**
                     * 设置私有网络 ID，默认与集群私有网络 ID 保持一致。
                     * @param _uniqueVpcId 私有网络 ID，默认与集群私有网络 ID 保持一致。
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
                     * 获取私有网络子网 ID，默认与集群子网 ID 保持一致。
                     * @return UniqueSubnetId 私有网络子网 ID，默认与集群子网 ID 保持一致。
                     * 
                     */
                    std::string GetUniqueSubnetId() const;

                    /**
                     * 设置私有网络子网 ID，默认与集群子网 ID 保持一致。
                     * @param _uniqueSubnetId 私有网络子网 ID，默认与集群子网 ID 保持一致。
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
                     * 获取连接池类型：SessionConnectionPool（会话级别连接池）。
                     * @return ConnectionPoolType 连接池类型：SessionConnectionPool（会话级别连接池）。
                     * 
                     */
                    std::string GetConnectionPoolType() const;

                    /**
                     * 设置连接池类型：SessionConnectionPool（会话级别连接池）。
                     * @param _connectionPoolType 连接池类型：SessionConnectionPool（会话级别连接池）。
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
                     * 获取是否开启连接池。
yes：表示开启。
no：表示不开启。
                     * @return OpenConnectionPool 是否开启连接池。
yes：表示开启。
no：表示不开启。
                     * 
                     */
                    std::string GetOpenConnectionPool() const;

                    /**
                     * 设置是否开启连接池。
yes：表示开启。
no：表示不开启。
                     * @param _openConnectionPool 是否开启连接池。
yes：表示开启。
no：表示不开启。
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
                     * 获取连接池阈值：单位（秒），可选范围：0 - 300秒。
                     * @return ConnectionPoolTimeOut 连接池阈值：单位（秒），可选范围：0 - 300秒。
                     * 
                     */
                    int64_t GetConnectionPoolTimeOut() const;

                    /**
                     * 设置连接池阈值：单位（秒），可选范围：0 - 300秒。
                     * @param _connectionPoolTimeOut 连接池阈值：单位（秒），可选范围：0 - 300秒。
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
                     * 获取绑定的安全组 ID 数组。
                     * @return SecurityGroupIds 绑定的安全组 ID 数组。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置绑定的安全组 ID 数组。
                     * @param _securityGroupIds 绑定的安全组 ID 数组。
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
                     * 获取描述说明。
                     * @return Description 描述说明。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述说明。
                     * @param _description 描述说明。
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
                     * 获取想要绑定的 vip 信息，需与 UniqueVpcId 对应。
                     * @return Vip 想要绑定的 vip 信息，需与 UniqueVpcId 对应。
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置想要绑定的 vip 信息，需与 UniqueVpcId 对应。
                     * @param _vip 想要绑定的 vip 信息，需与 UniqueVpcId 对应。
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
                     * 获取权重模式：
system：系统分配。
custom：自定义。
                     * @return WeightMode 权重模式：
system：系统分配。
custom：自定义。
                     * 
                     */
                    std::string GetWeightMode() const;

                    /**
                     * 设置权重模式：
system：系统分配。
custom：自定义。
                     * @param _weightMode 权重模式：
system：系统分配。
custom：自定义。
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
                     * 获取是否自动添加只读实例。
yes：表示自动添加只读实例。
no：表示不自动添加只读实例。
                     * @return AutoAddRo 是否自动添加只读实例。
yes：表示自动添加只读实例。
no：表示不自动添加只读实例。
                     * 
                     */
                    std::string GetAutoAddRo() const;

                    /**
                     * 设置是否自动添加只读实例。
yes：表示自动添加只读实例。
no：表示不自动添加只读实例。
                     * @param _autoAddRo 是否自动添加只读实例。
yes：表示自动添加只读实例。
no：表示不自动添加只读实例。
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
                     * 获取是否开启故障转移。
yes：表示开启，开启后，当数据库代理出现故障时，连接地址将会路由到主实例。
no：表示不开启。
说明：
仅当 RwType 参数值为 READWRITE 时，才支持设置此项。
                     * @return FailOver 是否开启故障转移。
yes：表示开启，开启后，当数据库代理出现故障时，连接地址将会路由到主实例。
no：表示不开启。
说明：
仅当 RwType 参数值为 READWRITE 时，才支持设置此项。
                     * 
                     */
                    std::string GetFailOver() const;

                    /**
                     * 设置是否开启故障转移。
yes：表示开启，开启后，当数据库代理出现故障时，连接地址将会路由到主实例。
no：表示不开启。
说明：
仅当 RwType 参数值为 READWRITE 时，才支持设置此项。
                     * @param _failOver 是否开启故障转移。
yes：表示开启，开启后，当数据库代理出现故障时，连接地址将会路由到主实例。
no：表示不开启。
说明：
仅当 RwType 参数值为 READWRITE 时，才支持设置此项。
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
                     * 获取一致性类型：
eventual：最终一致性。
global：全局一致性。
session：会话一致性。
说明：
仅当 RwType 参数值为 READWRITE 时，才支持设置此项。
                     * @return ConsistencyType 一致性类型：
eventual：最终一致性。
global：全局一致性。
session：会话一致性。
说明：
仅当 RwType 参数值为 READWRITE 时，才支持设置此项。
                     * 
                     */
                    std::string GetConsistencyType() const;

                    /**
                     * 设置一致性类型：
eventual：最终一致性。
global：全局一致性。
session：会话一致性。
说明：
仅当 RwType 参数值为 READWRITE 时，才支持设置此项。
                     * @param _consistencyType 一致性类型：
eventual：最终一致性。
global：全局一致性。
session：会话一致性。
说明：
仅当 RwType 参数值为 READWRITE 时，才支持设置此项。
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
                     * 获取读写属性：
READWRITE：表示读写分离。当此参数值为 READWRITE 时，才支持设置 FailOver、ConsistencyType 参数。
READONLY：表示只读。
                     * @return RwType 读写属性：
READWRITE：表示读写分离。当此参数值为 READWRITE 时，才支持设置 FailOver、ConsistencyType 参数。
READONLY：表示只读。
                     * 
                     */
                    std::string GetRwType() const;

                    /**
                     * 设置读写属性：
READWRITE：表示读写分离。当此参数值为 READWRITE 时，才支持设置 FailOver、ConsistencyType 参数。
READONLY：表示只读。
                     * @param _rwType 读写属性：
READWRITE：表示读写分离。当此参数值为 READWRITE 时，才支持设置 FailOver、ConsistencyType 参数。
READONLY：表示只读。
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
                     * 获取一致性超时时间。取值范围：0 ~ 1000000（微秒）。设置为0时，表示若只读实例出现延迟导致一致性策略不满足时，请求将一直等待。
                     * @return ConsistencyTimeOut 一致性超时时间。取值范围：0 ~ 1000000（微秒）。设置为0时，表示若只读实例出现延迟导致一致性策略不满足时，请求将一直等待。
                     * 
                     */
                    int64_t GetConsistencyTimeOut() const;

                    /**
                     * 设置一致性超时时间。取值范围：0 ~ 1000000（微秒）。设置为0时，表示若只读实例出现延迟导致一致性策略不满足时，请求将一直等待。
                     * @param _consistencyTimeOut 一致性超时时间。取值范围：0 ~ 1000000（微秒）。设置为0时，表示若只读实例出现延迟导致一致性策略不满足时，请求将一直等待。
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
                     * 获取是否开启事务拆分。开启后，在一个事务中拆分读和写到不同的实例上去执行。
                     * @return TransSplit 是否开启事务拆分。开启后，在一个事务中拆分读和写到不同的实例上去执行。
                     * 
                     */
                    bool GetTransSplit() const;

                    /**
                     * 设置是否开启事务拆分。开启后，在一个事务中拆分读和写到不同的实例上去执行。
                     * @param _transSplit 是否开启事务拆分。开启后，在一个事务中拆分读和写到不同的实例上去执行。
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
                     * 获取接入模式：
nearby：就近访问。
balance：均衡分配。
                     * @return AccessMode 接入模式：
nearby：就近访问。
balance：均衡分配。
                     * 
                     */
                    std::string GetAccessMode() const;

                    /**
                     * 设置接入模式：
nearby：就近访问。
balance：均衡分配。
                     * @param _accessMode 接入模式：
nearby：就近访问。
balance：均衡分配。
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
                     * 获取实例权重。
                     * @return InstanceWeights 实例权重。
                     * 
                     */
                    std::vector<ProxyInstanceWeight> GetInstanceWeights() const;

                    /**
                     * 设置实例权重。
                     * @param _instanceWeights 实例权重。
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
                     * 集群 ID。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 私有网络 ID，默认与集群私有网络 ID 保持一致。
                     */
                    std::string m_uniqueVpcId;
                    bool m_uniqueVpcIdHasBeenSet;

                    /**
                     * 私有网络子网 ID，默认与集群子网 ID 保持一致。
                     */
                    std::string m_uniqueSubnetId;
                    bool m_uniqueSubnetIdHasBeenSet;

                    /**
                     * 连接池类型：SessionConnectionPool（会话级别连接池）。
                     */
                    std::string m_connectionPoolType;
                    bool m_connectionPoolTypeHasBeenSet;

                    /**
                     * 是否开启连接池。
yes：表示开启。
no：表示不开启。
                     */
                    std::string m_openConnectionPool;
                    bool m_openConnectionPoolHasBeenSet;

                    /**
                     * 连接池阈值：单位（秒），可选范围：0 - 300秒。
                     */
                    int64_t m_connectionPoolTimeOut;
                    bool m_connectionPoolTimeOutHasBeenSet;

                    /**
                     * 绑定的安全组 ID 数组。
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 描述说明。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 想要绑定的 vip 信息，需与 UniqueVpcId 对应。
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 权重模式：
system：系统分配。
custom：自定义。
                     */
                    std::string m_weightMode;
                    bool m_weightModeHasBeenSet;

                    /**
                     * 是否自动添加只读实例。
yes：表示自动添加只读实例。
no：表示不自动添加只读实例。
                     */
                    std::string m_autoAddRo;
                    bool m_autoAddRoHasBeenSet;

                    /**
                     * 是否开启故障转移。
yes：表示开启，开启后，当数据库代理出现故障时，连接地址将会路由到主实例。
no：表示不开启。
说明：
仅当 RwType 参数值为 READWRITE 时，才支持设置此项。
                     */
                    std::string m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * 一致性类型：
eventual：最终一致性。
global：全局一致性。
session：会话一致性。
说明：
仅当 RwType 参数值为 READWRITE 时，才支持设置此项。
                     */
                    std::string m_consistencyType;
                    bool m_consistencyTypeHasBeenSet;

                    /**
                     * 读写属性：
READWRITE：表示读写分离。当此参数值为 READWRITE 时，才支持设置 FailOver、ConsistencyType 参数。
READONLY：表示只读。
                     */
                    std::string m_rwType;
                    bool m_rwTypeHasBeenSet;

                    /**
                     * 一致性超时时间。取值范围：0 ~ 1000000（微秒）。设置为0时，表示若只读实例出现延迟导致一致性策略不满足时，请求将一直等待。
                     */
                    int64_t m_consistencyTimeOut;
                    bool m_consistencyTimeOutHasBeenSet;

                    /**
                     * 是否开启事务拆分。开启后，在一个事务中拆分读和写到不同的实例上去执行。
                     */
                    bool m_transSplit;
                    bool m_transSplitHasBeenSet;

                    /**
                     * 接入模式：
nearby：就近访问。
balance：均衡分配。
                     */
                    std::string m_accessMode;
                    bool m_accessModeHasBeenSet;

                    /**
                     * 实例权重。
                     */
                    std::vector<ProxyInstanceWeight> m_instanceWeights;
                    bool m_instanceWeightsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEPROXYENDPOINTREQUEST_H_
