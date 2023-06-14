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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_INQUIRYPRICERENEWDBINSTANCERESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_INQUIRYPRICERENEWDBINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * InquiryPriceRenewDBInstance返回参数结构体
                */
                class InquiryPriceRenewDBInstanceResponse : public AbstractModel
                {
                public:
                    InquiryPriceRenewDBInstanceResponse();
                    ~InquiryPriceRenewDBInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取刊例价，单位为分。如24650表示246.5元
                     * @return OriginalPrice 刊例价，单位为分。如24650表示246.5元
                     * 
                     */
                    int64_t GetOriginalPrice() const;

                    /**
                     * 判断参数 OriginalPrice 是否已赋值
                     * @return OriginalPrice 是否已赋值
                     * 
                     */
                    bool OriginalPriceHasBeenSet() const;

                    /**
                     * 获取折后实际付款金额，单位为分。如24650表示246.5元
                     * @return Price 折后实际付款金额，单位为分。如24650表示246.5元
                     * 
                     */
                    int64_t GetPrice() const;

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取币种。例如，CNY：人民币。
                     * @return Currency 币种。例如，CNY：人民币。
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     * 
                     */
                    bool CurrencyHasBeenSet() const;

                private:

                    /**
                     * 刊例价，单位为分。如24650表示246.5元
                     */
                    int64_t m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * 折后实际付款金额，单位为分。如24650表示246.5元
                     */
                    int64_t m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 币种。例如，CNY：人民币。
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_INQUIRYPRICERENEWDBINSTANCERESPONSE_H_
