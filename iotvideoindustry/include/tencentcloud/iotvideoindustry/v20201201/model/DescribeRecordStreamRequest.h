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
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备Id
                     * @param _deviceId 设备Id
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取流失效时间，UNIX时间戳，30天内
                     * @return ExpireTime 流失效时间，UNIX时间戳，30天内
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置流失效时间，UNIX时间戳，30天内
                     * @param _expireTime 流失效时间，UNIX时间戳，30天内
                     * 
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取录像文件ID
                     * @return RecordId 录像文件ID
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置录像文件ID
                     * @param _recordId 录像文件ID
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取录像流开始时间，当录像文件ID为空时有效，UNIX时间戳
                     * @return StartTime 录像流开始时间，当录像文件ID为空时有效，UNIX时间戳
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置录像流开始时间，当录像文件ID为空时有效，UNIX时间戳
                     * @param _startTime 录像流开始时间，当录像文件ID为空时有效，UNIX时间戳
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取录像流结束时间，当录像文件iD为空时有效，UNIX时间戳
                     * @return EndTime 录像流结束时间，当录像文件iD为空时有效，UNIX时间戳
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置录像流结束时间，当录像文件iD为空时有效，UNIX时间戳
                     * @param _endTime 录像流结束时间，当录像文件iD为空时有效，UNIX时间戳
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取通道唯一标识（此接口升级为必填字段）
                     * @return ChannelId 通道唯一标识（此接口升级为必填字段）
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置通道唯一标识（此接口升级为必填字段）
                     * @param _channelId 通道唯一标识（此接口升级为必填字段）
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                private:

                    /**
                     * 设备Id
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 流失效时间，UNIX时间戳，30天内
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 录像文件ID
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 录像流开始时间，当录像文件ID为空时有效，UNIX时间戳
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 录像流结束时间，当录像文件iD为空时有效，UNIX时间戳
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 通道唯一标识（此接口升级为必填字段）
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBERECORDSTREAMREQUEST_H_
