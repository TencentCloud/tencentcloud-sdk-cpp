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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_PAYDEALSREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_PAYDEALSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * PayDeals请求参数结构体
                */
                class PayDealsRequest : public AbstractModel
                {
                public:
                    PayDealsRequest();
                    ~PayDealsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要支付的一个或者多个订单号
                     * @return OrderIds 需要支付的一个或者多个订单号
                     */
                    std::vector<std::string> GetOrderIds() const;

                    /**
                     * 设置需要支付的一个或者多个订单号
                     * @param OrderIds 需要支付的一个或者多个订单号
                     */
                    void SetOrderIds(const std::vector<std::string>& _orderIds);

                    /**
                     * 判断参数 OrderIds 是否已赋值
                     * @return OrderIds 是否已赋值
                     */
                    bool OrderIdsHasBeenSet() const;

                    /**
                     * 获取是否自动使用代金券,1:是,0否,默认0
                     * @return AutoVoucher 是否自动使用代金券,1:是,0否,默认0
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置是否自动使用代金券,1:是,0否,默认0
                     * @param AutoVoucher 是否自动使用代金券,1:是,0否,默认0
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取代金券ID列表,目前仅支持指定一张代金券
                     * @return VoucherIds 代金券ID列表,目前仅支持指定一张代金券
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置代金券ID列表,目前仅支持指定一张代金券
                     * @param VoucherIds 代金券ID列表,目前仅支持指定一张代金券
                     */
                    void SetVoucherIds(const std::vector<std::string>& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     */
                    bool VoucherIdsHasBeenSet() const;

                private:

                    /**
                     * 需要支付的一个或者多个订单号
                     */
                    std::vector<std::string> m_orderIds;
                    bool m_orderIdsHasBeenSet;

                    /**
                     * 是否自动使用代金券,1:是,0否,默认0
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * 代金券ID列表,目前仅支持指定一张代金券
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_PAYDEALSREQUEST_H_
