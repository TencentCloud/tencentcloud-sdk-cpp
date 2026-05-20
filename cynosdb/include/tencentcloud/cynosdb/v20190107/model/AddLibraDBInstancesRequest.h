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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDLIBRADBINSTANCESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDLIBRADBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/Objects.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * AddLibraDBInstances请求参数结构体
                */
                class AddLibraDBInstancesRequest : public AbstractModel
                {
                public:
                    AddLibraDBInstancesRequest();
                    ~AddLibraDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
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
                     * 获取Cpu核数
                     * @return Cpu Cpu核数
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置Cpu核数
                     * @param _cpu Cpu核数
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
                     * 获取内存，单位为GB
                     * @return Mem 内存，单位为GB
                     * 
                     */
                    int64_t GetMem() const;

                    /**
                     * 设置内存，单位为GB
                     * @param _mem 内存，单位为GB
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
                     * 获取磁盘大小
                     * @return StorageSize 磁盘大小
                     * 
                     */
                    int64_t GetStorageSize() const;

                    /**
                     * 设置磁盘大小
                     * @param _storageSize 磁盘大小
                     * 
                     */
                    void SetStorageSize(const int64_t& _storageSize);

                    /**
                     * 判断参数 StorageSize 是否已赋值
                     * @return StorageSize 是否已赋值
                     * 
                     */
                    bool StorageSizeHasBeenSet() const;

                    /**
                     * 获取付费模式
                     * @return PayMode 付费模式
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置付费模式
                     * @param _payMode 付费模式
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取同步对象列表
                     * @return Objects 同步对象列表
                     * 
                     */
                    Objects GetObjects() const;

                    /**
                     * 设置同步对象列表
                     * @param _objects 同步对象列表
                     * 
                     */
                    void SetObjects(const Objects& _objects);

                    /**
                     * 判断参数 Objects 是否已赋值
                     * @return Objects 是否已赋值
                     * 
                     */
                    bool ObjectsHasBeenSet() const;

                    /**
                     * 获取新增RO组时使用的Port，取值范围为[0,65535)
                     * @return Port 新增RO组时使用的Port，取值范围为[0,65535)
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置新增RO组时使用的Port，取值范围为[0,65535)
                     * @param _port 新增RO组时使用的Port，取值范围为[0,65535)
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取新增只读实例数，取值范围为(0,15]
                     * @return GoodsNum 新增只读实例数，取值范围为(0,15]
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置新增只读实例数，取值范围为(0,15]
                     * @param _goodsNum 新增只读实例数，取值范围为(0,15]
                     * 
                     */
                    void SetGoodsNum(const int64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取实例名称，字符串长度范围为[0,64)，取值范围为大小写字母，0-9数字，'_','-','.'
                     * @return InstanceName 实例名称，字符串长度范围为[0,64)，取值范围为大小写字母，0-9数字，'_','-','.'
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称，字符串长度范围为[0,64)，取值范围为大小写字母，0-9数字，'_','-','.'
                     * @param _instanceName 实例名称，字符串长度范围为[0,64)，取值范围为大小写字母，0-9数字，'_','-','.'
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取副本数
                     * @return ReplicasNum 副本数
                     * 
                     */
                    int64_t GetReplicasNum() const;

                    /**
                     * 设置副本数
                     * @param _replicasNum 副本数
                     * 
                     */
                    void SetReplicasNum(const int64_t& _replicasNum);

                    /**
                     * 判断参数 ReplicasNum 是否已赋值
                     * @return ReplicasNum 是否已赋值
                     * 
                     */
                    bool ReplicasNumHasBeenSet() const;

                    /**
                     * 获取ReplicasNum>1或者ReplicasNum=1且Cpu>=32核的时候取值为'Exclusive'，其余场景取值'Common'
                     * @return InstanceType ReplicasNum>1或者ReplicasNum=1且Cpu>=32核的时候取值为'Exclusive'，其余场景取值'Common'
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置ReplicasNum>1或者ReplicasNum=1且Cpu>=32核的时候取值为'Exclusive'，其余场景取值'Common'
                     * @param _instanceType ReplicasNum>1或者ReplicasNum=1且Cpu>=32核的时候取值为'Exclusive'，其余场景取值'Common'
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取磁盘类型
                     * @return StorageType 磁盘类型
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置磁盘类型
                     * @param _storageType 磁盘类型
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取是否自动选择代金券 1是 0否 默认为0
                     * @return AutoVoucher 是否自动选择代金券 1是 0否 默认为0
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置是否自动选择代金券 1是 0否 默认为0
                     * @param _autoVoucher 是否自动选择代金券 1是 0否 默认为0
                     * 
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取订单来源，字符串长度范围为[0,64)
                     * @return OrderSource 订单来源，字符串长度范围为[0,64)
                     * 
                     */
                    std::string GetOrderSource() const;

                    /**
                     * 设置订单来源，字符串长度范围为[0,64)
                     * @param _orderSource 订单来源，字符串长度范围为[0,64)
                     * 
                     */
                    void SetOrderSource(const std::string& _orderSource);

                    /**
                     * 判断参数 OrderSource 是否已赋值
                     * @return OrderSource 是否已赋值
                     * 
                     */
                    bool OrderSourceHasBeenSet() const;

                    /**
                     * 获取交易模式 0-下单并支付 1-下单
                     * @return DealMode 交易模式 0-下单并支付 1-下单
                     * 
                     */
                    int64_t GetDealMode() const;

                    /**
                     * 设置交易模式 0-下单并支付 1-下单
                     * @param _dealMode 交易模式 0-下单并支付 1-下单
                     * 
                     */
                    void SetDealMode(const int64_t& _dealMode);

                    /**
                     * 判断参数 DealMode 是否已赋值
                     * @return DealMode 是否已赋值
                     * 
                     */
                    bool DealModeHasBeenSet() const;

                    /**
                     * 获取所属VPC网络ID。
                     * @return VpcId 所属VPC网络ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置所属VPC网络ID。
                     * @param _vpcId 所属VPC网络ID。
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取所属子网ID，如果设置了VpcId，则SubnetId必填。
                     * @return SubnetId 所属子网ID，如果设置了VpcId，则SubnetId必填。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置所属子网ID，如果设置了VpcId，则SubnetId必填。
                     * @param _subnetId 所属子网ID，如果设置了VpcId，则SubnetId必填。
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取安全组ID，新建只读实例时可以指定安全组。
                     * @return SecurityGroupIds 安全组ID，新建只读实例时可以指定安全组。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置安全组ID，新建只读实例时可以指定安全组。
                     * @param _securityGroupIds 安全组ID，新建只读实例时可以指定安全组。
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
                     * 获取分析引擎版本
                     * @return LibraDBVersion 分析引擎版本
                     * 
                     */
                    std::string GetLibraDBVersion() const;

                    /**
                     * 设置分析引擎版本
                     * @param _libraDBVersion 分析引擎版本
                     * 
                     */
                    void SetLibraDBVersion(const std::string& _libraDBVersion);

                    /**
                     * 判断参数 LibraDBVersion 是否已赋值
                     * @return LibraDBVersion 是否已赋值
                     * 
                     */
                    bool LibraDBVersionHasBeenSet() const;

                    /**
                     * 获取购买时长,与TimeUnit组合才能生效
                     * @return TimeSpan 购买时长,与TimeUnit组合才能生效
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置购买时长,与TimeUnit组合才能生效
                     * @param _timeSpan 购买时长,与TimeUnit组合才能生效
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取购买时长单位, 与TimeSpan组合生效，可选:日:d,月:m
                     * @return TimeUnit 购买时长单位, 与TimeSpan组合生效，可选:日:d,月:m
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置购买时长单位, 与TimeSpan组合生效，可选:日:d,月:m
                     * @param _timeUnit 购买时长单位, 与TimeSpan组合生效，可选:日:d,月:m
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取源端实例id
                     * @return SrcInstanceId 源端实例id
                     * 
                     */
                    std::string GetSrcInstanceId() const;

                    /**
                     * 设置源端实例id
                     * @param _srcInstanceId 源端实例id
                     * 
                     */
                    void SetSrcInstanceId(const std::string& _srcInstanceId);

                    /**
                     * 判断参数 SrcInstanceId 是否已赋值
                     * @return SrcInstanceId 是否已赋值
                     * 
                     */
                    bool SrcInstanceIdHasBeenSet() const;

                private:

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

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
                     * 内存，单位为GB
                     */
                    int64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * 磁盘大小
                     */
                    int64_t m_storageSize;
                    bool m_storageSizeHasBeenSet;

                    /**
                     * 付费模式
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 同步对象列表
                     */
                    Objects m_objects;
                    bool m_objectsHasBeenSet;

                    /**
                     * 新增RO组时使用的Port，取值范围为[0,65535)
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 新增只读实例数，取值范围为(0,15]
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * 实例名称，字符串长度范围为[0,64)，取值范围为大小写字母，0-9数字，'_','-','.'
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 副本数
                     */
                    int64_t m_replicasNum;
                    bool m_replicasNumHasBeenSet;

                    /**
                     * ReplicasNum>1或者ReplicasNum=1且Cpu>=32核的时候取值为'Exclusive'，其余场景取值'Common'
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 磁盘类型
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 是否自动选择代金券 1是 0否 默认为0
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * 订单来源，字符串长度范围为[0,64)
                     */
                    std::string m_orderSource;
                    bool m_orderSourceHasBeenSet;

                    /**
                     * 交易模式 0-下单并支付 1-下单
                     */
                    int64_t m_dealMode;
                    bool m_dealModeHasBeenSet;

                    /**
                     * 所属VPC网络ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 所属子网ID，如果设置了VpcId，则SubnetId必填。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 安全组ID，新建只读实例时可以指定安全组。
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 分析引擎版本
                     */
                    std::string m_libraDBVersion;
                    bool m_libraDBVersionHasBeenSet;

                    /**
                     * 购买时长,与TimeUnit组合才能生效
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 购买时长单位, 与TimeSpan组合生效，可选:日:d,月:m
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 源端实例id
                     */
                    std::string m_srcInstanceId;
                    bool m_srcInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDLIBRADBINSTANCESREQUEST_H_
