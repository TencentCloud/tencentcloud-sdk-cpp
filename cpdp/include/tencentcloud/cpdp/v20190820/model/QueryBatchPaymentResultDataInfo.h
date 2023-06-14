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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYBATCHPAYMENTRESULTDATAINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYBATCHPAYMENTRESULTDATAINFO_H_

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
                * QueryBatchPaymentResultData复杂类型中的TransferInfoList
                */
                class QueryBatchPaymentResultDataInfo : public AbstractModel
                {
                public:
                    QueryBatchPaymentResultDataInfo();
                    ~QueryBatchPaymentResultDataInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * @return Status 交易状态。
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
                    int64_t GetStatus() const;

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
                     * @param _status 交易状态。
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
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusDesc 状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusDesc 状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取转账金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransferAmount 转账金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTransferAmount() const;

                    /**
                     * 设置转账金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transferAmount 转账金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTransferAmount(const int64_t& _transferAmount);

                    /**
                     * 判断参数 TransferAmount 是否已赋值
                     * @return TransferAmount 是否已赋值
                     * 
                     */
                    bool TransferAmountHasBeenSet() const;

                private:

                    /**
                     * 订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

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
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 转账金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_transferAmount;
                    bool m_transferAmountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYBATCHPAYMENTRESULTDATAINFO_H_
