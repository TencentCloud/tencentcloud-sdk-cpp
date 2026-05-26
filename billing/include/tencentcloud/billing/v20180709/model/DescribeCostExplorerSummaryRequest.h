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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTEXPLORERSUMMARYREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTEXPLORERSUMMARYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/AnalyseConditions.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeCostExplorerSummary请求参数结构体
                */
                class DescribeCostExplorerSummaryRequest : public AbstractModel
                {
                public:
                    DescribeCostExplorerSummaryRequest();
                    ~DescribeCostExplorerSummaryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>周期开始时间，格式为yyyy-mm-dd hh:ii:ss</p>
                     * @return BeginTime <p>周期开始时间，格式为yyyy-mm-dd hh:ii:ss</p>
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置<p>周期开始时间，格式为yyyy-mm-dd hh:ii:ss</p>
                     * @param _beginTime <p>周期开始时间，格式为yyyy-mm-dd hh:ii:ss</p>
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
                     * 获取<p>周期结束时间，格式为yyyy-mm-dd hh:ii:ss</p>
                     * @return EndTime <p>周期结束时间，格式为yyyy-mm-dd hh:ii:ss</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>周期结束时间，格式为yyyy-mm-dd hh:ii:ss</p>
                     * @param _endTime <p>周期结束时间，格式为yyyy-mm-dd hh:ii:ss</p>
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
                     * 获取<p>账单类型：1-费用账单、2-消耗账单</p>
                     * @return BillType <p>账单类型：1-费用账单、2-消耗账单</p>
                     * 
                     */
                    std::string GetBillType() const;

                    /**
                     * 设置<p>账单类型：1-费用账单、2-消耗账单</p>
                     * @param _billType <p>账单类型：1-费用账单、2-消耗账单</p>
                     * 
                     */
                    void SetBillType(const std::string& _billType);

                    /**
                     * 判断参数 BillType 是否已赋值
                     * @return BillType 是否已赋值
                     * 
                     */
                    bool BillTypeHasBeenSet() const;

                    /**
                     * 获取<p>统计周期：日-day，月-month；</p>
                     * @return PeriodType <p>统计周期：日-day，月-month；</p>
                     * 
                     */
                    std::string GetPeriodType() const;

                    /**
                     * 设置<p>统计周期：日-day，月-month；</p>
                     * @param _periodType <p>统计周期：日-day，月-month；</p>
                     * 
                     */
                    void SetPeriodType(const std::string& _periodType);

                    /**
                     * 判断参数 PeriodType 是否已赋值
                     * @return PeriodType 是否已赋值
                     * 
                     */
                    bool PeriodTypeHasBeenSet() const;

                    /**
                     * 获取<p>分类维度（数据汇总维度），查询分类维度（请使用分类维度code入参）入参枚举值：<br>default=仅总计<br>feeType=费用类型<br>billType=账单类型<br>business=产品<br>product=子产品<br>region=地域<br>zone=可用区<br>actionType=交易类型<br>payMode =计费模式<br>tags=标签<br>project =项目<br>payerUin=支付者账号<br>ownerUin=使用者账号</p>
                     * @return Dimensions <p>分类维度（数据汇总维度），查询分类维度（请使用分类维度code入参）入参枚举值：<br>default=仅总计<br>feeType=费用类型<br>billType=账单类型<br>business=产品<br>product=子产品<br>region=地域<br>zone=可用区<br>actionType=交易类型<br>payMode =计费模式<br>tags=标签<br>project =项目<br>payerUin=支付者账号<br>ownerUin=使用者账号</p>
                     * 
                     */
                    std::string GetDimensions() const;

                    /**
                     * 设置<p>分类维度（数据汇总维度），查询分类维度（请使用分类维度code入参）入参枚举值：<br>default=仅总计<br>feeType=费用类型<br>billType=账单类型<br>business=产品<br>product=子产品<br>region=地域<br>zone=可用区<br>actionType=交易类型<br>payMode =计费模式<br>tags=标签<br>project =项目<br>payerUin=支付者账号<br>ownerUin=使用者账号</p>
                     * @param _dimensions <p>分类维度（数据汇总维度），查询分类维度（请使用分类维度code入参）入参枚举值：<br>default=仅总计<br>feeType=费用类型<br>billType=账单类型<br>business=产品<br>product=子产品<br>region=地域<br>zone=可用区<br>actionType=交易类型<br>payMode =计费模式<br>tags=标签<br>project =项目<br>payerUin=支付者账号<br>ownerUin=使用者账号</p>
                     * 
                     */
                    void SetDimensions(const std::string& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

                    /**
                     * 获取<p>费用类型：cost-折后总费用，totalCost-原价费用</p>
                     * @return FeeType <p>费用类型：cost-折后总费用，totalCost-原价费用</p>
                     * 
                     */
                    std::string GetFeeType() const;

                    /**
                     * 设置<p>费用类型：cost-折后总费用，totalCost-原价费用</p>
                     * @param _feeType <p>费用类型：cost-折后总费用，totalCost-原价费用</p>
                     * 
                     */
                    void SetFeeType(const std::string& _feeType);

                    /**
                     * 判断参数 FeeType 是否已赋值
                     * @return FeeType 是否已赋值
                     * 
                     */
                    bool FeeTypeHasBeenSet() const;

                    /**
                     * 获取<p>数量，每页最大值为100</p>
                     * @return PageSize <p>数量，每页最大值为100</p>
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置<p>数量，每页最大值为100</p>
                     * @param _pageSize <p>数量，每页最大值为100</p>
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>起始页，当PageNo=1表示第一页， PageNo=2表示第二页，依次类推。</p>
                     * @return PageNo <p>起始页，当PageNo=1表示第一页， PageNo=2表示第二页，依次类推。</p>
                     * 
                     */
                    uint64_t GetPageNo() const;

                    /**
                     * 设置<p>起始页，当PageNo=1表示第一页， PageNo=2表示第二页，依次类推。</p>
                     * @param _pageNo <p>起始页，当PageNo=1表示第一页， PageNo=2表示第二页，依次类推。</p>
                     * 
                     */
                    void SetPageNo(const uint64_t& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     * 
                     */
                    bool PageNoHasBeenSet() const;

                    /**
                     * 获取<p>分账标签键</p>
                     * @return TagKeyStr <p>分账标签键</p>
                     * 
                     */
                    std::string GetTagKeyStr() const;

                    /**
                     * 设置<p>分账标签键</p>
                     * @param _tagKeyStr <p>分账标签键</p>
                     * 
                     */
                    void SetTagKeyStr(const std::string& _tagKeyStr);

                    /**
                     * 判断参数 TagKeyStr 是否已赋值
                     * @return TagKeyStr 是否已赋值
                     * 
                     */
                    bool TagKeyStrHasBeenSet() const;

                    /**
                     * 获取<p>是否需要筛选框， 1-表示需要， 0-表示不需要，若不传默认不需要。</p>
                     * @return NeedConditionValue <p>是否需要筛选框， 1-表示需要， 0-表示不需要，若不传默认不需要。</p>
                     * 
                     */
                    std::string GetNeedConditionValue() const;

                    /**
                     * 设置<p>是否需要筛选框， 1-表示需要， 0-表示不需要，若不传默认不需要。</p>
                     * @param _needConditionValue <p>是否需要筛选框， 1-表示需要， 0-表示不需要，若不传默认不需要。</p>
                     * 
                     */
                    void SetNeedConditionValue(const std::string& _needConditionValue);

                    /**
                     * 判断参数 NeedConditionValue 是否已赋值
                     * @return NeedConditionValue 是否已赋值
                     * 
                     */
                    bool NeedConditionValueHasBeenSet() const;

                    /**
                     * 获取<p>筛选参数</p>
                     * @return Conditions <p>筛选参数</p>
                     * 
                     */
                    AnalyseConditions GetConditions() const;

                    /**
                     * 设置<p>筛选参数</p>
                     * @param _conditions <p>筛选参数</p>
                     * 
                     */
                    void SetConditions(const AnalyseConditions& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                private:

                    /**
                     * <p>周期开始时间，格式为yyyy-mm-dd hh:ii:ss</p>
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * <p>周期结束时间，格式为yyyy-mm-dd hh:ii:ss</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>账单类型：1-费用账单、2-消耗账单</p>
                     */
                    std::string m_billType;
                    bool m_billTypeHasBeenSet;

                    /**
                     * <p>统计周期：日-day，月-month；</p>
                     */
                    std::string m_periodType;
                    bool m_periodTypeHasBeenSet;

                    /**
                     * <p>分类维度（数据汇总维度），查询分类维度（请使用分类维度code入参）入参枚举值：<br>default=仅总计<br>feeType=费用类型<br>billType=账单类型<br>business=产品<br>product=子产品<br>region=地域<br>zone=可用区<br>actionType=交易类型<br>payMode =计费模式<br>tags=标签<br>project =项目<br>payerUin=支付者账号<br>ownerUin=使用者账号</p>
                     */
                    std::string m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * <p>费用类型：cost-折后总费用，totalCost-原价费用</p>
                     */
                    std::string m_feeType;
                    bool m_feeTypeHasBeenSet;

                    /**
                     * <p>数量，每页最大值为100</p>
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>起始页，当PageNo=1表示第一页， PageNo=2表示第二页，依次类推。</p>
                     */
                    uint64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * <p>分账标签键</p>
                     */
                    std::string m_tagKeyStr;
                    bool m_tagKeyStrHasBeenSet;

                    /**
                     * <p>是否需要筛选框， 1-表示需要， 0-表示不需要，若不传默认不需要。</p>
                     */
                    std::string m_needConditionValue;
                    bool m_needConditionValueHasBeenSet;

                    /**
                     * <p>筛选参数</p>
                     */
                    AnalyseConditions m_conditions;
                    bool m_conditionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTEXPLORERSUMMARYREQUEST_H_
