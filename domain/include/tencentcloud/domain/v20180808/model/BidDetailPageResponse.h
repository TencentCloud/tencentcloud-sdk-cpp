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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_BIDDETAILPAGERESPONSE_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_BIDDETAILPAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/domain/v20180808/model/PriceScopeConf.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * BidDetailPage返回参数结构体
                */
                class BidDetailPageResponse : public AbstractModel
                {
                public:
                    BidDetailPageResponse();
                    ~BidDetailPageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取当前域名价格 单位元
                     * @return CurrentPrice 当前域名价格 单位元
                     * 
                     */
                    double GetCurrentPrice() const;

                    /**
                     * 判断参数 CurrentPrice 是否已赋值
                     * @return CurrentPrice 是否已赋值
                     * 
                     */
                    bool CurrentPriceHasBeenSet() const;

                    /**
                     * 获取用户上次出价 单位元
                     * @return BidPrice 用户上次出价 单位元
                     * 
                     */
                    double GetBidPrice() const;

                    /**
                     * 判断参数 BidPrice 是否已赋值
                     * @return BidPrice 是否已赋值
                     * 
                     */
                    bool BidPriceHasBeenSet() const;

                    /**
                     * 获取当前加价幅度 单位元
                     * @return CurrentPriceScope 当前加价幅度 单位元
                     * 
                     */
                    double GetCurrentPriceScope() const;

                    /**
                     * 判断参数 CurrentPriceScope 是否已赋值
                     * @return CurrentPriceScope 是否已赋值
                     * 
                     */
                    bool CurrentPriceScopeHasBeenSet() const;

                    /**
                     * 获取加价幅度区间配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PriceScope 加价幅度区间配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PriceScopeConf> GetPriceScope() const;

                    /**
                     * 判断参数 PriceScope 是否已赋值
                     * @return PriceScope 是否已赋值
                     * 
                     */
                    bool PriceScopeHasBeenSet() const;

                    /**
                     * 获取用户当前已经支付了的保证金 单位元
                     * @return DepositPrice 用户当前已经支付了的保证金 单位元
                     * 
                     */
                    double GetDepositPrice() const;

                    /**
                     * 判断参数 DepositPrice 是否已赋值
                     * @return DepositPrice 是否已赋值
                     * 
                     */
                    bool DepositPriceHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 当前域名价格 单位元
                     */
                    double m_currentPrice;
                    bool m_currentPriceHasBeenSet;

                    /**
                     * 用户上次出价 单位元
                     */
                    double m_bidPrice;
                    bool m_bidPriceHasBeenSet;

                    /**
                     * 当前加价幅度 单位元
                     */
                    double m_currentPriceScope;
                    bool m_currentPriceScopeHasBeenSet;

                    /**
                     * 加价幅度区间配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PriceScopeConf> m_priceScope;
                    bool m_priceScopeHasBeenSet;

                    /**
                     * 用户当前已经支付了的保证金 单位元
                     */
                    double m_depositPrice;
                    bool m_depositPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_BIDDETAILPAGERESPONSE_H_
