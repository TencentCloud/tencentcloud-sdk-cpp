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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCREALTIMEQUALITYMETRICDATAREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCREALTIMEQUALITYMETRICDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeTRTCRealTimeQualityMetricData请求参数结构体
                */
                class DescribeTRTCRealTimeQualityMetricDataRequest : public AbstractModel
                {
                public:
                    DescribeTRTCRealTimeQualityMetricDataRequest();
                    ~DescribeTRTCRealTimeQualityMetricDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户SdkAppId（如：1400xxxxxx）
                     * @return SdkAppId 用户SdkAppId（如：1400xxxxxx）
                     * 
                     */
                    std::string GetSdkAppId() const;

                    /**
                     * 设置用户SdkAppId（如：1400xxxxxx）
                     * @param _sdkAppId 用户SdkAppId（如：1400xxxxxx）
                     * 
                     */
                    void SetSdkAppId(const std::string& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取开始时间，unix时间戳，单位：秒（查询时间范围根据监控仪表盘功能版本而定，基础版可查近3小时，进阶版可查近12小时）
                     * @return StartTime 开始时间，unix时间戳，单位：秒（查询时间范围根据监控仪表盘功能版本而定，基础版可查近3小时，进阶版可查近12小时）
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置开始时间，unix时间戳，单位：秒（查询时间范围根据监控仪表盘功能版本而定，基础版可查近3小时，进阶版可查近12小时）
                     * @param _startTime 开始时间，unix时间戳，单位：秒（查询时间范围根据监控仪表盘功能版本而定，基础版可查近3小时，进阶版可查近12小时）
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
                     * 获取结束时间，unix时间戳，单位：秒
                     * @return EndTime 结束时间，unix时间戳，单位：秒
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间，unix时间戳，单位：秒
                     * @param _endTime 结束时间，unix时间戳，单位：秒
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
                     * 获取房间ID
                     * @return RoomId 房间ID
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置房间ID
                     * @param _roomId 房间ID
                     * 
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                private:

                    /**
                     * 用户SdkAppId（如：1400xxxxxx）
                     */
                    std::string m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 开始时间，unix时间戳，单位：秒（查询时间范围根据监控仪表盘功能版本而定，基础版可查近3小时，进阶版可查近12小时）
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，unix时间戳，单位：秒
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 房间ID
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCREALTIMEQUALITYMETRICDATAREQUEST_H_
