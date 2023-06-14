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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_TRANSACTIONITEM_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_TRANSACTIONITEM_H_

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
                * 交易明细信息
                */
                class TransactionItem : public AbstractModel
                {
                public:
                    TransactionItem();
                    ~TransactionItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取STRING(2)，记账标志（1: 转出; 2: 转入）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BookingFlag STRING(2)，记账标志（1: 转出; 2: 转入）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBookingFlag() const;

                    /**
                     * 设置STRING(2)，记账标志（1: 转出; 2: 转入）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bookingFlag STRING(2)，记账标志（1: 转出; 2: 转入）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBookingFlag(const std::string& _bookingFlag);

                    /**
                     * 判断参数 BookingFlag 是否已赋值
                     * @return BookingFlag 是否已赋值
                     * 
                     */
                    bool BookingFlagHasBeenSet() const;

                    /**
                     * 获取STRING(32)，交易状态（0: 成功）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TranStatus STRING(32)，交易状态（0: 成功）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTranStatus() const;

                    /**
                     * 设置STRING(32)，交易状态（0: 成功）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tranStatus STRING(32)，交易状态（0: 成功）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTranStatus(const std::string& _tranStatus);

                    /**
                     * 判断参数 TranStatus 是否已赋值
                     * @return TranStatus 是否已赋值
                     * 
                     */
                    bool TranStatusHasBeenSet() const;

                    /**
                     * 获取STRING(20)，交易金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TranAmt STRING(20)，交易金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTranAmt() const;

                    /**
                     * 设置STRING(20)，交易金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tranAmt STRING(20)，交易金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTranAmt(const std::string& _tranAmt);

                    /**
                     * 判断参数 TranAmt 是否已赋值
                     * @return TranAmt 是否已赋值
                     * 
                     */
                    bool TranAmtHasBeenSet() const;

                    /**
                     * 获取STRING(8)，交易日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TranDate STRING(8)，交易日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTranDate() const;

                    /**
                     * 设置STRING(8)，交易日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tranDate STRING(8)，交易日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTranDate(const std::string& _tranDate);

                    /**
                     * 判断参数 TranDate 是否已赋值
                     * @return TranDate 是否已赋值
                     * 
                     */
                    bool TranDateHasBeenSet() const;

                    /**
                     * 获取STRING(20)，交易时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TranTime STRING(20)，交易时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTranTime() const;

                    /**
                     * 设置STRING(20)，交易时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tranTime STRING(20)，交易时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTranTime(const std::string& _tranTime);

                    /**
                     * 判断参数 TranTime 是否已赋值
                     * @return TranTime 是否已赋值
                     * 
                     */
                    bool TranTimeHasBeenSet() const;

                    /**
                     * 获取STRING(52)，见证系统流水号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrontSeqNo STRING(52)，见证系统流水号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFrontSeqNo() const;

                    /**
                     * 设置STRING(52)，见证系统流水号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frontSeqNo STRING(52)，见证系统流水号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFrontSeqNo(const std::string& _frontSeqNo);

                    /**
                     * 判断参数 FrontSeqNo 是否已赋值
                     * @return FrontSeqNo 是否已赋值
                     * 
                     */
                    bool FrontSeqNoHasBeenSet() const;

                    /**
                     * 获取STRING(20)，记账类型（详情见“常见问题”）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BookingType STRING(20)，记账类型（详情见“常见问题”）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBookingType() const;

                    /**
                     * 设置STRING(20)，记账类型（详情见“常见问题”）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bookingType STRING(20)，记账类型（详情见“常见问题”）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBookingType(const std::string& _bookingType);

                    /**
                     * 判断参数 BookingType 是否已赋值
                     * @return BookingType 是否已赋值
                     * 
                     */
                    bool BookingTypeHasBeenSet() const;

                    /**
                     * 获取STRING(50)，转入见证子账户的帐号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InSubAcctNo STRING(50)，转入见证子账户的帐号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInSubAcctNo() const;

                    /**
                     * 设置STRING(50)，转入见证子账户的帐号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inSubAcctNo STRING(50)，转入见证子账户的帐号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInSubAcctNo(const std::string& _inSubAcctNo);

                    /**
                     * 判断参数 InSubAcctNo 是否已赋值
                     * @return InSubAcctNo 是否已赋值
                     * 
                     */
                    bool InSubAcctNoHasBeenSet() const;

                    /**
                     * 获取STRING(50)，转出见证子账户的帐号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutSubAcctNo STRING(50)，转出见证子账户的帐号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutSubAcctNo() const;

                    /**
                     * 设置STRING(50)，转出见证子账户的帐号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outSubAcctNo STRING(50)，转出见证子账户的帐号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutSubAcctNo(const std::string& _outSubAcctNo);

                    /**
                     * 判断参数 OutSubAcctNo 是否已赋值
                     * @return OutSubAcctNo 是否已赋值
                     * 
                     */
                    bool OutSubAcctNoHasBeenSet() const;

                    /**
                     * 获取STRING(300)，备注（返回交易订单号）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark STRING(300)，备注（返回交易订单号）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置STRING(300)，备注（返回交易订单号）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark STRING(300)，备注（返回交易订单号）
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

                private:

                    /**
                     * STRING(2)，记账标志（1: 转出; 2: 转入）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bookingFlag;
                    bool m_bookingFlagHasBeenSet;

                    /**
                     * STRING(32)，交易状态（0: 成功）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tranStatus;
                    bool m_tranStatusHasBeenSet;

                    /**
                     * STRING(20)，交易金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tranAmt;
                    bool m_tranAmtHasBeenSet;

                    /**
                     * STRING(8)，交易日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tranDate;
                    bool m_tranDateHasBeenSet;

                    /**
                     * STRING(20)，交易时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tranTime;
                    bool m_tranTimeHasBeenSet;

                    /**
                     * STRING(52)，见证系统流水号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_frontSeqNo;
                    bool m_frontSeqNoHasBeenSet;

                    /**
                     * STRING(20)，记账类型（详情见“常见问题”）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bookingType;
                    bool m_bookingTypeHasBeenSet;

                    /**
                     * STRING(50)，转入见证子账户的帐号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inSubAcctNo;
                    bool m_inSubAcctNoHasBeenSet;

                    /**
                     * STRING(50)，转出见证子账户的帐号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outSubAcctNo;
                    bool m_outSubAcctNoHasBeenSet;

                    /**
                     * STRING(300)，备注（返回交易订单号）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_TRANSACTIONITEM_H_
