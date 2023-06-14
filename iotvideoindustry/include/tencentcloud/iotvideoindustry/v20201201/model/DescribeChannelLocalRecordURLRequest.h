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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBECHANNELLOCALRECORDURLREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBECHANNELLOCALRECORDURLREQUEST_H_

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
                * DescribeChannelLocalRecordURL请求参数结构体
                */
                class DescribeChannelLocalRecordURLRequest : public AbstractModel
                {
                public:
                    DescribeChannelLocalRecordURLRequest();
                    ~DescribeChannelLocalRecordURLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备唯一标识
                     * @return DeviceId 设备唯一标识
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备唯一标识
                     * @param _deviceId 设备唯一标识
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
                     * 获取通道唯一标识
                     * @return ChannelId 通道唯一标识
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置通道唯一标识
                     * @param _channelId 通道唯一标识
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取录像文件Id，通过获取本地录像返回
                     * @return RecordId 录像文件Id，通过获取本地录像返回
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置录像文件Id，通过获取本地录像返回
                     * @param _recordId 录像文件Id，通过获取本地录像返回
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
                     * 获取UNIX 时间戳，30天内，URL失效时间，如180s无人观看此流则URL提前失效
                     * @return ExpireTime UNIX 时间戳，30天内，URL失效时间，如180s无人观看此流则URL提前失效
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置UNIX 时间戳，30天内，URL失效时间，如180s无人观看此流则URL提前失效
                     * @param _expireTime UNIX 时间戳，30天内，URL失效时间，如180s无人观看此流则URL提前失效
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
                     * 获取录像文件推送的开始时间，需要在RecordId参数起始时间内，可以通过此参数控制回放流起始点
                     * @return StartTime 录像文件推送的开始时间，需要在RecordId参数起始时间内，可以通过此参数控制回放流起始点
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置录像文件推送的开始时间，需要在RecordId参数起始时间内，可以通过此参数控制回放流起始点
                     * @param _startTime 录像文件推送的开始时间，需要在RecordId参数起始时间内，可以通过此参数控制回放流起始点
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
                     * 获取录像文件推送的结束时间，需要在RecordId参数起始时间内，可以通过此参数控制回放流起始点
                     * @return EndTime 录像文件推送的结束时间，需要在RecordId参数起始时间内，可以通过此参数控制回放流起始点
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置录像文件推送的结束时间，需要在RecordId参数起始时间内，可以通过此参数控制回放流起始点
                     * @param _endTime 录像文件推送的结束时间，需要在RecordId参数起始时间内，可以通过此参数控制回放流起始点
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 设备唯一标识
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 通道唯一标识
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 录像文件Id，通过获取本地录像返回
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * UNIX 时间戳，30天内，URL失效时间，如180s无人观看此流则URL提前失效
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 录像文件推送的开始时间，需要在RecordId参数起始时间内，可以通过此参数控制回放流起始点
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 录像文件推送的结束时间，需要在RecordId参数起始时间内，可以通过此参数控制回放流起始点
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBECHANNELLOCALRECORDURLREQUEST_H_
