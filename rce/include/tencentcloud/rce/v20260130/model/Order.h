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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_ORDER_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_ORDER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Amount.h>
#include <tencentcloud/rce/v20260130/model/Item.h>
#include <tencentcloud/rce/v20260130/model/Delivery.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 订单信息
                */
                class Order : public AbstractModel
                {
                public:
                    Order();
                    ~Order() = default;
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
                     * <p>商品信息</p>
                     */
                    std::vector<Item> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * <p>物流信息</p>
                     */
                    Delivery m_delivery;
                    bool m_deliveryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_ORDER_H_
