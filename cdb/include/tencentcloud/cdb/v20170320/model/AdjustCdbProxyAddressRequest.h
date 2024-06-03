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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_ADJUSTCDBPROXYADDRESSREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_ADJUSTCDBPROXYADDRESSREQUEST_H_

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
                * AdjustCdbProxyAddress请求参数结构体
                */
                class AdjustCdbProxyAddressRequest : public AbstractModel
                {
                public:
                    AdjustCdbProxyAddressRequest();
                    ~AdjustCdbProxyAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取代理组ID
                     * @return ProxyGroupId 代理组ID
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置代理组ID
                     * @param _proxyGroupId 代理组ID
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
                     * 获取权重分配模式，
系统自动分配："system"， 自定义："custom"
                     * @return WeightMode 权重分配模式，
系统自动分配："system"， 自定义："custom"
                     * 
                     */
                    std::string GetWeightMode() const;

                    /**
                     * 设置权重分配模式，
系统自动分配："system"， 自定义："custom"
                     * @param _weightMode 权重分配模式，
系统自动分配："system"， 自定义："custom"
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
                     * 获取是否开启延迟剔除，取值："true" | "false"
                     * @return IsKickOut 是否开启延迟剔除，取值："true" | "false"
                     * 
                     */
                    bool GetIsKickOut() const;

                    /**
                     * 设置是否开启延迟剔除，取值："true" | "false"
                     * @param _isKickOut 是否开启延迟剔除，取值："true" | "false"
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
                     * 获取最小保留数量，最小取值：0
                     * @return MinCount 最小保留数量，最小取值：0
                     * 
                     */
                    uint64_t GetMinCount() const;

                    /**
                     * 设置最小保留数量，最小取值：0
                     * @param _minCount 最小保留数量，最小取值：0
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
                     * 获取延迟剔除阈值，最小取值：0
                     * @return MaxDelay 延迟剔除阈值，最小取值：0
                     * 
                     */
                    uint64_t GetMaxDelay() const;

                    /**
                     * 设置延迟剔除阈值，最小取值：0
                     * @param _maxDelay 延迟剔除阈值，最小取值：0
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
                     * 获取是否开启故障转移，取值："true" | "false"
                     * @return FailOver 是否开启故障转移，取值："true" | "false"
                     * 
                     */
                    bool GetFailOver() const;

                    /**
                     * 设置是否开启故障转移，取值："true" | "false"
                     * @param _failOver 是否开启故障转移，取值："true" | "false"
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
                     * 获取是否自动添加RO，取值："true" | "false"
                     * @return AutoAddRo 是否自动添加RO，取值："true" | "false"
                     * 
                     */
                    bool GetAutoAddRo() const;

                    /**
                     * 设置是否自动添加RO，取值："true" | "false"
                     * @param _autoAddRo 是否自动添加RO，取值："true" | "false"
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
                     * 获取是否是只读，取值："true" | "false"
                     * @return ReadOnly 是否是只读，取值："true" | "false"
                     * 
                     */
                    bool GetReadOnly() const;

                    /**
                     * 设置是否是只读，取值："true" | "false"
                     * @param _readOnly 是否是只读，取值："true" | "false"
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
                     * 获取代理组地址ID
                     * @return ProxyAddressId 代理组地址ID
                     * 
                     */
                    std::string GetProxyAddressId() const;

                    /**
                     * 设置代理组地址ID
                     * @param _proxyAddressId 代理组地址ID
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
                     * 获取是否开启事务分离，取值："true" | "false"
                     * @return TransSplit 是否开启事务分离，取值："true" | "false"
                     * 
                     */
                    bool GetTransSplit() const;

                    /**
                     * 设置是否开启事务分离，取值："true" | "false"
                     * @param _transSplit 是否开启事务分离，取值："true" | "false"
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
                     * 获取是否开启连接池
注意：如需使用数据库代理连接池能力，MySQL 8.0 主实例的内核小版本要大于等于 MySQL 8.0 20230630。
                     * @return ConnectionPool 是否开启连接池
注意：如需使用数据库代理连接池能力，MySQL 8.0 主实例的内核小版本要大于等于 MySQL 8.0 20230630。
                     * 
                     */
                    bool GetConnectionPool() const;

                    /**
                     * 设置是否开启连接池
注意：如需使用数据库代理连接池能力，MySQL 8.0 主实例的内核小版本要大于等于 MySQL 8.0 20230630。
                     * @param _connectionPool 是否开启连接池
注意：如需使用数据库代理连接池能力，MySQL 8.0 主实例的内核小版本要大于等于 MySQL 8.0 20230630。
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
                     * 获取读写权重分配。如果 WeightMode 传的是 system ，则传入的权重不生效，由系统分配默认权重。
                     * @return ProxyAllocation 读写权重分配。如果 WeightMode 传的是 system ，则传入的权重不生效，由系统分配默认权重。
                     * 
                     */
                    std::vector<ProxyAllocation> GetProxyAllocation() const;

                    /**
                     * 设置读写权重分配。如果 WeightMode 传的是 system ，则传入的权重不生效，由系统分配默认权重。
                     * @param _proxyAllocation 读写权重分配。如果 WeightMode 传的是 system ，则传入的权重不生效，由系统分配默认权重。
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
                     * 获取是否开启自适应负载均衡
                     * @return AutoLoadBalance 是否开启自适应负载均衡
                     * 
                     */
                    bool GetAutoLoadBalance() const;

                    /**
                     * 设置是否开启自适应负载均衡
                     * @param _autoLoadBalance 是否开启自适应负载均衡
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
                     * 获取访问模式：就近访问，均衡分配
                     * @return AccessMode 访问模式：就近访问，均衡分配
                     * 
                     */
                    std::string GetAccessMode() const;

                    /**
                     * 设置访问模式：就近访问，均衡分配
                     * @param _accessMode 访问模式：就近访问，均衡分配
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
                     * 代理组ID
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * 权重分配模式，
系统自动分配："system"， 自定义："custom"
                     */
                    std::string m_weightMode;
                    bool m_weightModeHasBeenSet;

                    /**
                     * 是否开启延迟剔除，取值："true" | "false"
                     */
                    bool m_isKickOut;
                    bool m_isKickOutHasBeenSet;

                    /**
                     * 最小保留数量，最小取值：0
                     */
                    uint64_t m_minCount;
                    bool m_minCountHasBeenSet;

                    /**
                     * 延迟剔除阈值，最小取值：0
                     */
                    uint64_t m_maxDelay;
                    bool m_maxDelayHasBeenSet;

                    /**
                     * 是否开启故障转移，取值："true" | "false"
                     */
                    bool m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * 是否自动添加RO，取值："true" | "false"
                     */
                    bool m_autoAddRo;
                    bool m_autoAddRoHasBeenSet;

                    /**
                     * 是否是只读，取值："true" | "false"
                     */
                    bool m_readOnly;
                    bool m_readOnlyHasBeenSet;

                    /**
                     * 代理组地址ID
                     */
                    std::string m_proxyAddressId;
                    bool m_proxyAddressIdHasBeenSet;

                    /**
                     * 是否开启事务分离，取值："true" | "false"
                     */
                    bool m_transSplit;
                    bool m_transSplitHasBeenSet;

                    /**
                     * 是否开启连接池
注意：如需使用数据库代理连接池能力，MySQL 8.0 主实例的内核小版本要大于等于 MySQL 8.0 20230630。
                     */
                    bool m_connectionPool;
                    bool m_connectionPoolHasBeenSet;

                    /**
                     * 读写权重分配。如果 WeightMode 传的是 system ，则传入的权重不生效，由系统分配默认权重。
                     */
                    std::vector<ProxyAllocation> m_proxyAllocation;
                    bool m_proxyAllocationHasBeenSet;

                    /**
                     * 是否开启自适应负载均衡
                     */
                    bool m_autoLoadBalance;
                    bool m_autoLoadBalanceHasBeenSet;

                    /**
                     * 访问模式：就近访问，均衡分配
                     */
                    std::string m_accessMode;
                    bool m_accessModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ADJUSTCDBPROXYADDRESSREQUEST_H_
