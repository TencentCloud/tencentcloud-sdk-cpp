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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_EXECUTEMEMBERTRANSACTIONRESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_EXECUTEMEMBERTRANSACTIONRESPONSE_H_

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
                * ExecuteMemberTransaction返回参数结构体
                */
                class ExecuteMemberTransactionResponse : public AbstractModel
                {
                public:
                    ExecuteMemberTransactionResponse();
                    ~ExecuteMemberTransactionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取请求类型
                     * @return RequestType 请求类型
                     * 
                     */
                    std::string GetRequestType() const;

                    /**
                     * 判断参数 RequestType 是否已赋值
                     * @return RequestType 是否已赋值
                     * 
                     */
                    bool RequestTypeHasBeenSet() const;

                    /**
                     * 获取银行流水号
                     * @return FrontSequenceNumber 银行流水号
                     * 
                     */
                    std::string GetFrontSequenceNumber() const;

                    /**
                     * 判断参数 FrontSequenceNumber 是否已赋值
                     * @return FrontSequenceNumber 是否已赋值
                     * 
                     */
                    bool FrontSequenceNumberHasBeenSet() const;

                    /**
                     * 获取保留域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReservedMessage 保留域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReservedMessage() const;

                    /**
                     * 判断参数 ReservedMessage 是否已赋值
                     * @return ReservedMessage 是否已赋值
                     * 
                     */
                    bool ReservedMessageHasBeenSet() const;

                private:

                    /**
                     * 请求类型
                     */
                    std::string m_requestType;
                    bool m_requestTypeHasBeenSet;

                    /**
                     * 银行流水号
                     */
                    std::string m_frontSequenceNumber;
                    bool m_frontSequenceNumberHasBeenSet;

                    /**
                     * 保留域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reservedMessage;
                    bool m_reservedMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_EXECUTEMEMBERTRANSACTIONRESPONSE_H_
