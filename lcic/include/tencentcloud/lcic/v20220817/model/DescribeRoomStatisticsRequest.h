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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEROOMSTATISTICSREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEROOMSTATISTICSREQUEST_H_

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
                * DescribeRoomStatistics请求参数结构体
                */
                class DescribeRoomStatisticsRequest : public AbstractModel
                {
                public:
                    DescribeRoomStatisticsRequest();
                    ~DescribeRoomStatisticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取课堂Id。
                     * @return RoomId 课堂Id。
                     * 
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置课堂Id。
                     * @param _roomId 课堂Id。
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
                     * 获取分页查询当前页数，从1开始递增。
                     * @return Page 分页查询当前页数，从1开始递增。
                     * 
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置分页查询当前页数，从1开始递增。
                     * @param _page 分页查询当前页数，从1开始递增。
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
                     * 获取每页数据量，最大1000。
                     * @return Limit 每页数据量，最大1000。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页数据量，最大1000。
                     * @param _limit 每页数据量，最大1000。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 课堂Id。
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 分页查询当前页数，从1开始递增。
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 每页数据量，最大1000。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEROOMSTATISTICSREQUEST_H_
