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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DCNDETAILITEM_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DCNDETAILITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mariadb/v20170312/model/DCNReplicaConfig.h>
#include <tencentcloud/mariadb/v20170312/model/DCNReplicaStatus.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DCN详情条目
                */
                class DcnDetailItem : public AbstractModel
                {
                public:
                    DcnDetailItem();
                    ~DcnDetailItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param _instanceName 实例名称
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
                     * 获取实例地域
                     * @return Region 实例地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置实例地域
                     * @param _region 实例地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取实例可用区
                     * @return Zone 实例可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置实例可用区
                     * @param _zone 实例可用区
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
                     * 获取实例IP地址
                     * @return Vip 实例IP地址
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置实例IP地址
                     * @param _vip 实例IP地址
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
                     * 获取实例IPv6地址
                     * @return Vipv6 实例IPv6地址
                     * 
                     */
                    std::string GetVipv6() const;

                    /**
                     * 设置实例IPv6地址
                     * @param _vipv6 实例IPv6地址
                     * 
                     */
                    void SetVipv6(const std::string& _vipv6);

                    /**
                     * 判断参数 Vipv6 是否已赋值
                     * @return Vipv6 是否已赋值
                     * 
                     */
                    bool Vipv6HasBeenSet() const;

                    /**
                     * 获取实例端口
                     * @return Vport 实例端口
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置实例端口
                     * @param _vport 实例端口
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取实例状态
                     * @return Status 实例状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置实例状态
                     * @param _status 实例状态
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取实例状态描述
                     * @return StatusDesc 实例状态描述
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置实例状态描述
                     * @param _statusDesc 实例状态描述
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取实例DCN标志，1-主，2-备
                     * @return DcnFlag 实例DCN标志，1-主，2-备
                     * 
                     */
                    int64_t GetDcnFlag() const;

                    /**
                     * 设置实例DCN标志，1-主，2-备
                     * @param _dcnFlag 实例DCN标志，1-主，2-备
                     * 
                     */
                    void SetDcnFlag(const int64_t& _dcnFlag);

                    /**
                     * 判断参数 DcnFlag 是否已赋值
                     * @return DcnFlag 是否已赋值
                     * 
                     */
                    bool DcnFlagHasBeenSet() const;

                    /**
                     * 获取实例DCN状态，0-无，1-创建中，2-同步中，3-已断开
                     * @return DcnStatus 实例DCN状态，0-无，1-创建中，2-同步中，3-已断开
                     * 
                     */
                    int64_t GetDcnStatus() const;

                    /**
                     * 设置实例DCN状态，0-无，1-创建中，2-同步中，3-已断开
                     * @param _dcnStatus 实例DCN状态，0-无，1-创建中，2-同步中，3-已断开
                     * 
                     */
                    void SetDcnStatus(const int64_t& _dcnStatus);

                    /**
                     * 判断参数 DcnStatus 是否已赋值
                     * @return DcnStatus 是否已赋值
                     * 
                     */
                    bool DcnStatusHasBeenSet() const;

                    /**
                     * 获取实例CPU核数
                     * @return Cpu 实例CPU核数
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置实例CPU核数
                     * @param _cpu 实例CPU核数
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
                     * 获取实例内存大小，单位 GB
                     * @return Memory 实例内存大小，单位 GB
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置实例内存大小，单位 GB
                     * @param _memory 实例内存大小，单位 GB
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取实例存储大小，单位 GB
                     * @return Storage 实例存储大小，单位 GB
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置实例存储大小，单位 GB
                     * @param _storage 实例存储大小，单位 GB
                     * 
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

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
                     * 获取实例创建时间，格式为 2006-01-02 15:04:05
                     * @return CreateTime 实例创建时间，格式为 2006-01-02 15:04:05
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置实例创建时间，格式为 2006-01-02 15:04:05
                     * @param _createTime 实例创建时间，格式为 2006-01-02 15:04:05
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取实例到期时间，格式为 2006-01-02 15:04:05
                     * @return PeriodEndTime 实例到期时间，格式为 2006-01-02 15:04:05
                     * 
                     */
                    std::string GetPeriodEndTime() const;

                    /**
                     * 设置实例到期时间，格式为 2006-01-02 15:04:05
                     * @param _periodEndTime 实例到期时间，格式为 2006-01-02 15:04:05
                     * 
                     */
                    void SetPeriodEndTime(const std::string& _periodEndTime);

                    /**
                     * 判断参数 PeriodEndTime 是否已赋值
                     * @return PeriodEndTime 是否已赋值
                     * 
                     */
                    bool PeriodEndTimeHasBeenSet() const;

                    /**
                     * 获取1： 主实例（独享型）, 2: 主实例, 3： 灾备实例, 4： 灾备实例（独享型）
                     * @return InstanceType 1： 主实例（独享型）, 2: 主实例, 3： 灾备实例, 4： 灾备实例（独享型）
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置1： 主实例（独享型）, 2: 主实例, 3： 灾备实例, 4： 灾备实例（独享型）
                     * @param _instanceType 1： 主实例（独享型）, 2: 主实例, 3： 灾备实例, 4： 灾备实例（独享型）
                     * 
                     */
                    void SetInstanceType(const int64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取DCN复制的配置信息；对于主实例，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReplicaConfig DCN复制的配置信息；对于主实例，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DCNReplicaConfig GetReplicaConfig() const;

                    /**
                     * 设置DCN复制的配置信息；对于主实例，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _replicaConfig DCN复制的配置信息；对于主实例，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReplicaConfig(const DCNReplicaConfig& _replicaConfig);

                    /**
                     * 判断参数 ReplicaConfig 是否已赋值
                     * @return ReplicaConfig 是否已赋值
                     * 
                     */
                    bool ReplicaConfigHasBeenSet() const;

                    /**
                     * 获取DCN复制的状态；对于主实例，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReplicaStatus DCN复制的状态；对于主实例，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DCNReplicaStatus GetReplicaStatus() const;

                    /**
                     * 设置DCN复制的状态；对于主实例，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _replicaStatus DCN复制的状态；对于主实例，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReplicaStatus(const DCNReplicaStatus& _replicaStatus);

                    /**
                     * 判断参数 ReplicaStatus 是否已赋值
                     * @return ReplicaStatus 是否已赋值
                     * 
                     */
                    bool ReplicaStatusHasBeenSet() const;

                    /**
                     * 获取是否开启了 kms
                     * @return EncryptStatus 是否开启了 kms
                     * 
                     */
                    int64_t GetEncryptStatus() const;

                    /**
                     * 设置是否开启了 kms
                     * @param _encryptStatus 是否开启了 kms
                     * 
                     */
                    void SetEncryptStatus(const int64_t& _encryptStatus);

                    /**
                     * 判断参数 EncryptStatus 是否已赋值
                     * @return EncryptStatus 是否已赋值
                     * 
                     */
                    bool EncryptStatusHasBeenSet() const;

                    /**
                     * 获取实例DCN状态描述信息
                     * @return DcnStatusDesc 实例DCN状态描述信息
                     * 
                     */
                    std::string GetDcnStatusDesc() const;

                    /**
                     * 设置实例DCN状态描述信息
                     * @param _dcnStatusDesc 实例DCN状态描述信息
                     * 
                     */
                    void SetDcnStatusDesc(const std::string& _dcnStatusDesc);

                    /**
                     * 判断参数 DcnStatusDesc 是否已赋值
                     * @return DcnStatusDesc 是否已赋值
                     * 
                     */
                    bool DcnStatusDescHasBeenSet() const;

                    /**
                     * 获取DCN实例绑定的北极星服务所属的北极星实例Id，若未绑定则为空
                     * @return PolarisInstanceId DCN实例绑定的北极星服务所属的北极星实例Id，若未绑定则为空
                     * 
                     */
                    std::string GetPolarisInstanceId() const;

                    /**
                     * 设置DCN实例绑定的北极星服务所属的北极星实例Id，若未绑定则为空
                     * @param _polarisInstanceId DCN实例绑定的北极星服务所属的北极星实例Id，若未绑定则为空
                     * 
                     */
                    void SetPolarisInstanceId(const std::string& _polarisInstanceId);

                    /**
                     * 判断参数 PolarisInstanceId 是否已赋值
                     * @return PolarisInstanceId 是否已赋值
                     * 
                     */
                    bool PolarisInstanceIdHasBeenSet() const;

                    /**
                     * 获取DCN实例绑定的北极星服务所属的北极星实例名，若未绑定则为空
                     * @return PolarisInstanceName DCN实例绑定的北极星服务所属的北极星实例名，若未绑定则为空
                     * 
                     */
                    std::string GetPolarisInstanceName() const;

                    /**
                     * 设置DCN实例绑定的北极星服务所属的北极星实例名，若未绑定则为空
                     * @param _polarisInstanceName DCN实例绑定的北极星服务所属的北极星实例名，若未绑定则为空
                     * 
                     */
                    void SetPolarisInstanceName(const std::string& _polarisInstanceName);

                    /**
                     * 判断参数 PolarisInstanceName 是否已赋值
                     * @return PolarisInstanceName 是否已赋值
                     * 
                     */
                    bool PolarisInstanceNameHasBeenSet() const;

                    /**
                     * 获取DCN实例绑定的北极星服务所属的北极星命名空间，若未绑定则为空
                     * @return PolarisNamespace DCN实例绑定的北极星服务所属的北极星命名空间，若未绑定则为空
                     * 
                     */
                    std::string GetPolarisNamespace() const;

                    /**
                     * 设置DCN实例绑定的北极星服务所属的北极星命名空间，若未绑定则为空
                     * @param _polarisNamespace DCN实例绑定的北极星服务所属的北极星命名空间，若未绑定则为空
                     * 
                     */
                    void SetPolarisNamespace(const std::string& _polarisNamespace);

                    /**
                     * 判断参数 PolarisNamespace 是否已赋值
                     * @return PolarisNamespace 是否已赋值
                     * 
                     */
                    bool PolarisNamespaceHasBeenSet() const;

                    /**
                     * 获取DCN实例绑定的北极星服务，若未绑定则为空
                     * @return PolarisService DCN实例绑定的北极星服务，若未绑定则为空
                     * 
                     */
                    std::string GetPolarisService() const;

                    /**
                     * 设置DCN实例绑定的北极星服务，若未绑定则为空
                     * @param _polarisService DCN实例绑定的北极星服务，若未绑定则为空
                     * 
                     */
                    void SetPolarisService(const std::string& _polarisService);

                    /**
                     * 判断参数 PolarisService 是否已赋值
                     * @return PolarisService 是否已赋值
                     * 
                     */
                    bool PolarisServiceHasBeenSet() const;

                    /**
                     * 获取DCN实例在北极星服务中的状态 0:未开启; 1:已开启; 2:已隔离; 3:切换中
                     * @return PolarisServiceStatus DCN实例在北极星服务中的状态 0:未开启; 1:已开启; 2:已隔离; 3:切换中
                     * 
                     */
                    int64_t GetPolarisServiceStatus() const;

                    /**
                     * 设置DCN实例在北极星服务中的状态 0:未开启; 1:已开启; 2:已隔离; 3:切换中
                     * @param _polarisServiceStatus DCN实例在北极星服务中的状态 0:未开启; 1:已开启; 2:已隔离; 3:切换中
                     * 
                     */
                    void SetPolarisServiceStatus(const int64_t& _polarisServiceStatus);

                    /**
                     * 判断参数 PolarisServiceStatus 是否已赋值
                     * @return PolarisServiceStatus 是否已赋值
                     * 
                     */
                    bool PolarisServiceStatusHasBeenSet() const;

                    /**
                     * 获取DCN实例在北极星服务中的状态的描述信息
                     * @return PolarisServiceStatusDesc DCN实例在北极星服务中的状态的描述信息
                     * 
                     */
                    std::string GetPolarisServiceStatusDesc() const;

                    /**
                     * 设置DCN实例在北极星服务中的状态的描述信息
                     * @param _polarisServiceStatusDesc DCN实例在北极星服务中的状态的描述信息
                     * 
                     */
                    void SetPolarisServiceStatusDesc(const std::string& _polarisServiceStatusDesc);

                    /**
                     * 判断参数 PolarisServiceStatusDesc 是否已赋值
                     * @return PolarisServiceStatusDesc 是否已赋值
                     * 
                     */
                    bool PolarisServiceStatusDescHasBeenSet() const;

                    /**
                     * 获取北极星管控地址
                     * @return PolarisRegion 北极星管控地址
                     * 
                     */
                    std::string GetPolarisRegion() const;

                    /**
                     * 设置北极星管控地址
                     * @param _polarisRegion 北极星管控地址
                     * 
                     */
                    void SetPolarisRegion(const std::string& _polarisRegion);

                    /**
                     * 判断参数 PolarisRegion 是否已赋值
                     * @return PolarisRegion 是否已赋值
                     * 
                     */
                    bool PolarisRegionHasBeenSet() const;

                    /**
                     * 获取是否支持DCN切换
                     * @return IsDcnSwitchSupported 是否支持DCN切换
                     * 
                     */
                    int64_t GetIsDcnSwitchSupported() const;

                    /**
                     * 设置是否支持DCN切换
                     * @param _isDcnSwitchSupported 是否支持DCN切换
                     * 
                     */
                    void SetIsDcnSwitchSupported(const int64_t& _isDcnSwitchSupported);

                    /**
                     * 判断参数 IsDcnSwitchSupported 是否已赋值
                     * @return IsDcnSwitchSupported 是否已赋值
                     * 
                     */
                    bool IsDcnSwitchSupportedHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 实例可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 实例IP地址
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 实例IPv6地址
                     */
                    std::string m_vipv6;
                    bool m_vipv6HasBeenSet;

                    /**
                     * 实例端口
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 实例状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例状态描述
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 实例DCN标志，1-主，2-备
                     */
                    int64_t m_dcnFlag;
                    bool m_dcnFlagHasBeenSet;

                    /**
                     * 实例DCN状态，0-无，1-创建中，2-同步中，3-已断开
                     */
                    int64_t m_dcnStatus;
                    bool m_dcnStatusHasBeenSet;

                    /**
                     * 实例CPU核数
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 实例内存大小，单位 GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 实例存储大小，单位 GB
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 付费模式
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 实例创建时间，格式为 2006-01-02 15:04:05
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 实例到期时间，格式为 2006-01-02 15:04:05
                     */
                    std::string m_periodEndTime;
                    bool m_periodEndTimeHasBeenSet;

                    /**
                     * 1： 主实例（独享型）, 2: 主实例, 3： 灾备实例, 4： 灾备实例（独享型）
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * DCN复制的配置信息；对于主实例，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DCNReplicaConfig m_replicaConfig;
                    bool m_replicaConfigHasBeenSet;

                    /**
                     * DCN复制的状态；对于主实例，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DCNReplicaStatus m_replicaStatus;
                    bool m_replicaStatusHasBeenSet;

                    /**
                     * 是否开启了 kms
                     */
                    int64_t m_encryptStatus;
                    bool m_encryptStatusHasBeenSet;

                    /**
                     * 实例DCN状态描述信息
                     */
                    std::string m_dcnStatusDesc;
                    bool m_dcnStatusDescHasBeenSet;

                    /**
                     * DCN实例绑定的北极星服务所属的北极星实例Id，若未绑定则为空
                     */
                    std::string m_polarisInstanceId;
                    bool m_polarisInstanceIdHasBeenSet;

                    /**
                     * DCN实例绑定的北极星服务所属的北极星实例名，若未绑定则为空
                     */
                    std::string m_polarisInstanceName;
                    bool m_polarisInstanceNameHasBeenSet;

                    /**
                     * DCN实例绑定的北极星服务所属的北极星命名空间，若未绑定则为空
                     */
                    std::string m_polarisNamespace;
                    bool m_polarisNamespaceHasBeenSet;

                    /**
                     * DCN实例绑定的北极星服务，若未绑定则为空
                     */
                    std::string m_polarisService;
                    bool m_polarisServiceHasBeenSet;

                    /**
                     * DCN实例在北极星服务中的状态 0:未开启; 1:已开启; 2:已隔离; 3:切换中
                     */
                    int64_t m_polarisServiceStatus;
                    bool m_polarisServiceStatusHasBeenSet;

                    /**
                     * DCN实例在北极星服务中的状态的描述信息
                     */
                    std::string m_polarisServiceStatusDesc;
                    bool m_polarisServiceStatusDescHasBeenSet;

                    /**
                     * 北极星管控地址
                     */
                    std::string m_polarisRegion;
                    bool m_polarisRegionHasBeenSet;

                    /**
                     * 是否支持DCN切换
                     */
                    int64_t m_isDcnSwitchSupported;
                    bool m_isDcnSwitchSupportedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DCNDETAILITEM_H_
