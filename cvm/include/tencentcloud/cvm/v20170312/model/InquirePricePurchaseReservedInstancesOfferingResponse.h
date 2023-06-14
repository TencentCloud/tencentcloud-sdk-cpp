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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_INQUIREPRICEPURCHASERESERVEDINSTANCESOFFERINGRESPONSE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_INQUIREPRICEPURCHASERESERVEDINSTANCESOFFERINGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/ReservedInstancePrice.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * InquirePricePurchaseReservedInstancesOffering返回参数结构体
                */
                class InquirePricePurchaseReservedInstancesOfferingResponse : public AbstractModel
                {
                public:
                    InquirePricePurchaseReservedInstancesOfferingResponse();
                    ~InquirePricePurchaseReservedInstancesOfferingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取该参数表示对应配置预留实例的价格。
                     * @return Price 该参数表示对应配置预留实例的价格。
                     * 
                     */
                    ReservedInstancePrice GetPrice() const;

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                private:

                    /**
                     * 该参数表示对应配置预留实例的价格。
                     */
                    ReservedInstancePrice m_price;
                    bool m_priceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_INQUIREPRICEPURCHASERESERVEDINSTANCESOFFERINGRESPONSE_H_
