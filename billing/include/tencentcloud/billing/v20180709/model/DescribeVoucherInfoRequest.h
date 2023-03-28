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
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置一页多少条数据，默认是20条，最大不超过1000
                     * @param Limit 一页多少条数据，默认是20条，最大不超过1000
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取第多少页，默认是1
                     * @return Offset 第多少页，默认是1
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置第多少页，默认是1
                     * @param Offset 第多少页，默认是1
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取券状态：待使用：unUsed，已使用： used，已发货：delivered，已作废： cancel，已过期：overdue
                     * @return Status 券状态：待使用：unUsed，已使用： used，已发货：delivered，已作废： cancel，已过期：overdue
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置券状态：待使用：unUsed，已使用： used，已发货：delivered，已作废： cancel，已过期：overdue
                     * @param Status 券状态：待使用：unUsed，已使用： used，已发货：delivered，已作废： cancel，已过期：overdue
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取代金券id
                     * @return VoucherId 代金券id
                     */
                    std::string GetVoucherId() const;

                    /**
                     * 设置代金券id
                     * @param VoucherId 代金券id
                     */
                    void SetVoucherId(const std::string& _voucherId);

                    /**
                     * 判断参数 VoucherId 是否已赋值
                     * @return VoucherId 是否已赋值
                     */
                    bool VoucherIdHasBeenSet() const;

                    /**
                     * 获取代金券订单id
                     * @return CodeId 代金券订单id
                     */
                    std::string GetCodeId() const;

                    /**
                     * 设置代金券订单id
                     * @param CodeId 代金券订单id
                     */
                    void SetCodeId(const std::string& _codeId);

                    /**
                     * 判断参数 CodeId 是否已赋值
                     * @return CodeId 是否已赋值
                     */
                    bool CodeIdHasBeenSet() const;

                    /**
                     * 获取商品码
                     * @return ProductCode 商品码
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置商品码
                     * @param ProductCode 商品码
                     */
                    void SetProductCode(const std::string& _productCode);

                    /**
                     * 判断参数 ProductCode 是否已赋值
                     * @return ProductCode 是否已赋值
                     */
                    bool ProductCodeHasBeenSet() const;

                    /**
                     * 获取活动id
                     * @return ActivityId 活动id
                     */
                    std::string GetActivityId() const;

                    /**
                     * 设置活动id
                     * @param ActivityId 活动id
                     */
                    void SetActivityId(const std::string& _activityId);

                    /**
                     * 判断参数 ActivityId 是否已赋值
                     * @return ActivityId 是否已赋值
                     */
                    bool ActivityIdHasBeenSet() const;

                    /**
                     * 获取代金券名称
                     * @return VoucherName 代金券名称
                     */
                    std::string GetVoucherName() const;

                    /**
                     * 设置代金券名称
                     * @param VoucherName 代金券名称
                     */
                    void SetVoucherName(const std::string& _voucherName);

                    /**
                     * 判断参数 VoucherName 是否已赋值
                     * @return VoucherName 是否已赋值
                     */
                    bool VoucherNameHasBeenSet() const;

                    /**
                     * 获取发放开始时间,例：2021-01-01
                     * @return TimeFrom 发放开始时间,例：2021-01-01
                     */
                    std::string GetTimeFrom() const;

                    /**
                     * 设置发放开始时间,例：2021-01-01
                     * @param TimeFrom 发放开始时间,例：2021-01-01
                     */
                    void SetTimeFrom(const std::string& _timeFrom);

                    /**
                     * 判断参数 TimeFrom 是否已赋值
                     * @return TimeFrom 是否已赋值
                     */
                    bool TimeFromHasBeenSet() const;

                    /**
                     * 获取发放结束时间，例：2021-01-01
                     * @return TimeTo 发放结束时间，例：2021-01-01
                     */
                    std::string GetTimeTo() const;

                    /**
                     * 设置发放结束时间，例：2021-01-01
                     * @param TimeTo 发放结束时间，例：2021-01-01
                     */
                    void SetTimeTo(const std::string& _timeTo);

                    /**
                     * 判断参数 TimeTo 是否已赋值
                     * @return TimeTo 是否已赋值
                     */
                    bool TimeToHasBeenSet() const;

                    /**
                     * 获取指定排序字段：BeginTime开始时间、EndTime到期时间、CreateTime创建时间
                     * @return SortField 指定排序字段：BeginTime开始时间、EndTime到期时间、CreateTime创建时间
                     */
                    std::string GetSortField() const;

                    /**
                     * 设置指定排序字段：BeginTime开始时间、EndTime到期时间、CreateTime创建时间
                     * @param SortField 指定排序字段：BeginTime开始时间、EndTime到期时间、CreateTime创建时间
                     */
                    void SetSortField(const std::string& _sortField);

                    /**
                     * 判断参数 SortField 是否已赋值
                     * @return SortField 是否已赋值
                     */
                    bool SortFieldHasBeenSet() const;

                    /**
                     * 获取指定升序降序：desc、asc
                     * @return SortOrder 指定升序降序：desc、asc
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置指定升序降序：desc、asc
                     * @param SortOrder 指定升序降序：desc、asc
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     */
                    bool SortOrderHasBeenSet() const;

                    /**
                     * 获取付费模式，postPay后付费/prePay预付费/riPay预留实例/""或者"*"表示全部模式，如果payMode为""或"*"，那么productCode与subProductCode必须传空
                     * @return PayMode 付费模式，postPay后付费/prePay预付费/riPay预留实例/""或者"*"表示全部模式，如果payMode为""或"*"，那么productCode与subProductCode必须传空
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置付费模式，postPay后付费/prePay预付费/riPay预留实例/""或者"*"表示全部模式，如果payMode为""或"*"，那么productCode与subProductCode必须传空
                     * @param PayMode 付费模式，postPay后付费/prePay预付费/riPay预留实例/""或者"*"表示全部模式，如果payMode为""或"*"，那么productCode与subProductCode必须传空
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取付费场景PayMode=postPay时：spotpay-竞价实例,"settle account"-普通后付费PayMode=prePay时：purchase-包年包月新购，renew-包年包月续费（自动续费），modify-包年包月配置变更(变配）PayMode=riPay时：oneOffFee-预留实例预付，hourlyFee-预留实例每小时扣费，*-支持全部付费场景
                     * @return PayScene 付费场景PayMode=postPay时：spotpay-竞价实例,"settle account"-普通后付费PayMode=prePay时：purchase-包年包月新购，renew-包年包月续费（自动续费），modify-包年包月配置变更(变配）PayMode=riPay时：oneOffFee-预留实例预付，hourlyFee-预留实例每小时扣费，*-支持全部付费场景
                     */
                    std::string GetPayScene() const;

                    /**
                     * 设置付费场景PayMode=postPay时：spotpay-竞价实例,"settle account"-普通后付费PayMode=prePay时：purchase-包年包月新购，renew-包年包月续费（自动续费），modify-包年包月配置变更(变配）PayMode=riPay时：oneOffFee-预留实例预付，hourlyFee-预留实例每小时扣费，*-支持全部付费场景
                     * @param PayScene 付费场景PayMode=postPay时：spotpay-竞价实例,"settle account"-普通后付费PayMode=prePay时：purchase-包年包月新购，renew-包年包月续费（自动续费），modify-包年包月配置变更(变配）PayMode=riPay时：oneOffFee-预留实例预付，hourlyFee-预留实例每小时扣费，*-支持全部付费场景
                     */
                    void SetPayScene(const std::string& _payScene);

                    /**
                     * 判断参数 PayScene 是否已赋值
                     * @return PayScene 是否已赋值
                     */
                    bool PaySceneHasBeenSet() const;

                    /**
                     * 获取操作人，默认就是用户uin
                     * @return Operator 操作人，默认就是用户uin
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作人，默认就是用户uin
                     * @param Operator 操作人，默认就是用户uin
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEVOUCHERINFOREQUEST_H_
