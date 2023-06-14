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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DEVICEDISKINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DEVICEDISKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 实例磁盘监控数据
                */
                class DeviceDiskInfo : public AbstractModel
                {
                public:
                    DeviceDiskInfo();
                    ~DeviceDiskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取平均每秒有百分之几的时间用于IO操作
                     * @return IoRatioPerSec 平均每秒有百分之几的时间用于IO操作
                     * 
                     */
                    std::vector<int64_t> GetIoRatioPerSec() const;

                    /**
                     * 设置平均每秒有百分之几的时间用于IO操作
                     * @param _ioRatioPerSec 平均每秒有百分之几的时间用于IO操作
                     * 
                     */
                    void SetIoRatioPerSec(const std::vector<int64_t>& _ioRatioPerSec);

                    /**
                     * 判断参数 IoRatioPerSec 是否已赋值
                     * @return IoRatioPerSec 是否已赋值
                     * 
                     */
                    bool IoRatioPerSecHasBeenSet() const;

                    /**
                     * 获取平均每次设备I/O操作的等待时间*100，单位为毫秒。例如：该值为201，表示平均每次I/O操作等待时间为：201/100=2.1毫秒
                     * @return IoWaitTime 平均每次设备I/O操作的等待时间*100，单位为毫秒。例如：该值为201，表示平均每次I/O操作等待时间为：201/100=2.1毫秒
                     * 
                     */
                    std::vector<int64_t> GetIoWaitTime() const;

                    /**
                     * 设置平均每次设备I/O操作的等待时间*100，单位为毫秒。例如：该值为201，表示平均每次I/O操作等待时间为：201/100=2.1毫秒
                     * @param _ioWaitTime 平均每次设备I/O操作的等待时间*100，单位为毫秒。例如：该值为201，表示平均每次I/O操作等待时间为：201/100=2.1毫秒
                     * 
                     */
                    void SetIoWaitTime(const std::vector<int64_t>& _ioWaitTime);

                    /**
                     * 判断参数 IoWaitTime 是否已赋值
                     * @return IoWaitTime 是否已赋值
                     * 
                     */
                    bool IoWaitTimeHasBeenSet() const;

                    /**
                     * 获取磁盘平均每秒完成的读操作次数总和*100。例如：该值为2002，表示磁盘平均每秒完成读操作为：2002/100=20.2次
                     * @return Read 磁盘平均每秒完成的读操作次数总和*100。例如：该值为2002，表示磁盘平均每秒完成读操作为：2002/100=20.2次
                     * 
                     */
                    std::vector<int64_t> GetRead() const;

                    /**
                     * 设置磁盘平均每秒完成的读操作次数总和*100。例如：该值为2002，表示磁盘平均每秒完成读操作为：2002/100=20.2次
                     * @param _read 磁盘平均每秒完成的读操作次数总和*100。例如：该值为2002，表示磁盘平均每秒完成读操作为：2002/100=20.2次
                     * 
                     */
                    void SetRead(const std::vector<int64_t>& _read);

                    /**
                     * 判断参数 Read 是否已赋值
                     * @return Read 是否已赋值
                     * 
                     */
                    bool ReadHasBeenSet() const;

                    /**
                     * 获取磁盘平均每秒完成的写操作次数总和*100。例如：该值为30001，表示磁盘平均每秒完成写操作为：30001/100=300.01次
                     * @return Write 磁盘平均每秒完成的写操作次数总和*100。例如：该值为30001，表示磁盘平均每秒完成写操作为：30001/100=300.01次
                     * 
                     */
                    std::vector<int64_t> GetWrite() const;

                    /**
                     * 设置磁盘平均每秒完成的写操作次数总和*100。例如：该值为30001，表示磁盘平均每秒完成写操作为：30001/100=300.01次
                     * @param _write 磁盘平均每秒完成的写操作次数总和*100。例如：该值为30001，表示磁盘平均每秒完成写操作为：30001/100=300.01次
                     * 
                     */
                    void SetWrite(const std::vector<int64_t>& _write);

                    /**
                     * 判断参数 Write 是否已赋值
                     * @return Write 是否已赋值
                     * 
                     */
                    bool WriteHasBeenSet() const;

                    /**
                     * 获取磁盘空间容量，每两个一组，第一个为已使用容量，第二个为磁盘总容量
                     * @return CapacityRatio 磁盘空间容量，每两个一组，第一个为已使用容量，第二个为磁盘总容量
                     * 
                     */
                    std::vector<int64_t> GetCapacityRatio() const;

                    /**
                     * 设置磁盘空间容量，每两个一组，第一个为已使用容量，第二个为磁盘总容量
                     * @param _capacityRatio 磁盘空间容量，每两个一组，第一个为已使用容量，第二个为磁盘总容量
                     * 
                     */
                    void SetCapacityRatio(const std::vector<int64_t>& _capacityRatio);

                    /**
                     * 判断参数 CapacityRatio 是否已赋值
                     * @return CapacityRatio 是否已赋值
                     * 
                     */
                    bool CapacityRatioHasBeenSet() const;

                private:

                    /**
                     * 平均每秒有百分之几的时间用于IO操作
                     */
                    std::vector<int64_t> m_ioRatioPerSec;
                    bool m_ioRatioPerSecHasBeenSet;

                    /**
                     * 平均每次设备I/O操作的等待时间*100，单位为毫秒。例如：该值为201，表示平均每次I/O操作等待时间为：201/100=2.1毫秒
                     */
                    std::vector<int64_t> m_ioWaitTime;
                    bool m_ioWaitTimeHasBeenSet;

                    /**
                     * 磁盘平均每秒完成的读操作次数总和*100。例如：该值为2002，表示磁盘平均每秒完成读操作为：2002/100=20.2次
                     */
                    std::vector<int64_t> m_read;
                    bool m_readHasBeenSet;

                    /**
                     * 磁盘平均每秒完成的写操作次数总和*100。例如：该值为30001，表示磁盘平均每秒完成写操作为：30001/100=300.01次
                     */
                    std::vector<int64_t> m_write;
                    bool m_writeHasBeenSet;

                    /**
                     * 磁盘空间容量，每两个一组，第一个为已使用容量，第二个为磁盘总容量
                     */
                    std::vector<int64_t> m_capacityRatio;
                    bool m_capacityRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DEVICEDISKINFO_H_
