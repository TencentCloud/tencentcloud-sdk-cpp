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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEABNORMALEVENTREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEABNORMALEVENTREQUEST_H_

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
                * DescribeAbnormalEvent请求参数结构体
                */
                class DescribeAbnormalEventRequest : public AbstractModel
                {
                public:
                    DescribeAbnormalEventRequest();
                    ~DescribeAbnormalEventRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户SDKAppID，查询SDKAppID下任意20条异常体验事件（可能不同房间）
                     * @return SdkAppId 用户SDKAppID，查询SDKAppID下任意20条异常体验事件（可能不同房间）
                     */
                    std::string GetSdkAppId() const;

                    /**
                     * 设置用户SDKAppID，查询SDKAppID下任意20条异常体验事件（可能不同房间）
                     * @param SdkAppId 用户SDKAppID，查询SDKAppID下任意20条异常体验事件（可能不同房间）
                     */
                    void SetSdkAppId(const std::string& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取查询开始时间,本地unix时间戳（1588031999s）
                     * @return StartTime 查询开始时间,本地unix时间戳（1588031999s）
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置查询开始时间,本地unix时间戳（1588031999s）
                     * @param StartTime 查询开始时间,本地unix时间戳（1588031999s）
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取查询结束时间,本地unix时间戳（1588031999s）
                     * @return EndTime 查询结束时间,本地unix时间戳（1588031999s）
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置查询结束时间,本地unix时间戳（1588031999s）
                     * @param EndTime 查询结束时间,本地unix时间戳（1588031999s）
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取房间号，查询房间内任意20条以内异常体验事件
                     * @return RoomId 房间号，查询房间内任意20条以内异常体验事件
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置房间号，查询房间内任意20条以内异常体验事件
                     * @param RoomId 房间号，查询房间内任意20条以内异常体验事件
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     */
                    bool RoomIdHasBeenSet() const;

                private:

                    /**
                     * 用户SDKAppID，查询SDKAppID下任意20条异常体验事件（可能不同房间）
                     */
                    std::string m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 查询开始时间,本地unix时间戳（1588031999s）
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间,本地unix时间戳（1588031999s）
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 房间号，查询房间内任意20条以内异常体验事件
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEABNORMALEVENTREQUEST_H_
