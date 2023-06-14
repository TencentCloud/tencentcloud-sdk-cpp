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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_ORDER_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_ORDER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/OrderItem.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 线下查票-订单信息
                */
                class Order : public AbstractModel
                {
                public:
                    Order();
                    ~Order() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取含税金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AmountHasTax 含税金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetAmountHasTax() const;

                    /**
                     * 设置含税金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _amountHasTax 含税金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAmountHasTax(const double& _amountHasTax);

                    /**
                     * 判断参数 AmountHasTax 是否已赋值
                     * @return AmountHasTax 是否已赋值
                     * 
                     */
                    bool AmountHasTaxHasBeenSet() const;

                    /**
                     * 获取优惠金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Discount 优惠金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetDiscount() const;

                    /**
                     * 设置优惠金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _discount 优惠金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiscount(const double& _discount);

                    /**
                     * 判断参数 Discount 是否已赋值
                     * @return Discount 是否已赋值
                     * 
                     */
                    bool DiscountHasBeenSet() const;

                    /**
                     * 获取销方名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SellerName 销方名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSellerName() const;

                    /**
                     * 设置销方名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sellerName 销方名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSellerName(const std::string& _sellerName);

                    /**
                     * 判断参数 SellerName 是否已赋值
                     * @return SellerName 是否已赋值
                     * 
                     */
                    bool SellerNameHasBeenSet() const;

                    /**
                     * 获取发票类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InvoiceType 发票类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInvoiceType() const;

                    /**
                     * 设置发票类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _invoiceType 发票类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInvoiceType(const int64_t& _invoiceType);

                    /**
                     * 判断参数 InvoiceType 是否已赋值
                     * @return InvoiceType 是否已赋值
                     * 
                     */
                    bool InvoiceTypeHasBeenSet() const;

                    /**
                     * 获取默认“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 默认“”
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置默认“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 默认“”
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取支付金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Amount 支付金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetAmount() const;

                    /**
                     * 设置支付金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _amount 支付金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAmount(const double& _amount);

                    /**
                     * 判断参数 Amount 是否已赋值
                     * @return Amount 是否已赋值
                     * 
                     */
                    bool AmountHasBeenSet() const;

                    /**
                     * 获取下单日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrderDate 下单日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrderDate() const;

                    /**
                     * 设置下单日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orderDate 下单日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrderDate(const std::string& _orderDate);

                    /**
                     * 判断参数 OrderDate 是否已赋值
                     * @return OrderDate 是否已赋值
                     * 
                     */
                    bool OrderDateHasBeenSet() const;

                    /**
                     * 获取订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrderId 订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orderId 订单号
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取门店号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StoreNo 门店号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStoreNo() const;

                    /**
                     * 设置门店号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storeNo 门店号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStoreNo(const std::string& _storeNo);

                    /**
                     * 判断参数 StoreNo 是否已赋值
                     * @return StoreNo 是否已赋值
                     * 
                     */
                    bool StoreNoHasBeenSet() const;

                    /**
                     * 获取明细
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Items 明细
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<OrderItem> GetItems() const;

                    /**
                     * 设置明细
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _items 明细
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItems(const std::vector<OrderItem>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * 含税金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_amountHasTax;
                    bool m_amountHasTaxHasBeenSet;

                    /**
                     * 优惠金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * 销方名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sellerName;
                    bool m_sellerNameHasBeenSet;

                    /**
                     * 发票类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_invoiceType;
                    bool m_invoiceTypeHasBeenSet;

                    /**
                     * 默认“”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 支付金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_amount;
                    bool m_amountHasBeenSet;

                    /**
                     * 下单日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orderDate;
                    bool m_orderDateHasBeenSet;

                    /**
                     * 订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 门店号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_storeNo;
                    bool m_storeNoHasBeenSet;

                    /**
                     * 明细
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OrderItem> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_ORDER_H_
