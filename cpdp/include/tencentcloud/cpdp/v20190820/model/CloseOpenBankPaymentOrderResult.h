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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CLOSEOPENBANKPAYMENTORDERRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CLOSEOPENBANKPAYMENTORDERRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 云企付-关单响应
                */
                class CloseOpenBankPaymentOrderResult : public AbstractModel
                {
                public:
                    CloseOpenBankPaymentOrderResult();
                    ~CloseOpenBankPaymentOrderResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取外部商户订单号
                     * @return OutOrderId 外部商户订单号
                     * 
                     */
                    std::string GetOutOrderId() const;

                    /**
                     * 设置外部商户订单号
                     * @param _outOrderId 外部商户订单号
                     * 
                     */
                    void SetOutOrderId(const std::string& _outOrderId);

                    /**
                     * 判断参数 OutOrderId 是否已赋值
                     * @return OutOrderId 是否已赋值
                     * 
                     */
                    bool OutOrderIdHasBeenSet() const;

                    /**
                     * 获取云企付平台订单号
                     * @return ChannelOrderId 云企付平台订单号
                     * 
                     */
                    std::string GetChannelOrderId() const;

                    /**
                     * 设置云企付平台订单号
                     * @param _channelOrderId 云企付平台订单号
                     * 
                     */
                    void SetChannelOrderId(const std::string& _channelOrderId);

                    /**
                     * 判断参数 ChannelOrderId 是否已赋值
                     * @return ChannelOrderId 是否已赋值
                     * 
                     */
                    bool ChannelOrderIdHasBeenSet() const;

                    /**
                     * 获取订单状态。关单成功CLOSED
                     * @return OrderStatus 订单状态。关单成功CLOSED
                     * 
                     */
                    std::string GetOrderStatus() const;

                    /**
                     * 设置订单状态。关单成功CLOSED
                     * @param _orderStatus 订单状态。关单成功CLOSED
                     * 
                     */
                    void SetOrderStatus(const std::string& _orderStatus);

                    /**
                     * 判断参数 OrderStatus 是否已赋值
                     * @return OrderStatus 是否已赋值
                     * 
                     */
                    bool OrderStatusHasBeenSet() const;

                private:

                    /**
                     * 外部商户订单号
                     */
                    std::string m_outOrderId;
                    bool m_outOrderIdHasBeenSet;

                    /**
                     * 云企付平台订单号
                     */
                    std::string m_channelOrderId;
                    bool m_channelOrderIdHasBeenSet;

                    /**
                     * 订单状态。关单成功CLOSED
                     */
                    std::string m_orderStatus;
                    bool m_orderStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CLOSEOPENBANKPAYMENTORDERRESULT_H_
