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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBERECORDSTREAMREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBERECORDSTREAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * DescribeRecordStream请求参数结构体
                */
                class DescribeRecordStreamRequest : public AbstractModel
                {
                public:
                    DescribeRecordStreamRequest();
                    ~DescribeRecordStreamRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备Id
                     * @return DeviceId 设备Id
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备Id
                     * @param DeviceId 设备Id
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取流失效时间
                     * @return ExpireTime 流失效时间
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置流失效时间
                     * @param ExpireTime 流失效时间
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取录像文件Id
                     * @return RecordId 录像文件Id
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置录像文件Id
                     * @param RecordId 录像文件Id
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取录像流开始时间，当录像文件Id为空时有效
                     * @return StartTime 录像流开始时间，当录像文件Id为空时有效
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置录像流开始时间，当录像文件Id为空时有效
                     * @param StartTime 录像流开始时间，当录像文件Id为空时有效
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取录像流结束时间，当录像文件Id为空时有效
                     * @return EndTime 录像流结束时间，当录像文件Id为空时有效
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置录像流结束时间，当录像文件Id为空时有效
                     * @param EndTime 录像流结束时间，当录像文件Id为空时有效
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 设备Id
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 流失效时间
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 录像文件Id
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 录像流开始时间，当录像文件Id为空时有效
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 录像流结束时间，当录像文件Id为空时有效
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBERECORDSTREAMREQUEST_H_
