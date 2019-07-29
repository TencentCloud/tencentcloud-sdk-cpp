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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLSUMMARYBYPROJECTREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLSUMMARYBYPROJECTREQUEST_H_

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
                * DescribeBillSummaryByProject请求参数结构体
                */
                class DescribeBillSummaryByProjectRequest : public AbstractModel
                {
                public:
                    DescribeBillSummaryByProjectRequest();
                    ~DescribeBillSummaryByProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询账单数据的用户UIN
                     * @return PayerUin 查询账单数据的用户UIN
                     */
                    std::string GetPayerUin() const;

                    /**
                     * 设置查询账单数据的用户UIN
                     * @param PayerUin 查询账单数据的用户UIN
                     */
                    void SetPayerUin(const std::string& _payerUin);

                    /**
                     * 判断参数 PayerUin 是否已赋值
                     * @return PayerUin 是否已赋值
                     */
                    bool PayerUinHasBeenSet() const;

                    /**
                     * 获取目前只支持传当月开始，且必须和EndTime为相同月份，例 2018-09-01 00:00:00
                     * @return BeginTime 目前只支持传当月开始，且必须和EndTime为相同月份，例 2018-09-01 00:00:00
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置目前只支持传当月开始，且必须和EndTime为相同月份，例 2018-09-01 00:00:00
                     * @param BeginTime 目前只支持传当月开始，且必须和EndTime为相同月份，例 2018-09-01 00:00:00
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取目前只支持传当月结束，且必须和BeginTime为相同月份，例 2018-09-30 23:59:59
                     * @return EndTime 目前只支持传当月结束，且必须和BeginTime为相同月份，例 2018-09-30 23:59:59
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置目前只支持传当月结束，且必须和BeginTime为相同月份，例 2018-09-30 23:59:59
                     * @param EndTime 目前只支持传当月结束，且必须和BeginTime为相同月份，例 2018-09-30 23:59:59
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 查询账单数据的用户UIN
                     */
                    std::string m_payerUin;
                    bool m_payerUinHasBeenSet;

                    /**
                     * 目前只支持传当月开始，且必须和EndTime为相同月份，例 2018-09-01 00:00:00
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 目前只支持传当月结束，且必须和BeginTime为相同月份，例 2018-09-30 23:59:59
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLSUMMARYBYPROJECTREQUEST_H_
