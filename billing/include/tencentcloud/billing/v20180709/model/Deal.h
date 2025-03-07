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
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单号
                     * @param _orderId 订单号
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取订单的状态 1：未支付 2：已支付3：发货中 4：已发货 5：发货失败 6：已退款 7：已关单 8：订单过期 9：订单已失效 10：产品已失效 11：代付拒绝 12：支付中
                     * @return Status 订单的状态 1：未支付 2：已支付3：发货中 4：已发货 5：发货失败 6：已退款 7：已关单 8：订单过期 9：订单已失效 10：产品已失效 11：代付拒绝 12：支付中
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置订单的状态 1：未支付 2：已支付3：发货中 4：已发货 5：发货失败 6：已退款 7：已关单 8：订单过期 9：订单已失效 10：产品已失效 11：代付拒绝 12：支付中
                     * @param _status 订单的状态 1：未支付 2：已支付3：发货中 4：已发货 5：发货失败 6：已退款 7：已关单 8：订单过期 9：订单已失效 10：产品已失效 11：代付拒绝 12：支付中
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取支付者
                     * @return Payer 支付者
                     * 
                     */
                    std::string GetPayer() const;

                    /**
                     * 设置支付者
                     * @param _payer 支付者
                     * 
                     */
                    void SetPayer(const std::string& _payer);

                    /**
                     * 判断参数 Payer 是否已赋值
                     * @return Payer 是否已赋值
                     * 
                     */
                    bool PayerHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取创建人
                     * @return Creator 创建人
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置创建人
                     * @param _creator 创建人
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取实际支付金额（分）
                     * @return RealTotalCost 实际支付金额（分）
                     * 
                     */
                    int64_t GetRealTotalCost() const;

                    /**
                     * 设置实际支付金额（分）
                     * @param _realTotalCost 实际支付金额（分）
                     * 
                     */
                    void SetRealTotalCost(const int64_t& _realTotalCost);

                    /**
                     * 判断参数 RealTotalCost 是否已赋值
                     * @return RealTotalCost 是否已赋值
                     * 
                     */
                    bool RealTotalCostHasBeenSet() const;

                    /**
                     * 获取代金券抵扣金额（分）
                     * @return VoucherDecline 代金券抵扣金额（分）
                     * 
                     */
                    int64_t GetVoucherDecline() const;

                    /**
                     * 设置代金券抵扣金额（分）
                     * @param _voucherDecline 代金券抵扣金额（分）
                     * 
                     */
                    void SetVoucherDecline(const int64_t& _voucherDecline);

                    /**
                     * 判断参数 VoucherDecline 是否已赋值
                     * @return VoucherDecline 是否已赋值
                     * 
                     */
                    bool VoucherDeclineHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取产品分类ID
                     * @return GoodsCategoryId 产品分类ID
                     * 
                     */
                    int64_t GetGoodsCategoryId() const;

                    /**
                     * 设置产品分类ID
                     * @param _goodsCategoryId 产品分类ID
                     * 
                     */
                    void SetGoodsCategoryId(const int64_t& _goodsCategoryId);

                    /**
                     * 判断参数 GoodsCategoryId 是否已赋值
                     * @return GoodsCategoryId 是否已赋值
                     * 
                     */
                    bool GoodsCategoryIdHasBeenSet() const;

                    /**
                     * 获取产品详情
                     * @return ProductInfo 产品详情
                     * 
                     */
                    std::vector<ProductInfo> GetProductInfo() const;

                    /**
                     * 设置产品详情
                     * @param _productInfo 产品详情
                     * 
                     */
                    void SetProductInfo(const std::vector<ProductInfo>& _productInfo);

                    /**
                     * 判断参数 ProductInfo 是否已赋值
                     * @return ProductInfo 是否已赋值
                     * 
                     */
                    bool ProductInfoHasBeenSet() const;

                    /**
                     * 获取时长
                     * @return TimeSpan 时长
                     * 
                     */
                    double GetTimeSpan() const;

                    /**
                     * 设置时长
                     * @param _timeSpan 时长
                     * 
                     */
                    void SetTimeSpan(const double& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取时间单位
                     * @return TimeUnit 时间单位
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置时间单位
                     * @param _timeUnit 时间单位
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取货币单位
                     * @return Currency 货币单位
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置货币单位
                     * @param _currency 货币单位
                     * 
                     */
                    void SetCurrency(const std::string& _currency);

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     * 
                     */
                    bool CurrencyHasBeenSet() const;

                    /**
                     * 获取折扣率
                     * @return Policy 折扣率
                     * 
                     */
                    double GetPolicy() const;

                    /**
                     * 设置折扣率
                     * @param _policy 折扣率
                     * 
                     */
                    void SetPolicy(const double& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取单价（分）
                     * @return Price 单价（分）
                     * 
                     */
                    double GetPrice() const;

                    /**
                     * 设置单价（分）
                     * @param _price 单价（分）
                     * 
                     */
                    void SetPrice(const double& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取原价（分）
                     * @return TotalCost 原价（分）
                     * 
                     */
                    double GetTotalCost() const;

                    /**
                     * 设置原价（分）
                     * @param _totalCost 原价（分）
                     * 
                     */
                    void SetTotalCost(const double& _totalCost);

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     * 
                     */
                    bool TotalCostHasBeenSet() const;

                    /**
                     * 获取产品编码
                     * @return ProductCode 产品编码
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置产品编码
                     * @param _productCode 产品编码
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
                     * 获取子产品编码
                     * @return SubProductCode 子产品编码
                     * 
                     */
                    std::string GetSubProductCode() const;

                    /**
                     * 设置子产品编码
                     * @param _subProductCode 子产品编码
                     * 
                     */
                    void SetSubProductCode(const std::string& _subProductCode);

                    /**
                     * 判断参数 SubProductCode 是否已赋值
                     * @return SubProductCode 是否已赋值
                     * 
                     */
                    bool SubProductCodeHasBeenSet() const;

                    /**
                     * 获取大订单号
                     * @return BigDealId 大订单号
                     * 
                     */
                    std::string GetBigDealId() const;

                    /**
                     * 设置大订单号
                     * @param _bigDealId 大订单号
                     * 
                     */
                    void SetBigDealId(const std::string& _bigDealId);

                    /**
                     * 判断参数 BigDealId 是否已赋值
                     * @return BigDealId 是否已赋值
                     * 
                     */
                    bool BigDealIdHasBeenSet() const;

                    /**
                     * 获取退费公式
                     * @return Formula 退费公式
                     * 
                     */
                    std::string GetFormula() const;

                    /**
                     * 设置退费公式
                     * @param _formula 退费公式
                     * 
                     */
                    void SetFormula(const std::string& _formula);

                    /**
                     * 判断参数 Formula 是否已赋值
                     * @return Formula 是否已赋值
                     * 
                     */
                    bool FormulaHasBeenSet() const;

                    /**
                     * 获取退费涉及订单信息
                     * @return RefReturnDeals 退费涉及订单信息
                     * 
                     */
                    std::string GetRefReturnDeals() const;

                    /**
                     * 设置退费涉及订单信息
                     * @param _refReturnDeals 退费涉及订单信息
                     * 
                     */
                    void SetRefReturnDeals(const std::string& _refReturnDeals);

                    /**
                     * 判断参数 RefReturnDeals 是否已赋值
                     * @return RefReturnDeals 是否已赋值
                     * 
                     */
                    bool RefReturnDealsHasBeenSet() const;

                    /**
                     * 获取付费模式：prePay 预付费 postPay后付费 riPay预留实例
                     * @return PayMode 付费模式：prePay 预付费 postPay后付费 riPay预留实例
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置付费模式：prePay 预付费 postPay后付费 riPay预留实例
                     * @param _payMode 付费模式：prePay 预付费 postPay后付费 riPay预留实例
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
                     * 获取交易类型
modifyNetworkMode 调整带宽模式
modifyNetworkSize 调整带宽大小
refund 退款
downgrade 降配
upgrade 升配
renew 续费
purchase 购买
preMoveOut 包年包月迁出资源
preMoveIn 包年包月迁入资源
preToPost 预付费转后付费
postMoveOut 按量计费迁出资源
postMoveIn 按量计费迁入资源
                     * @return Action 交易类型
modifyNetworkMode 调整带宽模式
modifyNetworkSize 调整带宽大小
refund 退款
downgrade 降配
upgrade 升配
renew 续费
purchase 购买
preMoveOut 包年包月迁出资源
preMoveIn 包年包月迁入资源
preToPost 预付费转后付费
postMoveOut 按量计费迁出资源
postMoveIn 按量计费迁入资源
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置交易类型
modifyNetworkMode 调整带宽模式
modifyNetworkSize 调整带宽大小
refund 退款
downgrade 降配
upgrade 升配
renew 续费
purchase 购买
preMoveOut 包年包月迁出资源
preMoveIn 包年包月迁入资源
preToPost 预付费转后付费
postMoveOut 按量计费迁出资源
postMoveIn 按量计费迁入资源
                     * @param _action 交易类型
modifyNetworkMode 调整带宽模式
modifyNetworkSize 调整带宽大小
refund 退款
downgrade 降配
upgrade 升配
renew 续费
purchase 购买
preMoveOut 包年包月迁出资源
preMoveIn 包年包月迁入资源
preToPost 预付费转后付费
postMoveOut 按量计费迁出资源
postMoveIn 按量计费迁入资源
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取产品编码中文名称
                     * @return ProductName 产品编码中文名称
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品编码中文名称
                     * @param _productName 产品编码中文名称
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取子产品编码中文名称
                     * @return SubProductName 子产品编码中文名称
                     * 
                     */
                    std::string GetSubProductName() const;

                    /**
                     * 设置子产品编码中文名称
                     * @param _subProductName 子产品编码中文名称
                     * 
                     */
                    void SetSubProductName(const std::string& _subProductName);

                    /**
                     * 判断参数 SubProductName 是否已赋值
                     * @return SubProductName 是否已赋值
                     * 
                     */
                    bool SubProductNameHasBeenSet() const;

                    /**
                     * 获取订单对应的资源id, 查询参数Limit超过200，将返回null
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceId 订单对应的资源id, 查询参数Limit超过200，将返回null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetResourceId() const;

                    /**
                     * 设置订单对应的资源id, 查询参数Limit超过200，将返回null
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceId 订单对应的资源id, 查询参数Limit超过200，将返回null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceId(const std::vector<std::string>& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * 订单号
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 订单的状态 1：未支付 2：已支付3：发货中 4：已发货 5：发货失败 6：已退款 7：已关单 8：订单过期 9：订单已失效 10：产品已失效 11：代付拒绝 12：支付中
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

                    /**
                     * 产品编码
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * 子产品编码
                     */
                    std::string m_subProductCode;
                    bool m_subProductCodeHasBeenSet;

                    /**
                     * 大订单号
                     */
                    std::string m_bigDealId;
                    bool m_bigDealIdHasBeenSet;

                    /**
                     * 退费公式
                     */
                    std::string m_formula;
                    bool m_formulaHasBeenSet;

                    /**
                     * 退费涉及订单信息
                     */
                    std::string m_refReturnDeals;
                    bool m_refReturnDealsHasBeenSet;

                    /**
                     * 付费模式：prePay 预付费 postPay后付费 riPay预留实例
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 交易类型
modifyNetworkMode 调整带宽模式
modifyNetworkSize 调整带宽大小
refund 退款
downgrade 降配
upgrade 升配
renew 续费
purchase 购买
preMoveOut 包年包月迁出资源
preMoveIn 包年包月迁入资源
preToPost 预付费转后付费
postMoveOut 按量计费迁出资源
postMoveIn 按量计费迁入资源
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 产品编码中文名称
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 子产品编码中文名称
                     */
                    std::string m_subProductName;
                    bool m_subProductNameHasBeenSet;

                    /**
                     * 订单对应的资源id, 查询参数Limit超过200，将返回null
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DEAL_H_
