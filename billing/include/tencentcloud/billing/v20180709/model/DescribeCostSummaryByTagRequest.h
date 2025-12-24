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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTSUMMARYBYTAGREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTSUMMARYBYTAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeCostSummaryByTag请求参数结构体
                */
                class DescribeCostSummaryByTagRequest : public AbstractModel
                {
                public:
                    DescribeCostSummaryByTagRequest();
                    ~DescribeCostSummaryByTagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取目前必须和EndTime相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2025-12，EndTime 为 2025-12，查询结果是 2025 年 12 月数据。
                     * @return BeginTime 目前必须和EndTime相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2025-12，EndTime 为 2025-12，查询结果是 2025 年 12 月数据。
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置目前必须和EndTime相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2025-12，EndTime 为 2025-12，查询结果是 2025 年 12 月数据。
                     * @param _beginTime 目前必须和EndTime相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2025-12，EndTime 为 2025-12，查询结果是 2025 年 12 月数据。
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取目前必须和BeginTime为相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2025-12，EndTime 为 2025-12，查询结果是 2025 年 12 月数据。
                     * @return EndTime 目前必须和BeginTime为相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2025-12，EndTime 为 2025-12，查询结果是 2025 年 12 月数据。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置目前必须和BeginTime为相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2025-12，EndTime 为 2025-12，查询结果是 2025 年 12 月数据。
                     * @param _endTime 目前必须和BeginTime为相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2025-12，EndTime 为 2025-12，查询结果是 2025 年 12 月数据。
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
                     * 获取分账标签键，用户自定义
                     * @return TagKey 分账标签键，用户自定义
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置分账标签键，用户自定义
                     * @param _tagKey 分账标签键，用户自定义
                     * 
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                private:

                    /**
                     * 目前必须和EndTime相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2025-12，EndTime 为 2025-12，查询结果是 2025 年 12 月数据。
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 目前必须和BeginTime为相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2025-12，EndTime 为 2025-12，查询结果是 2025 年 12 月数据。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 分账标签键，用户自定义
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTSUMMARYBYTAGREQUEST_H_
