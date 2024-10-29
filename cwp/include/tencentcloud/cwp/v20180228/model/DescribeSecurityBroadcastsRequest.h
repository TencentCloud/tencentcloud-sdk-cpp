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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESECURITYBROADCASTSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESECURITYBROADCASTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeSecurityBroadcasts请求参数结构体
                */
                class DescribeSecurityBroadcastsRequest : public AbstractModel
                {
                public:
                    DescribeSecurityBroadcastsRequest();
                    ~DescribeSecurityBroadcastsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取需要返回的数量，默认为10 ，0=全部
                     * @return Limit 需要返回的数量，默认为10 ，0=全部
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置需要返回的数量，默认为10 ，0=全部
                     * @param _limit 需要返回的数量，默认为10 ，0=全部
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取筛选发布日期：开始时间
                     * @return BeginDate 筛选发布日期：开始时间
                     * 
                     */
                    std::string GetBeginDate() const;

                    /**
                     * 设置筛选发布日期：开始时间
                     * @param _beginDate 筛选发布日期：开始时间
                     * 
                     */
                    void SetBeginDate(const std::string& _beginDate);

                    /**
                     * 判断参数 BeginDate 是否已赋值
                     * @return BeginDate 是否已赋值
                     * 
                     */
                    bool BeginDateHasBeenSet() const;

                    /**
                     * 获取筛选发布日期：结束时间
                     * @return EndDate 筛选发布日期：结束时间
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置筛选发布日期：结束时间
                     * @param _endDate 筛选发布日期：结束时间
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取过滤安全播报类型：0-紧急通知，1-功能更新，2-行业荣誉，3-版本发布，4-实践教程
                     * @return BroadcastType 过滤安全播报类型：0-紧急通知，1-功能更新，2-行业荣誉，3-版本发布，4-实践教程
                     * 
                     */
                    std::string GetBroadcastType() const;

                    /**
                     * 设置过滤安全播报类型：0-紧急通知，1-功能更新，2-行业荣誉，3-版本发布，4-实践教程
                     * @param _broadcastType 过滤安全播报类型：0-紧急通知，1-功能更新，2-行业荣誉，3-版本发布，4-实践教程
                     * 
                     */
                    void SetBroadcastType(const std::string& _broadcastType);

                    /**
                     * 判断参数 BroadcastType 是否已赋值
                     * @return BroadcastType 是否已赋值
                     * 
                     */
                    bool BroadcastTypeHasBeenSet() const;

                private:

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 需要返回的数量，默认为10 ，0=全部
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 筛选发布日期：开始时间
                     */
                    std::string m_beginDate;
                    bool m_beginDateHasBeenSet;

                    /**
                     * 筛选发布日期：结束时间
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * 过滤安全播报类型：0-紧急通知，1-功能更新，2-行业荣誉，3-版本发布，4-实践教程
                     */
                    std::string m_broadcastType;
                    bool m_broadcastTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESECURITYBROADCASTSREQUEST_H_
