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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDINSTANCESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * AddInstances请求参数结构体
                */
                class AddInstancesRequest : public AbstractModel
                {
                public:
                    AddInstancesRequest();
                    ~AddInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param ClusterId 集群ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Cpu核数
                     * @return Cpu Cpu核数
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置Cpu核数
                     * @param Cpu Cpu核数
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取内存
                     * @return Memory 内存
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置内存
                     * @param Memory 内存
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取新增只读实例数
                     * @return ReadOnlyCount 新增只读实例数
                     */
                    int64_t GetReadOnlyCount() const;

                    /**
                     * 设置新增只读实例数
                     * @param ReadOnlyCount 新增只读实例数
                     */
                    void SetReadOnlyCount(const int64_t& _readOnlyCount);

                    /**
                     * 判断参数 ReadOnlyCount 是否已赋值
                     * @return ReadOnlyCount 是否已赋值
                     */
                    bool ReadOnlyCountHasBeenSet() const;

                    /**
                     * 获取实例组ID，在已有RO组中新增实例时使用，不传则新增RO组
                     * @return InstanceGrpId 实例组ID，在已有RO组中新增实例时使用，不传则新增RO组
                     */
                    std::string GetInstanceGrpId() const;

                    /**
                     * 设置实例组ID，在已有RO组中新增实例时使用，不传则新增RO组
                     * @param InstanceGrpId 实例组ID，在已有RO组中新增实例时使用，不传则新增RO组
                     */
                    void SetInstanceGrpId(const std::string& _instanceGrpId);

                    /**
                     * 判断参数 InstanceGrpId 是否已赋值
                     * @return InstanceGrpId 是否已赋值
                     */
                    bool InstanceGrpIdHasBeenSet() const;

                    /**
                     * 获取所属VPC网络ID
                     * @return VpcId 所属VPC网络ID
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置所属VPC网络ID
                     * @param VpcId 所属VPC网络ID
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取所属子网ID
                     * @return SubnetId 所属子网ID
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置所属子网ID
                     * @param SubnetId 所属子网ID
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取新增RO组时使用的Port
                     * @return Port 新增RO组时使用的Port
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置新增RO组时使用的Port
                     * @param Port 新增RO组时使用的Port
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param InstanceName 实例名称
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取是否自动选择代金券 1是 0否 默认为0
                     * @return AutoVoucher 是否自动选择代金券 1是 0否 默认为0
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置是否自动选择代金券 1是 0否 默认为0
                     * @param AutoVoucher 是否自动选择代金券 1是 0否 默认为0
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取数据库类型，取值范围: 
<li> MYSQL </li>
                     * @return DbType 数据库类型，取值范围: 
<li> MYSQL </li>
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置数据库类型，取值范围: 
<li> MYSQL </li>
                     * @param DbType 数据库类型，取值范围: 
<li> MYSQL </li>
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取订单来源
                     * @return OrderSource 订单来源
                     */
                    std::string GetOrderSource() const;

                    /**
                     * 设置订单来源
                     * @param OrderSource 订单来源
                     */
                    void SetOrderSource(const std::string& _orderSource);

                    /**
                     * 判断参数 OrderSource 是否已赋值
                     * @return OrderSource 是否已赋值
                     */
                    bool OrderSourceHasBeenSet() const;

                    /**
                     * 获取交易模式 0-下单并支付 1-下单
                     * @return DealMode 交易模式 0-下单并支付 1-下单
                     */
                    int64_t GetDealMode() const;

                    /**
                     * 设置交易模式 0-下单并支付 1-下单
                     * @param DealMode 交易模式 0-下单并支付 1-下单
                     */
                    void SetDealMode(const int64_t& _dealMode);

                    /**
                     * 判断参数 DealMode 是否已赋值
                     * @return DealMode 是否已赋值
                     */
                    bool DealModeHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Cpu核数
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 新增只读实例数
                     */
                    int64_t m_readOnlyCount;
                    bool m_readOnlyCountHasBeenSet;

                    /**
                     * 实例组ID，在已有RO组中新增实例时使用，不传则新增RO组
                     */
                    std::string m_instanceGrpId;
                    bool m_instanceGrpIdHasBeenSet;

                    /**
                     * 所属VPC网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 所属子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 新增RO组时使用的Port
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 是否自动选择代金券 1是 0否 默认为0
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * 数据库类型，取值范围: 
<li> MYSQL </li>
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * 订单来源
                     */
                    std::string m_orderSource;
                    bool m_orderSourceHasBeenSet;

                    /**
                     * 交易模式 0-下单并支付 1-下单
                     */
                    int64_t m_dealMode;
                    bool m_dealModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDINSTANCESREQUEST_H_
