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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEDEVICECLASSPARTITIONREQUEST_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEDEVICECLASSPARTITIONREQUEST_H_

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
                * DescribeDeviceClassPartition请求参数结构体
                */
                class DescribeDeviceClassPartitionRequest : public AbstractModel
                {
                public:
                    DescribeDeviceClassPartitionRequest();
                    ~DescribeDeviceClassPartitionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备类型代号。代号通过接口[查询设备型号(DescribeDeviceClass)](https://cloud.tencent.com/document/api/386/32911)查询。标准机型需要传入此参数。虽是可选参数，但DeviceClassCode和InstanceId参数，必须要填写一个。
                     * @return DeviceClassCode 设备类型代号。代号通过接口[查询设备型号(DescribeDeviceClass)](https://cloud.tencent.com/document/api/386/32911)查询。标准机型需要传入此参数。虽是可选参数，但DeviceClassCode和InstanceId参数，必须要填写一个。
                     * 
                     */
                    std::string GetDeviceClassCode() const;

                    /**
                     * 设置设备类型代号。代号通过接口[查询设备型号(DescribeDeviceClass)](https://cloud.tencent.com/document/api/386/32911)查询。标准机型需要传入此参数。虽是可选参数，但DeviceClassCode和InstanceId参数，必须要填写一个。
                     * @param _deviceClassCode 设备类型代号。代号通过接口[查询设备型号(DescribeDeviceClass)](https://cloud.tencent.com/document/api/386/32911)查询。标准机型需要传入此参数。虽是可选参数，但DeviceClassCode和InstanceId参数，必须要填写一个。
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
                     * 获取需要查询自定义机型RAID信息时，传入自定义机型实例ID。InstanceId存在时其余参数失效。
                     * @return InstanceId 需要查询自定义机型RAID信息时，传入自定义机型实例ID。InstanceId存在时其余参数失效。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置需要查询自定义机型RAID信息时，传入自定义机型实例ID。InstanceId存在时其余参数失效。
                     * @param _instanceId 需要查询自定义机型RAID信息时，传入自定义机型实例ID。InstanceId存在时其余参数失效。
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
                     * 获取CPU型号ID，查询自定义机型时需要传入
                     * @return CpuId CPU型号ID，查询自定义机型时需要传入
                     * 
                     */
                    uint64_t GetCpuId() const;

                    /**
                     * 设置CPU型号ID，查询自定义机型时需要传入
                     * @param _cpuId CPU型号ID，查询自定义机型时需要传入
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
                     * 获取内存大小，单位为G，查询自定义机型时需要传入
                     * @return MemSize 内存大小，单位为G，查询自定义机型时需要传入
                     * 
                     */
                    uint64_t GetMemSize() const;

                    /**
                     * 设置内存大小，单位为G，查询自定义机型时需要传入
                     * @param _memSize 内存大小，单位为G，查询自定义机型时需要传入
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
                     * 获取是否有RAID卡，取值：1(有) 0(无)。查询自定义机型时需要传入
                     * @return ContainRaidCard 是否有RAID卡，取值：1(有) 0(无)。查询自定义机型时需要传入
                     * 
                     */
                    uint64_t GetContainRaidCard() const;

                    /**
                     * 设置是否有RAID卡，取值：1(有) 0(无)。查询自定义机型时需要传入
                     * @param _containRaidCard 是否有RAID卡，取值：1(有) 0(无)。查询自定义机型时需要传入
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
                     * 获取系统盘类型ID，查询自定义机型时需要传入
                     * @return SystemDiskTypeId 系统盘类型ID，查询自定义机型时需要传入
                     * 
                     */
                    uint64_t GetSystemDiskTypeId() const;

                    /**
                     * 设置系统盘类型ID，查询自定义机型时需要传入
                     * @param _systemDiskTypeId 系统盘类型ID，查询自定义机型时需要传入
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
                     * 获取系统盘数量，查询自定义机型时需要传入
                     * @return SystemDiskCount 系统盘数量，查询自定义机型时需要传入
                     * 
                     */
                    uint64_t GetSystemDiskCount() const;

                    /**
                     * 设置系统盘数量，查询自定义机型时需要传入
                     * @param _systemDiskCount 系统盘数量，查询自定义机型时需要传入
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
                     * 获取数据盘类型ID，查询自定义机型时可传入
                     * @return DataDiskTypeId 数据盘类型ID，查询自定义机型时可传入
                     * 
                     */
                    uint64_t GetDataDiskTypeId() const;

                    /**
                     * 设置数据盘类型ID，查询自定义机型时可传入
                     * @param _dataDiskTypeId 数据盘类型ID，查询自定义机型时可传入
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
                     * 获取数据盘数量，查询自定义机型时可传入
                     * @return DataDiskCount 数据盘数量，查询自定义机型时可传入
                     * 
                     */
                    uint64_t GetDataDiskCount() const;

                    /**
                     * 设置数据盘数量，查询自定义机型时可传入
                     * @param _dataDiskCount 数据盘数量，查询自定义机型时可传入
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
                     * 设备类型代号。代号通过接口[查询设备型号(DescribeDeviceClass)](https://cloud.tencent.com/document/api/386/32911)查询。标准机型需要传入此参数。虽是可选参数，但DeviceClassCode和InstanceId参数，必须要填写一个。
                     */
                    std::string m_deviceClassCode;
                    bool m_deviceClassCodeHasBeenSet;

                    /**
                     * 需要查询自定义机型RAID信息时，传入自定义机型实例ID。InstanceId存在时其余参数失效。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * CPU型号ID，查询自定义机型时需要传入
                     */
                    uint64_t m_cpuId;
                    bool m_cpuIdHasBeenSet;

                    /**
                     * 内存大小，单位为G，查询自定义机型时需要传入
                     */
                    uint64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * 是否有RAID卡，取值：1(有) 0(无)。查询自定义机型时需要传入
                     */
                    uint64_t m_containRaidCard;
                    bool m_containRaidCardHasBeenSet;

                    /**
                     * 系统盘类型ID，查询自定义机型时需要传入
                     */
                    uint64_t m_systemDiskTypeId;
                    bool m_systemDiskTypeIdHasBeenSet;

                    /**
                     * 系统盘数量，查询自定义机型时需要传入
                     */
                    uint64_t m_systemDiskCount;
                    bool m_systemDiskCountHasBeenSet;

                    /**
                     * 数据盘类型ID，查询自定义机型时可传入
                     */
                    uint64_t m_dataDiskTypeId;
                    bool m_dataDiskTypeIdHasBeenSet;

                    /**
                     * 数据盘数量，查询自定义机型时可传入
                     */
                    uint64_t m_dataDiskCount;
                    bool m_dataDiskCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEDEVICECLASSPARTITIONREQUEST_H_
