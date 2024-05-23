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

#ifndef TENCENTCLOUD_SVP_V20240125_MODEL_DESCRIBESAVINGPLANOVERVIEWREQUEST_H_
#define TENCENTCLOUD_SVP_V20240125_MODEL_DESCRIBESAVINGPLANOVERVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Svp
    {
        namespace V20240125
        {
            namespace Model
            {
                /**
                * DescribeSavingPlanOverview请求参数结构体
                */
                class DescribeSavingPlanOverviewRequest : public AbstractModel
                {
                public:
                    DescribeSavingPlanOverviewRequest();
                    ~DescribeSavingPlanOverviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始时间，格式yyyy-MM-dd 注：查询范围请勿超过6个月
                     * @return StartDate 开始时间，格式yyyy-MM-dd 注：查询范围请勿超过6个月
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置开始时间，格式yyyy-MM-dd 注：查询范围请勿超过6个月
                     * @param _startDate 开始时间，格式yyyy-MM-dd 注：查询范围请勿超过6个月
                     * 
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取结束时间，格式yyyy-MM-dd
                     * @return EndDate 结束时间，格式yyyy-MM-dd
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置结束时间，格式yyyy-MM-dd
                     * @param _endDate 结束时间，格式yyyy-MM-dd
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
                     * 获取分页偏移量
                     * @return Offset 分页偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量
                     * @param _offset 分页偏移量
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
                     * 获取每页数量，最大值为200
                     * @return Limit 每页数量，最大值为200
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页数量，最大值为200
                     * @param _limit 每页数量，最大值为200
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
                     * 开始时间，格式yyyy-MM-dd 注：查询范围请勿超过6个月
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * 结束时间，格式yyyy-MM-dd
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * 分页偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页数量，最大值为200
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SVP_V20240125_MODEL_DESCRIBESAVINGPLANOVERVIEWREQUEST_H_
