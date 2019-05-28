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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DEAL_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DEAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/ProductInfo.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 订单数据对象
                */
                class Deal : public AbstractModel
                {
                public:
                    Deal();
                    ~Deal() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取订单号
                     * @return OrderId 订单号
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单号
                     * @param OrderId 订单号
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取订单状态
                     * @return Status 订单状态
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置订单状态
                     * @param Status 订单状态
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取支付者
                     * @return Payer 支付者
                     */
                    std::string GetPayer() const;

                    /**
                     * 设置支付者
                     * @param Payer 支付者
                     */
                    void SetPayer(const std::string& _payer);

                    /**
                     * 判断参数 Payer 是否已赋值
                     * @return Payer 是否已赋值
                     */
                    bool PayerHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param CreateTime 创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取创建人
                     * @return Creator 创建人
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置创建人
                     * @param Creator 创建人
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取实际支付金额（分）
                     * @return RealTotalCost 实际支付金额（分）
                     */
                    int64_t GetRealTotalCost() const;

                    /**
                     * 设置实际支付金额（分）
                     * @param RealTotalCost 实际支付金额（分）
                     */
                    void SetRealTotalCost(const int64_t& _realTotalCost);

                    /**
                     * 判断参数 RealTotalCost 是否已赋值
                     * @return RealTotalCost 是否已赋值
                     */
                    bool RealTotalCostHasBeenSet() const;

                    /**
                     * 获取代金券抵扣金额（分）
                     * @return VoucherDecline 代金券抵扣金额（分）
                     */
                    int64_t GetVoucherDecline() const;

                    /**
                     * 设置代金券抵扣金额（分）
                     * @param VoucherDecline 代金券抵扣金额（分）
                     */
                    void SetVoucherDecline(const int64_t& _voucherDecline);

                    /**
                     * 判断参数 VoucherDecline 是否已赋值
                     * @return VoucherDecline 是否已赋值
                     */
                    bool VoucherDeclineHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param ProjectId 项目ID
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取产品分类ID
                     * @return GoodsCategoryId 产品分类ID
                     */
                    int64_t GetGoodsCategoryId() const;

                    /**
                     * 设置产品分类ID
                     * @param GoodsCategoryId 产品分类ID
                     */
                    void SetGoodsCategoryId(const int64_t& _goodsCategoryId);

                    /**
                     * 判断参数 GoodsCategoryId 是否已赋值
                     * @return GoodsCategoryId 是否已赋值
                     */
                    bool GoodsCategoryIdHasBeenSet() const;

                    /**
                     * 获取产品详情
                     * @return ProductInfo 产品详情
                     */
                    std::vector<ProductInfo> GetProductInfo() const;

                    /**
                     * 设置产品详情
                     * @param ProductInfo 产品详情
                     */
                    void SetProductInfo(const std::vector<ProductInfo>& _productInfo);

                    /**
                     * 判断参数 ProductInfo 是否已赋值
                     * @return ProductInfo 是否已赋值
                     */
                    bool ProductInfoHasBeenSet() const;

                    /**
                     * 获取时长
                     * @return TimeSpan 时长
                     */
                    double GetTimeSpan() const;

                    /**
                     * 设置时长
                     * @param TimeSpan 时长
                     */
                    void SetTimeSpan(const double& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取时间单位
                     * @return TimeUnit 时间单位
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置时间单位
                     * @param TimeUnit 时间单位
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取货币单位
                     * @return Currency 货币单位
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置货币单位
                     * @param Currency 货币单位
                     */
                    void SetCurrency(const std::string& _currency);

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     */
                    bool CurrencyHasBeenSet() const;

                    /**
                     * 获取折扣率
                     * @return Policy 折扣率
                     */
                    double GetPolicy() const;

                    /**
                     * 设置折扣率
                     * @param Policy 折扣率
                     */
                    void SetPolicy(const double& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取单价（分）
                     * @return Price 单价（分）
                     */
                    double GetPrice() const;

                    /**
                     * 设置单价（分）
                     * @param Price 单价（分）
                     */
                    void SetPrice(const double& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取原价（分）
                     * @return TotalCost 原价（分）
                     */
                    double GetTotalCost() const;

                    /**
                     * 设置原价（分）
                     * @param TotalCost 原价（分）
                     */
                    void SetTotalCost(const double& _totalCost);

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     */
                    bool TotalCostHasBeenSet() const;

                private:

                    /**
                     * 订单号
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 订单状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 支付者
                     */
                    std::string m_payer;
                    bool m_payerHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 创建人
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 实际支付金额（分）
                     */
                    int64_t m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                    /**
                     * 代金券抵扣金额（分）
                     */
                    int64_t m_voucherDecline;
                    bool m_voucherDeclineHasBeenSet;

                    /**
                     * 项目ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 产品分类ID
                     */
                    int64_t m_goodsCategoryId;
                    bool m_goodsCategoryIdHasBeenSet;

                    /**
                     * 产品详情
                     */
                    std::vector<ProductInfo> m_productInfo;
                    bool m_productInfoHasBeenSet;

                    /**
                     * 时长
                     */
                    double m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 时间单位
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 货币单位
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * 折扣率
                     */
                    double m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * 单价（分）
                     */
                    double m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 原价（分）
                     */
                    double m_totalCost;
                    bool m_totalCostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DEAL_H_
