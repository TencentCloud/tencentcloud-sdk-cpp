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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEVOUCHERINFOREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEVOUCHERINFOREQUEST_H_

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
                * DescribeVoucherInfo请求参数结构体
                */
                class DescribeVoucherInfoRequest : public AbstractModel
                {
                public:
                    DescribeVoucherInfoRequest();
                    ~DescribeVoucherInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>一页多少条数据，默认是20条，最大不超过1000</p>
                     * @return Limit <p>一页多少条数据，默认是20条，最大不超过1000</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>一页多少条数据，默认是20条，最大不超过1000</p>
                     * @param _limit <p>一页多少条数据，默认是20条，最大不超过1000</p>
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
                     * 获取<p>第多少页，默认是1</p>
                     * @return Offset <p>第多少页，默认是1</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>第多少页，默认是1</p>
                     * @param _offset <p>第多少页，默认是1</p>
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
                     * 获取<p>券状态：待使用：unUsed，已使用：xa0used，已发货：delivered，已作废：xa0cancel，已过期：overdue</p>
                     * @return Status <p>券状态：待使用：unUsed，已使用：xa0used，已发货：delivered，已作废：xa0cancel，已过期：overdue</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>券状态：待使用：unUsed，已使用：xa0used，已发货：delivered，已作废：xa0cancel，已过期：overdue</p>
                     * @param _status <p>券状态：待使用：unUsed，已使用：xa0used，已发货：delivered，已作废：xa0cancel，已过期：overdue</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>代金券id</p>
                     * @return VoucherId <p>代金券id</p>
                     * 
                     */
                    std::string GetVoucherId() const;

                    /**
                     * 设置<p>代金券id</p>
                     * @param _voucherId <p>代金券id</p>
                     * 
                     */
                    void SetVoucherId(const std::string& _voucherId);

                    /**
                     * 判断参数 VoucherId 是否已赋值
                     * @return VoucherId 是否已赋值
                     * 
                     */
                    bool VoucherIdHasBeenSet() const;

                    /**
                     * 获取<p>代金券订单id</p>
                     * @return CodeId <p>代金券订单id</p>
                     * 
                     */
                    std::string GetCodeId() const;

                    /**
                     * 设置<p>代金券订单id</p>
                     * @param _codeId <p>代金券订单id</p>
                     * 
                     */
                    void SetCodeId(const std::string& _codeId);

                    /**
                     * 判断参数 CodeId 是否已赋值
                     * @return CodeId 是否已赋值
                     * 
                     */
                    bool CodeIdHasBeenSet() const;

                    /**
                     * 获取<p>商品码</p>
                     * @return ProductCode <p>商品码</p>
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置<p>商品码</p>
                     * @param _productCode <p>商品码</p>
                     * 
                     */
                    void SetProductCode(const std::string& _productCode);

                    /**
                     * 判断参数 ProductCode 是否已赋值
                     * @return ProductCode 是否已赋值
                     * 
                     */
                    bool ProductCodeHasBeenSet() const;

                    /**
                     * 获取<p>活动id</p>
                     * @return ActivityId <p>活动id</p>
                     * 
                     */
                    std::string GetActivityId() const;

                    /**
                     * 设置<p>活动id</p>
                     * @param _activityId <p>活动id</p>
                     * 
                     */
                    void SetActivityId(const std::string& _activityId);

                    /**
                     * 判断参数 ActivityId 是否已赋值
                     * @return ActivityId 是否已赋值
                     * 
                     */
                    bool ActivityIdHasBeenSet() const;

                    /**
                     * 获取<p>代金券名称</p>
                     * @return VoucherName <p>代金券名称</p>
                     * 
                     */
                    std::string GetVoucherName() const;

                    /**
                     * 设置<p>代金券名称</p>
                     * @param _voucherName <p>代金券名称</p>
                     * 
                     */
                    void SetVoucherName(const std::string& _voucherName);

                    /**
                     * 判断参数 VoucherName 是否已赋值
                     * @return VoucherName 是否已赋值
                     * 
                     */
                    bool VoucherNameHasBeenSet() const;

                    /**
                     * 获取<p>发放开始时间,例：2021-01-01</p>
                     * @return TimeFrom <p>发放开始时间,例：2021-01-01</p>
                     * 
                     */
                    std::string GetTimeFrom() const;

                    /**
                     * 设置<p>发放开始时间,例：2021-01-01</p>
                     * @param _timeFrom <p>发放开始时间,例：2021-01-01</p>
                     * 
                     */
                    void SetTimeFrom(const std::string& _timeFrom);

                    /**
                     * 判断参数 TimeFrom 是否已赋值
                     * @return TimeFrom 是否已赋值
                     * 
                     */
                    bool TimeFromHasBeenSet() const;

                    /**
                     * 获取<p>发放结束时间，例：2021-01-01</p>
                     * @return TimeTo <p>发放结束时间，例：2021-01-01</p>
                     * 
                     */
                    std::string GetTimeTo() const;

                    /**
                     * 设置<p>发放结束时间，例：2021-01-01</p>
                     * @param _timeTo <p>发放结束时间，例：2021-01-01</p>
                     * 
                     */
                    void SetTimeTo(const std::string& _timeTo);

                    /**
                     * 判断参数 TimeTo 是否已赋值
                     * @return TimeTo 是否已赋值
                     * 
                     */
                    bool TimeToHasBeenSet() const;

                    /**
                     * 获取<p>指定排序字段：BeginTime开始时间、EndTime到期时间、CreateTime创建时间</p>
                     * @return SortField <p>指定排序字段：BeginTime开始时间、EndTime到期时间、CreateTime创建时间</p>
                     * 
                     */
                    std::string GetSortField() const;

                    /**
                     * 设置<p>指定排序字段：BeginTime开始时间、EndTime到期时间、CreateTime创建时间</p>
                     * @param _sortField <p>指定排序字段：BeginTime开始时间、EndTime到期时间、CreateTime创建时间</p>
                     * 
                     */
                    void SetSortField(const std::string& _sortField);

                    /**
                     * 判断参数 SortField 是否已赋值
                     * @return SortField 是否已赋值
                     * 
                     */
                    bool SortFieldHasBeenSet() const;

                    /**
                     * 获取<p>指定升序降序：desc、asc</p>
                     * @return SortOrder <p>指定升序降序：desc、asc</p>
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置<p>指定升序降序：desc、asc</p>
                     * @param _sortOrder <p>指定升序降序：desc、asc</p>
                     * 
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                    /**
                     * 获取<p>付费模式，postPay后付费/prePay预付费/riPay预留实例/&quot;&quot;或者&quot;*&quot;表示全部模式，如果payMode为&quot;&quot;或&quot;*&quot;，那么productCode与subProductCode必须传空</p>
                     * @return PayMode <p>付费模式，postPay后付费/prePay预付费/riPay预留实例/&quot;&quot;或者&quot;*&quot;表示全部模式，如果payMode为&quot;&quot;或&quot;*&quot;，那么productCode与subProductCode必须传空</p>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置<p>付费模式，postPay后付费/prePay预付费/riPay预留实例/&quot;&quot;或者&quot;*&quot;表示全部模式，如果payMode为&quot;&quot;或&quot;*&quot;，那么productCode与subProductCode必须传空</p>
                     * @param _payMode <p>付费模式，postPay后付费/prePay预付费/riPay预留实例/&quot;&quot;或者&quot;*&quot;表示全部模式，如果payMode为&quot;&quot;或&quot;*&quot;，那么productCode与subProductCode必须传空</p>
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>付费场景PayMode=postPay时：spotpay-竞价实例,&quot;settle account&quot;-普通后付费PayMode=prePay时：purchase-包年包月新购，renew-包年包月续费（自动续费），modify-包年包月配置变更(变配）PayMode=riPay时：oneOffFee-预留实例预付，hourlyFee-预留实例每小时扣费，*-支持全部付费场景</p>
                     * @return PayScene <p>付费场景PayMode=postPay时：spotpay-竞价实例,&quot;settle account&quot;-普通后付费PayMode=prePay时：purchase-包年包月新购，renew-包年包月续费（自动续费），modify-包年包月配置变更(变配）PayMode=riPay时：oneOffFee-预留实例预付，hourlyFee-预留实例每小时扣费，*-支持全部付费场景</p>
                     * 
                     */
                    std::string GetPayScene() const;

                    /**
                     * 设置<p>付费场景PayMode=postPay时：spotpay-竞价实例,&quot;settle account&quot;-普通后付费PayMode=prePay时：purchase-包年包月新购，renew-包年包月续费（自动续费），modify-包年包月配置变更(变配）PayMode=riPay时：oneOffFee-预留实例预付，hourlyFee-预留实例每小时扣费，*-支持全部付费场景</p>
                     * @param _payScene <p>付费场景PayMode=postPay时：spotpay-竞价实例,&quot;settle account&quot;-普通后付费PayMode=prePay时：purchase-包年包月新购，renew-包年包月续费（自动续费），modify-包年包月配置变更(变配）PayMode=riPay时：oneOffFee-预留实例预付，hourlyFee-预留实例每小时扣费，*-支持全部付费场景</p>
                     * 
                     */
                    void SetPayScene(const std::string& _payScene);

                    /**
                     * 判断参数 PayScene 是否已赋值
                     * @return PayScene 是否已赋值
                     * 
                     */
                    bool PaySceneHasBeenSet() const;

                    /**
                     * 获取<p>操作人，默认就是用户uin</p>
                     * @return Operator <p>操作人，默认就是用户uin</p>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置<p>操作人，默认就是用户uin</p>
                     * @param _operator <p>操作人，默认就是用户uin</p>
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取<p>代金券主类型 has_price 为有价现金券 no_price 为无价代金券</p>
                     * @return VoucherMainType <p>代金券主类型 has_price 为有价现金券 no_price 为无价代金券</p>
                     * 
                     */
                    std::string GetVoucherMainType() const;

                    /**
                     * 设置<p>代金券主类型 has_price 为有价现金券 no_price 为无价代金券</p>
                     * @param _voucherMainType <p>代金券主类型 has_price 为有价现金券 no_price 为无价代金券</p>
                     * 
                     */
                    void SetVoucherMainType(const std::string& _voucherMainType);

                    /**
                     * 判断参数 VoucherMainType 是否已赋值
                     * @return VoucherMainType 是否已赋值
                     * 
                     */
                    bool VoucherMainTypeHasBeenSet() const;

                    /**
                     * 获取<p>代金券副类型 discount 为折扣券 deduct 为抵扣券</p>
                     * @return VoucherSubType <p>代金券副类型 discount 为折扣券 deduct 为抵扣券</p>
                     * 
                     */
                    std::string GetVoucherSubType() const;

                    /**
                     * 设置<p>代金券副类型 discount 为折扣券 deduct 为抵扣券</p>
                     * @param _voucherSubType <p>代金券副类型 discount 为折扣券 deduct 为抵扣券</p>
                     * 
                     */
                    void SetVoucherSubType(const std::string& _voucherSubType);

                    /**
                     * 判断参数 VoucherSubType 是否已赋值
                     * @return VoucherSubType 是否已赋值
                     * 
                     */
                    bool VoucherSubTypeHasBeenSet() const;

                    /**
                     * 获取<p>券有效时间开始时间</p>
                     * @return StartTimeFrom <p>券有效时间开始时间</p>
                     * 
                     */
                    std::string GetStartTimeFrom() const;

                    /**
                     * 设置<p>券有效时间开始时间</p>
                     * @param _startTimeFrom <p>券有效时间开始时间</p>
                     * 
                     */
                    void SetStartTimeFrom(const std::string& _startTimeFrom);

                    /**
                     * 判断参数 StartTimeFrom 是否已赋值
                     * @return StartTimeFrom 是否已赋值
                     * 
                     */
                    bool StartTimeFromHasBeenSet() const;

                    /**
                     * 获取<p>券有效时间结束时间</p>
                     * @return StartTimeTo <p>券有效时间结束时间</p>
                     * 
                     */
                    std::string GetStartTimeTo() const;

                    /**
                     * 设置<p>券有效时间结束时间</p>
                     * @param _startTimeTo <p>券有效时间结束时间</p>
                     * 
                     */
                    void SetStartTimeTo(const std::string& _startTimeTo);

                    /**
                     * 判断参数 StartTimeTo 是否已赋值
                     * @return StartTimeTo 是否已赋值
                     * 
                     */
                    bool StartTimeToHasBeenSet() const;

                    /**
                     * 获取<p>券失效时间开始时间</p>
                     * @return EndTimeFrom <p>券失效时间开始时间</p>
                     * 
                     */
                    std::string GetEndTimeFrom() const;

                    /**
                     * 设置<p>券失效时间开始时间</p>
                     * @param _endTimeFrom <p>券失效时间开始时间</p>
                     * 
                     */
                    void SetEndTimeFrom(const std::string& _endTimeFrom);

                    /**
                     * 判断参数 EndTimeFrom 是否已赋值
                     * @return EndTimeFrom 是否已赋值
                     * 
                     */
                    bool EndTimeFromHasBeenSet() const;

                    /**
                     * 获取<p>券失效时间结束时间</p>
                     * @return EndTimeTo <p>券失效时间结束时间</p>
                     * 
                     */
                    std::string GetEndTimeTo() const;

                    /**
                     * 设置<p>券失效时间结束时间</p>
                     * @param _endTimeTo <p>券失效时间结束时间</p>
                     * 
                     */
                    void SetEndTimeTo(const std::string& _endTimeTo);

                    /**
                     * 判断参数 EndTimeTo 是否已赋值
                     * @return EndTimeTo 是否已赋值
                     * 
                     */
                    bool EndTimeToHasBeenSet() const;

                    /**
                     * 获取<p>发券时间开始时间</p>
                     * @return CreateTimeFrom <p>发券时间开始时间</p>
                     * 
                     */
                    std::string GetCreateTimeFrom() const;

                    /**
                     * 设置<p>发券时间开始时间</p>
                     * @param _createTimeFrom <p>发券时间开始时间</p>
                     * 
                     */
                    void SetCreateTimeFrom(const std::string& _createTimeFrom);

                    /**
                     * 判断参数 CreateTimeFrom 是否已赋值
                     * @return CreateTimeFrom 是否已赋值
                     * 
                     */
                    bool CreateTimeFromHasBeenSet() const;

                    /**
                     * 获取<p>发券时间结束时间</p>
                     * @return CreateTimeTo <p>发券时间结束时间</p>
                     * 
                     */
                    std::string GetCreateTimeTo() const;

                    /**
                     * 设置<p>发券时间结束时间</p>
                     * @param _createTimeTo <p>发券时间结束时间</p>
                     * 
                     */
                    void SetCreateTimeTo(const std::string& _createTimeTo);

                    /**
                     * 判断参数 CreateTimeTo 是否已赋值
                     * @return CreateTimeTo 是否已赋值
                     * 
                     */
                    bool CreateTimeToHasBeenSet() const;

                    /**
                     * 获取<p>语言参数</p><p>默认值：zh</p><p>期望返回产品名称中文或其他语言，目前仅支持中文、英文；填&quot;zh&quot;或不填时返回中文，其他情况返回英文</p>
                     * @return Lang <p>语言参数</p><p>默认值：zh</p><p>期望返回产品名称中文或其他语言，目前仅支持中文、英文；填&quot;zh&quot;或不填时返回中文，其他情况返回英文</p>
                     * 
                     */
                    std::string GetLang() const;

                    /**
                     * 设置<p>语言参数</p><p>默认值：zh</p><p>期望返回产品名称中文或其他语言，目前仅支持中文、英文；填&quot;zh&quot;或不填时返回中文，其他情况返回英文</p>
                     * @param _lang <p>语言参数</p><p>默认值：zh</p><p>期望返回产品名称中文或其他语言，目前仅支持中文、英文；填&quot;zh&quot;或不填时返回中文，其他情况返回英文</p>
                     * 
                     */
                    void SetLang(const std::string& _lang);

                    /**
                     * 判断参数 Lang 是否已赋值
                     * @return Lang 是否已赋值
                     * 
                     */
                    bool LangHasBeenSet() const;

                private:

                    /**
                     * <p>一页多少条数据，默认是20条，最大不超过1000</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>第多少页，默认是1</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>券状态：待使用：unUsed，已使用：xa0used，已发货：delivered，已作废：xa0cancel，已过期：overdue</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>代金券id</p>
                     */
                    std::string m_voucherId;
                    bool m_voucherIdHasBeenSet;

                    /**
                     * <p>代金券订单id</p>
                     */
                    std::string m_codeId;
                    bool m_codeIdHasBeenSet;

                    /**
                     * <p>商品码</p>
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * <p>活动id</p>
                     */
                    std::string m_activityId;
                    bool m_activityIdHasBeenSet;

                    /**
                     * <p>代金券名称</p>
                     */
                    std::string m_voucherName;
                    bool m_voucherNameHasBeenSet;

                    /**
                     * <p>发放开始时间,例：2021-01-01</p>
                     */
                    std::string m_timeFrom;
                    bool m_timeFromHasBeenSet;

                    /**
                     * <p>发放结束时间，例：2021-01-01</p>
                     */
                    std::string m_timeTo;
                    bool m_timeToHasBeenSet;

                    /**
                     * <p>指定排序字段：BeginTime开始时间、EndTime到期时间、CreateTime创建时间</p>
                     */
                    std::string m_sortField;
                    bool m_sortFieldHasBeenSet;

                    /**
                     * <p>指定升序降序：desc、asc</p>
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                    /**
                     * <p>付费模式，postPay后付费/prePay预付费/riPay预留实例/&quot;&quot;或者&quot;*&quot;表示全部模式，如果payMode为&quot;&quot;或&quot;*&quot;，那么productCode与subProductCode必须传空</p>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>付费场景PayMode=postPay时：spotpay-竞价实例,&quot;settle account&quot;-普通后付费PayMode=prePay时：purchase-包年包月新购，renew-包年包月续费（自动续费），modify-包年包月配置变更(变配）PayMode=riPay时：oneOffFee-预留实例预付，hourlyFee-预留实例每小时扣费，*-支持全部付费场景</p>
                     */
                    std::string m_payScene;
                    bool m_paySceneHasBeenSet;

                    /**
                     * <p>操作人，默认就是用户uin</p>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>代金券主类型 has_price 为有价现金券 no_price 为无价代金券</p>
                     */
                    std::string m_voucherMainType;
                    bool m_voucherMainTypeHasBeenSet;

                    /**
                     * <p>代金券副类型 discount 为折扣券 deduct 为抵扣券</p>
                     */
                    std::string m_voucherSubType;
                    bool m_voucherSubTypeHasBeenSet;

                    /**
                     * <p>券有效时间开始时间</p>
                     */
                    std::string m_startTimeFrom;
                    bool m_startTimeFromHasBeenSet;

                    /**
                     * <p>券有效时间结束时间</p>
                     */
                    std::string m_startTimeTo;
                    bool m_startTimeToHasBeenSet;

                    /**
                     * <p>券失效时间开始时间</p>
                     */
                    std::string m_endTimeFrom;
                    bool m_endTimeFromHasBeenSet;

                    /**
                     * <p>券失效时间结束时间</p>
                     */
                    std::string m_endTimeTo;
                    bool m_endTimeToHasBeenSet;

                    /**
                     * <p>发券时间开始时间</p>
                     */
                    std::string m_createTimeFrom;
                    bool m_createTimeFromHasBeenSet;

                    /**
                     * <p>发券时间结束时间</p>
                     */
                    std::string m_createTimeTo;
                    bool m_createTimeToHasBeenSet;

                    /**
                     * <p>语言参数</p><p>默认值：zh</p><p>期望返回产品名称中文或其他语言，目前仅支持中文、英文；填&quot;zh&quot;或不填时返回中文，其他情况返回英文</p>
                     */
                    std::string m_lang;
                    bool m_langHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEVOUCHERINFOREQUEST_H_
