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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEORDERRESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEORDERRESPONSE_H_

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
                * CreateOrder返回参数结构体
                */
                class CreateOrderResponse : public AbstractModel
                {
                public:
                    CreateOrderResponse();
                    ~CreateOrderResponse() = default;
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
                     * 获取商户流水号，商户唯一订单号由字母或数字组成。
                     * @return TraceNo 商户流水号，商户唯一订单号由字母或数字组成。
                     * 
                     */
                    std::string GetTraceNo() const;

                    /**
                     * 判断参数 TraceNo 是否已赋值
                     * @return TraceNo 是否已赋值
                     * 
                     */
                    bool TraceNoHasBeenSet() const;

                    /**
                     * 获取平台流水号，若下单成功则返回。
                     * @return OrderNo 平台流水号，若下单成功则返回。
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
                     * 获取支付页面跳转地址，若下单成功则返回。
                     * @return PayUrl 支付页面跳转地址，若下单成功则返回。
                     * 
                     */
                    std::string GetPayUrl() const;

                    /**
                     * 判断参数 PayUrl 是否已赋值
                     * @return PayUrl 是否已赋值
                     * 
                     */
                    bool PayUrlHasBeenSet() const;

                private:

                    /**
                     * 进件成功后返给商户方的AppId。
                     */
                    std::string m_merchantAppId;
                    bool m_merchantAppIdHasBeenSet;

                    /**
                     * 商户流水号，商户唯一订单号由字母或数字组成。
                     */
                    std::string m_traceNo;
                    bool m_traceNoHasBeenSet;

                    /**
                     * 平台流水号，若下单成功则返回。
                     */
                    std::string m_orderNo;
                    bool m_orderNoHasBeenSet;

                    /**
                     * 支付页面跳转地址，若下单成功则返回。
                     */
                    std::string m_payUrl;
                    bool m_payUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEORDERRESPONSE_H_
