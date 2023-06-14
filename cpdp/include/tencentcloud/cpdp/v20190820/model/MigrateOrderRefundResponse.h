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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_MIGRATEORDERREFUNDRESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_MIGRATEORDERREFUNDRESPONSE_H_

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
                * MigrateOrderRefund返回参数结构体
                */
                class MigrateOrderRefundResponse : public AbstractModel
                {
                public:
                    MigrateOrderRefundResponse();
                    ~MigrateOrderRefundResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取请求成功状态
                     * @return IsSuccess 请求成功状态
                     * 
                     */
                    bool GetIsSuccess() const;

                    /**
                     * 判断参数 IsSuccess 是否已赋值
                     * @return IsSuccess 是否已赋值
                     * 
                     */
                    bool IsSuccessHasBeenSet() const;

                    /**
                     * 获取退款流水号
                     * @return TradeSerialNo 退款流水号
                     * 
                     */
                    std::string GetTradeSerialNo() const;

                    /**
                     * 判断参数 TradeSerialNo 是否已赋值
                     * @return TradeSerialNo 是否已赋值
                     * 
                     */
                    bool TradeSerialNoHasBeenSet() const;

                    /**
                     * 获取交易备注
                     * @return TradeMsg 交易备注
                     * 
                     */
                    std::string GetTradeMsg() const;

                    /**
                     * 判断参数 TradeMsg 是否已赋值
                     * @return TradeMsg 是否已赋值
                     * 
                     */
                    bool TradeMsgHasBeenSet() const;

                private:

                    /**
                     * 请求成功状态
                     */
                    bool m_isSuccess;
                    bool m_isSuccessHasBeenSet;

                    /**
                     * 退款流水号
                     */
                    std::string m_tradeSerialNo;
                    bool m_tradeSerialNoHasBeenSet;

                    /**
                     * 交易备注
                     */
                    std::string m_tradeMsg;
                    bool m_tradeMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_MIGRATEORDERREFUNDRESPONSE_H_
