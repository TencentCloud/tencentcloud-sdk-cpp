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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CONTRACTORDERRESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CONTRACTORDERRESPONSE_H_

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
                * ContractOrder返回参数结构体
                */
                class ContractOrderResponse : public AbstractModel
                {
                public:
                    ContractOrderResponse();
                    ~ContractOrderResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取支付金额，单位： 分
                     * @return TotalAmt 支付金额，单位： 分
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
                     * 获取应用支付订单号
                     * @return OutTradeNo 应用支付订单号
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
                     * 获取支付参数透传给聚鑫SDK（原文透传给SDK即可，不需要解码）
                     * @return PayInfo 支付参数透传给聚鑫SDK（原文透传给SDK即可，不需要解码）
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
                     * 获取聚鑫的交易订单号
                     * @return TransactionId 聚鑫的交易订单号
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
                     * 获取外部签约协议号
                     * @return OutContractCode 外部签约协议号
                     * 
                     */
                    std::string GetOutContractCode() const;

                    /**
                     * 判断参数 OutContractCode 是否已赋值
                     * @return OutContractCode 是否已赋值
                     * 
                     */
                    bool OutContractCodeHasBeenSet() const;

                private:

                    /**
                     * 支付金额，单位： 分
                     */
                    int64_t m_totalAmt;
                    bool m_totalAmtHasBeenSet;

                    /**
                     * 应用支付订单号
                     */
                    std::string m_outTradeNo;
                    bool m_outTradeNoHasBeenSet;

                    /**
                     * 支付参数透传给聚鑫SDK（原文透传给SDK即可，不需要解码）
                     */
                    std::string m_payInfo;
                    bool m_payInfoHasBeenSet;

                    /**
                     * 聚鑫的交易订单号
                     */
                    std::string m_transactionId;
                    bool m_transactionIdHasBeenSet;

                    /**
                     * 外部签约协议号
                     */
                    std::string m_outContractCode;
                    bool m_outContractCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CONTRACTORDERRESPONSE_H_
