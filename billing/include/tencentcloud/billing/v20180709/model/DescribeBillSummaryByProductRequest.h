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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLSUMMARYBYPRODUCTREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLSUMMARYBYPRODUCTREQUEST_H_

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
                * DescribeBillSummaryByProduct请求参数结构体
                */
                class DescribeBillSummaryByProductRequest : public AbstractModel
                {
                public:
                    DescribeBillSummaryByProductRequest();
                    ~DescribeBillSummaryByProductRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>目前必须和EndTime相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2026-11，EndTime 为 2026-11，查询结果是 2026 年 11 月数据。格式为yyyy-mm，不能早于2021-01</p>
                     * @return BeginTime <p>目前必须和EndTime相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2026-11，EndTime 为 2026-11，查询结果是 2026 年 11 月数据。格式为yyyy-mm，不能早于2021-01</p>
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置<p>目前必须和EndTime相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2026-11，EndTime 为 2026-11，查询结果是 2026 年 11 月数据。格式为yyyy-mm，不能早于2021-01</p>
                     * @param _beginTime <p>目前必须和EndTime相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2026-11，EndTime 为 2026-11，查询结果是 2026 年 11 月数据。格式为yyyy-mm，不能早于2021-01</p>
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
                     * 获取<p>目前必须和BeginTime为相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2026-11，EndTime 为 2026-11，查询结果是 2026 年 11 月数据。格式为yyyy-mm，不能早于2021-01</p>
                     * @return EndTime <p>目前必须和BeginTime为相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2026-11，EndTime 为 2026-11，查询结果是 2026 年 11 月数据。格式为yyyy-mm，不能早于2021-01</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>目前必须和BeginTime为相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2026-11，EndTime 为 2026-11，查询结果是 2026 年 11 月数据。格式为yyyy-mm，不能早于2021-01</p>
                     * @param _endTime <p>目前必须和BeginTime为相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2026-11，EndTime 为 2026-11，查询结果是 2026 年 11 月数据。格式为yyyy-mm，不能早于2021-01</p>
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
                     * 获取<p>查询账单数据的用户UIN</p>
                     * @return PayerUin <p>查询账单数据的用户UIN</p>
                     * 
                     */
                    std::string GetPayerUin() const;

                    /**
                     * 设置<p>查询账单数据的用户UIN</p>
                     * @param _payerUin <p>查询账单数据的用户UIN</p>
                     * 
                     */
                    void SetPayerUin(const std::string& _payerUin);

                    /**
                     * 判断参数 PayerUin 是否已赋值
                     * @return PayerUin 是否已赋值
                     * 
                     */
                    bool PayerUinHasBeenSet() const;

                    /**
                     * 获取<p>款项类别，与L0账单上的汇总类别对应。 此参数自账单3.0（即2021-01）之后开始生效。</p><p>枚举值：</p><ul><li>consume： 消费</li><li>refund： 退款</li><li>adjustment： 调账</li></ul>
                     * @return PayType <p>款项类别，与L0账单上的汇总类别对应。 此参数自账单3.0（即2021-01）之后开始生效。</p><p>枚举值：</p><ul><li>consume： 消费</li><li>refund： 退款</li><li>adjustment： 调账</li></ul>
                     * 
                     */
                    std::string GetPayType() const;

                    /**
                     * 设置<p>款项类别，与L0账单上的汇总类别对应。 此参数自账单3.0（即2021-01）之后开始生效。</p><p>枚举值：</p><ul><li>consume： 消费</li><li>refund： 退款</li><li>adjustment： 调账</li></ul>
                     * @param _payType <p>款项类别，与L0账单上的汇总类别对应。 此参数自账单3.0（即2021-01）之后开始生效。</p><p>枚举值：</p><ul><li>consume： 消费</li><li>refund： 退款</li><li>adjustment： 调账</li></ul>
                     * 
                     */
                    void SetPayType(const std::string& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     * 
                     */
                    bool PayTypeHasBeenSet() const;

                private:

                    /**
                     * <p>目前必须和EndTime相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2026-11，EndTime 为 2026-11，查询结果是 2026 年 11 月数据。格式为yyyy-mm，不能早于2021-01</p>
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * <p>目前必须和BeginTime为相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2026-11，EndTime 为 2026-11，查询结果是 2026 年 11 月数据。格式为yyyy-mm，不能早于2021-01</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>查询账单数据的用户UIN</p>
                     */
                    std::string m_payerUin;
                    bool m_payerUinHasBeenSet;

                    /**
                     * <p>款项类别，与L0账单上的汇总类别对应。 此参数自账单3.0（即2021-01）之后开始生效。</p><p>枚举值：</p><ul><li>consume： 消费</li><li>refund： 退款</li><li>adjustment： 调账</li></ul>
                     */
                    std::string m_payType;
                    bool m_payTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLSUMMARYBYPRODUCTREQUEST_H_
