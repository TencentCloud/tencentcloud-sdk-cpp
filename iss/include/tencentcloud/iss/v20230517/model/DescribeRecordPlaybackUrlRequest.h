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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBERECORDPLAYBACKURLREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBERECORDPLAYBACKURLREQUEST_H_

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
                * DescribeRecordPlaybackUrl请求参数结构体
                */
                class DescribeRecordPlaybackUrlRequest : public AbstractModel
                {
                public:
                    DescribeRecordPlaybackUrlRequest();
                    ~DescribeRecordPlaybackUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备通道ID
                     * @return ChannelId 设备通道ID
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置设备通道ID
                     * @param _channelId 设备通道ID
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
                     * 获取回放开始时间，UTC秒数，例如：1662114146，开始和结束时间段最长为一天，且不能跨天
                     * @return StartTime 回放开始时间，UTC秒数，例如：1662114146，开始和结束时间段最长为一天，且不能跨天
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置回放开始时间，UTC秒数，例如：1662114146，开始和结束时间段最长为一天，且不能跨天
                     * @param _startTime 回放开始时间，UTC秒数，例如：1662114146，开始和结束时间段最长为一天，且不能跨天
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
                     * 获取回放结束时间，UTC秒数，例如：1662114246，开始和结束时间段最长为一天，且不能跨天
                     * @return EndTime 回放结束时间，UTC秒数，例如：1662114246，开始和结束时间段最长为一天，且不能跨天
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置回放结束时间，UTC秒数，例如：1662114246，开始和结束时间段最长为一天，且不能跨天
                     * @param _endTime 回放结束时间，UTC秒数，例如：1662114246，开始和结束时间段最长为一天，且不能跨天
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
                     * 获取是否获取内网地址
                     * @return IsInternal 是否获取内网地址
                     * 
                     */
                    bool GetIsInternal() const;

                    /**
                     * 设置是否获取内网地址
                     * @param _isInternal 是否获取内网地址
                     * 
                     */
                    void SetIsInternal(const bool& _isInternal);

                    /**
                     * 判断参数 IsInternal 是否已赋值
                     * @return IsInternal 是否已赋值
                     * 
                     */
                    bool IsInternalHasBeenSet() const;

                    /**
                     * 获取云录像回放时，是否需要开启时间戳矫正，主要解决时间戳反转，会退等问题导致无法播放
                     * @return CorrectTimestamp 云录像回放时，是否需要开启时间戳矫正，主要解决时间戳反转，会退等问题导致无法播放
                     * 
                     */
                    bool GetCorrectTimestamp() const;

                    /**
                     * 设置云录像回放时，是否需要开启时间戳矫正，主要解决时间戳反转，会退等问题导致无法播放
                     * @param _correctTimestamp 云录像回放时，是否需要开启时间戳矫正，主要解决时间戳反转，会退等问题导致无法播放
                     * 
                     */
                    void SetCorrectTimestamp(const bool& _correctTimestamp);

                    /**
                     * 判断参数 CorrectTimestamp 是否已赋值
                     * @return CorrectTimestamp 是否已赋值
                     * 
                     */
                    bool CorrectTimestampHasBeenSet() const;

                private:

                    /**
                     * 设备通道ID
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 回放开始时间，UTC秒数，例如：1662114146，开始和结束时间段最长为一天，且不能跨天
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 回放结束时间，UTC秒数，例如：1662114246，开始和结束时间段最长为一天，且不能跨天
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 是否获取内网地址
                     */
                    bool m_isInternal;
                    bool m_isInternalHasBeenSet;

                    /**
                     * 云录像回放时，是否需要开启时间戳矫正，主要解决时间戳反转，会退等问题导致无法播放
                     */
                    bool m_correctTimestamp;
                    bool m_correctTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBERECORDPLAYBACKURLREQUEST_H_
