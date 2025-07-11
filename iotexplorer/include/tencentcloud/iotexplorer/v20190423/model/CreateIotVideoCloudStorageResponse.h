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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATEIOTVIDEOCLOUDSTORAGERESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATEIOTVIDEOCLOUDSTORAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * CreateIotVideoCloudStorage返回参数结构体
                */
                class CreateIotVideoCloudStorageResponse : public AbstractModel
                {
                public:
                    CreateIotVideoCloudStorageResponse();
                    ~CreateIotVideoCloudStorageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取订单金额，单位为分
                     * @return Price 订单金额，单位为分
                     * 
                     */
                    uint64_t GetPrice() const;

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取支付金额，单位为分
                     * @return Amount 支付金额，单位为分
                     * 
                     */
                    uint64_t GetAmount() const;

                    /**
                     * 判断参数 Amount 是否已赋值
                     * @return Amount 是否已赋值
                     * 
                     */
                    bool AmountHasBeenSet() const;

                private:

                    /**
                     * 订单金额，单位为分
                     */
                    uint64_t m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 支付金额，单位为分
                     */
                    uint64_t m_amount;
                    bool m_amountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATEIOTVIDEOCLOUDSTORAGERESPONSE_H_
