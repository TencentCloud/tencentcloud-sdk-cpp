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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DCNDETAILITEM_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DCNDETAILITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
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
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param InstanceId 实例ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

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
                     * 获取实例地域
                     * @return Region 实例地域
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置实例地域
                     * @param Region 实例地域
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取实例可用区
                     * @return Zone 实例可用区
                     */
                    std::string GetZone() const;

                    /**
                     * 设置实例可用区
                     * @param Zone 实例可用区
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取实例IP地址
                     * @return Vip 实例IP地址
                     */
                    std::string GetVip() const;

                    /**
                     * 设置实例IP地址
                     * @param Vip 实例IP地址
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取实例IPv6地址
                     * @return Vipv6 实例IPv6地址
                     */
                    std::string GetVipv6() const;

                    /**
                     * 设置实例IPv6地址
                     * @param Vipv6 实例IPv6地址
                     */
                    void SetVipv6(const std::string& _vipv6);

                    /**
                     * 判断参数 Vipv6 是否已赋值
                     * @return Vipv6 是否已赋值
                     */
                    bool Vipv6HasBeenSet() const;

                    /**
                     * 获取实例端口
                     * @return Vport 实例端口
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置实例端口
                     * @param Vport 实例端口
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取实例状态
                     * @return Status 实例状态
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置实例状态
                     * @param Status 实例状态
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取实例状态描述
                     * @return StatusDesc 实例状态描述
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置实例状态描述
                     * @param StatusDesc 实例状态描述
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取实例DCN标志，1-主，2-备
                     * @return DcnFlag 实例DCN标志，1-主，2-备
                     */
                    int64_t GetDcnFlag() const;

                    /**
                     * 设置实例DCN标志，1-主，2-备
                     * @param DcnFlag 实例DCN标志，1-主，2-备
                     */
                    void SetDcnFlag(const int64_t& _dcnFlag);

                    /**
                     * 判断参数 DcnFlag 是否已赋值
                     * @return DcnFlag 是否已赋值
                     */
                    bool DcnFlagHasBeenSet() const;

                    /**
                     * 获取实例DCN状态，0-无，1-创建中，2-同步中，3-已断开
                     * @return DcnStatus 实例DCN状态，0-无，1-创建中，2-同步中，3-已断开
                     */
                    int64_t GetDcnStatus() const;

                    /**
                     * 设置实例DCN状态，0-无，1-创建中，2-同步中，3-已断开
                     * @param DcnStatus 实例DCN状态，0-无，1-创建中，2-同步中，3-已断开
                     */
                    void SetDcnStatus(const int64_t& _dcnStatus);

                    /**
                     * 判断参数 DcnStatus 是否已赋值
                     * @return DcnStatus 是否已赋值
                     */
                    bool DcnStatusHasBeenSet() const;

                    /**
                     * 获取实例CPU核数
                     * @return Cpu 实例CPU核数
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置实例CPU核数
                     * @param Cpu 实例CPU核数
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取实例内存大小，单位 GB
                     * @return Memory 实例内存大小，单位 GB
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置实例内存大小，单位 GB
                     * @param Memory 实例内存大小，单位 GB
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取实例存储大小，单位 GB
                     * @return Storage 实例存储大小，单位 GB
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置实例存储大小，单位 GB
                     * @param Storage 实例存储大小，单位 GB
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取付费模式
                     * @return PayMode 付费模式
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置付费模式
                     * @param PayMode 付费模式
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取实例创建时间，格式为 2006-01-02 15:04:05
                     * @return CreateTime 实例创建时间，格式为 2006-01-02 15:04:05
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置实例创建时间，格式为 2006-01-02 15:04:05
                     * @param CreateTime 实例创建时间，格式为 2006-01-02 15:04:05
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取实例到期时间，格式为 2006-01-02 15:04:05
                     * @return PeriodEndTime 实例到期时间，格式为 2006-01-02 15:04:05
                     */
                    std::string GetPeriodEndTime() const;

                    /**
                     * 设置实例到期时间，格式为 2006-01-02 15:04:05
                     * @param PeriodEndTime 实例到期时间，格式为 2006-01-02 15:04:05
                     */
                    void SetPeriodEndTime(const std::string& _periodEndTime);

                    /**
                     * 判断参数 PeriodEndTime 是否已赋值
                     * @return PeriodEndTime 是否已赋值
                     */
                    bool PeriodEndTimeHasBeenSet() const;

                    /**
                     * 获取1： 主实例（独享型）, 2: 主实例, 3： 灾备实例, 4： 灾备实例（独享型）
                     * @return InstanceType 1： 主实例（独享型）, 2: 主实例, 3： 灾备实例, 4： 灾备实例（独享型）
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置1： 主实例（独享型）, 2: 主实例, 3： 灾备实例, 4： 灾备实例（独享型）
                     * @param InstanceType 1： 主实例（独享型）, 2: 主实例, 3： 灾备实例, 4： 灾备实例（独享型）
                     */
                    void SetInstanceType(const int64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DCNDETAILITEM_H_
