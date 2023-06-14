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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_UNIFIEDCLOUDORDERRESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_UNIFIEDCLOUDORDERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * UnifiedCloudOrder返回参数结构体
                */
                class UnifiedCloudOrderResponse : public AbstractModel
                {
                public:
                    UnifiedCloudOrderResponse();
                    ~UnifiedCloudOrderResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取米大师的交易订单号。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransactionId 米大师的交易订单号。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTransactionId() const;

                    /**
                     * 判断参数 TransactionId 是否已赋值
                     * @return TransactionId 是否已赋值
                     * 
                     */
                    bool TransactionIdHasBeenSet() const;

                    /**
                     * 获取开发者的支付订单号。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutTradeNo 开发者的支付订单号。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutTradeNo() const;

                    /**
                     * 判断参数 OutTradeNo 是否已赋值
                     * @return OutTradeNo 是否已赋值
                     * 
                     */
                    bool OutTradeNoHasBeenSet() const;

                    /**
                     * 获取SDK的支付参数。
支付参数透传给米大师SDK（原文透传给SDK即可，不需要解码）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayInfo SDK的支付参数。
支付参数透传给米大师SDK（原文透传给SDK即可，不需要解码）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPayInfo() const;

                    /**
                     * 判断参数 PayInfo 是否已赋值
                     * @return PayInfo 是否已赋值
                     * 
                     */
                    bool PayInfoHasBeenSet() const;

                    /**
                     * 获取支付金额，单位：分。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalAmt 支付金额，单位：分。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalAmt() const;

                    /**
                     * 判断参数 TotalAmt 是否已赋值
                     * @return TotalAmt 是否已赋值
                     * 
                     */
                    bool TotalAmtHasBeenSet() const;

                    /**
                     * 获取渠道信息，用于拉起渠道支付。j
son字符串，注意此字段仅会在传入正确的PayScene入参时才会有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelInfo 渠道信息，用于拉起渠道支付。j
son字符串，注意此字段仅会在传入正确的PayScene入参时才会有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelInfo() const;

                    /**
                     * 判断参数 ChannelInfo 是否已赋值
                     * @return ChannelInfo 是否已赋值
                     * 
                     */
                    bool ChannelInfoHasBeenSet() const;

                private:

                    /**
                     * 米大师的交易订单号。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_transactionId;
                    bool m_transactionIdHasBeenSet;

                    /**
                     * 开发者的支付订单号。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outTradeNo;
                    bool m_outTradeNoHasBeenSet;

                    /**
                     * SDK的支付参数。
支付参数透传给米大师SDK（原文透传给SDK即可，不需要解码）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payInfo;
                    bool m_payInfoHasBeenSet;

                    /**
                     * 支付金额，单位：分。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalAmt;
                    bool m_totalAmtHasBeenSet;

                    /**
                     * 渠道信息，用于拉起渠道支付。j
son字符串，注意此字段仅会在传入正确的PayScene入参时才会有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelInfo;
                    bool m_channelInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_UNIFIEDCLOUDORDERRESPONSE_H_
