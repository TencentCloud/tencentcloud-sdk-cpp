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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDEVICEMONITORINFORESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDEVICEMONITORINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/DeviceCpuInfo.h>
#include <tencentcloud/cdb/v20170320/model/DeviceMemInfo.h>
#include <tencentcloud/cdb/v20170320/model/DeviceNetInfo.h>
#include <tencentcloud/cdb/v20170320/model/DeviceDiskInfo.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeDeviceMonitorInfo返回参数结构体
                */
                class DescribeDeviceMonitorInfoResponse : public AbstractModel
                {
                public:
                    DescribeDeviceMonitorInfoResponse();
                    ~DescribeDeviceMonitorInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例CPU监控数据
                     * @return Cpu 实例CPU监控数据
                     * 
                     */
                    DeviceCpuInfo GetCpu() const;

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取实例内存监控数据
                     * @return Mem 实例内存监控数据
                     * 
                     */
                    DeviceMemInfo GetMem() const;

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * 
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取实例网络监控数据
                     * @return Net 实例网络监控数据
                     * 
                     */
                    DeviceNetInfo GetNet() const;

                    /**
                     * 判断参数 Net 是否已赋值
                     * @return Net 是否已赋值
                     * 
                     */
                    bool NetHasBeenSet() const;

                    /**
                     * 获取实例磁盘监控数据
                     * @return Disk 实例磁盘监控数据
                     * 
                     */
                    DeviceDiskInfo GetDisk() const;

                    /**
                     * 判断参数 Disk 是否已赋值
                     * @return Disk 是否已赋值
                     * 
                     */
                    bool DiskHasBeenSet() const;

                private:

                    /**
                     * 实例CPU监控数据
                     */
                    DeviceCpuInfo m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 实例内存监控数据
                     */
                    DeviceMemInfo m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * 实例网络监控数据
                     */
                    DeviceNetInfo m_net;
                    bool m_netHasBeenSet;

                    /**
                     * 实例磁盘监控数据
                     */
                    DeviceDiskInfo m_disk;
                    bool m_diskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDEVICEMONITORINFORESPONSE_H_
