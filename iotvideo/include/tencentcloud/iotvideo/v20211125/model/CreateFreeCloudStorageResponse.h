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

#ifndef TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_CREATEFREECLOUDSTORAGERESPONSE_H_
#define TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_CREATEFREECLOUDSTORAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20211125
        {
            namespace Model
            {
                /**
                * CreateFreeCloudStorage返回参数结构体
                */
                class CreateFreeCloudStorageResponse : public AbstractModel
                {
                public:
                    CreateFreeCloudStorageResponse();
                    ~CreateFreeCloudStorageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取订单金额，单位为分
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Price 订单金额，单位为分
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Amount 支付金额，单位为分
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 支付金额，单位为分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_amount;
                    bool m_amountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_CREATEFREECLOUDSTORAGERESPONSE_H_
