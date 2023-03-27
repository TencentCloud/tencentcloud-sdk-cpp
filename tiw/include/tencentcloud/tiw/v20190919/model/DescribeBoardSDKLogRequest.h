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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEBOARDSDKLOGREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEBOARDSDKLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * DescribeBoardSDKLog请求参数结构体
                */
                class DescribeBoardSDKLogRequest : public AbstractModel
                {
                public:
                    DescribeBoardSDKLogRequest();
                    ~DescribeBoardSDKLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取白板应用的SdkAppId
                     * @return SdkAppId 白板应用的SdkAppId
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置白板应用的SdkAppId
                     * @param SdkAppId 白板应用的SdkAppId
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取需要查询日志的白板房间号
                     * @return RoomId 需要查询日志的白板房间号
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置需要查询日志的白板房间号
                     * @param RoomId 需要查询日志的白板房间号
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取需要查询日志的用户ID
                     * @return UserId 需要查询日志的用户ID
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置需要查询日志的用户ID
                     * @param UserId 需要查询日志的用户ID
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取查询时间段，Unix时间戳，单位毫秒，第一个值为开始时间戳，第二个值为结束时间
                     * @return TimeRange 查询时间段，Unix时间戳，单位毫秒，第一个值为开始时间戳，第二个值为结束时间
                     */
                    std::vector<int64_t> GetTimeRange() const;

                    /**
                     * 设置查询时间段，Unix时间戳，单位毫秒，第一个值为开始时间戳，第二个值为结束时间
                     * @param TimeRange 查询时间段，Unix时间戳，单位毫秒，第一个值为开始时间戳，第二个值为结束时间
                     */
                    void SetTimeRange(const std::vector<int64_t>& _timeRange);

                    /**
                     * 判断参数 TimeRange 是否已赋值
                     * @return TimeRange 是否已赋值
                     */
                    bool TimeRangeHasBeenSet() const;

                    /**
                     * 获取聚合日志条数查询的桶的时间范围，如5m, 1h, 4h等
                     * @return AggregationInterval 聚合日志条数查询的桶的时间范围，如5m, 1h, 4h等
                     */
                    std::string GetAggregationInterval() const;

                    /**
                     * 设置聚合日志条数查询的桶的时间范围，如5m, 1h, 4h等
                     * @param AggregationInterval 聚合日志条数查询的桶的时间范围，如5m, 1h, 4h等
                     */
                    void SetAggregationInterval(const std::string& _aggregationInterval);

                    /**
                     * 判断参数 AggregationInterval 是否已赋值
                     * @return AggregationInterval 是否已赋值
                     */
                    bool AggregationIntervalHasBeenSet() const;

                    /**
                     * 获取额外的查询条件
                     * @return Query 额外的查询条件
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置额外的查询条件
                     * @param Query 额外的查询条件
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取是否按时间升序排列
                     * @return Ascending 是否按时间升序排列
                     */
                    bool GetAscending() const;

                    /**
                     * 设置是否按时间升序排列
                     * @param Ascending 是否按时间升序排列
                     */
                    void SetAscending(const bool& _ascending);

                    /**
                     * 判断参数 Ascending 是否已赋值
                     * @return Ascending 是否已赋值
                     */
                    bool AscendingHasBeenSet() const;

                    /**
                     * 获取用于递归拉取的上下文Key，在上一次请求中返回
                     * @return Context 用于递归拉取的上下文Key，在上一次请求中返回
                     */
                    std::string GetContext() const;

                    /**
                     * 设置用于递归拉取的上下文Key，在上一次请求中返回
                     * @param Context 用于递归拉取的上下文Key，在上一次请求中返回
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     */
                    bool ContextHasBeenSet() const;

                private:

                    /**
                     * 白板应用的SdkAppId
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 需要查询日志的白板房间号
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 需要查询日志的用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 查询时间段，Unix时间戳，单位毫秒，第一个值为开始时间戳，第二个值为结束时间
                     */
                    std::vector<int64_t> m_timeRange;
                    bool m_timeRangeHasBeenSet;

                    /**
                     * 聚合日志条数查询的桶的时间范围，如5m, 1h, 4h等
                     */
                    std::string m_aggregationInterval;
                    bool m_aggregationIntervalHasBeenSet;

                    /**
                     * 额外的查询条件
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 是否按时间升序排列
                     */
                    bool m_ascending;
                    bool m_ascendingHasBeenSet;

                    /**
                     * 用于递归拉取的上下文Key，在上一次请求中返回
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEBOARDSDKLOGREQUEST_H_
