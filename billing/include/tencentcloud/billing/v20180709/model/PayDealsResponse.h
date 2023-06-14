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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_PAYDEALSRESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_PAYDEALSRESPONSE_H_

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
                * PayDeals返回参数结构体
                */
                class PayDealsResponse : public AbstractModel
                {
                public:
                    PayDealsResponse();
                    ~PayDealsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取此次操作支付成功的子订单号数组
                     * @return OrderIds 此次操作支付成功的子订单号数组
                     * 
                     */
                    std::vector<std::string> GetOrderIds() const;

                    /**
                     * 判断参数 OrderIds 是否已赋值
                     * @return OrderIds 是否已赋值
                     * 
                     */
                    bool OrderIdsHasBeenSet() const;

                    /**
                     * 获取此次操作支付成功的资源Id数组
                     * @return ResourceIds 此次操作支付成功的资源Id数组
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取此次操作支付成功的大订单号数组
                     * @return BigDealIds 此次操作支付成功的大订单号数组
                     * 
                     */
                    std::vector<std::string> GetBigDealIds() const;

                    /**
                     * 判断参数 BigDealIds 是否已赋值
                     * @return BigDealIds 是否已赋值
                     * 
                     */
                    bool BigDealIdsHasBeenSet() const;

                private:

                    /**
                     * 此次操作支付成功的子订单号数组
                     */
                    std::vector<std::string> m_orderIds;
                    bool m_orderIdsHasBeenSet;

                    /**
                     * 此次操作支付成功的资源Id数组
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * 此次操作支付成功的大订单号数组
                     */
                    std::vector<std::string> m_bigDealIds;
                    bool m_bigDealIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_PAYDEALSRESPONSE_H_
