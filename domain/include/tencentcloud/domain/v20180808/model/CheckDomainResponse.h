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
                    std::string ToJsonString() const;


                    /**
                     * 获取所查询域名名称
                     * @return DomainName 所查询域名名称
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取是否能够注册
                     * @return Available 是否能够注册
                     * 
                     */
                    bool GetAvailable() const;

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     * 
                     */
                    bool AvailableHasBeenSet() const;

                    /**
                     * 获取不能注册原因
                     * @return Reason 不能注册原因
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取是否是溢价词
                     * @return Premium 是否是溢价词
                     * 
                     */
                    bool GetPremium() const;

                    /**
                     * 判断参数 Premium 是否已赋值
                     * @return Premium 是否已赋值
                     * 
                     */
                    bool PremiumHasBeenSet() const;

                    /**
                     * 获取域名价格
                     * @return Price 域名价格
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
                     * 获取是否是敏感词
                     * @return BlackWord 是否是敏感词
                     * 
                     */
                    bool GetBlackWord() const;

                    /**
                     * 判断参数 BlackWord 是否已赋值
                     * @return BlackWord 是否已赋值
                     * 
                     */
                    bool BlackWordHasBeenSet() const;

                    /**
                     * 获取溢价词描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Describe 溢价词描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 判断参数 Describe 是否已赋值
                     * @return Describe 是否已赋值
                     * 
                     */
                    bool DescribeHasBeenSet() const;

                    /**
                     * 获取溢价词的续费价格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FeeRenew 溢价词的续费价格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFeeRenew() const;

                    /**
                     * 判断参数 FeeRenew 是否已赋值
                     * @return FeeRenew 是否已赋值
                     * 
                     */
                    bool FeeRenewHasBeenSet() const;

                    /**
                     * 获取域名真实价格, 溢价词时价格跟年限有关，非溢价词时价格为1年的价格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealPrice 域名真实价格, 溢价词时价格跟年限有关，非溢价词时价格为1年的价格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRealPrice() const;

                    /**
                     * 判断参数 RealPrice 是否已赋值
                     * @return RealPrice 是否已赋值
                     * 
                     */
                    bool RealPriceHasBeenSet() const;

                    /**
                     * 获取溢价词的转入价格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FeeTransfer 溢价词的转入价格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFeeTransfer() const;

                    /**
                     * 判断参数 FeeTransfer 是否已赋值
                     * @return FeeTransfer 是否已赋值
                     * 
                     */
                    bool FeeTransferHasBeenSet() const;

                    /**
                     * 获取溢价词的赎回价格
                     * @return FeeRestore 溢价词的赎回价格
                     * 
                     */
                    uint64_t GetFeeRestore() const;

                    /**
                     * 判断参数 FeeRestore 是否已赋值
                     * @return FeeRestore 是否已赋值
                     * 
                     */
                    bool FeeRestoreHasBeenSet() const;

                    /**
                     * 获取检测年限
                     * @return Period 检测年限
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取是否支持北京备案  true 支持  false 不支持
                     * @return RecordSupport 是否支持北京备案  true 支持  false 不支持
                     * 
                     */
                    bool GetRecordSupport() const;

                    /**
                     * 判断参数 RecordSupport 是否已赋值
                     * @return RecordSupport 是否已赋值
                     * 
                     */
                    bool RecordSupportHasBeenSet() const;

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
                     * 域名价格
                     */
                    uint64_t m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 是否是敏感词
                     */
                    bool m_blackWord;
                    bool m_blackWordHasBeenSet;

                    /**
                     * 溢价词描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * 溢价词的续费价格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_feeRenew;
                    bool m_feeRenewHasBeenSet;

                    /**
                     * 域名真实价格, 溢价词时价格跟年限有关，非溢价词时价格为1年的价格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_realPrice;
                    bool m_realPriceHasBeenSet;

                    /**
                     * 溢价词的转入价格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_feeTransfer;
                    bool m_feeTransferHasBeenSet;

                    /**
                     * 溢价词的赎回价格
                     */
                    uint64_t m_feeRestore;
                    bool m_feeRestoreHasBeenSet;

                    /**
                     * 检测年限
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 是否支持北京备案  true 支持  false 不支持
                     */
                    bool m_recordSupport;
                    bool m_recordSupportHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_CHECKDOMAINRESPONSE_H_
