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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_PRICEINFO_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_PRICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 域名价格信息
                */
                class PriceInfo : public AbstractModel
                {
                public:
                    PriceInfo();
                    ~PriceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名后缀，例如.com
                     * @return Tld 域名后缀，例如.com
                     * 
                     */
                    std::string GetTld() const;

                    /**
                     * 设置域名后缀，例如.com
                     * @param _tld 域名后缀，例如.com
                     * 
                     */
                    void SetTld(const std::string& _tld);

                    /**
                     * 判断参数 Tld 是否已赋值
                     * @return Tld 是否已赋值
                     * 
                     */
                    bool TldHasBeenSet() const;

                    /**
                     * 获取购买年限，范围[1-10]
                     * @return Year 购买年限，范围[1-10]
                     * 
                     */
                    uint64_t GetYear() const;

                    /**
                     * 设置购买年限，范围[1-10]
                     * @param _year 购买年限，范围[1-10]
                     * 
                     */
                    void SetYear(const uint64_t& _year);

                    /**
                     * 判断参数 Year 是否已赋值
                     * @return Year 是否已赋值
                     * 
                     */
                    bool YearHasBeenSet() const;

                    /**
                     * 获取域名原价
                     * @return Price 域名原价
                     * 
                     */
                    uint64_t GetPrice() const;

                    /**
                     * 设置域名原价
                     * @param _price 域名原价
                     * 
                     */
                    void SetPrice(const uint64_t& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取域名现价
                     * @return RealPrice 域名现价
                     * 
                     */
                    uint64_t GetRealPrice() const;

                    /**
                     * 设置域名现价
                     * @param _realPrice 域名现价
                     * 
                     */
                    void SetRealPrice(const uint64_t& _realPrice);

                    /**
                     * 判断参数 RealPrice 是否已赋值
                     * @return RealPrice 是否已赋值
                     * 
                     */
                    bool RealPriceHasBeenSet() const;

                    /**
                     * 获取商品的购买类型，新购，续费，赎回，转入，续费并转入
                     * @return Operation 商品的购买类型，新购，续费，赎回，转入，续费并转入
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置商品的购买类型，新购，续费，赎回，转入，续费并转入
                     * @param _operation 商品的购买类型，新购，续费，赎回，转入，续费并转入
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                private:

                    /**
                     * 域名后缀，例如.com
                     */
                    std::string m_tld;
                    bool m_tldHasBeenSet;

                    /**
                     * 购买年限，范围[1-10]
                     */
                    uint64_t m_year;
                    bool m_yearHasBeenSet;

                    /**
                     * 域名原价
                     */
                    uint64_t m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 域名现价
                     */
                    uint64_t m_realPrice;
                    bool m_realPriceHasBeenSet;

                    /**
                     * 商品的购买类型，新购，续费，赎回，转入，续费并转入
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_PRICEINFO_H_
