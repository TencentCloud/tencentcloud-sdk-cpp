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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYSINGLETRANSACTIONSTATUSREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYSINGLETRANSACTIONSTATUSREQUEST_H_

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
                * QuerySingleTransactionStatus请求参数结构体
                */
                class QuerySingleTransactionStatusRequest : public AbstractModel
                {
                public:
                    QuerySingleTransactionStatusRequest();
                    ~QuerySingleTransactionStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取String(22)，商户号（签约客户号）
                     * @return MrchCode String(22)，商户号（签约客户号）
                     * 
                     */
                    std::string GetMrchCode() const;

                    /**
                     * 设置String(22)，商户号（签约客户号）
                     * @param _mrchCode String(22)，商户号（签约客户号）
                     * 
                     */
                    void SetMrchCode(const std::string& _mrchCode);

                    /**
                     * 判断参数 MrchCode 是否已赋值
                     * @return MrchCode 是否已赋值
                     * 
                     */
                    bool MrchCodeHasBeenSet() const;

                    /**
                     * 获取STRING(2)，功能标志（2: 会员间交易; 3: 提现; 4: 充值）
                     * @return FunctionFlag STRING(2)，功能标志（2: 会员间交易; 3: 提现; 4: 充值）
                     * 
                     */
                    std::string GetFunctionFlag() const;

                    /**
                     * 设置STRING(2)，功能标志（2: 会员间交易; 3: 提现; 4: 充值）
                     * @param _functionFlag STRING(2)，功能标志（2: 会员间交易; 3: 提现; 4: 充值）
                     * 
                     */
                    void SetFunctionFlag(const std::string& _functionFlag);

                    /**
                     * 判断参数 FunctionFlag 是否已赋值
                     * @return FunctionFlag 是否已赋值
                     * 
                     */
                    bool FunctionFlagHasBeenSet() const;

                    /**
                     * 获取STRING(52)，交易网流水号（提现，充值或会员交易请求时的CnsmrSeqNo值）
                     * @return TranNetSeqNo STRING(52)，交易网流水号（提现，充值或会员交易请求时的CnsmrSeqNo值）
                     * 
                     */
                    std::string GetTranNetSeqNo() const;

                    /**
                     * 设置STRING(52)，交易网流水号（提现，充值或会员交易请求时的CnsmrSeqNo值）
                     * @param _tranNetSeqNo STRING(52)，交易网流水号（提现，充值或会员交易请求时的CnsmrSeqNo值）
                     * 
                     */
                    void SetTranNetSeqNo(const std::string& _tranNetSeqNo);

                    /**
                     * 判断参数 TranNetSeqNo 是否已赋值
                     * @return TranNetSeqNo 是否已赋值
                     * 
                     */
                    bool TranNetSeqNoHasBeenSet() const;

                    /**
                     * 获取STRING(50)，见证子帐户的帐号（未启用）
                     * @return SubAcctNo STRING(50)，见证子帐户的帐号（未启用）
                     * 
                     */
                    std::string GetSubAcctNo() const;

                    /**
                     * 设置STRING(50)，见证子帐户的帐号（未启用）
                     * @param _subAcctNo STRING(50)，见证子帐户的帐号（未启用）
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
                     * 获取STRING(8)，交易日期（未启用）
                     * @return TranDate STRING(8)，交易日期（未启用）
                     * 
                     */
                    std::string GetTranDate() const;

                    /**
                     * 设置STRING(8)，交易日期（未启用）
                     * @param _tranDate STRING(8)，交易日期（未启用）
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
                     * 获取STRING(1027)，保留域
                     * @return ReservedMsg STRING(1027)，保留域
                     * 
                     */
                    std::string GetReservedMsg() const;

                    /**
                     * 设置STRING(1027)，保留域
                     * @param _reservedMsg STRING(1027)，保留域
                     * 
                     */
                    void SetReservedMsg(const std::string& _reservedMsg);

                    /**
                     * 判断参数 ReservedMsg 是否已赋值
                     * @return ReservedMsg 是否已赋值
                     * 
                     */
                    bool ReservedMsgHasBeenSet() const;

                    /**
                     * 获取STRING(12)，接入环境，默认接入沙箱环境。接入正式环境填"prod"
                     * @return Profile STRING(12)，接入环境，默认接入沙箱环境。接入正式环境填"prod"
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置STRING(12)，接入环境，默认接入沙箱环境。接入正式环境填"prod"
                     * @param _profile STRING(12)，接入环境，默认接入沙箱环境。接入正式环境填"prod"
                     * 
                     */
                    void SetProfile(const std::string& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                private:

                    /**
                     * String(22)，商户号（签约客户号）
                     */
                    std::string m_mrchCode;
                    bool m_mrchCodeHasBeenSet;

                    /**
                     * STRING(2)，功能标志（2: 会员间交易; 3: 提现; 4: 充值）
                     */
                    std::string m_functionFlag;
                    bool m_functionFlagHasBeenSet;

                    /**
                     * STRING(52)，交易网流水号（提现，充值或会员交易请求时的CnsmrSeqNo值）
                     */
                    std::string m_tranNetSeqNo;
                    bool m_tranNetSeqNoHasBeenSet;

                    /**
                     * STRING(50)，见证子帐户的帐号（未启用）
                     */
                    std::string m_subAcctNo;
                    bool m_subAcctNoHasBeenSet;

                    /**
                     * STRING(8)，交易日期（未启用）
                     */
                    std::string m_tranDate;
                    bool m_tranDateHasBeenSet;

                    /**
                     * STRING(1027)，保留域
                     */
                    std::string m_reservedMsg;
                    bool m_reservedMsgHasBeenSet;

                    /**
                     * STRING(12)，接入环境，默认接入沙箱环境。接入正式环境填"prod"
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYSINGLETRANSACTIONSTATUSREQUEST_H_
