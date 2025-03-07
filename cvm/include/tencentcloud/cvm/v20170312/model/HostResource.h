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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_HOSTRESOURCE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_HOSTRESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 专用宿主机实例的资源信息
                */
                class HostResource : public AbstractModel
                {
                public:
                    HostResource();
                    ~HostResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取专用宿主机实例总CPU核数
                     * @return CpuTotal 专用宿主机实例总CPU核数
                     * 
                     */
                    uint64_t GetCpuTotal() const;

                    /**
                     * 设置专用宿主机实例总CPU核数
                     * @param _cpuTotal 专用宿主机实例总CPU核数
                     * 
                     */
                    void SetCpuTotal(const uint64_t& _cpuTotal);

                    /**
                     * 判断参数 CpuTotal 是否已赋值
                     * @return CpuTotal 是否已赋值
                     * 
                     */
                    bool CpuTotalHasBeenSet() const;

                    /**
                     * 获取专用宿主机实例可用CPU核数
                     * @return CpuAvailable 专用宿主机实例可用CPU核数
                     * 
                     */
                    uint64_t GetCpuAvailable() const;

                    /**
                     * 设置专用宿主机实例可用CPU核数
                     * @param _cpuAvailable 专用宿主机实例可用CPU核数
                     * 
                     */
                    void SetCpuAvailable(const uint64_t& _cpuAvailable);

                    /**
                     * 判断参数 CpuAvailable 是否已赋值
                     * @return CpuAvailable 是否已赋值
                     * 
                     */
                    bool CpuAvailableHasBeenSet() const;

                    /**
                     * 获取专用宿主机实例总内存大小（单位为:GiB）
                     * @return MemTotal 专用宿主机实例总内存大小（单位为:GiB）
                     * 
                     */
                    double GetMemTotal() const;

                    /**
                     * 设置专用宿主机实例总内存大小（单位为:GiB）
                     * @param _memTotal 专用宿主机实例总内存大小（单位为:GiB）
                     * 
                     */
                    void SetMemTotal(const double& _memTotal);

                    /**
                     * 判断参数 MemTotal 是否已赋值
                     * @return MemTotal 是否已赋值
                     * 
                     */
                    bool MemTotalHasBeenSet() const;

                    /**
                     * 获取专用宿主机实例可用内存大小（单位为:GiB）
                     * @return MemAvailable 专用宿主机实例可用内存大小（单位为:GiB）
                     * 
                     */
                    double GetMemAvailable() const;

                    /**
                     * 设置专用宿主机实例可用内存大小（单位为:GiB）
                     * @param _memAvailable 专用宿主机实例可用内存大小（单位为:GiB）
                     * 
                     */
                    void SetMemAvailable(const double& _memAvailable);

                    /**
                     * 判断参数 MemAvailable 是否已赋值
                     * @return MemAvailable 是否已赋值
                     * 
                     */
                    bool MemAvailableHasBeenSet() const;

                    /**
                     * 获取专用宿主机实例总磁盘大小（单位为:GiB）
                     * @return DiskTotal 专用宿主机实例总磁盘大小（单位为:GiB）
                     * 
                     */
                    uint64_t GetDiskTotal() const;

                    /**
                     * 设置专用宿主机实例总磁盘大小（单位为:GiB）
                     * @param _diskTotal 专用宿主机实例总磁盘大小（单位为:GiB）
                     * 
                     */
                    void SetDiskTotal(const uint64_t& _diskTotal);

                    /**
                     * 判断参数 DiskTotal 是否已赋值
                     * @return DiskTotal 是否已赋值
                     * 
                     */
                    bool DiskTotalHasBeenSet() const;

                    /**
                     * 获取专用宿主机实例可用磁盘大小（单位为:GiB）
                     * @return DiskAvailable 专用宿主机实例可用磁盘大小（单位为:GiB）
                     * 
                     */
                    uint64_t GetDiskAvailable() const;

                    /**
                     * 设置专用宿主机实例可用磁盘大小（单位为:GiB）
                     * @param _diskAvailable 专用宿主机实例可用磁盘大小（单位为:GiB）
                     * 
                     */
                    void SetDiskAvailable(const uint64_t& _diskAvailable);

                    /**
                     * 判断参数 DiskAvailable 是否已赋值
                     * @return DiskAvailable 是否已赋值
                     * 
                     */
                    bool DiskAvailableHasBeenSet() const;

                    /**
                     * 获取专用宿主机实例磁盘类型
                     * @return DiskType 专用宿主机实例磁盘类型
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置专用宿主机实例磁盘类型
                     * @param _diskType 专用宿主机实例磁盘类型
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
                     * 获取专用宿主机实例总GPU卡数
                     * @return GpuTotal 专用宿主机实例总GPU卡数
                     * 
                     */
                    uint64_t GetGpuTotal() const;

                    /**
                     * 设置专用宿主机实例总GPU卡数
                     * @param _gpuTotal 专用宿主机实例总GPU卡数
                     * 
                     */
                    void SetGpuTotal(const uint64_t& _gpuTotal);

                    /**
                     * 判断参数 GpuTotal 是否已赋值
                     * @return GpuTotal 是否已赋值
                     * 
                     */
                    bool GpuTotalHasBeenSet() const;

                    /**
                     * 获取专用宿主机实例可用GPU卡数
                     * @return GpuAvailable 专用宿主机实例可用GPU卡数
                     * 
                     */
                    uint64_t GetGpuAvailable() const;

                    /**
                     * 设置专用宿主机实例可用GPU卡数
                     * @param _gpuAvailable 专用宿主机实例可用GPU卡数
                     * 
                     */
                    void SetGpuAvailable(const uint64_t& _gpuAvailable);

                    /**
                     * 判断参数 GpuAvailable 是否已赋值
                     * @return GpuAvailable 是否已赋值
                     * 
                     */
                    bool GpuAvailableHasBeenSet() const;

                    /**
                     * 获取CDH owner
                     * @return ExclusiveOwner CDH owner
                     * 
                     */
                    std::string GetExclusiveOwner() const;

                    /**
                     * 设置CDH owner
                     * @param _exclusiveOwner CDH owner
                     * 
                     */
                    void SetExclusiveOwner(const std::string& _exclusiveOwner);

                    /**
                     * 判断参数 ExclusiveOwner 是否已赋值
                     * @return ExclusiveOwner 是否已赋值
                     * 
                     */
                    bool ExclusiveOwnerHasBeenSet() const;

                private:

                    /**
                     * 专用宿主机实例总CPU核数
                     */
                    uint64_t m_cpuTotal;
                    bool m_cpuTotalHasBeenSet;

                    /**
                     * 专用宿主机实例可用CPU核数
                     */
                    uint64_t m_cpuAvailable;
                    bool m_cpuAvailableHasBeenSet;

                    /**
                     * 专用宿主机实例总内存大小（单位为:GiB）
                     */
                    double m_memTotal;
                    bool m_memTotalHasBeenSet;

                    /**
                     * 专用宿主机实例可用内存大小（单位为:GiB）
                     */
                    double m_memAvailable;
                    bool m_memAvailableHasBeenSet;

                    /**
                     * 专用宿主机实例总磁盘大小（单位为:GiB）
                     */
                    uint64_t m_diskTotal;
                    bool m_diskTotalHasBeenSet;

                    /**
                     * 专用宿主机实例可用磁盘大小（单位为:GiB）
                     */
                    uint64_t m_diskAvailable;
                    bool m_diskAvailableHasBeenSet;

                    /**
                     * 专用宿主机实例磁盘类型
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 专用宿主机实例总GPU卡数
                     */
                    uint64_t m_gpuTotal;
                    bool m_gpuTotalHasBeenSet;

                    /**
                     * 专用宿主机实例可用GPU卡数
                     */
                    uint64_t m_gpuAvailable;
                    bool m_gpuAvailableHasBeenSet;

                    /**
                     * CDH owner
                     */
                    std::string m_exclusiveOwner;
                    bool m_exclusiveOwnerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_HOSTRESOURCE_H_
