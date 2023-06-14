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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_REFUNDORDERREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_REFUNDORDERREQUEST_H_

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
                * RefundOrder请求参数结构体
                */
                class RefundOrderRequest : public AbstractModel
                {
                public:
                    RefundOrderRequest();
                    ~RefundOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取进件成功后返给商户方的AppId
                     * @return MerchantAppId 进件成功后返给商户方的AppId
                     * 
                     */
                    std::string GetMerchantAppId() const;

                    /**
                     * 设置进件成功后返给商户方的AppId
                     * @param _merchantAppId 进件成功后返给商户方的AppId
                     * 
                     */
                    void SetMerchantAppId(const std::string& _merchantAppId);

                    /**
                     * 判断参数 MerchantAppId 是否已赋值
                     * @return MerchantAppId 是否已赋值
                     * 
                     */
                    bool MerchantAppIdHasBeenSet() const;

                    /**
                     * 获取平台流水号。消费订单发起成功后，返回的平台唯一订单号。
                     * @return OrderNo 平台流水号。消费订单发起成功后，返回的平台唯一订单号。
                     * 
                     */
                    std::string GetOrderNo() const;

                    /**
                     * 设置平台流水号。消费订单发起成功后，返回的平台唯一订单号。
                     * @param _orderNo 平台流水号。消费订单发起成功后，返回的平台唯一订单号。
                     * 
                     */
                    void SetOrderNo(const std::string& _orderNo);

                    /**
                     * 判断参数 OrderNo 是否已赋值
                     * @return OrderNo 是否已赋值
                     * 
                     */
                    bool OrderNoHasBeenSet() const;

                private:

                    /**
                     * 进件成功后返给商户方的AppId
                     */
                    std::string m_merchantAppId;
                    bool m_merchantAppIdHasBeenSet;

                    /**
                     * 平台流水号。消费订单发起成功后，返回的平台唯一订单号。
                     */
                    std::string m_orderNo;
                    bool m_orderNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_REFUNDORDERREQUEST_H_
