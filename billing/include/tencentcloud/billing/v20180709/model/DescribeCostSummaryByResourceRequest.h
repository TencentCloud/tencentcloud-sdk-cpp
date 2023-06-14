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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTSUMMARYBYRESOURCEREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTSUMMARYBYRESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/Conditions.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeCostSummaryByResource请求参数结构体
                */
                class DescribeCostSummaryByResourceRequest : public AbstractModel
                {
                public:
                    DescribeCostSummaryByResourceRequest();
                    ~DescribeCostSummaryByResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取目前必须和EndTime相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2018-09，EndTime 为 2018-09，查询结果是 2018 年 9 月数据。
                     * @return BeginTime 目前必须和EndTime相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2018-09，EndTime 为 2018-09，查询结果是 2018 年 9 月数据。
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置目前必须和EndTime相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2018-09，EndTime 为 2018-09，查询结果是 2018 年 9 月数据。
                     * @param _beginTime 目前必须和EndTime相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2018-09，EndTime 为 2018-09，查询结果是 2018 年 9 月数据。
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
                     * 获取目前必须和BeginTime为相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2018-09，EndTime 为 2018-09，查询结果是 2018 年 9 月数据。
                     * @return EndTime 目前必须和BeginTime为相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2018-09，EndTime 为 2018-09，查询结果是 2018 年 9 月数据。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置目前必须和BeginTime为相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2018-09，EndTime 为 2018-09，查询结果是 2018 年 9 月数据。
                     * @param _endTime 目前必须和BeginTime为相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2018-09，EndTime 为 2018-09，查询结果是 2018 年 9 月数据。
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
                     * 获取每次获取数据量，最大值为100
                     * @return Limit 每次获取数据量，最大值为100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每次获取数据量，最大值为100
                     * @param _limit 每次获取数据量，最大值为100
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
                     * 获取偏移量,默认从0开始
                     * @return Offset 偏移量,默认从0开始
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量,默认从0开始
                     * @param _offset 偏移量,默认从0开始
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
                     * 获取查询账单数据的用户UIN
                     * @return PayerUin 查询账单数据的用户UIN
                     * 
                     */
                    std::string GetPayerUin() const;

                    /**
                     * 设置查询账单数据的用户UIN
                     * @param _payerUin 查询账单数据的用户UIN
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
                     * 获取是否需要返回记录数量，0不需要，1需要，默认不需要
                     * @return NeedRecordNum 是否需要返回记录数量，0不需要，1需要，默认不需要
                     * 
                     */
                    uint64_t GetNeedRecordNum() const;

                    /**
                     * 设置是否需要返回记录数量，0不需要，1需要，默认不需要
                     * @param _needRecordNum 是否需要返回记录数量，0不需要，1需要，默认不需要
                     * 
                     */
                    void SetNeedRecordNum(const uint64_t& _needRecordNum);

                    /**
                     * 判断参数 NeedRecordNum 是否已赋值
                     * @return NeedRecordNum 是否已赋值
                     * 
                     */
                    bool NeedRecordNumHasBeenSet() const;

                    /**
                     * 获取是否需要返回过滤条件，0不需要，1需要，默认不需要
                     * @return NeedConditionValue 是否需要返回过滤条件，0不需要，1需要，默认不需要
                     * 
                     */
                    uint64_t GetNeedConditionValue() const;

                    /**
                     * 设置是否需要返回过滤条件，0不需要，1需要，默认不需要
                     * @param _needConditionValue 是否需要返回过滤条件，0不需要，1需要，默认不需要
                     * 
                     */
                    void SetNeedConditionValue(const uint64_t& _needConditionValue);

                    /**
                     * 判断参数 NeedConditionValue 是否已赋值
                     * @return NeedConditionValue 是否已赋值
                     * 
                     */
                    bool NeedConditionValueHasBeenSet() const;

                    /**
                     * 获取过滤条件，只支持ResourceKeyword(资源关键字，支持资源id及资源名称模糊查询)，ProjectIds（项目id），RegionIds(地域id)，PayModes(付费模式，可选prePay和postPay)，HideFreeCost（是否隐藏0元流水，可选0和1），OrderByCost（按费用排序规则，可选desc和asc）
                     * @return Conditions 过滤条件，只支持ResourceKeyword(资源关键字，支持资源id及资源名称模糊查询)，ProjectIds（项目id），RegionIds(地域id)，PayModes(付费模式，可选prePay和postPay)，HideFreeCost（是否隐藏0元流水，可选0和1），OrderByCost（按费用排序规则，可选desc和asc）
                     * 
                     */
                    Conditions GetConditions() const;

                    /**
                     * 设置过滤条件，只支持ResourceKeyword(资源关键字，支持资源id及资源名称模糊查询)，ProjectIds（项目id），RegionIds(地域id)，PayModes(付费模式，可选prePay和postPay)，HideFreeCost（是否隐藏0元流水，可选0和1），OrderByCost（按费用排序规则，可选desc和asc）
                     * @param _conditions 过滤条件，只支持ResourceKeyword(资源关键字，支持资源id及资源名称模糊查询)，ProjectIds（项目id），RegionIds(地域id)，PayModes(付费模式，可选prePay和postPay)，HideFreeCost（是否隐藏0元流水，可选0和1），OrderByCost（按费用排序规则，可选desc和asc）
                     * 
                     */
                    void SetConditions(const Conditions& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                private:

                    /**
                     * 目前必须和EndTime相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2018-09，EndTime 为 2018-09，查询结果是 2018 年 9 月数据。
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 目前必须和BeginTime为相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2018-09，EndTime 为 2018-09，查询结果是 2018 年 9 月数据。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 每次获取数据量，最大值为100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量,默认从0开始
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询账单数据的用户UIN
                     */
                    std::string m_payerUin;
                    bool m_payerUinHasBeenSet;

                    /**
                     * 是否需要返回记录数量，0不需要，1需要，默认不需要
                     */
                    uint64_t m_needRecordNum;
                    bool m_needRecordNumHasBeenSet;

                    /**
                     * 是否需要返回过滤条件，0不需要，1需要，默认不需要
                     */
                    uint64_t m_needConditionValue;
                    bool m_needConditionValueHasBeenSet;

                    /**
                     * 过滤条件，只支持ResourceKeyword(资源关键字，支持资源id及资源名称模糊查询)，ProjectIds（项目id），RegionIds(地域id)，PayModes(付费模式，可选prePay和postPay)，HideFreeCost（是否隐藏0元流水，可选0和1），OrderByCost（按费用排序规则，可选desc和asc）
                     */
                    Conditions m_conditions;
                    bool m_conditionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTSUMMARYBYRESOURCEREQUEST_H_
