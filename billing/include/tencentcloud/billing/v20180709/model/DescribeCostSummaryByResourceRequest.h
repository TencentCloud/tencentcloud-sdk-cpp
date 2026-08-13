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
                     * 获取<p>目前必须和EndTime相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2018-09，EndTime 为 2018-09，查询结果是 2018 年 9 月数据。</p>
                     * @return BeginTime <p>目前必须和EndTime相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2018-09，EndTime 为 2018-09，查询结果是 2018 年 9 月数据。</p>
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置<p>目前必须和EndTime相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2018-09，EndTime 为 2018-09，查询结果是 2018 年 9 月数据。</p>
                     * @param _beginTime <p>目前必须和EndTime相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2018-09，EndTime 为 2018-09，查询结果是 2018 年 9 月数据。</p>
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
                     * 获取<p>目前必须和BeginTime为相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2018-09，EndTime 为 2018-09，查询结果是 2018 年 9 月数据。</p>
                     * @return EndTime <p>目前必须和BeginTime为相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2018-09，EndTime 为 2018-09，查询结果是 2018 年 9 月数据。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>目前必须和BeginTime为相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2018-09，EndTime 为 2018-09，查询结果是 2018 年 9 月数据。</p>
                     * @param _endTime <p>目前必须和BeginTime为相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2018-09，EndTime 为 2018-09，查询结果是 2018 年 9 月数据。</p>
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
                     * 获取<p>每次获取数据量，最大值为100</p>
                     * @return Limit <p>每次获取数据量，最大值为100</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>每次获取数据量，最大值为100</p>
                     * @param _limit <p>每次获取数据量，最大值为100</p>
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
                     * 获取<p>偏移量,默认从0开始</p>
                     * @return Offset <p>偏移量,默认从0开始</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量,默认从0开始</p>
                     * @param _offset <p>偏移量,默认从0开始</p>
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
                     * 获取<p>是否需要返回记录数量，0不需要，1需要，默认不需要</p>
                     * @return NeedRecordNum <p>是否需要返回记录数量，0不需要，1需要，默认不需要</p>
                     * 
                     */
                    uint64_t GetNeedRecordNum() const;

                    /**
                     * 设置<p>是否需要返回记录数量，0不需要，1需要，默认不需要</p>
                     * @param _needRecordNum <p>是否需要返回记录数量，0不需要，1需要，默认不需要</p>
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
                     * 获取<p>是否需要返回过滤条件，0不需要，1需要，默认不需要</p>
                     * @return NeedConditionValue <p>是否需要返回过滤条件，0不需要，1需要，默认不需要</p>
                     * 
                     */
                    uint64_t GetNeedConditionValue() const;

                    /**
                     * 设置<p>是否需要返回过滤条件，0不需要，1需要，默认不需要</p>
                     * @param _needConditionValue <p>是否需要返回过滤条件，0不需要，1需要，默认不需要</p>
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
                     * 获取<p>过滤条件，只支持ResourceKeyword(资源关键字，支持资源id及资源名称模糊查询)，ProjectIds（项目id），RegionIds(地域id)，PayModes(付费模式，可选prePay和postPay)，HideFreeCost（是否隐藏0元流水，可选0和1），OrderByCost（按费用排序规则，可选desc和asc）</p>
                     * @return Conditions <p>过滤条件，只支持ResourceKeyword(资源关键字，支持资源id及资源名称模糊查询)，ProjectIds（项目id），RegionIds(地域id)，PayModes(付费模式，可选prePay和postPay)，HideFreeCost（是否隐藏0元流水，可选0和1），OrderByCost（按费用排序规则，可选desc和asc）</p>
                     * 
                     */
                    Conditions GetConditions() const;

                    /**
                     * 设置<p>过滤条件，只支持ResourceKeyword(资源关键字，支持资源id及资源名称模糊查询)，ProjectIds（项目id），RegionIds(地域id)，PayModes(付费模式，可选prePay和postPay)，HideFreeCost（是否隐藏0元流水，可选0和1），OrderByCost（按费用排序规则，可选desc和asc）</p>
                     * @param _conditions <p>过滤条件，只支持ResourceKeyword(资源关键字，支持资源id及资源名称模糊查询)，ProjectIds（项目id），RegionIds(地域id)，PayModes(付费模式，可选prePay和postPay)，HideFreeCost（是否隐藏0元流水，可选0和1），OrderByCost（按费用排序规则，可选desc和asc）</p>
                     * 
                     */
                    void SetConditions(const Conditions& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                    /**
                     * 获取<p>分账标签键，用户自定义</p>
                     * @return TagKey <p>分账标签键，用户自定义</p>
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置<p>分账标签键，用户自定义</p>
                     * @param _tagKey <p>分账标签键，用户自定义</p>
                     * 
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                    /**
                     * 获取<p>分账标签值，该参数为空表示该标签键下未设置标签值的记录</p>
                     * @return TagValue <p>分账标签值，该参数为空表示该标签键下未设置标签值的记录</p>
                     * 
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置<p>分账标签值，该参数为空表示该标签键下未设置标签值的记录</p>
                     * @param _tagValue <p>分账标签值，该参数为空表示该标签键下未设置标签值的记录</p>
                     * 
                     */
                    void SetTagValue(const std::string& _tagValue);

                    /**
                     * 判断参数 TagValue 是否已赋值
                     * @return TagValue 是否已赋值
                     * 
                     */
                    bool TagValueHasBeenSet() const;

                private:

                    /**
                     * <p>目前必须和EndTime相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2018-09，EndTime 为 2018-09，查询结果是 2018 年 9 月数据。</p>
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * <p>目前必须和BeginTime为相同月份，不支持跨月查询，且查询结果是整月数据，例如 BeginTime为2018-09，EndTime 为 2018-09，查询结果是 2018 年 9 月数据。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>每次获取数据量，最大值为100</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量,默认从0开始</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>查询账单数据的用户UIN</p>
                     */
                    std::string m_payerUin;
                    bool m_payerUinHasBeenSet;

                    /**
                     * <p>是否需要返回记录数量，0不需要，1需要，默认不需要</p>
                     */
                    uint64_t m_needRecordNum;
                    bool m_needRecordNumHasBeenSet;

                    /**
                     * <p>是否需要返回过滤条件，0不需要，1需要，默认不需要</p>
                     */
                    uint64_t m_needConditionValue;
                    bool m_needConditionValueHasBeenSet;

                    /**
                     * <p>过滤条件，只支持ResourceKeyword(资源关键字，支持资源id及资源名称模糊查询)，ProjectIds（项目id），RegionIds(地域id)，PayModes(付费模式，可选prePay和postPay)，HideFreeCost（是否隐藏0元流水，可选0和1），OrderByCost（按费用排序规则，可选desc和asc）</p>
                     */
                    Conditions m_conditions;
                    bool m_conditionsHasBeenSet;

                    /**
                     * <p>分账标签键，用户自定义</p>
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * <p>分账标签值，该参数为空表示该标签键下未设置标签值的记录</p>
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTSUMMARYBYRESOURCEREQUEST_H_
