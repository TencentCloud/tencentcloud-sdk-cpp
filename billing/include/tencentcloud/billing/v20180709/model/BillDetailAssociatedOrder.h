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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_BILLDETAILASSOCIATEDORDER_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_BILLDETAILASSOCIATEDORDER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 明细账单关联单据信息
                */
                class BillDetailAssociatedOrder : public AbstractModel
                {
                public:
                    BillDetailAssociatedOrder();
                    ~BillDetailAssociatedOrder() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取新购订单
                     * @return PrepayPurchase 新购订单
                     * 
                     */
                    std::string GetPrepayPurchase() const;

                    /**
                     * 设置新购订单
                     * @param _prepayPurchase 新购订单
                     * 
                     */
                    void SetPrepayPurchase(const std::string& _prepayPurchase);

                    /**
                     * 判断参数 PrepayPurchase 是否已赋值
                     * @return PrepayPurchase 是否已赋值
                     * 
                     */
                    bool PrepayPurchaseHasBeenSet() const;

                    /**
                     * 获取续费订单
                     * @return PrepayRenew 续费订单
                     * 
                     */
                    std::string GetPrepayRenew() const;

                    /**
                     * 设置续费订单
                     * @param _prepayRenew 续费订单
                     * 
                     */
                    void SetPrepayRenew(const std::string& _prepayRenew);

                    /**
                     * 判断参数 PrepayRenew 是否已赋值
                     * @return PrepayRenew 是否已赋值
                     * 
                     */
                    bool PrepayRenewHasBeenSet() const;

                    /**
                     * 获取升配订单
                     * @return PrepayModifyUp 升配订单
                     * 
                     */
                    std::string GetPrepayModifyUp() const;

                    /**
                     * 设置升配订单
                     * @param _prepayModifyUp 升配订单
                     * 
                     */
                    void SetPrepayModifyUp(const std::string& _prepayModifyUp);

                    /**
                     * 判断参数 PrepayModifyUp 是否已赋值
                     * @return PrepayModifyUp 是否已赋值
                     * 
                     */
                    bool PrepayModifyUpHasBeenSet() const;

                    /**
                     * 获取冲销订单
                     * @return ReverseOrder 冲销订单
                     * 
                     */
                    std::string GetReverseOrder() const;

                    /**
                     * 设置冲销订单
                     * @param _reverseOrder 冲销订单
                     * 
                     */
                    void SetReverseOrder(const std::string& _reverseOrder);

                    /**
                     * 判断参数 ReverseOrder 是否已赋值
                     * @return ReverseOrder 是否已赋值
                     * 
                     */
                    bool ReverseOrderHasBeenSet() const;

                    /**
                     * 获取优惠调整后订单
                     * @return NewOrder 优惠调整后订单
                     * 
                     */
                    std::string GetNewOrder() const;

                    /**
                     * 设置优惠调整后订单
                     * @param _newOrder 优惠调整后订单
                     * 
                     */
                    void SetNewOrder(const std::string& _newOrder);

                    /**
                     * 判断参数 NewOrder 是否已赋值
                     * @return NewOrder 是否已赋值
                     * 
                     */
                    bool NewOrderHasBeenSet() const;

                    /**
                     * 获取优惠调整前订单
                     * @return Original 优惠调整前订单
                     * 
                     */
                    std::string GetOriginal() const;

                    /**
                     * 设置优惠调整前订单
                     * @param _original 优惠调整前订单
                     * 
                     */
                    void SetOriginal(const std::string& _original);

                    /**
                     * 判断参数 Original 是否已赋值
                     * @return Original 是否已赋值
                     * 
                     */
                    bool OriginalHasBeenSet() const;

                private:

                    /**
                     * 新购订单
                     */
                    std::string m_prepayPurchase;
                    bool m_prepayPurchaseHasBeenSet;

                    /**
                     * 续费订单
                     */
                    std::string m_prepayRenew;
                    bool m_prepayRenewHasBeenSet;

                    /**
                     * 升配订单
                     */
                    std::string m_prepayModifyUp;
                    bool m_prepayModifyUpHasBeenSet;

                    /**
                     * 冲销订单
                     */
                    std::string m_reverseOrder;
                    bool m_reverseOrderHasBeenSet;

                    /**
                     * 优惠调整后订单
                     */
                    std::string m_newOrder;
                    bool m_newOrderHasBeenSet;

                    /**
                     * 优惠调整前订单
                     */
                    std::string m_original;
                    bool m_originalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BILLDETAILASSOCIATEDORDER_H_
