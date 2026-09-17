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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_INSTANCETYPEQUOTA_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_INSTANCETYPEQUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Edgezone
    {
        namespace V20260401
        {
            namespace Model
            {
                /**
                * 账号在可用区下的机型配额信息，包含可用区、机型详情和配额数量。
                */
                class InstanceTypeQuota : public AbstractModel
                {
                public:
                    InstanceTypeQuota();
                    ~InstanceTypeQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可用区代码。
                     * @return Zone 可用区代码。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区代码。
                     * @param _zone 可用区代码。
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
                     * 获取机型规格。
                     * @return InstanceType 机型规格。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置机型规格。
                     * @param _instanceType 机型规格。
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
                     * 获取机型家族。
                     * @return InstanceFamily 机型家族。
                     * 
                     */
                    std::string GetInstanceFamily() const;

                    /**
                     * 设置机型家族。
                     * @param _instanceFamily 机型家族。
                     * 
                     */
                    void SetInstanceFamily(const std::string& _instanceFamily);

                    /**
                     * 判断参数 InstanceFamily 是否已赋值
                     * @return InstanceFamily 是否已赋值
                     * 
                     */
                    bool InstanceFamilyHasBeenSet() const;

                    /**
                     * 获取机型族名称
                     * @return InstanceFamilyName 机型族名称
                     * 
                     */
                    std::string GetInstanceFamilyName() const;

                    /**
                     * 设置机型族名称
                     * @param _instanceFamilyName 机型族名称
                     * 
                     */
                    void SetInstanceFamilyName(const std::string& _instanceFamilyName);

                    /**
                     * 判断参数 InstanceFamilyName 是否已赋值
                     * @return InstanceFamilyName 是否已赋值
                     * 
                     */
                    bool InstanceFamilyNameHasBeenSet() const;

                    /**
                     * 获取CPU核数。
                     * @return CpuCores CPU核数。
                     * 
                     */
                    int64_t GetCpuCores() const;

                    /**
                     * 设置CPU核数。
                     * @param _cpuCores CPU核数。
                     * 
                     */
                    void SetCpuCores(const int64_t& _cpuCores);

                    /**
                     * 判断参数 CpuCores 是否已赋值
                     * @return CpuCores 是否已赋值
                     * 
                     */
                    bool CpuCoresHasBeenSet() const;

                    /**
                     * 获取CPU类型。
                     * @return CpuType CPU类型。
                     * 
                     */
                    std::string GetCpuType() const;

                    /**
                     * 设置CPU类型。
                     * @param _cpuType CPU类型。
                     * 
                     */
                    void SetCpuType(const std::string& _cpuType);

                    /**
                     * 判断参数 CpuType 是否已赋值
                     * @return CpuType 是否已赋值
                     * 
                     */
                    bool CpuTypeHasBeenSet() const;

                    /**
                     * 获取内存大小（GB）。
                     * @return MemoryGb 内存大小（GB）。
                     * 
                     */
                    int64_t GetMemoryGb() const;

                    /**
                     * 设置内存大小（GB）。
                     * @param _memoryGb 内存大小（GB）。
                     * 
                     */
                    void SetMemoryGb(const int64_t& _memoryGb);

                    /**
                     * 判断参数 MemoryGb 是否已赋值
                     * @return MemoryGb 是否已赋值
                     * 
                     */
                    bool MemoryGbHasBeenSet() const;

                    /**
                     * 获取系统盘类型。
                     * @return SystemDiskType 系统盘类型。
                     * 
                     */
                    std::string GetSystemDiskType() const;

                    /**
                     * 设置系统盘类型。
                     * @param _systemDiskType 系统盘类型。
                     * 
                     */
                    void SetSystemDiskType(const std::string& _systemDiskType);

                    /**
                     * 判断参数 SystemDiskType 是否已赋值
                     * @return SystemDiskType 是否已赋值
                     * 
                     */
                    bool SystemDiskTypeHasBeenSet() const;

                    /**
                     * 获取系统盘大小（GB）。
                     * @return SystemDiskSize 系统盘大小（GB）。
                     * 
                     */
                    int64_t GetSystemDiskSize() const;

                    /**
                     * 设置系统盘大小（GB）。
                     * @param _systemDiskSize 系统盘大小（GB）。
                     * 
                     */
                    void SetSystemDiskSize(const int64_t& _systemDiskSize);

                    /**
                     * 判断参数 SystemDiskSize 是否已赋值
                     * @return SystemDiskSize 是否已赋值
                     * 
                     */
                    bool SystemDiskSizeHasBeenSet() const;

                    /**
                     * 获取系统盘数量。
                     * @return SystemDiskCount 系统盘数量。
                     * 
                     */
                    uint64_t GetSystemDiskCount() const;

                    /**
                     * 设置系统盘数量。
                     * @param _systemDiskCount 系统盘数量。
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
                     * 获取数据盘类型。
                     * @return DataDiskType 数据盘类型。
                     * 
                     */
                    std::string GetDataDiskType() const;

                    /**
                     * 设置数据盘类型。
                     * @param _dataDiskType 数据盘类型。
                     * 
                     */
                    void SetDataDiskType(const std::string& _dataDiskType);

                    /**
                     * 判断参数 DataDiskType 是否已赋值
                     * @return DataDiskType 是否已赋值
                     * 
                     */
                    bool DataDiskTypeHasBeenSet() const;

                    /**
                     * 获取数据盘大小（GB）。
                     * @return DataDiskSize 数据盘大小（GB）。
                     * 
                     */
                    int64_t GetDataDiskSize() const;

                    /**
                     * 设置数据盘大小（GB）。
                     * @param _dataDiskSize 数据盘大小（GB）。
                     * 
                     */
                    void SetDataDiskSize(const int64_t& _dataDiskSize);

                    /**
                     * 判断参数 DataDiskSize 是否已赋值
                     * @return DataDiskSize 是否已赋值
                     * 
                     */
                    bool DataDiskSizeHasBeenSet() const;

                    /**
                     * 获取数据盘数量。
                     * @return DataDiskCount 数据盘数量。
                     * 
                     */
                    uint64_t GetDataDiskCount() const;

                    /**
                     * 设置数据盘数量。
                     * @param _dataDiskCount 数据盘数量。
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
                     * 获取第二组数据盘类型
                     * @return SecondaryDataDiskType 第二组数据盘类型
                     * 
                     */
                    std::string GetSecondaryDataDiskType() const;

                    /**
                     * 设置第二组数据盘类型
                     * @param _secondaryDataDiskType 第二组数据盘类型
                     * 
                     */
                    void SetSecondaryDataDiskType(const std::string& _secondaryDataDiskType);

                    /**
                     * 判断参数 SecondaryDataDiskType 是否已赋值
                     * @return SecondaryDataDiskType 是否已赋值
                     * 
                     */
                    bool SecondaryDataDiskTypeHasBeenSet() const;

                    /**
                     * 获取第二组数据盘大小(GB)
                     * @return SecondaryDataDiskSize 第二组数据盘大小(GB)
                     * 
                     */
                    int64_t GetSecondaryDataDiskSize() const;

                    /**
                     * 设置第二组数据盘大小(GB)
                     * @param _secondaryDataDiskSize 第二组数据盘大小(GB)
                     * 
                     */
                    void SetSecondaryDataDiskSize(const int64_t& _secondaryDataDiskSize);

                    /**
                     * 判断参数 SecondaryDataDiskSize 是否已赋值
                     * @return SecondaryDataDiskSize 是否已赋值
                     * 
                     */
                    bool SecondaryDataDiskSizeHasBeenSet() const;

                    /**
                     * 获取第二组数据盘数量
                     * @return SecondaryDataDiskCount 第二组数据盘数量
                     * 
                     */
                    int64_t GetSecondaryDataDiskCount() const;

                    /**
                     * 设置第二组数据盘数量
                     * @param _secondaryDataDiskCount 第二组数据盘数量
                     * 
                     */
                    void SetSecondaryDataDiskCount(const int64_t& _secondaryDataDiskCount);

                    /**
                     * 判断参数 SecondaryDataDiskCount 是否已赋值
                     * @return SecondaryDataDiskCount 是否已赋值
                     * 
                     */
                    bool SecondaryDataDiskCountHasBeenSet() const;

                    /**
                     * 获取磁盘描述字符串（向后兼容）。
                     * @return DiskType 磁盘描述字符串（向后兼容）。
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置磁盘描述字符串（向后兼容）。
                     * @param _diskType 磁盘描述字符串（向后兼容）。
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取网络接口类型。
                     * @return NetworkInterfaceType 网络接口类型。
                     * 
                     */
                    std::string GetNetworkInterfaceType() const;

                    /**
                     * 设置网络接口类型。
                     * @param _networkInterfaceType 网络接口类型。
                     * 
                     */
                    void SetNetworkInterfaceType(const std::string& _networkInterfaceType);

                    /**
                     * 判断参数 NetworkInterfaceType 是否已赋值
                     * @return NetworkInterfaceType 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceTypeHasBeenSet() const;

                    /**
                     * 获取GPU类型，无GPU时为空字符串。
                     * @return GpuType GPU类型，无GPU时为空字符串。
                     * 
                     */
                    std::string GetGpuType() const;

                    /**
                     * 设置GPU类型，无GPU时为空字符串。
                     * @param _gpuType GPU类型，无GPU时为空字符串。
                     * 
                     */
                    void SetGpuType(const std::string& _gpuType);

                    /**
                     * 判断参数 GpuType 是否已赋值
                     * @return GpuType 是否已赋值
                     * 
                     */
                    bool GpuTypeHasBeenSet() const;

                    /**
                     * 获取配额数量
                     * @return Quota 配额数量
                     * 
                     */
                    uint64_t GetQuota() const;

                    /**
                     * 设置配额数量
                     * @param _quota 配额数量
                     * 
                     */
                    void SetQuota(const uint64_t& _quota);

                    /**
                     * 判断参数 Quota 是否已赋值
                     * @return Quota 是否已赋值
                     * 
                     */
                    bool QuotaHasBeenSet() const;

                private:

                    /**
                     * 可用区代码。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 机型规格。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 机型家族。
                     */
                    std::string m_instanceFamily;
                    bool m_instanceFamilyHasBeenSet;

                    /**
                     * 机型族名称
                     */
                    std::string m_instanceFamilyName;
                    bool m_instanceFamilyNameHasBeenSet;

                    /**
                     * CPU核数。
                     */
                    int64_t m_cpuCores;
                    bool m_cpuCoresHasBeenSet;

                    /**
                     * CPU类型。
                     */
                    std::string m_cpuType;
                    bool m_cpuTypeHasBeenSet;

                    /**
                     * 内存大小（GB）。
                     */
                    int64_t m_memoryGb;
                    bool m_memoryGbHasBeenSet;

                    /**
                     * 系统盘类型。
                     */
                    std::string m_systemDiskType;
                    bool m_systemDiskTypeHasBeenSet;

                    /**
                     * 系统盘大小（GB）。
                     */
                    int64_t m_systemDiskSize;
                    bool m_systemDiskSizeHasBeenSet;

                    /**
                     * 系统盘数量。
                     */
                    uint64_t m_systemDiskCount;
                    bool m_systemDiskCountHasBeenSet;

                    /**
                     * 数据盘类型。
                     */
                    std::string m_dataDiskType;
                    bool m_dataDiskTypeHasBeenSet;

                    /**
                     * 数据盘大小（GB）。
                     */
                    int64_t m_dataDiskSize;
                    bool m_dataDiskSizeHasBeenSet;

                    /**
                     * 数据盘数量。
                     */
                    uint64_t m_dataDiskCount;
                    bool m_dataDiskCountHasBeenSet;

                    /**
                     * 第二组数据盘类型
                     */
                    std::string m_secondaryDataDiskType;
                    bool m_secondaryDataDiskTypeHasBeenSet;

                    /**
                     * 第二组数据盘大小(GB)
                     */
                    int64_t m_secondaryDataDiskSize;
                    bool m_secondaryDataDiskSizeHasBeenSet;

                    /**
                     * 第二组数据盘数量
                     */
                    int64_t m_secondaryDataDiskCount;
                    bool m_secondaryDataDiskCountHasBeenSet;

                    /**
                     * 磁盘描述字符串（向后兼容）。
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 网络接口类型。
                     */
                    std::string m_networkInterfaceType;
                    bool m_networkInterfaceTypeHasBeenSet;

                    /**
                     * GPU类型，无GPU时为空字符串。
                     */
                    std::string m_gpuType;
                    bool m_gpuTypeHasBeenSet;

                    /**
                     * 配额数量
                     */
                    uint64_t m_quota;
                    bool m_quotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_INSTANCETYPEQUOTA_H_
