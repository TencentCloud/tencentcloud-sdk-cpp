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

#ifndef TENCENTCLOUD_IOTTID_V20190411_MODEL_DOWNLOADTIDSREQUEST_H_
#define TENCENTCLOUD_IOTTID_V20190411_MODEL_DOWNLOADTIDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iottid
    {
        namespace V20190411
        {
            namespace Model
            {
                /**
                * DownloadTids请求参数结构体
                */
                class DownloadTidsRequest : public AbstractModel
                {
                public:
                    DownloadTidsRequest();
                    ~DownloadTidsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取订单编号
                     * @return OrderId 订单编号
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单编号
                     * @param _orderId 订单编号
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
                     * 获取下载数量：1~10
                     * @return Quantity 下载数量：1~10
                     * 
                     */
                    uint64_t GetQuantity() const;

                    /**
                     * 设置下载数量：1~10
                     * @param _quantity 下载数量：1~10
                     * 
                     */
                    void SetQuantity(const uint64_t& _quantity);

                    /**
                     * 判断参数 Quantity 是否已赋值
                     * @return Quantity 是否已赋值
                     * 
                     */
                    bool QuantityHasBeenSet() const;

                private:

                    /**
                     * 订单编号
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 下载数量：1~10
                     */
                    uint64_t m_quantity;
                    bool m_quantityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTTID_V20190411_MODEL_DOWNLOADTIDSREQUEST_H_
