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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKSETTLEORDERRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKSETTLEORDERRESULT_H_

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
                * 云企付结算查询结果
                */
                class QueryOpenBankSettleOrderResult : public AbstractModel
                {
                public:
                    QueryOpenBankSettleOrderResult();
                    ~QueryOpenBankSettleOrderResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取外部结算流水号
                     * @return OutSettleId 外部结算流水号
                     * 
                     */
                    std::string GetOutSettleId() const;

                    /**
                     * 设置外部结算流水号
                     * @param _outSettleId 外部结算流水号
                     * 
                     */
                    void SetOutSettleId(const std::string& _outSettleId);

                    /**
                     * 判断参数 OutSettleId 是否已赋值
                     * @return OutSettleId 是否已赋值
                     * 
                     */
                    bool OutSettleIdHasBeenSet() const;

                    /**
                     * 获取渠道结算流水号
                     * @return ChannelSettleId 渠道结算流水号
                     * 
                     */
                    std::string GetChannelSettleId() const;

                    /**
                     * 设置渠道结算流水号
                     * @param _channelSettleId 渠道结算流水号
                     * 
                     */
                    void SetChannelSettleId(const std::string& _channelSettleId);

                    /**
                     * 判断参数 ChannelSettleId 是否已赋值
                     * @return ChannelSettleId 是否已赋值
                     * 
                     */
                    bool ChannelSettleIdHasBeenSet() const;

                    /**
                     * 获取退款状态。
SUCCESS：结算成功；
FAILED：结算失败；
PROCESSING：结算中;
INIT:初始化;
ACCEPT_FAILED:受理失败,底层银行返回订单不存在
ACCEPTED：受理成功
_UNKNOWN：默认未知
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SettleStatus 退款状态。
SUCCESS：结算成功；
FAILED：结算失败；
PROCESSING：结算中;
INIT:初始化;
ACCEPT_FAILED:受理失败,底层银行返回订单不存在
ACCEPTED：受理成功
_UNKNOWN：默认未知
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSettleStatus() const;

                    /**
                     * 设置退款状态。
SUCCESS：结算成功；
FAILED：结算失败；
PROCESSING：结算中;
INIT:初始化;
ACCEPT_FAILED:受理失败,底层银行返回订单不存在
ACCEPTED：受理成功
_UNKNOWN：默认未知
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _settleStatus 退款状态。
SUCCESS：结算成功；
FAILED：结算失败；
PROCESSING：结算中;
INIT:初始化;
ACCEPT_FAILED:受理失败,底层银行返回订单不存在
ACCEPTED：受理成功
_UNKNOWN：默认未知
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSettleStatus(const std::string& _settleStatus);

                    /**
                     * 判断参数 SettleStatus 是否已赋值
                     * @return SettleStatus 是否已赋值
                     * 
                     */
                    bool SettleStatusHasBeenSet() const;

                    /**
                     * 获取结算金额
                     * @return SettleAmount 结算金额
                     * 
                     */
                    int64_t GetSettleAmount() const;

                    /**
                     * 设置结算金额
                     * @param _settleAmount 结算金额
                     * 
                     */
                    void SetSettleAmount(const int64_t& _settleAmount);

                    /**
                     * 判断参数 SettleAmount 是否已赋值
                     * @return SettleAmount 是否已赋值
                     * 
                     */
                    bool SettleAmountHasBeenSet() const;

                    /**
                     * 获取结算日期，格式YYYYMMdd
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SettleDate 结算日期，格式YYYYMMdd
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSettleDate() const;

                    /**
                     * 设置结算日期，格式YYYYMMdd
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _settleDate 结算日期，格式YYYYMMdd
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSettleDate(const std::string& _settleDate);

                    /**
                     * 判断参数 SettleDate 是否已赋值
                     * @return SettleDate 是否已赋值
                     * 
                     */
                    bool SettleDateHasBeenSet() const;

                    /**
                     * 获取结算类型（T1/D1）
                     * @return SettleType 结算类型（T1/D1）
                     * 
                     */
                    std::string GetSettleType() const;

                    /**
                     * 设置结算类型（T1/D1）
                     * @param _settleType 结算类型（T1/D1）
                     * 
                     */
                    void SetSettleType(const std::string& _settleType);

                    /**
                     * 判断参数 SettleType 是否已赋值
                     * @return SettleType 是否已赋值
                     * 
                     */
                    bool SettleTypeHasBeenSet() const;

                    /**
                     * 获取失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailReason 失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failReason 失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailReason(const std::string& _failReason);

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                    /**
                     * 获取完成时间，格式yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeFinish 完成时间，格式yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimeFinish() const;

                    /**
                     * 设置完成时间，格式yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeFinish 完成时间，格式yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeFinish(const std::string& _timeFinish);

                    /**
                     * 判断参数 TimeFinish 是否已赋值
                     * @return TimeFinish 是否已赋值
                     * 
                     */
                    bool TimeFinishHasBeenSet() const;

                    /**
                     * 获取结算手续费
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SettleFee 结算手续费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSettleFee() const;

                    /**
                     * 设置结算手续费
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _settleFee 结算手续费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSettleFee(const std::string& _settleFee);

                    /**
                     * 判断参数 SettleFee 是否已赋值
                     * @return SettleFee 是否已赋值
                     * 
                     */
                    bool SettleFeeHasBeenSet() const;

                    /**
                     * 获取账户货币。参考附录“币种类型”。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Currency 账户货币。参考附录“币种类型”。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置账户货币。参考附录“币种类型”。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _currency 账户货币。参考附录“币种类型”。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCurrency(const std::string& _currency);

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     * 
                     */
                    bool CurrencyHasBeenSet() const;

                private:

                    /**
                     * 外部结算流水号
                     */
                    std::string m_outSettleId;
                    bool m_outSettleIdHasBeenSet;

                    /**
                     * 渠道结算流水号
                     */
                    std::string m_channelSettleId;
                    bool m_channelSettleIdHasBeenSet;

                    /**
                     * 退款状态。
SUCCESS：结算成功；
FAILED：结算失败；
PROCESSING：结算中;
INIT:初始化;
ACCEPT_FAILED:受理失败,底层银行返回订单不存在
ACCEPTED：受理成功
_UNKNOWN：默认未知
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_settleStatus;
                    bool m_settleStatusHasBeenSet;

                    /**
                     * 结算金额
                     */
                    int64_t m_settleAmount;
                    bool m_settleAmountHasBeenSet;

                    /**
                     * 结算日期，格式YYYYMMdd
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_settleDate;
                    bool m_settleDateHasBeenSet;

                    /**
                     * 结算类型（T1/D1）
                     */
                    std::string m_settleType;
                    bool m_settleTypeHasBeenSet;

                    /**
                     * 失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                    /**
                     * 完成时间，格式yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timeFinish;
                    bool m_timeFinishHasBeenSet;

                    /**
                     * 结算手续费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_settleFee;
                    bool m_settleFeeHasBeenSet;

                    /**
                     * 账户货币。参考附录“币种类型”。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKSETTLEORDERRESULT_H_
