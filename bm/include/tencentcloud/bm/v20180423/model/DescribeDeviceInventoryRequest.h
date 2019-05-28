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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEDEVICEINVENTORYREQUEST_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEDEVICEINVENTORYREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeDeviceInventory请求参数结构体
                */
                class DescribeDeviceInventoryRequest : public AbstractModel
                {
                public:
                    DescribeDeviceInventoryRequest();
                    ~DescribeDeviceInventoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param Zone 可用区
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取设备型号
                     * @return DeviceClassCode 设备型号
                     */
                    std::string GetDeviceClassCode() const;

                    /**
                     * 设置设备型号
                     * @param DeviceClassCode 设备型号
                     */
                    void SetDeviceClassCode(const std::string& _deviceClassCode);

                    /**
                     * 判断参数 DeviceClassCode 是否已赋值
                     * @return DeviceClassCode 是否已赋值
                     */
                    bool DeviceClassCodeHasBeenSet() const;

                    /**
                     * 获取私有网络ID
                     * @return VpcId 私有网络ID
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID
                     * @param VpcId 私有网络ID
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网ID
                     * @return SubnetId 子网ID
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
                     * @param SubnetId 子网ID
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取CpuId，自定义机型时需传入
                     * @return CpuId CpuId，自定义机型时需传入
                     */
                    uint64_t GetCpuId() const;

                    /**
                     * 设置CpuId，自定义机型时需传入
                     * @param CpuId CpuId，自定义机型时需传入
                     */
                    void SetCpuId(const uint64_t& _cpuId);

                    /**
                     * 判断参数 CpuId 是否已赋值
                     * @return CpuId 是否已赋值
                     */
                    bool CpuIdHasBeenSet() const;

                    /**
                     * 获取硬盘类型，自定义机型时需传入
                     * @return DiskType 硬盘类型，自定义机型时需传入
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置硬盘类型，自定义机型时需传入
                     * @param DiskType 硬盘类型，自定义机型时需传入
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取单块硬盘大小，自定义机型时需传入
                     * @return DiskSize 单块硬盘大小，自定义机型时需传入
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置单块硬盘大小，自定义机型时需传入
                     * @param DiskSize 单块硬盘大小，自定义机型时需传入
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取硬盘数量，自定义机型时需传入
                     * @return DiskNum 硬盘数量，自定义机型时需传入
                     */
                    uint64_t GetDiskNum() const;

                    /**
                     * 设置硬盘数量，自定义机型时需传入
                     * @param DiskNum 硬盘数量，自定义机型时需传入
                     */
                    void SetDiskNum(const uint64_t& _diskNum);

                    /**
                     * 判断参数 DiskNum 是否已赋值
                     * @return DiskNum 是否已赋值
                     */
                    bool DiskNumHasBeenSet() const;

                    /**
                     * 获取内存总大小，自定义机型时需传入
                     * @return Mem 内存总大小，自定义机型时需传入
                     */
                    uint64_t GetMem() const;

                    /**
                     * 设置内存总大小，自定义机型时需传入
                     * @param Mem 内存总大小，自定义机型时需传入
                     */
                    void SetMem(const uint64_t& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取是否支持raid，自定义机型时需传入
                     * @return HaveRaidCard 是否支持raid，自定义机型时需传入
                     */
                    uint64_t GetHaveRaidCard() const;

                    /**
                     * 设置是否支持raid，自定义机型时需传入
                     * @param HaveRaidCard 是否支持raid，自定义机型时需传入
                     */
                    void SetHaveRaidCard(const uint64_t& _haveRaidCard);

                    /**
                     * 判断参数 HaveRaidCard 是否已赋值
                     * @return HaveRaidCard 是否已赋值
                     */
                    bool HaveRaidCardHasBeenSet() const;

                private:

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 设备型号
                     */
                    std::string m_deviceClassCode;
                    bool m_deviceClassCodeHasBeenSet;

                    /**
                     * 私有网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * CpuId，自定义机型时需传入
                     */
                    uint64_t m_cpuId;
                    bool m_cpuIdHasBeenSet;

                    /**
                     * 硬盘类型，自定义机型时需传入
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 单块硬盘大小，自定义机型时需传入
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 硬盘数量，自定义机型时需传入
                     */
                    uint64_t m_diskNum;
                    bool m_diskNumHasBeenSet;

                    /**
                     * 内存总大小，自定义机型时需传入
                     */
                    uint64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * 是否支持raid，自定义机型时需传入
                     */
                    uint64_t m_haveRaidCard;
                    bool m_haveRaidCardHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEDEVICEINVENTORYREQUEST_H_
