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

#ifndef TENCENTCLOUD_IOTTID_V20190411_MODEL_DELIVERTIDSREQUEST_H_
#define TENCENTCLOUD_IOTTID_V20190411_MODEL_DELIVERTIDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iottid
    {
        namespace V20190411
        {
            namespace Model
            {
                /**
                * DeliverTids请求参数结构体
                */
                class DeliverTidsRequest : public AbstractModel
                {
                public:
                    DeliverTidsRequest();
                    ~DeliverTidsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取订单ID
                     * @return OrderId 订单ID
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单ID
                     * @param _orderId 订单ID
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
                     * 获取数量，1~100
                     * @return Quantity 数量，1~100
                     * 
                     */
                    uint64_t GetQuantity() const;

                    /**
                     * 设置数量，1~100
                     * @param _quantity 数量，1~100
                     * 
                     */
                    void SetQuantity(const uint64_t& _quantity);

                    /**
                     * 判断参数 Quantity 是否已赋值
                     * @return Quantity 是否已赋值
                     * 
                     */
                    bool QuantityHasBeenSet() const;

                private:

                    /**
                     * 订单ID
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 数量，1~100
                     */
                    uint64_t m_quantity;
                    bool m_quantityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTTID_V20190411_MODEL_DELIVERTIDSREQUEST_H_
