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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_VOUCHERINFOS_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_VOUCHERINFOS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/ApplicableProducts.h>
#include <tencentcloud/billing/v20180709/model/ExcludedProducts.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 代金券相关信息
                */
                class VoucherInfos : public AbstractModel
                {
                public:
                    VoucherInfos();
                    ~VoucherInfos() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取代金券拥有者
                     * @return OwnerUin 代金券拥有者
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置代金券拥有者
                     * @param _ownerUin 代金券拥有者
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取券状态：待使用：unUsed，已使用： used，已发货：delivered，已作废： cancel，已过期：overdue
                     * @return Status 券状态：待使用：unUsed，已使用： used，已发货：delivered，已作废： cancel，已过期：overdue
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置券状态：待使用：unUsed，已使用： used，已发货：delivered，已作废： cancel，已过期：overdue
                     * @param _status 券状态：待使用：unUsed，已使用： used，已发货：delivered，已作废： cancel，已过期：overdue
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
                     * 获取代金券面额（微分）
                     * @return NominalValue 代金券面额（微分）
                     * 
                     */
                    int64_t GetNominalValue() const;

                    /**
                     * 设置代金券面额（微分）
                     * @param _nominalValue 代金券面额（微分）
                     * 
                     */
                    void SetNominalValue(const int64_t& _nominalValue);

                    /**
                     * 判断参数 NominalValue 是否已赋值
                     * @return NominalValue 是否已赋值
                     * 
                     */
                    bool NominalValueHasBeenSet() const;

                    /**
                     * 获取剩余金额（微分）
                     * @return Balance 剩余金额（微分）
                     * 
                     */
                    int64_t GetBalance() const;

                    /**
                     * 设置剩余金额（微分）
                     * @param _balance 剩余金额（微分）
                     * 
                     */
                    void SetBalance(const int64_t& _balance);

                    /**
                     * 判断参数 Balance 是否已赋值
                     * @return Balance 是否已赋值
                     * 
                     */
                    bool BalanceHasBeenSet() const;

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
                     * 获取postPay后付费/prePay预付费/riPay预留实例/空字符串或者'*'表示全部模式
                     * @return PayMode postPay后付费/prePay预付费/riPay预留实例/空字符串或者'*'表示全部模式
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置postPay后付费/prePay预付费/riPay预留实例/空字符串或者'*'表示全部模式
                     * @param _payMode postPay后付费/prePay预付费/riPay预留实例/空字符串或者'*'表示全部模式
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
                     * 获取有效期生效时间
                     * @return BeginTime 有效期生效时间
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置有效期生效时间
                     * @param _beginTime 有效期生效时间
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
                     * 获取有效期截止时间
                     * @return EndTime 有效期截止时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置有效期截止时间
                     * @param _endTime 有效期截止时间
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
                     * 获取适用商品信息
                     * @return ApplicableProducts 适用商品信息
                     * 
                     */
                    ApplicableProducts GetApplicableProducts() const;

                    /**
                     * 设置适用商品信息
                     * @param _applicableProducts 适用商品信息
                     * 
                     */
                    void SetApplicableProducts(const ApplicableProducts& _applicableProducts);

                    /**
                     * 判断参数 ApplicableProducts 是否已赋值
                     * @return ApplicableProducts 是否已赋值
                     * 
                     */
                    bool ApplicableProductsHasBeenSet() const;

                    /**
                     * 获取不适用商品信息
                     * @return ExcludedProducts 不适用商品信息
                     * 
                     */
                    std::vector<ExcludedProducts> GetExcludedProducts() const;

                    /**
                     * 设置不适用商品信息
                     * @param _excludedProducts 不适用商品信息
                     * 
                     */
                    void SetExcludedProducts(const std::vector<ExcludedProducts>& _excludedProducts);

                    /**
                     * 判断参数 ExcludedProducts 是否已赋值
                     * @return ExcludedProducts 是否已赋值
                     * 
                     */
                    bool ExcludedProductsHasBeenSet() const;

                    /**
                     * 获取使用说明/批次备注
                     * @return PolicyRemark 使用说明/批次备注
                     * 
                     */
                    std::string GetPolicyRemark() const;

                    /**
                     * 设置使用说明/批次备注
                     * @param _policyRemark 使用说明/批次备注
                     * 
                     */
                    void SetPolicyRemark(const std::string& _policyRemark);

                    /**
                     * 判断参数 PolicyRemark 是否已赋值
                     * @return PolicyRemark 是否已赋值
                     * 
                     */
                    bool PolicyRemarkHasBeenSet() const;

                    /**
                     * 获取发券时间
                     * @return CreateTime 发券时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置发券时间
                     * @param _createTime 发券时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 代金券拥有者
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 券状态：待使用：unUsed，已使用： used，已发货：delivered，已作废： cancel，已过期：overdue
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 代金券面额（微分）
                     */
                    int64_t m_nominalValue;
                    bool m_nominalValueHasBeenSet;

                    /**
                     * 剩余金额（微分）
                     */
                    int64_t m_balance;
                    bool m_balanceHasBeenSet;

                    /**
                     * 代金券id
                     */
                    std::string m_voucherId;
                    bool m_voucherIdHasBeenSet;

                    /**
                     * postPay后付费/prePay预付费/riPay预留实例/空字符串或者'*'表示全部模式
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 付费场景PayMode=postPay时：spotpay-竞价实例,"settle account"-普通后付费PayMode=prePay时：purchase-包年包月新购，renew-包年包月续费（自动续费），modify-包年包月配置变更(变配）PayMode=riPay时：oneOffFee-预留实例预付，hourlyFee-预留实例每小时扣费，*-支持全部付费场景
                     */
                    std::string m_payScene;
                    bool m_paySceneHasBeenSet;

                    /**
                     * 有效期生效时间
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 有效期截止时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 适用商品信息
                     */
                    ApplicableProducts m_applicableProducts;
                    bool m_applicableProductsHasBeenSet;

                    /**
                     * 不适用商品信息
                     */
                    std::vector<ExcludedProducts> m_excludedProducts;
                    bool m_excludedProductsHasBeenSet;

                    /**
                     * 使用说明/批次备注
                     */
                    std::string m_policyRemark;
                    bool m_policyRemarkHasBeenSet;

                    /**
                     * 发券时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_VOUCHERINFOS_H_
