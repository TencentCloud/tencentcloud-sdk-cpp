/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEPLAYRECORDSREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEPLAYRECORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * DescribePlayRecords请求参数结构体
                */
                class DescribePlayRecordsRequest : public AbstractModel
                {
                public:
                    DescribePlayRecordsRequest();
                    ~DescribePlayRecordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>低代码互动课堂的SdkAppId。</p>
                     * @return SdkAppId <p>低代码互动课堂的SdkAppId。</p>
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置<p>低代码互动课堂的SdkAppId。</p>
                     * @param _sdkAppId <p>低代码互动课堂的SdkAppId。</p>
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取<p>房间ID。</p>
                     * @return RoomId <p>房间ID。</p>
                     * 
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置<p>房间ID。</p>
                     * @param _roomId <p>房间ID。</p>
                     * 
                     */
                    void SetRoomId(const uint64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取<p>开始时间，unix时间戳（秒）。</p>
                     * @return StartTime <p>开始时间，unix时间戳（秒）。</p>
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置<p>开始时间，unix时间戳（秒）。</p>
                     * @param _startTime <p>开始时间，unix时间戳（秒）。</p>
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
                     * 获取<p>结束时间，unix时间戳（秒）。</p>
                     * @return EndTime <p>结束时间，unix时间戳（秒）。</p>
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置<p>结束时间，unix时间戳（秒）。</p>
                     * @param _endTime <p>结束时间，unix时间戳（秒）。</p>
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
                     * 获取<p>页码，从1开始递增。</p><p>默认值：1</p>
                     * @return Page <p>页码，从1开始递增。</p><p>默认值：1</p>
                     * 
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置<p>页码，从1开始递增。</p><p>默认值：1</p>
                     * @param _page <p>页码，从1开始递增。</p><p>默认值：1</p>
                     * 
                     */
                    void SetPage(const uint64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取<p>每页获取的记录条数。</p><p>取值范围：[1, 200]</p><p>默认值：20</p>
                     * @return PageSize <p>每页获取的记录条数。</p><p>取值范围：[1, 200]</p><p>默认值：20</p>
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置<p>每页获取的记录条数。</p><p>取值范围：[1, 200]</p><p>默认值：20</p>
                     * @param _pageSize <p>每页获取的记录条数。</p><p>取值范围：[1, 200]</p><p>默认值：20</p>
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>用户ID。</p>
                     * @return UserId <p>用户ID。</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>用户ID。</p>
                     * @param _userId <p>用户ID。</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * <p>低代码互动课堂的SdkAppId。</p>
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * <p>房间ID。</p>
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * <p>开始时间，unix时间戳（秒）。</p>
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间，unix时间戳（秒）。</p>
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>页码，从1开始递增。</p><p>默认值：1</p>
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * <p>每页获取的记录条数。</p><p>取值范围：[1, 200]</p><p>默认值：20</p>
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>用户ID。</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEPLAYRECORDSREQUEST_H_
