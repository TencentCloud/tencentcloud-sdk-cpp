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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_DEDUCEQUOTAREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_DEDUCEQUOTAREQUEST_H_

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
                * DeduceQuota请求参数结构体
                */
                class DeduceQuotaRequest : public AbstractModel
                {
                public:
                    DeduceQuotaRequest();
                    ~DeduceQuotaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主播ID
                     * @return AnchorId 主播ID
                     * 
                     */
                    std::string GetAnchorId() const;

                    /**
                     * 设置主播ID
                     * @param _anchorId 主播ID
                     * 
                     */
                    void SetAnchorId(const std::string& _anchorId);

                    /**
                     * 判断参数 AnchorId 是否已赋值
                     * @return AnchorId 是否已赋值
                     * 
                     */
                    bool AnchorIdHasBeenSet() const;

                    /**
                     * 获取提现金额，单位为"分"
                     * @return Amount 提现金额，单位为"分"
                     * 
                     */
                    int64_t GetAmount() const;

                    /**
                     * 设置提现金额，单位为"分"
                     * @param _amount 提现金额，单位为"分"
                     * 
                     */
                    void SetAmount(const int64_t& _amount);

                    /**
                     * 判断参数 Amount 是否已赋值
                     * @return Amount 是否已赋值
                     * 
                     */
                    bool AmountHasBeenSet() const;

                    /**
                     * 获取外部业务订单号
                     * @return OrderId 外部业务订单号
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置外部业务订单号
                     * @param _orderId 外部业务订单号
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                private:

                    /**
                     * 主播ID
                     */
                    std::string m_anchorId;
                    bool m_anchorIdHasBeenSet;

                    /**
                     * 提现金额，单位为"分"
                     */
                    int64_t m_amount;
                    bool m_amountHasBeenSet;

                    /**
                     * 外部业务订单号
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_DEDUCEQUOTAREQUEST_H_
