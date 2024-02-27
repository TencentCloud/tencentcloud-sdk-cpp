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
                     * 获取周期开始时间，格式为yyyy-mm-dd hh:ii:ss
                     * @return BeginTime 周期开始时间，格式为yyyy-mm-dd hh:ii:ss
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置周期开始时间，格式为yyyy-mm-dd hh:ii:ss
                     * @param _beginTime 周期开始时间，格式为yyyy-mm-dd hh:ii:ss
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
                     * 获取周期结束时间，格式为yyyy-mm-dd hh:ii:ss
                     * @return EndTime 周期结束时间，格式为yyyy-mm-dd hh:ii:ss
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置周期结束时间，格式为yyyy-mm-dd hh:ii:ss
                     * @param _endTime 周期结束时间，格式为yyyy-mm-dd hh:ii:ss
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
                     * 获取账单类型：1-费用账单、2-消耗账单
                     * @return BillType 账单类型：1-费用账单、2-消耗账单
                     * 
                     */
                    std::string GetBillType() const;

                    /**
                     * 设置账单类型：1-费用账单、2-消耗账单
                     * @param _billType 账单类型：1-费用账单、2-消耗账单
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
                     * 获取统计周期：日-day，月-month；
                     * @return PeriodType 统计周期：日-day，月-month；
                     * 
                     */
                    std::string GetPeriodType() const;

                    /**
                     * 设置统计周期：日-day，月-month；
                     * @param _periodType 统计周期：日-day，月-month；
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
                     * 获取分类维度（数据汇总维度），查询分类维度（请使用分类维度code入参）入参枚举值：
default=仅总计
feeType=费用类型
billType=账单类型
business=产品
product=子产品
region=地域
zone=可用区
actionType=交易类型
payMode =计费模式
tags=标签
project =项目
payerUin=支付者账号
ownerUin=使用者账号
                     * @return Dimensions 分类维度（数据汇总维度），查询分类维度（请使用分类维度code入参）入参枚举值：
default=仅总计
feeType=费用类型
billType=账单类型
business=产品
product=子产品
region=地域
zone=可用区
actionType=交易类型
payMode =计费模式
tags=标签
project =项目
payerUin=支付者账号
ownerUin=使用者账号
                     * 
                     */
                    std::string GetDimensions() const;

                    /**
                     * 设置分类维度（数据汇总维度），查询分类维度（请使用分类维度code入参）入参枚举值：
default=仅总计
feeType=费用类型
billType=账单类型
business=产品
product=子产品
region=地域
zone=可用区
actionType=交易类型
payMode =计费模式
tags=标签
project =项目
payerUin=支付者账号
ownerUin=使用者账号
                     * @param _dimensions 分类维度（数据汇总维度），查询分类维度（请使用分类维度code入参）入参枚举值：
default=仅总计
feeType=费用类型
billType=账单类型
business=产品
product=子产品
region=地域
zone=可用区
actionType=交易类型
payMode =计费模式
tags=标签
project =项目
payerUin=支付者账号
ownerUin=使用者账号
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
                     * 获取费用类型：cost-总费用，totalCost-原价费用
                     * @return FeeType 费用类型：cost-总费用，totalCost-原价费用
                     * 
                     */
                    std::string GetFeeType() const;

                    /**
                     * 设置费用类型：cost-总费用，totalCost-原价费用
                     * @param _feeType 费用类型：cost-总费用，totalCost-原价费用
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
                     * 获取数量，每页最大值为100
                     * @return PageSize 数量，每页最大值为100
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置数量，每页最大值为100
                     * @param _pageSize 数量，每页最大值为100
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
                     * 获取起始页，当PageNo=1表示第一页， PageNo=2表示第二页，依次类推。
                     * @return PageNo 起始页，当PageNo=1表示第一页， PageNo=2表示第二页，依次类推。
                     * 
                     */
                    uint64_t GetPageNo() const;

                    /**
                     * 设置起始页，当PageNo=1表示第一页， PageNo=2表示第二页，依次类推。
                     * @param _pageNo 起始页，当PageNo=1表示第一页， PageNo=2表示第二页，依次类推。
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
                     * 获取分账标签值
                     * @return TagKeyStr 分账标签值
                     * 
                     */
                    std::string GetTagKeyStr() const;

                    /**
                     * 设置分账标签值
                     * @param _tagKeyStr 分账标签值
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
                     * 获取是否需要筛选框， 1-表示需要， 0-表示不需要，若不传默认不需要。
                     * @return NeedConditionValue 是否需要筛选框， 1-表示需要， 0-表示不需要，若不传默认不需要。
                     * 
                     */
                    std::string GetNeedConditionValue() const;

                    /**
                     * 设置是否需要筛选框， 1-表示需要， 0-表示不需要，若不传默认不需要。
                     * @param _needConditionValue 是否需要筛选框， 1-表示需要， 0-表示不需要，若不传默认不需要。
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
                     * 获取筛选参数
                     * @return Conditions 筛选参数
                     * 
                     */
                    AnalyseConditions GetConditions() const;

                    /**
                     * 设置筛选参数
                     * @param _conditions 筛选参数
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
                     * 周期开始时间，格式为yyyy-mm-dd hh:ii:ss
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 周期结束时间，格式为yyyy-mm-dd hh:ii:ss
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 账单类型：1-费用账单、2-消耗账单
                     */
                    std::string m_billType;
                    bool m_billTypeHasBeenSet;

                    /**
                     * 统计周期：日-day，月-month；
                     */
                    std::string m_periodType;
                    bool m_periodTypeHasBeenSet;

                    /**
                     * 分类维度（数据汇总维度），查询分类维度（请使用分类维度code入参）入参枚举值：
default=仅总计
feeType=费用类型
billType=账单类型
business=产品
product=子产品
region=地域
zone=可用区
actionType=交易类型
payMode =计费模式
tags=标签
project =项目
payerUin=支付者账号
ownerUin=使用者账号
                     */
                    std::string m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * 费用类型：cost-总费用，totalCost-原价费用
                     */
                    std::string m_feeType;
                    bool m_feeTypeHasBeenSet;

                    /**
                     * 数量，每页最大值为100
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 起始页，当PageNo=1表示第一页， PageNo=2表示第二页，依次类推。
                     */
                    uint64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * 分账标签值
                     */
                    std::string m_tagKeyStr;
                    bool m_tagKeyStrHasBeenSet;

                    /**
                     * 是否需要筛选框， 1-表示需要， 0-表示不需要，若不传默认不需要。
                     */
                    std::string m_needConditionValue;
                    bool m_needConditionValueHasBeenSet;

                    /**
                     * 筛选参数
                     */
                    AnalyseConditions m_conditions;
                    bool m_conditionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTEXPLORERSUMMARYREQUEST_H_
