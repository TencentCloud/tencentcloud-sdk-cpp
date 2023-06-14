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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEROOMLISTREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEROOMLISTREQUEST_H_

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
                * DescribeRoomList请求参数结构体
                */
                class DescribeRoomListRequest : public AbstractModel
                {
                public:
                    DescribeRoomListRequest();
                    ~DescribeRoomListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取白板应用的SdkAppId
                     * @return SdkAppId 白板应用的SdkAppId
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置白板应用的SdkAppId
                     * @param _sdkAppId 白板应用的SdkAppId
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取查询时间段，Unix时间戳，单位毫秒，第一个值为开始时间戳，第二个值为结束时间
                     * @return TimeRange 查询时间段，Unix时间戳，单位毫秒，第一个值为开始时间戳，第二个值为结束时间
                     * 
                     */
                    std::vector<int64_t> GetTimeRange() const;

                    /**
                     * 设置查询时间段，Unix时间戳，单位毫秒，第一个值为开始时间戳，第二个值为结束时间
                     * @param _timeRange 查询时间段，Unix时间戳，单位毫秒，第一个值为开始时间戳，第二个值为结束时间
                     * 
                     */
                    void SetTimeRange(const std::vector<int64_t>& _timeRange);

                    /**
                     * 判断参数 TimeRange 是否已赋值
                     * @return TimeRange 是否已赋值
                     * 
                     */
                    bool TimeRangeHasBeenSet() const;

                    /**
                     * 获取额外的查询条件
                     * @return Query 额外的查询条件
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置额外的查询条件
                     * @param _query 额外的查询条件
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取返回最大的数据条数，默认1000
                     * @return MaxSize 返回最大的数据条数，默认1000
                     * 
                     */
                    int64_t GetMaxSize() const;

                    /**
                     * 设置返回最大的数据条数，默认1000
                     * @param _maxSize 返回最大的数据条数，默认1000
                     * 
                     */
                    void SetMaxSize(const int64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     * 
                     */
                    bool MaxSizeHasBeenSet() const;

                private:

                    /**
                     * 白板应用的SdkAppId
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 查询时间段，Unix时间戳，单位毫秒，第一个值为开始时间戳，第二个值为结束时间
                     */
                    std::vector<int64_t> m_timeRange;
                    bool m_timeRangeHasBeenSet;

                    /**
                     * 额外的查询条件
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 返回最大的数据条数，默认1000
                     */
                    int64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEROOMLISTREQUEST_H_
