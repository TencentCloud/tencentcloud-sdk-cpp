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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYCUSTACCTIDBALANCERESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYCUSTACCTIDBALANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/Acct.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryCustAcctIdBalance返回参数结构体
                */
                class QueryCustAcctIdBalanceResponse : public AbstractModel
                {
                public:
                    QueryCustAcctIdBalanceResponse();
                    ~QueryCustAcctIdBalanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取String(20)，返回码
                     * @return TxnReturnCode String(20)，返回码
                     * 
                     */
                    std::string GetTxnReturnCode() const;

                    /**
                     * 判断参数 TxnReturnCode 是否已赋值
                     * @return TxnReturnCode 是否已赋值
                     * 
                     */
                    bool TxnReturnCodeHasBeenSet() const;

                    /**
                     * 获取String(100)，返回信息
                     * @return TxnReturnMsg String(100)，返回信息
                     * 
                     */
                    std::string GetTxnReturnMsg() const;

                    /**
                     * 判断参数 TxnReturnMsg 是否已赋值
                     * @return TxnReturnMsg 是否已赋值
                     * 
                     */
                    bool TxnReturnMsgHasBeenSet() const;

                    /**
                     * 获取String(22)，交易流水号
                     * @return CnsmrSeqNo String(22)，交易流水号
                     * 
                     */
                    std::string GetCnsmrSeqNo() const;

                    /**
                     * 判断参数 CnsmrSeqNo 是否已赋值
                     * @return CnsmrSeqNo 是否已赋值
                     * 
                     */
                    bool CnsmrSeqNoHasBeenSet() const;

                    /**
                     * 获取STRING(10)，本次交易返回查询结果记录数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultNum STRING(10)，本次交易返回查询结果记录数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResultNum() const;

                    /**
                     * 判断参数 ResultNum 是否已赋值
                     * @return ResultNum 是否已赋值
                     * 
                     */
                    bool ResultNumHasBeenSet() const;

                    /**
                     * 获取STRING(30)，起始记录号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartRecordNo STRING(30)，起始记录号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartRecordNo() const;

                    /**
                     * 判断参数 StartRecordNo 是否已赋值
                     * @return StartRecordNo 是否已赋值
                     * 
                     */
                    bool StartRecordNoHasBeenSet() const;

                    /**
                     * 获取STRING(2)，结束标志（0: 否; 1: 是）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndFlag STRING(2)，结束标志（0: 否; 1: 是）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndFlag() const;

                    /**
                     * 判断参数 EndFlag 是否已赋值
                     * @return EndFlag 是否已赋值
                     * 
                     */
                    bool EndFlagHasBeenSet() const;

                    /**
                     * 获取STRING(10)，符合业务查询条件的记录总数（重复次数，一次最多返回20条记录）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalNum STRING(10)，符合业务查询条件的记录总数（重复次数，一次最多返回20条记录）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTotalNum() const;

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     * 
                     */
                    bool TotalNumHasBeenSet() const;

                    /**
                     * 获取账户信息数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AcctArray 账户信息数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Acct> GetAcctArray() const;

                    /**
                     * 判断参数 AcctArray 是否已赋值
                     * @return AcctArray 是否已赋值
                     * 
                     */
                    bool AcctArrayHasBeenSet() const;

                    /**
                     * 获取STRING(1027)，保留域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReservedMsg STRING(1027)，保留域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReservedMsg() const;

                    /**
                     * 判断参数 ReservedMsg 是否已赋值
                     * @return ReservedMsg 是否已赋值
                     * 
                     */
                    bool ReservedMsgHasBeenSet() const;

                private:

                    /**
                     * String(20)，返回码
                     */
                    std::string m_txnReturnCode;
                    bool m_txnReturnCodeHasBeenSet;

                    /**
                     * String(100)，返回信息
                     */
                    std::string m_txnReturnMsg;
                    bool m_txnReturnMsgHasBeenSet;

                    /**
                     * String(22)，交易流水号
                     */
                    std::string m_cnsmrSeqNo;
                    bool m_cnsmrSeqNoHasBeenSet;

                    /**
                     * STRING(10)，本次交易返回查询结果记录数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resultNum;
                    bool m_resultNumHasBeenSet;

                    /**
                     * STRING(30)，起始记录号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startRecordNo;
                    bool m_startRecordNoHasBeenSet;

                    /**
                     * STRING(2)，结束标志（0: 否; 1: 是）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endFlag;
                    bool m_endFlagHasBeenSet;

                    /**
                     * STRING(10)，符合业务查询条件的记录总数（重复次数，一次最多返回20条记录）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_totalNum;
                    bool m_totalNumHasBeenSet;

                    /**
                     * 账户信息数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Acct> m_acctArray;
                    bool m_acctArrayHasBeenSet;

                    /**
                     * STRING(1027)，保留域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reservedMsg;
                    bool m_reservedMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYCUSTACCTIDBALANCERESPONSE_H_
