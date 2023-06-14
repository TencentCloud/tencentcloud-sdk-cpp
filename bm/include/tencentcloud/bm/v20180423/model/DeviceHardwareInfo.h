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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DEVICEHARDWAREINFO_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DEVICEHARDWAREINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * 设备硬件配置信息
                */
                class DeviceHardwareInfo : public AbstractModel
                {
                public:
                    DeviceHardwareInfo();
                    ~DeviceHardwareInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备实例 ID
                     * @return InstanceId 设备实例 ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置设备实例 ID
                     * @param _instanceId 设备实例 ID
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
                     * 获取是否自定义机型
                     * @return IsElastic 是否自定义机型
                     * 
                     */
                    uint64_t GetIsElastic() const;

                    /**
                     * 设置是否自定义机型
                     * @param _isElastic 是否自定义机型
                     * 
                     */
                    void SetIsElastic(const uint64_t& _isElastic);

                    /**
                     * 判断参数 IsElastic 是否已赋值
                     * @return IsElastic 是否已赋值
                     * 
                     */
                    bool IsElasticHasBeenSet() const;

                    /**
                     * 获取机型计费模式，1 为预付费，2 为后付费
                     * @return CpmPayMode 机型计费模式，1 为预付费，2 为后付费
                     * 
                     */
                    uint64_t GetCpmPayMode() const;

                    /**
                     * 设置机型计费模式，1 为预付费，2 为后付费
                     * @param _cpmPayMode 机型计费模式，1 为预付费，2 为后付费
                     * 
                     */
                    void SetCpmPayMode(const uint64_t& _cpmPayMode);

                    /**
                     * 判断参数 CpmPayMode 是否已赋值
                     * @return CpmPayMode 是否已赋值
                     * 
                     */
                    bool CpmPayModeHasBeenSet() const;

                    /**
                     * 获取自定义机型，CPU 型号 ID（非自定义机型返回0）
                     * @return CpuId 自定义机型，CPU 型号 ID（非自定义机型返回0）
                     * 
                     */
                    uint64_t GetCpuId() const;

                    /**
                     * 设置自定义机型，CPU 型号 ID（非自定义机型返回0）
                     * @param _cpuId 自定义机型，CPU 型号 ID（非自定义机型返回0）
                     * 
                     */
                    void SetCpuId(const uint64_t& _cpuId);

                    /**
                     * 判断参数 CpuId 是否已赋值
                     * @return CpuId 是否已赋值
                     * 
                     */
                    bool CpuIdHasBeenSet() const;

                    /**
                     * 获取自定义机型，内存大小, 单位 GB（非自定义机型返回0）
                     * @return Mem 自定义机型，内存大小, 单位 GB（非自定义机型返回0）
                     * 
                     */
                    uint64_t GetMem() const;

                    /**
                     * 设置自定义机型，内存大小, 单位 GB（非自定义机型返回0）
                     * @param _mem 自定义机型，内存大小, 单位 GB（非自定义机型返回0）
                     * 
                     */
                    void SetMem(const uint64_t& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * 
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取是否有 RAID 卡，0：没有 RAID 卡； 1：有 RAID 卡
                     * @return ContainRaidCard 是否有 RAID 卡，0：没有 RAID 卡； 1：有 RAID 卡
                     * 
                     */
                    uint64_t GetContainRaidCard() const;

                    /**
                     * 设置是否有 RAID 卡，0：没有 RAID 卡； 1：有 RAID 卡
                     * @param _containRaidCard 是否有 RAID 卡，0：没有 RAID 卡； 1：有 RAID 卡
                     * 
                     */
                    void SetContainRaidCard(const uint64_t& _containRaidCard);

                    /**
                     * 判断参数 ContainRaidCard 是否已赋值
                     * @return ContainRaidCard 是否已赋值
                     * 
                     */
                    bool ContainRaidCardHasBeenSet() const;

                    /**
                     * 获取自定义机型系统盘类型ID（若没有则返回0）
                     * @return SystemDiskTypeId 自定义机型系统盘类型ID（若没有则返回0）
                     * 
                     */
                    uint64_t GetSystemDiskTypeId() const;

                    /**
                     * 设置自定义机型系统盘类型ID（若没有则返回0）
                     * @param _systemDiskTypeId 自定义机型系统盘类型ID（若没有则返回0）
                     * 
                     */
                    void SetSystemDiskTypeId(const uint64_t& _systemDiskTypeId);

                    /**
                     * 判断参数 SystemDiskTypeId 是否已赋值
                     * @return SystemDiskTypeId 是否已赋值
                     * 
                     */
                    bool SystemDiskTypeIdHasBeenSet() const;

                    /**
                     * 获取自定义机型系统盘数量（若没有则返回0）
                     * @return SystemDiskCount 自定义机型系统盘数量（若没有则返回0）
                     * 
                     */
                    uint64_t GetSystemDiskCount() const;

                    /**
                     * 设置自定义机型系统盘数量（若没有则返回0）
                     * @param _systemDiskCount 自定义机型系统盘数量（若没有则返回0）
                     * 
                     */
                    void SetSystemDiskCount(const uint64_t& _systemDiskCount);

                    /**
                     * 判断参数 SystemDiskCount 是否已赋值
                     * @return SystemDiskCount 是否已赋值
                     * 
                     */
                    bool SystemDiskCountHasBeenSet() const;

                    /**
                     * 获取自定义机型数据盘类型 ID（若没有则返回0）
                     * @return DataDiskTypeId 自定义机型数据盘类型 ID（若没有则返回0）
                     * 
                     */
                    uint64_t GetDataDiskTypeId() const;

                    /**
                     * 设置自定义机型数据盘类型 ID（若没有则返回0）
                     * @param _dataDiskTypeId 自定义机型数据盘类型 ID（若没有则返回0）
                     * 
                     */
                    void SetDataDiskTypeId(const uint64_t& _dataDiskTypeId);

                    /**
                     * 判断参数 DataDiskTypeId 是否已赋值
                     * @return DataDiskTypeId 是否已赋值
                     * 
                     */
                    bool DataDiskTypeIdHasBeenSet() const;

                    /**
                     * 获取自定义机型数据盘数量（若没有则返回0）
                     * @return DataDiskCount 自定义机型数据盘数量（若没有则返回0）
                     * 
                     */
                    uint64_t GetDataDiskCount() const;

                    /**
                     * 设置自定义机型数据盘数量（若没有则返回0）
                     * @param _dataDiskCount 自定义机型数据盘数量（若没有则返回0）
                     * 
                     */
                    void SetDataDiskCount(const uint64_t& _dataDiskCount);

                    /**
                     * 判断参数 DataDiskCount 是否已赋值
                     * @return DataDiskCount 是否已赋值
                     * 
                     */
                    bool DataDiskCountHasBeenSet() const;

                    /**
                     * 获取CPU 型号描述
                     * @return CpuDescription CPU 型号描述
                     * 
                     */
                    std::string GetCpuDescription() const;

                    /**
                     * 设置CPU 型号描述
                     * @param _cpuDescription CPU 型号描述
                     * 
                     */
                    void SetCpuDescription(const std::string& _cpuDescription);

                    /**
                     * 判断参数 CpuDescription 是否已赋值
                     * @return CpuDescription 是否已赋值
                     * 
                     */
                    bool CpuDescriptionHasBeenSet() const;

                    /**
                     * 获取内存描述
                     * @return MemDescription 内存描述
                     * 
                     */
                    std::string GetMemDescription() const;

                    /**
                     * 设置内存描述
                     * @param _memDescription 内存描述
                     * 
                     */
                    void SetMemDescription(const std::string& _memDescription);

                    /**
                     * 判断参数 MemDescription 是否已赋值
                     * @return MemDescription 是否已赋值
                     * 
                     */
                    bool MemDescriptionHasBeenSet() const;

                    /**
                     * 获取磁盘描述
                     * @return DiskDescription 磁盘描述
                     * 
                     */
                    std::string GetDiskDescription() const;

                    /**
                     * 设置磁盘描述
                     * @param _diskDescription 磁盘描述
                     * 
                     */
                    void SetDiskDescription(const std::string& _diskDescription);

                    /**
                     * 判断参数 DiskDescription 是否已赋值
                     * @return DiskDescription 是否已赋值
                     * 
                     */
                    bool DiskDescriptionHasBeenSet() const;

                    /**
                     * 获取网卡描述
                     * @return NicDescription 网卡描述
                     * 
                     */
                    std::string GetNicDescription() const;

                    /**
                     * 设置网卡描述
                     * @param _nicDescription 网卡描述
                     * 
                     */
                    void SetNicDescription(const std::string& _nicDescription);

                    /**
                     * 判断参数 NicDescription 是否已赋值
                     * @return NicDescription 是否已赋值
                     * 
                     */
                    bool NicDescriptionHasBeenSet() const;

                    /**
                     * 获取是否支持 RAID 的描述
                     * @return RaidDescription 是否支持 RAID 的描述
                     * 
                     */
                    std::string GetRaidDescription() const;

                    /**
                     * 设置是否支持 RAID 的描述
                     * @param _raidDescription 是否支持 RAID 的描述
                     * 
                     */
                    void SetRaidDescription(const std::string& _raidDescription);

                    /**
                     * 判断参数 RaidDescription 是否已赋值
                     * @return RaidDescription 是否已赋值
                     * 
                     */
                    bool RaidDescriptionHasBeenSet() const;

                    /**
                     * 获取cpu的核心数。仅是物理服务器未开启超线程的核心数， 超线程的核心数为Cpu*2
                     * @return Cpu cpu的核心数。仅是物理服务器未开启超线程的核心数， 超线程的核心数为Cpu*2
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置cpu的核心数。仅是物理服务器未开启超线程的核心数， 超线程的核心数为Cpu*2
                     * @param _cpu cpu的核心数。仅是物理服务器未开启超线程的核心数， 超线程的核心数为Cpu*2
                     * 
                     */
                    void SetCpu(const uint64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取机型外部代号
                     * @return DeviceClassCode 机型外部代号
                     * 
                     */
                    std::string GetDeviceClassCode() const;

                    /**
                     * 设置机型外部代号
                     * @param _deviceClassCode 机型外部代号
                     * 
                     */
                    void SetDeviceClassCode(const std::string& _deviceClassCode);

                    /**
                     * 判断参数 DeviceClassCode 是否已赋值
                     * @return DeviceClassCode 是否已赋值
                     * 
                     */
                    bool DeviceClassCodeHasBeenSet() const;

                private:

                    /**
                     * 设备实例 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 是否自定义机型
                     */
                    uint64_t m_isElastic;
                    bool m_isElasticHasBeenSet;

                    /**
                     * 机型计费模式，1 为预付费，2 为后付费
                     */
                    uint64_t m_cpmPayMode;
                    bool m_cpmPayModeHasBeenSet;

                    /**
                     * 自定义机型，CPU 型号 ID（非自定义机型返回0）
                     */
                    uint64_t m_cpuId;
                    bool m_cpuIdHasBeenSet;

                    /**
                     * 自定义机型，内存大小, 单位 GB（非自定义机型返回0）
                     */
                    uint64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * 是否有 RAID 卡，0：没有 RAID 卡； 1：有 RAID 卡
                     */
                    uint64_t m_containRaidCard;
                    bool m_containRaidCardHasBeenSet;

                    /**
                     * 自定义机型系统盘类型ID（若没有则返回0）
                     */
                    uint64_t m_systemDiskTypeId;
                    bool m_systemDiskTypeIdHasBeenSet;

                    /**
                     * 自定义机型系统盘数量（若没有则返回0）
                     */
                    uint64_t m_systemDiskCount;
                    bool m_systemDiskCountHasBeenSet;

                    /**
                     * 自定义机型数据盘类型 ID（若没有则返回0）
                     */
                    uint64_t m_dataDiskTypeId;
                    bool m_dataDiskTypeIdHasBeenSet;

                    /**
                     * 自定义机型数据盘数量（若没有则返回0）
                     */
                    uint64_t m_dataDiskCount;
                    bool m_dataDiskCountHasBeenSet;

                    /**
                     * CPU 型号描述
                     */
                    std::string m_cpuDescription;
                    bool m_cpuDescriptionHasBeenSet;

                    /**
                     * 内存描述
                     */
                    std::string m_memDescription;
                    bool m_memDescriptionHasBeenSet;

                    /**
                     * 磁盘描述
                     */
                    std::string m_diskDescription;
                    bool m_diskDescriptionHasBeenSet;

                    /**
                     * 网卡描述
                     */
                    std::string m_nicDescription;
                    bool m_nicDescriptionHasBeenSet;

                    /**
                     * 是否支持 RAID 的描述
                     */
                    std::string m_raidDescription;
                    bool m_raidDescriptionHasBeenSet;

                    /**
                     * cpu的核心数。仅是物理服务器未开启超线程的核心数， 超线程的核心数为Cpu*2
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 机型外部代号
                     */
                    std::string m_deviceClassCode;
                    bool m_deviceClassCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DEVICEHARDWAREINFO_H_
