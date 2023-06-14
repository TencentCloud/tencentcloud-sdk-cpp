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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_WITHDRAWITEM_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_WITHDRAWITEM_H_

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
                * 清分提现明细信息
                */
                class WithdrawItem : public AbstractModel
                {
                public:
                    WithdrawItem();
                    ~WithdrawItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取STRING(2)，记账标志（01: 提现; 02: 清分 ）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BookingFlag STRING(2)，记账标志（01: 提现; 02: 清分 ）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBookingFlag() const;

                    /**
                     * 设置STRING(2)，记账标志（01: 提现; 02: 清分 ）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bookingFlag STRING(2)，记账标志（01: 提现; 02: 清分 ）
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
                     * 获取STRING(200)，记账说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BookingMsg STRING(200)，记账说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBookingMsg() const;

                    /**
                     * 设置STRING(200)，记账说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bookingMsg STRING(200)，记账说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBookingMsg(const std::string& _bookingMsg);

                    /**
                     * 判断参数 BookingMsg 是否已赋值
                     * @return BookingMsg 是否已赋值
                     * 
                     */
                    bool BookingMsgHasBeenSet() const;

                    /**
                     * 获取STRING(32)，交易网会员代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TranNetMemberCode STRING(32)，交易网会员代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTranNetMemberCode() const;

                    /**
                     * 设置STRING(32)，交易网会员代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tranNetMemberCode STRING(32)，交易网会员代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTranNetMemberCode(const std::string& _tranNetMemberCode);

                    /**
                     * 判断参数 TranNetMemberCode 是否已赋值
                     * @return TranNetMemberCode 是否已赋值
                     * 
                     */
                    bool TranNetMemberCodeHasBeenSet() const;

                    /**
                     * 获取STRING(50)，见证子帐户的帐号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubAcctNo STRING(50)，见证子帐户的帐号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubAcctNo() const;

                    /**
                     * 设置STRING(50)，见证子帐户的帐号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subAcctNo STRING(50)，见证子帐户的帐号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubAcctNo(const std::string& _subAcctNo);

                    /**
                     * 判断参数 SubAcctNo 是否已赋值
                     * @return SubAcctNo 是否已赋值
                     * 
                     */
                    bool SubAcctNoHasBeenSet() const;

                    /**
                     * 获取STRING(150)，见证子账户的名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubAcctName STRING(150)，见证子账户的名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubAcctName() const;

                    /**
                     * 设置STRING(150)，见证子账户的名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subAcctName STRING(150)，见证子账户的名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubAcctName(const std::string& _subAcctName);

                    /**
                     * 判断参数 SubAcctName 是否已赋值
                     * @return SubAcctName 是否已赋值
                     * 
                     */
                    bool SubAcctNameHasBeenSet() const;

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
                     * 获取STRING(20)，手续费
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Commission STRING(20)，手续费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCommission() const;

                    /**
                     * 设置STRING(20)，手续费
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _commission STRING(20)，手续费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCommission(const std::string& _commission);

                    /**
                     * 判断参数 Commission 是否已赋值
                     * @return Commission 是否已赋值
                     * 
                     */
                    bool CommissionHasBeenSet() const;

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
                     * 获取STRING(300)，备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark STRING(300)，备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置STRING(300)，备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark STRING(300)，备注
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
                     * STRING(2)，记账标志（01: 提现; 02: 清分 ）
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
                     * STRING(200)，记账说明
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bookingMsg;
                    bool m_bookingMsgHasBeenSet;

                    /**
                     * STRING(32)，交易网会员代码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tranNetMemberCode;
                    bool m_tranNetMemberCodeHasBeenSet;

                    /**
                     * STRING(50)，见证子帐户的帐号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subAcctNo;
                    bool m_subAcctNoHasBeenSet;

                    /**
                     * STRING(150)，见证子账户的名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subAcctName;
                    bool m_subAcctNameHasBeenSet;

                    /**
                     * STRING(20)，交易金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tranAmt;
                    bool m_tranAmtHasBeenSet;

                    /**
                     * STRING(20)，手续费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_commission;
                    bool m_commissionHasBeenSet;

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
                     * STRING(300)，备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_WITHDRAWITEM_H_
