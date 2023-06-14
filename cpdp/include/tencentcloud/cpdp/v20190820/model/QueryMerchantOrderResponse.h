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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYMERCHANTORDERRESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYMERCHANTORDERRESPONSE_H_

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
                * QueryMerchantOrder返回参数结构体
                */
                class QueryMerchantOrderResponse : public AbstractModel
                {
                public:
                    QueryMerchantOrderResponse();
                    ~QueryMerchantOrderResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取进件成功后返给商户方的AppId。
                     * @return MerchantAppId 进件成功后返给商户方的AppId。
                     * 
                     */
                    std::string GetMerchantAppId() const;

                    /**
                     * 判断参数 MerchantAppId 是否已赋值
                     * @return MerchantAppId 是否已赋值
                     * 
                     */
                    bool MerchantAppIdHasBeenSet() const;

                    /**
                     * 获取平台流水号。平台唯一订单号。
                     * @return OrderNo 平台流水号。平台唯一订单号。
                     * 
                     */
                    std::string GetOrderNo() const;

                    /**
                     * 判断参数 OrderNo 是否已赋值
                     * @return OrderNo 是否已赋值
                     * 
                     */
                    bool OrderNoHasBeenSet() const;

                    /**
                     * 获取订单支付状态。0-下单失败 1-下单成功未支付 2-支付成功 3-支付失败 4-退款中 5-退款成功 6-退款失败 7-待付款 8-待确认。
                     * @return Status 订单支付状态。0-下单失败 1-下单成功未支付 2-支付成功 3-支付失败 4-退款中 5-退款成功 6-退款失败 7-待付款 8-待确认。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 进件成功后返给商户方的AppId。
                     */
                    std::string m_merchantAppId;
                    bool m_merchantAppIdHasBeenSet;

                    /**
                     * 平台流水号。平台唯一订单号。
                     */
                    std::string m_orderNo;
                    bool m_orderNoHasBeenSet;

                    /**
                     * 订单支付状态。0-下单失败 1-下单成功未支付 2-支付成功 3-支付失败 4-退款中 5-退款成功 6-退款失败 7-待付款 8-待确认。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYMERCHANTORDERRESPONSE_H_
