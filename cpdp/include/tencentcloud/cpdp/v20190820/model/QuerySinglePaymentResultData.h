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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYSINGLEPAYMENTRESULTDATA_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYSINGLEPAYMENTRESULTDATA_H_

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
                * QuerySinglePaymentResult接口返回响应
                */
                class QuerySinglePaymentResultData : public AbstractModel
                {
                public:
                    QuerySinglePaymentResultData();
                    ~QuerySinglePaymentResultData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取平台交易流水号，唯一
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TradeSerialNo 平台交易流水号，唯一
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTradeSerialNo() const;

                    /**
                     * 设置平台交易流水号，唯一
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tradeSerialNo 平台交易流水号，唯一
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrderId 订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orderId 订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取交易状态。
0 处理中  
1 预占成功 
2 交易成功 
3 交易失败 
4 未知渠道异常 
5 预占额度失败
6 提交成功
7 提交失败
8 订单重复提交
99 未知系统异常
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TradeStatus 交易状态。
0 处理中  
1 预占成功 
2 交易成功 
3 交易失败 
4 未知渠道异常 
5 预占额度失败
6 提交成功
7 提交失败
8 订单重复提交
99 未知系统异常
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTradeStatus() const;

                    /**
                     * 设置交易状态。
0 处理中  
1 预占成功 
2 交易成功 
3 交易失败 
4 未知渠道异常 
5 预占额度失败
6 提交成功
7 提交失败
8 订单重复提交
99 未知系统异常
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tradeStatus 交易状态。
0 处理中  
1 预占成功 
2 交易成功 
3 交易失败 
4 未知渠道异常 
5 预占额度失败
6 提交成功
7 提交失败
8 订单重复提交
99 未知系统异常
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTradeStatus(const int64_t& _tradeStatus);

                    /**
                     * 判断参数 TradeStatus 是否已赋值
                     * @return TradeStatus 是否已赋值
                     * 
                     */
                    bool TradeStatusHasBeenSet() const;

                    /**
                     * 获取业务备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 业务备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置业务备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 业务备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

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

                    /**
                     * 获取交易状态描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TradeStatusDesc 交易状态描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTradeStatusDesc() const;

                    /**
                     * 设置交易状态描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tradeStatusDesc 交易状态描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTradeStatusDesc(const std::string& _tradeStatusDesc);

                    /**
                     * 判断参数 TradeStatusDesc 是否已赋值
                     * @return TradeStatusDesc 是否已赋值
                     * 
                     */
                    bool TradeStatusDescHasBeenSet() const;

                private:

                    /**
                     * 平台交易流水号，唯一
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tradeSerialNo;
                    bool m_tradeSerialNoHasBeenSet;

                    /**
                     * 订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 交易状态。
0 处理中  
1 预占成功 
2 交易成功 
3 交易失败 
4 未知渠道异常 
5 预占额度失败
6 提交成功
7 提交失败
8 订单重复提交
99 未知系统异常
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tradeStatus;
                    bool m_tradeStatusHasBeenSet;

                    /**
                     * 业务备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

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

                    /**
                     * 交易状态描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tradeStatusDesc;
                    bool m_tradeStatusDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYSINGLEPAYMENTRESULTDATA_H_
