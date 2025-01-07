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
                     * 获取一页多少条数据，默认是20条，最大不超过1000
                     * @return Limit 一页多少条数据，默认是20条，最大不超过1000
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置一页多少条数据，默认是20条，最大不超过1000
                     * @param _limit 一页多少条数据，默认是20条，最大不超过1000
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
                     * 获取第多少页，默认是1
                     * @return Offset 第多少页，默认是1
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置第多少页，默认是1
                     * @param _offset 第多少页，默认是1
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
                     * 获取券状态：待使用：unUsed，已使用： used，已发货：delivered，已作废： cancel，已过期：overdue
                     * @return Status 券状态：待使用：unUsed，已使用： used，已发货：delivered，已作废： cancel，已过期：overdue
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置券状态：待使用：unUsed，已使用： used，已发货：delivered，已作废： cancel，已过期：overdue
                     * @param _status 券状态：待使用：unUsed，已使用： used，已发货：delivered，已作废： cancel，已过期：overdue
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
                     * 获取代金券id
                     * @return VoucherId 代金券id
                     * 
                     */
                    std::string GetVoucherId() const;

                    /**
                     * 设置代金券id
                     * @param _voucherId 代金券id
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
                     * 获取代金券订单id
                     * @return CodeId 代金券订单id
                     * 
                     */
                    std::string GetCodeId() const;

                    /**
                     * 设置代金券订单id
                     * @param _codeId 代金券订单id
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
                     * 获取商品码
                     * @return ProductCode 商品码
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置商品码
                     * @param _productCode 商品码
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
                     * 获取活动id
                     * @return ActivityId 活动id
                     * 
                     */
                    std::string GetActivityId() const;

                    /**
                     * 设置活动id
                     * @param _activityId 活动id
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
                     * 获取代金券名称
                     * @return VoucherName 代金券名称
                     * 
                     */
                    std::string GetVoucherName() const;

                    /**
                     * 设置代金券名称
                     * @param _voucherName 代金券名称
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
                     * 获取发放开始时间,例：2021-01-01
                     * @return TimeFrom 发放开始时间,例：2021-01-01
                     * 
                     */
                    std::string GetTimeFrom() const;

                    /**
                     * 设置发放开始时间,例：2021-01-01
                     * @param _timeFrom 发放开始时间,例：2021-01-01
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
                     * 获取发放结束时间，例：2021-01-01
                     * @return TimeTo 发放结束时间，例：2021-01-01
                     * 
                     */
                    std::string GetTimeTo() const;

                    /**
                     * 设置发放结束时间，例：2021-01-01
                     * @param _timeTo 发放结束时间，例：2021-01-01
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
                     * 获取指定排序字段：BeginTime开始时间、EndTime到期时间、CreateTime创建时间
                     * @return SortField 指定排序字段：BeginTime开始时间、EndTime到期时间、CreateTime创建时间
                     * 
                     */
                    std::string GetSortField() const;

                    /**
                     * 设置指定排序字段：BeginTime开始时间、EndTime到期时间、CreateTime创建时间
                     * @param _sortField 指定排序字段：BeginTime开始时间、EndTime到期时间、CreateTime创建时间
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
                     * 获取指定升序降序：desc、asc
                     * @return SortOrder 指定升序降序：desc、asc
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置指定升序降序：desc、asc
                     * @param _sortOrder 指定升序降序：desc、asc
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
                     * 获取付费模式，postPay后付费/prePay预付费/riPay预留实例/""或者"*"表示全部模式，如果payMode为""或"*"，那么productCode与subProductCode必须传空
                     * @return PayMode 付费模式，postPay后付费/prePay预付费/riPay预留实例/""或者"*"表示全部模式，如果payMode为""或"*"，那么productCode与subProductCode必须传空
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置付费模式，postPay后付费/prePay预付费/riPay预留实例/""或者"*"表示全部模式，如果payMode为""或"*"，那么productCode与subProductCode必须传空
                     * @param _payMode 付费模式，postPay后付费/prePay预付费/riPay预留实例/""或者"*"表示全部模式，如果payMode为""或"*"，那么productCode与subProductCode必须传空
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
                     * 获取付费场景PayMode=postPay时：spotpay-竞价实例,"settle account"-普通后付费PayMode=prePay时：purchase-包年包月新购，renew-包年包月续费（自动续费），modify-包年包月配置变更(变配）PayMode=riPay时：oneOffFee-预留实例预付，hourlyFee-预留实例每小时扣费，*-支持全部付费场景
                     * @return PayScene 付费场景PayMode=postPay时：spotpay-竞价实例,"settle account"-普通后付费PayMode=prePay时：purchase-包年包月新购，renew-包年包月续费（自动续费），modify-包年包月配置变更(变配）PayMode=riPay时：oneOffFee-预留实例预付，hourlyFee-预留实例每小时扣费，*-支持全部付费场景
                     * 
                     */
                    std::string GetPayScene() const;

                    /**
                     * 设置付费场景PayMode=postPay时：spotpay-竞价实例,"settle account"-普通后付费PayMode=prePay时：purchase-包年包月新购，renew-包年包月续费（自动续费），modify-包年包月配置变更(变配）PayMode=riPay时：oneOffFee-预留实例预付，hourlyFee-预留实例每小时扣费，*-支持全部付费场景
                     * @param _payScene 付费场景PayMode=postPay时：spotpay-竞价实例,"settle account"-普通后付费PayMode=prePay时：purchase-包年包月新购，renew-包年包月续费（自动续费），modify-包年包月配置变更(变配）PayMode=riPay时：oneOffFee-预留实例预付，hourlyFee-预留实例每小时扣费，*-支持全部付费场景
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
                     * 获取操作人，默认就是用户uin
                     * @return Operator 操作人，默认就是用户uin
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作人，默认就是用户uin
                     * @param _operator 操作人，默认就是用户uin
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
                     * 获取代金券主类型 has_price 为有价现金券 no_price 为无价代金券
                     * @return VoucherMainType 代金券主类型 has_price 为有价现金券 no_price 为无价代金券
                     * 
                     */
                    std::string GetVoucherMainType() const;

                    /**
                     * 设置代金券主类型 has_price 为有价现金券 no_price 为无价代金券
                     * @param _voucherMainType 代金券主类型 has_price 为有价现金券 no_price 为无价代金券
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
                     * 获取代金券副类型 discount 为折扣券 deduct 为抵扣券
                     * @return VoucherSubType 代金券副类型 discount 为折扣券 deduct 为抵扣券
                     * 
                     */
                    std::string GetVoucherSubType() const;

                    /**
                     * 设置代金券副类型 discount 为折扣券 deduct 为抵扣券
                     * @param _voucherSubType 代金券副类型 discount 为折扣券 deduct 为抵扣券
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
                     * 获取券有效时间开始时间
                     * @return StartTimeFrom 券有效时间开始时间
                     * 
                     */
                    std::string GetStartTimeFrom() const;

                    /**
                     * 设置券有效时间开始时间
                     * @param _startTimeFrom 券有效时间开始时间
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
                     * 获取券有效时间结束时间
                     * @return StartTimeTo 券有效时间结束时间
                     * 
                     */
                    std::string GetStartTimeTo() const;

                    /**
                     * 设置券有效时间结束时间
                     * @param _startTimeTo 券有效时间结束时间
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
                     * 获取券失效时间开始时间
                     * @return EndTimeFrom 券失效时间开始时间
                     * 
                     */
                    std::string GetEndTimeFrom() const;

                    /**
                     * 设置券失效时间开始时间
                     * @param _endTimeFrom 券失效时间开始时间
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
                     * 获取券失效时间结束时间
                     * @return EndTimeTo 券失效时间结束时间
                     * 
                     */
                    std::string GetEndTimeTo() const;

                    /**
                     * 设置券失效时间结束时间
                     * @param _endTimeTo 券失效时间结束时间
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
                     * 获取发券时间开始时间
                     * @return CreateTimeFrom 发券时间开始时间
                     * 
                     */
                    std::string GetCreateTimeFrom() const;

                    /**
                     * 设置发券时间开始时间
                     * @param _createTimeFrom 发券时间开始时间
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
                     * 获取发券时间结束时间
                     * @return CreateTimeTo 发券时间结束时间
                     * 
                     */
                    std::string GetCreateTimeTo() const;

                    /**
                     * 设置发券时间结束时间
                     * @param _createTimeTo 发券时间结束时间
                     * 
                     */
                    void SetCreateTimeTo(const std::string& _createTimeTo);

                    /**
                     * 判断参数 CreateTimeTo 是否已赋值
                     * @return CreateTimeTo 是否已赋值
                     * 
                     */
                    bool CreateTimeToHasBeenSet() const;

                private:

                    /**
                     * 一页多少条数据，默认是20条，最大不超过1000
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 第多少页，默认是1
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 券状态：待使用：unUsed，已使用： used，已发货：delivered，已作废： cancel，已过期：overdue
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 代金券id
                     */
                    std::string m_voucherId;
                    bool m_voucherIdHasBeenSet;

                    /**
                     * 代金券订单id
                     */
                    std::string m_codeId;
                    bool m_codeIdHasBeenSet;

                    /**
                     * 商品码
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * 活动id
                     */
                    std::string m_activityId;
                    bool m_activityIdHasBeenSet;

                    /**
                     * 代金券名称
                     */
                    std::string m_voucherName;
                    bool m_voucherNameHasBeenSet;

                    /**
                     * 发放开始时间,例：2021-01-01
                     */
                    std::string m_timeFrom;
                    bool m_timeFromHasBeenSet;

                    /**
                     * 发放结束时间，例：2021-01-01
                     */
                    std::string m_timeTo;
                    bool m_timeToHasBeenSet;

                    /**
                     * 指定排序字段：BeginTime开始时间、EndTime到期时间、CreateTime创建时间
                     */
                    std::string m_sortField;
                    bool m_sortFieldHasBeenSet;

                    /**
                     * 指定升序降序：desc、asc
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                    /**
                     * 付费模式，postPay后付费/prePay预付费/riPay预留实例/""或者"*"表示全部模式，如果payMode为""或"*"，那么productCode与subProductCode必须传空
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 付费场景PayMode=postPay时：spotpay-竞价实例,"settle account"-普通后付费PayMode=prePay时：purchase-包年包月新购，renew-包年包月续费（自动续费），modify-包年包月配置变更(变配）PayMode=riPay时：oneOffFee-预留实例预付，hourlyFee-预留实例每小时扣费，*-支持全部付费场景
                     */
                    std::string m_payScene;
                    bool m_paySceneHasBeenSet;

                    /**
                     * 操作人，默认就是用户uin
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 代金券主类型 has_price 为有价现金券 no_price 为无价代金券
                     */
                    std::string m_voucherMainType;
                    bool m_voucherMainTypeHasBeenSet;

                    /**
                     * 代金券副类型 discount 为折扣券 deduct 为抵扣券
                     */
                    std::string m_voucherSubType;
                    bool m_voucherSubTypeHasBeenSet;

                    /**
                     * 券有效时间开始时间
                     */
                    std::string m_startTimeFrom;
                    bool m_startTimeFromHasBeenSet;

                    /**
                     * 券有效时间结束时间
                     */
                    std::string m_startTimeTo;
                    bool m_startTimeToHasBeenSet;

                    /**
                     * 券失效时间开始时间
                     */
                    std::string m_endTimeFrom;
                    bool m_endTimeFromHasBeenSet;

                    /**
                     * 券失效时间结束时间
                     */
                    std::string m_endTimeTo;
                    bool m_endTimeToHasBeenSet;

                    /**
                     * 发券时间开始时间
                     */
                    std::string m_createTimeFrom;
                    bool m_createTimeFromHasBeenSet;

                    /**
                     * 发券时间结束时间
                     */
                    std::string m_createTimeTo;
                    bool m_createTimeToHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEVOUCHERINFOREQUEST_H_
