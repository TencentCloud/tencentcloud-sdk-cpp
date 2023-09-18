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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYPROXYRWSPLITREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYPROXYRWSPLITREQUEST_H_

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
                * ModifyProxyRwSplit请求参数结构体
                */
                class ModifyProxyRwSplitRequest : public AbstractModel
                {
                public:
                    ModifyProxyRwSplitRequest();
                    ~ModifyProxyRwSplitRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID，例如cynosdbmysql-asd123
                     * @return ClusterId 集群ID，例如cynosdbmysql-asd123
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID，例如cynosdbmysql-asd123
                     * @param _clusterId 集群ID，例如cynosdbmysql-asd123
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
                     * 获取数据库代理组ID，例如cynosdbmysql-proxy-qwe123
                     * @return ProxyGroupId 数据库代理组ID，例如cynosdbmysql-proxy-qwe123
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置数据库代理组ID，例如cynosdbmysql-proxy-qwe123
                     * @param _proxyGroupId 数据库代理组ID，例如cynosdbmysql-proxy-qwe123
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
                     * 获取一致性类型；“eventual"-最终一致性, "session"-会话一致性, "global"-全局一致性
                     * @return ConsistencyType 一致性类型；“eventual"-最终一致性, "session"-会话一致性, "global"-全局一致性
                     * 
                     */
                    std::string GetConsistencyType() const;

                    /**
                     * 设置一致性类型；“eventual"-最终一致性, "session"-会话一致性, "global"-全局一致性
                     * @param _consistencyType 一致性类型；“eventual"-最终一致性, "session"-会话一致性, "global"-全局一致性
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
                     * 获取一致性超时时间。
取值范围：0~1000000（微秒）,设置0则表示若只读实例出现延迟, 导致一致性策略不满足, 请求将一直等待。
                     * @return ConsistencyTimeOut 一致性超时时间。
取值范围：0~1000000（微秒）,设置0则表示若只读实例出现延迟, 导致一致性策略不满足, 请求将一直等待。
                     * 
                     */
                    std::string GetConsistencyTimeOut() const;

                    /**
                     * 设置一致性超时时间。
取值范围：0~1000000（微秒）,设置0则表示若只读实例出现延迟, 导致一致性策略不满足, 请求将一直等待。
                     * @param _consistencyTimeOut 一致性超时时间。
取值范围：0~1000000（微秒）,设置0则表示若只读实例出现延迟, 导致一致性策略不满足, 请求将一直等待。
                     * 
                     */
                    void SetConsistencyTimeOut(const std::string& _consistencyTimeOut);

                    /**
                     * 判断参数 ConsistencyTimeOut 是否已赋值
                     * @return ConsistencyTimeOut 是否已赋值
                     * 
                     */
                    bool ConsistencyTimeOutHasBeenSet() const;

                    /**
                     * 获取读写权重分配模式；系统自动分配："system"， 自定义："custom"
                     * @return WeightMode 读写权重分配模式；系统自动分配："system"， 自定义："custom"
                     * 
                     */
                    std::string GetWeightMode() const;

                    /**
                     * 设置读写权重分配模式；系统自动分配："system"， 自定义："custom"
                     * @param _weightMode 读写权重分配模式；系统自动分配："system"， 自定义："custom"
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
                     * 获取实例只读权重。
该参数必填。
                     * @return InstanceWeights 实例只读权重。
该参数必填。
                     * 
                     */
                    std::vector<ProxyInstanceWeight> GetInstanceWeights() const;

                    /**
                     * 设置实例只读权重。
该参数必填。
                     * @param _instanceWeights 实例只读权重。
该参数必填。
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
                     * 获取是否开启故障转移，代理出现故障后，连接地址将路由到主实例，取值："yes" , "no"
                     * @return FailOver 是否开启故障转移，代理出现故障后，连接地址将路由到主实例，取值："yes" , "no"
                     * 
                     */
                    std::string GetFailOver() const;

                    /**
                     * 设置是否开启故障转移，代理出现故障后，连接地址将路由到主实例，取值："yes" , "no"
                     * @param _failOver 是否开启故障转移，代理出现故障后，连接地址将路由到主实例，取值："yes" , "no"
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
                     * 获取是否自动添加只读实例，取值："yes" , "no"
                     * @return AutoAddRo 是否自动添加只读实例，取值："yes" , "no"
                     * 
                     */
                    std::string GetAutoAddRo() const;

                    /**
                     * 设置是否自动添加只读实例，取值："yes" , "no"
                     * @param _autoAddRo 是否自动添加只读实例，取值："yes" , "no"
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
                     * 获取是否打开读写分离。
该参数已废弃，请通过RwType设置读写属性。
                     * @return OpenRw 是否打开读写分离。
该参数已废弃，请通过RwType设置读写属性。
                     * 
                     */
                    std::string GetOpenRw() const;

                    /**
                     * 设置是否打开读写分离。
该参数已废弃，请通过RwType设置读写属性。
                     * @param _openRw 是否打开读写分离。
该参数已废弃，请通过RwType设置读写属性。
                     * 
                     */
                    void SetOpenRw(const std::string& _openRw);

                    /**
                     * 判断参数 OpenRw 是否已赋值
                     * @return OpenRw 是否已赋值
                     * 
                     */
                    bool OpenRwHasBeenSet() const;

                    /**
                     * 获取读写类型：
READWRITE,READONLY
                     * @return RwType 读写类型：
READWRITE,READONLY
                     * 
                     */
                    std::string GetRwType() const;

                    /**
                     * 设置读写类型：
READWRITE,READONLY
                     * @param _rwType 读写类型：
READWRITE,READONLY
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
                     * 获取事务拆分。
在一个事务中拆分读和写到不同的实例上去执行。
                     * @return TransSplit 事务拆分。
在一个事务中拆分读和写到不同的实例上去执行。
                     * 
                     */
                    bool GetTransSplit() const;

                    /**
                     * 设置事务拆分。
在一个事务中拆分读和写到不同的实例上去执行。
                     * @param _transSplit 事务拆分。
在一个事务中拆分读和写到不同的实例上去执行。
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
                     * 获取连接模式：
nearby,balance
                     * @return AccessMode 连接模式：
nearby,balance
                     * 
                     */
                    std::string GetAccessMode() const;

                    /**
                     * 设置连接模式：
nearby,balance
                     * @param _accessMode 连接模式：
nearby,balance
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
                     * 获取是否打开连接池：
yes,no
                     * @return OpenConnectionPool 是否打开连接池：
yes,no
                     * 
                     */
                    std::string GetOpenConnectionPool() const;

                    /**
                     * 设置是否打开连接池：
yes,no
                     * @param _openConnectionPool 是否打开连接池：
yes,no
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
                     * 获取连接池类型：
SessionConnectionPool
                     * @return ConnectionPoolType 连接池类型：
SessionConnectionPool
                     * 
                     */
                    std::string GetConnectionPoolType() const;

                    /**
                     * 设置连接池类型：
SessionConnectionPool
                     * @param _connectionPoolType 连接池类型：
SessionConnectionPool
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
                     * 获取连接池时间。
可选范围:0~300（秒）
                     * @return ConnectionPoolTimeOut 连接池时间。
可选范围:0~300（秒）
                     * 
                     */
                    int64_t GetConnectionPoolTimeOut() const;

                    /**
                     * 设置连接池时间。
可选范围:0~300（秒）
                     * @param _connectionPoolTimeOut 连接池时间。
可选范围:0~300（秒）
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
                     * 集群ID，例如cynosdbmysql-asd123
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 数据库代理组ID，例如cynosdbmysql-proxy-qwe123
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * 一致性类型；“eventual"-最终一致性, "session"-会话一致性, "global"-全局一致性
                     */
                    std::string m_consistencyType;
                    bool m_consistencyTypeHasBeenSet;

                    /**
                     * 一致性超时时间。
取值范围：0~1000000（微秒）,设置0则表示若只读实例出现延迟, 导致一致性策略不满足, 请求将一直等待。
                     */
                    std::string m_consistencyTimeOut;
                    bool m_consistencyTimeOutHasBeenSet;

                    /**
                     * 读写权重分配模式；系统自动分配："system"， 自定义："custom"
                     */
                    std::string m_weightMode;
                    bool m_weightModeHasBeenSet;

                    /**
                     * 实例只读权重。
该参数必填。
                     */
                    std::vector<ProxyInstanceWeight> m_instanceWeights;
                    bool m_instanceWeightsHasBeenSet;

                    /**
                     * 是否开启故障转移，代理出现故障后，连接地址将路由到主实例，取值："yes" , "no"
                     */
                    std::string m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * 是否自动添加只读实例，取值："yes" , "no"
                     */
                    std::string m_autoAddRo;
                    bool m_autoAddRoHasBeenSet;

                    /**
                     * 是否打开读写分离。
该参数已废弃，请通过RwType设置读写属性。
                     */
                    std::string m_openRw;
                    bool m_openRwHasBeenSet;

                    /**
                     * 读写类型：
READWRITE,READONLY
                     */
                    std::string m_rwType;
                    bool m_rwTypeHasBeenSet;

                    /**
                     * 事务拆分。
在一个事务中拆分读和写到不同的实例上去执行。
                     */
                    bool m_transSplit;
                    bool m_transSplitHasBeenSet;

                    /**
                     * 连接模式：
nearby,balance
                     */
                    std::string m_accessMode;
                    bool m_accessModeHasBeenSet;

                    /**
                     * 是否打开连接池：
yes,no
                     */
                    std::string m_openConnectionPool;
                    bool m_openConnectionPoolHasBeenSet;

                    /**
                     * 连接池类型：
SessionConnectionPool
                     */
                    std::string m_connectionPoolType;
                    bool m_connectionPoolTypeHasBeenSet;

                    /**
                     * 连接池时间。
可选范围:0~300（秒）
                     */
                    int64_t m_connectionPoolTimeOut;
                    bool m_connectionPoolTimeOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYPROXYRWSPLITREQUEST_H_
