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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEMESSAGEROUTELISTREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEMESSAGEROUTELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * DescribeMessageRouteList请求参数结构体
                */
                class DescribeMessageRouteListRequest : public AbstractModel
                {
                public:
                    DescribeMessageRouteListRequest();
                    ~DescribeMessageRouteListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取无
                     * @return Limit 无
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置无
                     * @param _limit 无
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取无
                     * @return Offset 无
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置无
                     * @param _offset 无
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取无
                     * @return Filter 无
                     * 
                     */
                    std::string GetFilter() const;

                    /**
                     * 设置无
                     * @param _filter 无
                     * 
                     */
                    void SetFilter(const std::string& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取无
                     * @return StartTime 无
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置无
                     * @param _startTime 无
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取无
                     * @return EndTime 无
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置无
                     * @param _endTime 无
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取无
                     * @return Order 无
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置无
                     * @param _order 无
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * 无
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 无
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEMESSAGEROUTELISTREQUEST_H_
