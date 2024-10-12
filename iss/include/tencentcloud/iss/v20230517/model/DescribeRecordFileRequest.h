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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBERECORDFILEREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBERECORDFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * DescribeRecordFile请求参数结构体
                */
                class DescribeRecordFileRequest : public AbstractModel
                {
                public:
                    DescribeRecordFileRequest();
                    ~DescribeRecordFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取通道所属设备ID
                     * @return DeviceId 通道所属设备ID
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置通道所属设备ID
                     * @param _deviceId 通道所属设备ID
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
                     * 获取通道ID
                     * @return ChannelId 通道ID
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置通道ID
                     * @param _channelId 通道ID
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
                     * 获取检索开始时间，UTC秒数，例如：1662114146，开始和结束时间段最长为一天，且不能跨天
                     * @return StartTime 检索开始时间，UTC秒数，例如：1662114146，开始和结束时间段最长为一天，且不能跨天
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置检索开始时间，UTC秒数，例如：1662114146，开始和结束时间段最长为一天，且不能跨天
                     * @param _startTime 检索开始时间，UTC秒数，例如：1662114146，开始和结束时间段最长为一天，且不能跨天
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取检索结束时间，UTC秒数，例如：1662114246，开始和结束时间段最长为一天，且不能跨天
                     * @return EndTime 检索结束时间，UTC秒数，例如：1662114246，开始和结束时间段最长为一天，且不能跨天
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置检索结束时间，UTC秒数，例如：1662114246，开始和结束时间段最长为一天，且不能跨天
                     * @param _endTime 检索结束时间，UTC秒数，例如：1662114246，开始和结束时间段最长为一天，且不能跨天
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取是否携带每个时间段的播放url
                     * @return WithUrl 是否携带每个时间段的播放url
                     * 
                     */
                    bool GetWithUrl() const;

                    /**
                     * 设置是否携带每个时间段的播放url
                     * @param _withUrl 是否携带每个时间段的播放url
                     * 
                     */
                    void SetWithUrl(const bool& _withUrl);

                    /**
                     * 判断参数 WithUrl 是否已赋值
                     * @return WithUrl 是否已赋值
                     * 
                     */
                    bool WithUrlHasBeenSet() const;

                private:

                    /**
                     * 通道所属设备ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 通道ID
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 检索开始时间，UTC秒数，例如：1662114146，开始和结束时间段最长为一天，且不能跨天
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 检索结束时间，UTC秒数，例如：1662114246，开始和结束时间段最长为一天，且不能跨天
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 是否携带每个时间段的播放url
                     */
                    bool m_withUrl;
                    bool m_withUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBERECORDFILEREQUEST_H_
