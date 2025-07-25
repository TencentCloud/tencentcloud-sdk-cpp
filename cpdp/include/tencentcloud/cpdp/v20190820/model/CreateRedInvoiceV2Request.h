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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEREDINVOICEV2REQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEREDINVOICEV2REQUEST_H_

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
                * CreateRedInvoiceV2请求参数结构体
                */
                class CreateRedInvoiceV2Request : public AbstractModel
                {
                public:
                    CreateRedInvoiceV2Request();
                    ~CreateRedInvoiceV2Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开票平台ID
0 : 高灯
1 : 票易通
                     * @return InvoicePlatformId 开票平台ID
0 : 高灯
1 : 票易通
                     * 
                     */
                    int64_t GetInvoicePlatformId() const;

                    /**
                     * 设置开票平台ID
0 : 高灯
1 : 票易通
                     * @param _invoicePlatformId 开票平台ID
0 : 高灯
1 : 票易通
                     * 
                     */
                    void SetInvoicePlatformId(const int64_t& _invoicePlatformId);

                    /**
                     * 判断参数 InvoicePlatformId 是否已赋值
                     * @return InvoicePlatformId 是否已赋值
                     * 
                     */
                    bool InvoicePlatformIdHasBeenSet() const;

                    /**
                     * 获取订单号
                     * @return OrderId 订单号
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单号
                     * @param _orderId 订单号
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
                     * 获取接入环境。沙箱环境填 sandbox。
                     * @return Profile 接入环境。沙箱环境填 sandbox。
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置接入环境。沙箱环境填 sandbox。
                     * @param _profile 接入环境。沙箱环境填 sandbox。
                     * 
                     */
                    void SetProfile(const std::string& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                    /**
                     * 获取开票渠道。0：线上渠道，1：线下渠道。不填默认为线上渠道
                     * @return InvoiceChannel 开票渠道。0：线上渠道，1：线下渠道。不填默认为线上渠道
                     * 
                     */
                    int64_t GetInvoiceChannel() const;

                    /**
                     * 设置开票渠道。0：线上渠道，1：线下渠道。不填默认为线上渠道
                     * @param _invoiceChannel 开票渠道。0：线上渠道，1：线下渠道。不填默认为线上渠道
                     * 
                     */
                    void SetInvoiceChannel(const int64_t& _invoiceChannel);

                    /**
                     * 判断参数 InvoiceChannel 是否已赋值
                     * @return InvoiceChannel 是否已赋值
                     * 
                     */
                    bool InvoiceChannelHasBeenSet() const;

                private:

                    /**
                     * 开票平台ID
0 : 高灯
1 : 票易通
                     */
                    int64_t m_invoicePlatformId;
                    bool m_invoicePlatformIdHasBeenSet;

                    /**
                     * 订单号
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 接入环境。沙箱环境填 sandbox。
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                    /**
                     * 开票渠道。0：线上渠道，1：线下渠道。不填默认为线上渠道
                     */
                    int64_t m_invoiceChannel;
                    bool m_invoiceChannelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEREDINVOICEV2REQUEST_H_
