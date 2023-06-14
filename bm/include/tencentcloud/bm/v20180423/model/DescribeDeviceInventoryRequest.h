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
                     * 获取设备型号
                     * @return DeviceClassCode 设备型号
                     * 
                     */
                    std::string GetDeviceClassCode() const;

                    /**
                     * 设置设备型号
                     * @param _deviceClassCode 设备型号
                     * 
                     */
                    void SetDeviceClassCode(const std::string& _deviceClassCode);

                    /**
                     * 判断参数 DeviceClassCode 是否已赋值
                     * @return DeviceClassCode 是否已赋值
                     * 
                     */
                    bool DeviceClassCodeHasBeenSet() const;

                    /**
                     * 获取私有网络ID
                     * @return VpcId 私有网络ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID
                     * @param _vpcId 私有网络ID
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
                     * 获取子网ID
                     * @return SubnetId 子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
                     * @param _subnetId 子网ID
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
                     * 获取CPU型号ID，查询自定义机型时必填
                     * @return CpuId CPU型号ID，查询自定义机型时必填
                     * 
                     */
                    uint64_t GetCpuId() const;

                    /**
                     * 设置CPU型号ID，查询自定义机型时必填
                     * @param _cpuId CPU型号ID，查询自定义机型时必填
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
                     * 获取内存大小，单位为G，查询自定义机型时必填
                     * @return MemSize 内存大小，单位为G，查询自定义机型时必填
                     * 
                     */
                    uint64_t GetMemSize() const;

                    /**
                     * 设置内存大小，单位为G，查询自定义机型时必填
                     * @param _memSize 内存大小，单位为G，查询自定义机型时必填
                     * 
                     */
                    void SetMemSize(const uint64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取是否有RAID卡，取值：1(有) 0(无)，查询自定义机型时必填
                     * @return ContainRaidCard 是否有RAID卡，取值：1(有) 0(无)，查询自定义机型时必填
                     * 
                     */
                    uint64_t GetContainRaidCard() const;

                    /**
                     * 设置是否有RAID卡，取值：1(有) 0(无)，查询自定义机型时必填
                     * @param _containRaidCard 是否有RAID卡，取值：1(有) 0(无)，查询自定义机型时必填
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
                     * 获取系统盘类型ID，查询自定义机型时必填
                     * @return SystemDiskTypeId 系统盘类型ID，查询自定义机型时必填
                     * 
                     */
                    uint64_t GetSystemDiskTypeId() const;

                    /**
                     * 设置系统盘类型ID，查询自定义机型时必填
                     * @param _systemDiskTypeId 系统盘类型ID，查询自定义机型时必填
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
                     * 获取系统盘数量，查询自定义机型时必填
                     * @return SystemDiskCount 系统盘数量，查询自定义机型时必填
                     * 
                     */
                    uint64_t GetSystemDiskCount() const;

                    /**
                     * 设置系统盘数量，查询自定义机型时必填
                     * @param _systemDiskCount 系统盘数量，查询自定义机型时必填
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
                     * 获取数据盘类型ID，查询自定义机型时可填
                     * @return DataDiskTypeId 数据盘类型ID，查询自定义机型时可填
                     * 
                     */
                    uint64_t GetDataDiskTypeId() const;

                    /**
                     * 设置数据盘类型ID，查询自定义机型时可填
                     * @param _dataDiskTypeId 数据盘类型ID，查询自定义机型时可填
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
                     * 获取数据盘数量，查询自定义机型时可填
                     * @return DataDiskCount 数据盘数量，查询自定义机型时可填
                     * 
                     */
                    uint64_t GetDataDiskCount() const;

                    /**
                     * 设置数据盘数量，查询自定义机型时可填
                     * @param _dataDiskCount 数据盘数量，查询自定义机型时可填
                     * 
                     */
                    void SetDataDiskCount(const uint64_t& _dataDiskCount);

                    /**
                     * 判断参数 DataDiskCount 是否已赋值
                     * @return DataDiskCount 是否已赋值
                     * 
                     */
                    bool DataDiskCountHasBeenSet() const;

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
                     * CPU型号ID，查询自定义机型时必填
                     */
                    uint64_t m_cpuId;
                    bool m_cpuIdHasBeenSet;

                    /**
                     * 内存大小，单位为G，查询自定义机型时必填
                     */
                    uint64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * 是否有RAID卡，取值：1(有) 0(无)，查询自定义机型时必填
                     */
                    uint64_t m_containRaidCard;
                    bool m_containRaidCardHasBeenSet;

                    /**
                     * 系统盘类型ID，查询自定义机型时必填
                     */
                    uint64_t m_systemDiskTypeId;
                    bool m_systemDiskTypeIdHasBeenSet;

                    /**
                     * 系统盘数量，查询自定义机型时必填
                     */
                    uint64_t m_systemDiskCount;
                    bool m_systemDiskCountHasBeenSet;

                    /**
                     * 数据盘类型ID，查询自定义机型时可填
                     */
                    uint64_t m_dataDiskTypeId;
                    bool m_dataDiskTypeIdHasBeenSet;

                    /**
                     * 数据盘数量，查询自定义机型时可填
                     */
                    uint64_t m_dataDiskCount;
                    bool m_dataDiskCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEDEVICEINVENTORYREQUEST_H_
