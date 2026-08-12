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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_CREATEORDEREVENT_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_CREATEORDEREVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Amount.h>
#include <tencentcloud/rce/v20260130/model/Merchant.h>
#include <tencentcloud/rce/v20260130/model/Billing.h>
#include <tencentcloud/rce/v20260130/model/Item.h>
#include <tencentcloud/rce/v20260130/model/Delivery.h>
#include <tencentcloud/rce/v20260130/model/Promotion.h>
#include <tencentcloud/rce/v20260130/model/Cust.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 创建订单事件详情
                */
                class CreateOrderEvent : public AbstractModel
                {
                public:
                    CreateOrderEvent();
                    ~CreateOrderEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>订单ID</p>
                     * @return OrderId <p>订单ID</p>
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置<p>订单ID</p>
                     * @param _orderId <p>订单ID</p>
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
                     * 获取<p>订单金额</p>
                     * @return Amount <p>订单金额</p>
                     * 
                     */
                    Amount GetAmount() const;

                    /**
                     * 设置<p>订单金额</p>
                     * @param _amount <p>订单金额</p>
                     * 
                     */
                    void SetAmount(const Amount& _amount);

                    /**
                     * 判断参数 Amount 是否已赋值
                     * @return Amount 是否已赋值
                     * 
                     */
                    bool AmountHasBeenSet() const;

                    /**
                     * 获取<p>商家信息</p>
                     * @return Merchant <p>商家信息</p>
                     * 
                     */
                    Merchant GetMerchant() const;

                    /**
                     * 设置<p>商家信息</p>
                     * @param _merchant <p>商家信息</p>
                     * 
                     */
                    void SetMerchant(const Merchant& _merchant);

                    /**
                     * 判断参数 Merchant 是否已赋值
                     * @return Merchant 是否已赋值
                     * 
                     */
                    bool MerchantHasBeenSet() const;

                    /**
                     * 获取<p>账单信息</p>
                     * @return Billing <p>账单信息</p>
                     * 
                     */
                    Billing GetBilling() const;

                    /**
                     * 设置<p>账单信息</p>
                     * @param _billing <p>账单信息</p>
                     * 
                     */
                    void SetBilling(const Billing& _billing);

                    /**
                     * 判断参数 Billing 是否已赋值
                     * @return Billing 是否已赋值
                     * 
                     */
                    bool BillingHasBeenSet() const;

                    /**
                     * 获取<p>商品信息</p>
                     * @return Items <p>商品信息</p>
                     * 
                     */
                    std::vector<Item> GetItems() const;

                    /**
                     * 设置<p>商品信息</p>
                     * @param _items <p>商品信息</p>
                     * 
                     */
                    void SetItems(const std::vector<Item>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取<p>物流信息</p>
                     * @return Delivery <p>物流信息</p>
                     * 
                     */
                    Delivery GetDelivery() const;

                    /**
                     * 设置<p>物流信息</p>
                     * @param _delivery <p>物流信息</p>
                     * 
                     */
                    void SetDelivery(const Delivery& _delivery);

                    /**
                     * 判断参数 Delivery 是否已赋值
                     * @return Delivery 是否已赋值
                     * 
                     */
                    bool DeliveryHasBeenSet() const;

                    /**
                     * 获取<p>营销活动信息</p>
                     * @return Promotions <p>营销活动信息</p>
                     * 
                     */
                    std::vector<Promotion> GetPromotions() const;

                    /**
                     * 设置<p>营销活动信息</p>
                     * @param _promotions <p>营销活动信息</p>
                     * 
                     */
                    void SetPromotions(const std::vector<Promotion>& _promotions);

                    /**
                     * 判断参数 Promotions 是否已赋值
                     * @return Promotions 是否已赋值
                     * 
                     */
                    bool PromotionsHasBeenSet() const;

                    /**
                     * 获取<p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * @return Cust <p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * 
                     */
                    std::vector<Cust> GetCust() const;

                    /**
                     * 设置<p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * @param _cust <p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * 
                     */
                    void SetCust(const std::vector<Cust>& _cust);

                    /**
                     * 判断参数 Cust 是否已赋值
                     * @return Cust 是否已赋值
                     * 
                     */
                    bool CustHasBeenSet() const;

                private:

                    /**
                     * <p>订单ID</p>
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * <p>订单金额</p>
                     */
                    Amount m_amount;
                    bool m_amountHasBeenSet;

                    /**
                     * <p>商家信息</p>
                     */
                    Merchant m_merchant;
                    bool m_merchantHasBeenSet;

                    /**
                     * <p>账单信息</p>
                     */
                    Billing m_billing;
                    bool m_billingHasBeenSet;

                    /**
                     * <p>商品信息</p>
                     */
                    std::vector<Item> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * <p>物流信息</p>
                     */
                    Delivery m_delivery;
                    bool m_deliveryHasBeenSet;

                    /**
                     * <p>营销活动信息</p>
                     */
                    std::vector<Promotion> m_promotions;
                    bool m_promotionsHasBeenSet;

                    /**
                     * <p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     */
                    std::vector<Cust> m_cust;
                    bool m_custHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_CREATEORDEREVENT_H_
