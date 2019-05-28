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
                * cdh实例的资源信息
                */
                class HostResource : public AbstractModel
                {
                public:
                    HostResource();
                    ~HostResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取cdh实例总cpu核数
                     * @return CpuTotal cdh实例总cpu核数
                     */
                    uint64_t GetCpuTotal() const;

                    /**
                     * 设置cdh实例总cpu核数
                     * @param CpuTotal cdh实例总cpu核数
                     */
                    void SetCpuTotal(const uint64_t& _cpuTotal);

                    /**
                     * 判断参数 CpuTotal 是否已赋值
                     * @return CpuTotal 是否已赋值
                     */
                    bool CpuTotalHasBeenSet() const;

                    /**
                     * 获取cdh实例可用cpu核数
                     * @return CpuAvailable cdh实例可用cpu核数
                     */
                    uint64_t GetCpuAvailable() const;

                    /**
                     * 设置cdh实例可用cpu核数
                     * @param CpuAvailable cdh实例可用cpu核数
                     */
                    void SetCpuAvailable(const uint64_t& _cpuAvailable);

                    /**
                     * 判断参数 CpuAvailable 是否已赋值
                     * @return CpuAvailable 是否已赋值
                     */
                    bool CpuAvailableHasBeenSet() const;

                    /**
                     * 获取cdh实例总内存大小（单位为:GiB）
                     * @return MemTotal cdh实例总内存大小（单位为:GiB）
                     */
                    double GetMemTotal() const;

                    /**
                     * 设置cdh实例总内存大小（单位为:GiB）
                     * @param MemTotal cdh实例总内存大小（单位为:GiB）
                     */
                    void SetMemTotal(const double& _memTotal);

                    /**
                     * 判断参数 MemTotal 是否已赋值
                     * @return MemTotal 是否已赋值
                     */
                    bool MemTotalHasBeenSet() const;

                    /**
                     * 获取cdh实例可用内存大小（单位为:GiB）
                     * @return MemAvailable cdh实例可用内存大小（单位为:GiB）
                     */
                    double GetMemAvailable() const;

                    /**
                     * 设置cdh实例可用内存大小（单位为:GiB）
                     * @param MemAvailable cdh实例可用内存大小（单位为:GiB）
                     */
                    void SetMemAvailable(const double& _memAvailable);

                    /**
                     * 判断参数 MemAvailable 是否已赋值
                     * @return MemAvailable 是否已赋值
                     */
                    bool MemAvailableHasBeenSet() const;

                    /**
                     * 获取cdh实例总磁盘大小（单位为:GiB）
                     * @return DiskTotal cdh实例总磁盘大小（单位为:GiB）
                     */
                    uint64_t GetDiskTotal() const;

                    /**
                     * 设置cdh实例总磁盘大小（单位为:GiB）
                     * @param DiskTotal cdh实例总磁盘大小（单位为:GiB）
                     */
                    void SetDiskTotal(const uint64_t& _diskTotal);

                    /**
                     * 判断参数 DiskTotal 是否已赋值
                     * @return DiskTotal 是否已赋值
                     */
                    bool DiskTotalHasBeenSet() const;

                    /**
                     * 获取cdh实例可用磁盘大小（单位为:GiB）
                     * @return DiskAvailable cdh实例可用磁盘大小（单位为:GiB）
                     */
                    uint64_t GetDiskAvailable() const;

                    /**
                     * 设置cdh实例可用磁盘大小（单位为:GiB）
                     * @param DiskAvailable cdh实例可用磁盘大小（单位为:GiB）
                     */
                    void SetDiskAvailable(const uint64_t& _diskAvailable);

                    /**
                     * 判断参数 DiskAvailable 是否已赋值
                     * @return DiskAvailable 是否已赋值
                     */
                    bool DiskAvailableHasBeenSet() const;

                private:

                    /**
                     * cdh实例总cpu核数
                     */
                    uint64_t m_cpuTotal;
                    bool m_cpuTotalHasBeenSet;

                    /**
                     * cdh实例可用cpu核数
                     */
                    uint64_t m_cpuAvailable;
                    bool m_cpuAvailableHasBeenSet;

                    /**
                     * cdh实例总内存大小（单位为:GiB）
                     */
                    double m_memTotal;
                    bool m_memTotalHasBeenSet;

                    /**
                     * cdh实例可用内存大小（单位为:GiB）
                     */
                    double m_memAvailable;
                    bool m_memAvailableHasBeenSet;

                    /**
                     * cdh实例总磁盘大小（单位为:GiB）
                     */
                    uint64_t m_diskTotal;
                    bool m_diskTotalHasBeenSet;

                    /**
                     * cdh实例可用磁盘大小（单位为:GiB）
                     */
                    uint64_t m_diskAvailable;
                    bool m_diskAvailableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_HOSTRESOURCE_H_
