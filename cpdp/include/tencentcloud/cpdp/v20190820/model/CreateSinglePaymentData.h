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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATESINGLEPAYMENTDATA_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATESINGLEPAYMENTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * CreateSinglePayment接口返回响应
                */
                class CreateSinglePaymentData : public AbstractModel
                {
                public:
                    CreateSinglePaymentData();
                    ~CreateSinglePaymentData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取平台交易流水号，唯一
                     * @return TradeSerialNo 平台交易流水号，唯一
                     * 
                     */
                    std::string GetTradeSerialNo() const;

                    /**
                     * 设置平台交易流水号，唯一
                     * @param _tradeSerialNo 平台交易流水号，唯一
                     * 
                     */
                    void SetTradeSerialNo(const std::string& _tradeSerialNo);

                    /**
                     * 判断参数 TradeSerialNo 是否已赋值
                     * @return TradeSerialNo 是否已赋值
                     * 
                     */
                    bool TradeSerialNoHasBeenSet() const;

                    /**
                     * 获取代理商ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentId 代理商ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置代理商ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentId 代理商ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取代理商名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentName 代理商名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAgentName() const;

                    /**
                     * 设置代理商名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentName 代理商名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAgentName(const std::string& _agentName);

                    /**
                     * 判断参数 AgentName 是否已赋值
                     * @return AgentName 是否已赋值
                     * 
                     */
                    bool AgentNameHasBeenSet() const;

                private:

                    /**
                     * 平台交易流水号，唯一
                     */
                    std::string m_tradeSerialNo;
                    bool m_tradeSerialNoHasBeenSet;

                    /**
                     * 代理商ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * 代理商名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_agentName;
                    bool m_agentNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATESINGLEPAYMENTDATA_H_
