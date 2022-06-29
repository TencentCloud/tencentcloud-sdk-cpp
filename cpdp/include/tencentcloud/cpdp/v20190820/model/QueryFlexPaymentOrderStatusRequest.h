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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYFLEXPAYMENTORDERSTATUSREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYFLEXPAYMENTORDERSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryFlexPaymentOrderStatus请求参数结构体
                */
                class QueryFlexPaymentOrderStatusRequest : public AbstractModel
                {
                public:
                    QueryFlexPaymentOrderStatusRequest();
                    ~QueryFlexPaymentOrderStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取外部订单ID
                     * @return OutOrderId 外部订单ID
                     */
                    std::string GetOutOrderId() const;

                    /**
                     * 设置外部订单ID
                     * @param OutOrderId 外部订单ID
                     */
                    void SetOutOrderId(const std::string& _outOrderId);

                    /**
                     * 判断参数 OutOrderId 是否已赋值
                     * @return OutOrderId 是否已赋值
                     */
                    bool OutOrderIdHasBeenSet() const;

                    /**
                     * 获取订单ID
                     * @return OrderId 订单ID
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单ID
                     * @param OrderId 订单ID
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     */
                    bool OrderIdHasBeenSet() const;

                private:

                    /**
                     * 外部订单ID
                     */
                    std::string m_outOrderId;
                    bool m_outOrderIdHasBeenSet;

                    /**
                     * 订单ID
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYFLEXPAYMENTORDERSTATUSREQUEST_H_
