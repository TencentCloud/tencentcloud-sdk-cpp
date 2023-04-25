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
                     * 获取代理组地址ID
                     * @return ProxyAddressId 代理组地址ID
                     */
                    std::string GetProxyAddressId() const;

                    /**
                     * 设置代理组地址ID
                     * @param ProxyAddressId 代理组地址ID
                     */
                    void SetProxyAddressId(const std::string& _proxyAddressId);

                    /**
                     * 判断参数 ProxyAddressId 是否已赋值
                     * @return ProxyAddressId 是否已赋值
                     */
                    bool ProxyAddressIdHasBeenSet() const;

                    /**
                     * 获取私有网络ID
                     * @return UniqVpcId 私有网络ID
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置私有网络ID
                     * @param UniqVpcId 私有网络ID
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取私有子网ID
                     * @return UniqSubnetId 私有子网ID
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置私有子网ID
                     * @param UniqSubnetId 私有子网ID
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取IP地址
                     * @return Vip IP地址
                     */
                    std::string GetVip() const;

                    /**
                     * 设置IP地址
                     * @param Vip IP地址
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取端口
                     * @return VPort 端口
                     */
                    uint64_t GetVPort() const;

                    /**
                     * 设置端口
                     * @param VPort 端口
                     */
                    void SetVPort(const uint64_t& _vPort);

                    /**
                     * 判断参数 VPort 是否已赋值
                     * @return VPort 是否已赋值
                     */
                    bool VPortHasBeenSet() const;

                    /**
                     * 获取权重分配模式；
系统自动分配："system"， 自定义："custom"
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WeightMode 权重分配模式；
系统自动分配："system"， 自定义："custom"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetWeightMode() const;

                    /**
                     * 设置权重分配模式；
系统自动分配："system"， 自定义："custom"
注意：此字段可能返回 null，表示取不到有效值。
                     * @param WeightMode 权重分配模式；
系统自动分配："system"， 自定义："custom"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetWeightMode(const std::string& _weightMode);

                    /**
                     * 判断参数 WeightMode 是否已赋值
                     * @return WeightMode 是否已赋值
                     */
                    bool WeightModeHasBeenSet() const;

                    /**
                     * 获取是否开启延迟剔除，取值："true" | "false"
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsKickOut 是否开启延迟剔除，取值："true" | "false"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetIsKickOut() const;

                    /**
                     * 设置是否开启延迟剔除，取值："true" | "false"
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsKickOut 是否开启延迟剔除，取值："true" | "false"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsKickOut(const bool& _isKickOut);

                    /**
                     * 判断参数 IsKickOut 是否已赋值
                     * @return IsKickOut 是否已赋值
                     */
                    bool IsKickOutHasBeenSet() const;

                    /**
                     * 获取最小保留数量，最小取值：0
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinCount 最小保留数量，最小取值：0
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetMinCount() const;

                    /**
                     * 设置最小保留数量，最小取值：0
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MinCount 最小保留数量，最小取值：0
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMinCount(const uint64_t& _minCount);

                    /**
                     * 判断参数 MinCount 是否已赋值
                     * @return MinCount 是否已赋值
                     */
                    bool MinCountHasBeenSet() const;

                    /**
                     * 获取延迟剔除阈值，最小取值：0
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxDelay 延迟剔除阈值，最小取值：0
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetMaxDelay() const;

                    /**
                     * 设置延迟剔除阈值，最小取值：0
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MaxDelay 延迟剔除阈值，最小取值：0
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMaxDelay(const uint64_t& _maxDelay);

                    /**
                     * 判断参数 MaxDelay 是否已赋值
                     * @return MaxDelay 是否已赋值
                     */
                    bool MaxDelayHasBeenSet() const;

                    /**
                     * 获取是否自动添加RO，取值："true" | "false"
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoAddRo 是否自动添加RO，取值："true" | "false"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetAutoAddRo() const;

                    /**
                     * 设置是否自动添加RO，取值："true" | "false"
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AutoAddRo 是否自动添加RO，取值："true" | "false"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAutoAddRo(const bool& _autoAddRo);

                    /**
                     * 判断参数 AutoAddRo 是否已赋值
                     * @return AutoAddRo 是否已赋值
                     */
                    bool AutoAddRoHasBeenSet() const;

                    /**
                     * 获取是否是只读，取值："true" | "false"
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReadOnly 是否是只读，取值："true" | "false"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetReadOnly() const;

                    /**
                     * 设置是否是只读，取值："true" | "false"
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ReadOnly 是否是只读，取值："true" | "false"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetReadOnly(const bool& _readOnly);

                    /**
                     * 判断参数 ReadOnly 是否已赋值
                     * @return ReadOnly 是否已赋值
                     */
                    bool ReadOnlyHasBeenSet() const;

                    /**
                     * 获取是否开启事务分离
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransSplit 是否开启事务分离
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetTransSplit() const;

                    /**
                     * 设置是否开启事务分离
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TransSplit 是否开启事务分离
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTransSplit(const bool& _transSplit);

                    /**
                     * 判断参数 TransSplit 是否已赋值
                     * @return TransSplit 是否已赋值
                     */
                    bool TransSplitHasBeenSet() const;

                    /**
                     * 获取是否开启故障转移
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailOver 是否开启故障转移
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetFailOver() const;

                    /**
                     * 设置是否开启故障转移
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FailOver 是否开启故障转移
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFailOver(const bool& _failOver);

                    /**
                     * 判断参数 FailOver 是否已赋值
                     * @return FailOver 是否已赋值
                     */
                    bool FailOverHasBeenSet() const;

                    /**
                     * 获取是否开启连接池
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConnectionPool 是否开启连接池
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetConnectionPool() const;

                    /**
                     * 设置是否开启连接池
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ConnectionPool 是否开启连接池
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConnectionPool(const bool& _connectionPool);

                    /**
                     * 判断参数 ConnectionPool 是否已赋值
                     * @return ConnectionPool 是否已赋值
                     */
                    bool ConnectionPoolHasBeenSet() const;

                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Desc 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Desc 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取实例读权重分配
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxyAllocation 实例读权重分配
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ProxyAllocation> GetProxyAllocation() const;

                    /**
                     * 设置实例读权重分配
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProxyAllocation 实例读权重分配
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProxyAllocation(const std::vector<ProxyAllocation>& _proxyAllocation);

                    /**
                     * 判断参数 ProxyAllocation 是否已赋值
                     * @return ProxyAllocation 是否已赋值
                     */
                    bool ProxyAllocationHasBeenSet() const;

                private:

                    /**
                     * 代理组地址ID
                     */
                    std::string m_proxyAddressId;
                    bool m_proxyAddressIdHasBeenSet;

                    /**
                     * 私有网络ID
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 私有子网ID
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * IP地址
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 端口
                     */
                    uint64_t m_vPort;
                    bool m_vPortHasBeenSet;

                    /**
                     * 权重分配模式；
系统自动分配："system"， 自定义："custom"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_weightMode;
                    bool m_weightModeHasBeenSet;

                    /**
                     * 是否开启延迟剔除，取值："true" | "false"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isKickOut;
                    bool m_isKickOutHasBeenSet;

                    /**
                     * 最小保留数量，最小取值：0
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_minCount;
                    bool m_minCountHasBeenSet;

                    /**
                     * 延迟剔除阈值，最小取值：0
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxDelay;
                    bool m_maxDelayHasBeenSet;

                    /**
                     * 是否自动添加RO，取值："true" | "false"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_autoAddRo;
                    bool m_autoAddRoHasBeenSet;

                    /**
                     * 是否是只读，取值："true" | "false"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_readOnly;
                    bool m_readOnlyHasBeenSet;

                    /**
                     * 是否开启事务分离
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_transSplit;
                    bool m_transSplitHasBeenSet;

                    /**
                     * 是否开启故障转移
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * 是否开启连接池
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_connectionPool;
                    bool m_connectionPoolHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 实例读权重分配
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ProxyAllocation> m_proxyAllocation;
                    bool m_proxyAllocationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_PROXYADDRESS_H_
