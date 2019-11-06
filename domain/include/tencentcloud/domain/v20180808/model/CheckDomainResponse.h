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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_CHECKDOMAINRESPONSE_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_CHECKDOMAINRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * CheckDomain返回参数结构体
                */
                class CheckDomainResponse : public AbstractModel
                {
                public:
                    CheckDomainResponse();
                    ~CheckDomainResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取所查询域名名称
                     * @return DomainName 所查询域名名称
                     */
                    std::string GetDomainName() const;

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取是否能够注册
                     * @return Available 是否能够注册
                     */
                    bool GetAvailable() const;

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     */
                    bool AvailableHasBeenSet() const;

                    /**
                     * 获取不能注册原因
                     * @return Reason 不能注册原因
                     */
                    std::string GetReason() const;

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取是否是溢价词
                     * @return Premium 是否是溢价词
                     */
                    bool GetPremium() const;

                    /**
                     * 判断参数 Premium 是否已赋值
                     * @return Premium 是否已赋值
                     */
                    bool PremiumHasBeenSet() const;

                    /**
                     * 获取价格
                     * @return Price 价格
                     */
                    uint64_t GetPrice() const;

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取是否是敏感词
                     * @return BlackWord 是否是敏感词
                     */
                    bool GetBlackWord() const;

                    /**
                     * 判断参数 BlackWord 是否已赋值
                     * @return BlackWord 是否已赋值
                     */
                    bool BlackWordHasBeenSet() const;

                private:

                    /**
                     * 所查询域名名称
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 是否能够注册
                     */
                    bool m_available;
                    bool m_availableHasBeenSet;

                    /**
                     * 不能注册原因
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 是否是溢价词
                     */
                    bool m_premium;
                    bool m_premiumHasBeenSet;

                    /**
                     * 价格
                     */
                    uint64_t m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 是否是敏感词
                     */
                    bool m_blackWord;
                    bool m_blackWordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_CHECKDOMAINRESPONSE_H_
