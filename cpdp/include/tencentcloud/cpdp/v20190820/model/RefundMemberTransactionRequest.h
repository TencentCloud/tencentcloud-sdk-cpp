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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_REFUNDMEMBERTRANSACTIONREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_REFUNDMEMBERTRANSACTIONREQUEST_H_

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
                * RefundMemberTransaction请求参数结构体
                */
                class RefundMemberTransactionRequest : public AbstractModel
                {
                public:
                    RefundMemberTransactionRequest();
                    ~RefundMemberTransactionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取转出见证子账户的户名
                     * @return OutSubAccountName 转出见证子账户的户名
                     * 
                     */
                    std::string GetOutSubAccountName() const;

                    /**
                     * 设置转出见证子账户的户名
                     * @param _outSubAccountName 转出见证子账户的户名
                     * 
                     */
                    void SetOutSubAccountName(const std::string& _outSubAccountName);

                    /**
                     * 判断参数 OutSubAccountName 是否已赋值
                     * @return OutSubAccountName 是否已赋值
                     * 
                     */
                    bool OutSubAccountNameHasBeenSet() const;

                    /**
                     * 获取转入见证子账户的户名
                     * @return InSubAccountName 转入见证子账户的户名
                     * 
                     */
                    std::string GetInSubAccountName() const;

                    /**
                     * 设置转入见证子账户的户名
                     * @param _inSubAccountName 转入见证子账户的户名
                     * 
                     */
                    void SetInSubAccountName(const std::string& _inSubAccountName);

                    /**
                     * 判断参数 InSubAccountName 是否已赋值
                     * @return InSubAccountName 是否已赋值
                     * 
                     */
                    bool InSubAccountNameHasBeenSet() const;

                    /**
                     * 获取子渠道
                     * @return PayChannelSubId 子渠道
                     * 
                     */
                    int64_t GetPayChannelSubId() const;

                    /**
                     * 设置子渠道
                     * @param _payChannelSubId 子渠道
                     * 
                     */
                    void SetPayChannelSubId(const int64_t& _payChannelSubId);

                    /**
                     * 判断参数 PayChannelSubId 是否已赋值
                     * @return PayChannelSubId 是否已赋值
                     * 
                     */
                    bool PayChannelSubIdHasBeenSet() const;

                    /**
                     * 获取转出见证子账户账号
                     * @return OutSubAccountNumber 转出见证子账户账号
                     * 
                     */
                    std::string GetOutSubAccountNumber() const;

                    /**
                     * 设置转出见证子账户账号
                     * @param _outSubAccountNumber 转出见证子账户账号
                     * 
                     */
                    void SetOutSubAccountNumber(const std::string& _outSubAccountNumber);

                    /**
                     * 判断参数 OutSubAccountNumber 是否已赋值
                     * @return OutSubAccountNumber 是否已赋值
                     * 
                     */
                    bool OutSubAccountNumberHasBeenSet() const;

                    /**
                     * 获取计费签名
                     * @return MidasSignature 计费签名
                     * 
                     */
                    std::string GetMidasSignature() const;

                    /**
                     * 设置计费签名
                     * @param _midasSignature 计费签名
                     * 
                     */
                    void SetMidasSignature(const std::string& _midasSignature);

                    /**
                     * 判断参数 MidasSignature 是否已赋值
                     * @return MidasSignature 是否已赋值
                     * 
                     */
                    bool MidasSignatureHasBeenSet() const;

                    /**
                     * 获取转入见证子账户账号
                     * @return InSubAccountNumber 转入见证子账户账号
                     * 
                     */
                    std::string GetInSubAccountNumber() const;

                    /**
                     * 设置转入见证子账户账号
                     * @param _inSubAccountNumber 转入见证子账户账号
                     * 
                     */
                    void SetInSubAccountNumber(const std::string& _inSubAccountNumber);

                    /**
                     * 判断参数 InSubAccountNumber 是否已赋值
                     * @return InSubAccountNumber 是否已赋值
                     * 
                     */
                    bool InSubAccountNumberHasBeenSet() const;

                    /**
                     * 获取聚鑫分配的安全ID
                     * @return MidasSecretId 聚鑫分配的安全ID
                     * 
                     */
                    std::string GetMidasSecretId() const;

                    /**
                     * 设置聚鑫分配的安全ID
                     * @param _midasSecretId 聚鑫分配的安全ID
                     * 
                     */
                    void SetMidasSecretId(const std::string& _midasSecretId);

                    /**
                     * 判断参数 MidasSecretId 是否已赋值
                     * @return MidasSecretId 是否已赋值
                     * 
                     */
                    bool MidasSecretIdHasBeenSet() const;

                    /**
                     * 获取父账户账号，资金汇总账号
                     * @return BankAccountNumber 父账户账号，资金汇总账号
                     * 
                     */
                    std::string GetBankAccountNumber() const;

                    /**
                     * 设置父账户账号，资金汇总账号
                     * @param _bankAccountNumber 父账户账号，资金汇总账号
                     * 
                     */
                    void SetBankAccountNumber(const std::string& _bankAccountNumber);

                    /**
                     * 判断参数 BankAccountNumber 是否已赋值
                     * @return BankAccountNumber 是否已赋值
                     * 
                     */
                    bool BankAccountNumberHasBeenSet() const;

                    /**
                     * 获取原老订单流水号
                     * @return OldTransSequenceNumber 原老订单流水号
                     * 
                     */
                    std::string GetOldTransSequenceNumber() const;

                    /**
                     * 设置原老订单流水号
                     * @param _oldTransSequenceNumber 原老订单流水号
                     * 
                     */
                    void SetOldTransSequenceNumber(const std::string& _oldTransSequenceNumber);

                    /**
                     * 判断参数 OldTransSequenceNumber 是否已赋值
                     * @return OldTransSequenceNumber 是否已赋值
                     * 
                     */
                    bool OldTransSequenceNumberHasBeenSet() const;

                    /**
                     * 获取银行注册商户号
                     * @return MerchantCode 银行注册商户号
                     * 
                     */
                    std::string GetMerchantCode() const;

                    /**
                     * 设置银行注册商户号
                     * @param _merchantCode 银行注册商户号
                     * 
                     */
                    void SetMerchantCode(const std::string& _merchantCode);

                    /**
                     * 判断参数 MerchantCode 是否已赋值
                     * @return MerchantCode 是否已赋值
                     * 
                     */
                    bool MerchantCodeHasBeenSet() const;

                    /**
                     * 获取请求类型，固定为MemberTransactionRefundReq
                     * @return RequestType 请求类型，固定为MemberTransactionRefundReq
                     * 
                     */
                    std::string GetRequestType() const;

                    /**
                     * 设置请求类型，固定为MemberTransactionRefundReq
                     * @param _requestType 请求类型，固定为MemberTransactionRefundReq
                     * 
                     */
                    void SetRequestType(const std::string& _requestType);

                    /**
                     * 判断参数 RequestType 是否已赋值
                     * @return RequestType 是否已赋值
                     * 
                     */
                    bool RequestTypeHasBeenSet() const;

                    /**
                     * 获取交易金额
                     * @return CurrencyAmount 交易金额
                     * 
                     */
                    std::string GetCurrencyAmount() const;

                    /**
                     * 设置交易金额
                     * @param _currencyAmount 交易金额
                     * 
                     */
                    void SetCurrencyAmount(const std::string& _currencyAmount);

                    /**
                     * 判断参数 CurrencyAmount 是否已赋值
                     * @return CurrencyAmount 是否已赋值
                     * 
                     */
                    bool CurrencyAmountHasBeenSet() const;

                    /**
                     * 获取交易流水号
                     * @return TransSequenceNumber 交易流水号
                     * 
                     */
                    std::string GetTransSequenceNumber() const;

                    /**
                     * 设置交易流水号
                     * @param _transSequenceNumber 交易流水号
                     * 
                     */
                    void SetTransSequenceNumber(const std::string& _transSequenceNumber);

                    /**
                     * 判断参数 TransSequenceNumber 是否已赋值
                     * @return TransSequenceNumber 是否已赋值
                     * 
                     */
                    bool TransSequenceNumberHasBeenSet() const;

                    /**
                     * 获取渠道
                     * @return PayChannel 渠道
                     * 
                     */
                    std::string GetPayChannel() const;

                    /**
                     * 设置渠道
                     * @param _payChannel 渠道
                     * 
                     */
                    void SetPayChannel(const std::string& _payChannel);

                    /**
                     * 判断参数 PayChannel 是否已赋值
                     * @return PayChannel 是否已赋值
                     * 
                     */
                    bool PayChannelHasBeenSet() const;

                    /**
                     * 获取原订单号
                     * @return OldOrderId 原订单号
                     * 
                     */
                    std::string GetOldOrderId() const;

                    /**
                     * 设置原订单号
                     * @param _oldOrderId 原订单号
                     * 
                     */
                    void SetOldOrderId(const std::string& _oldOrderId);

                    /**
                     * 判断参数 OldOrderId 是否已赋值
                     * @return OldOrderId 是否已赋值
                     * 
                     */
                    bool OldOrderIdHasBeenSet() const;

                    /**
                     * 获取聚鑫分配的支付主MidasAppId
                     * @return MidasAppId 聚鑫分配的支付主MidasAppId
                     * 
                     */
                    std::string GetMidasAppId() const;

                    /**
                     * 设置聚鑫分配的支付主MidasAppId
                     * @param _midasAppId 聚鑫分配的支付主MidasAppId
                     * 
                     */
                    void SetMidasAppId(const std::string& _midasAppId);

                    /**
                     * 判断参数 MidasAppId 是否已赋值
                     * @return MidasAppId 是否已赋值
                     * 
                     */
                    bool MidasAppIdHasBeenSet() const;

                    /**
                     * 获取订单号
                     * @return OrderId 订单号
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单号
                     * @param _orderId 订单号
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
                     * 获取Midas环境标识 release 现网环境 sandbox 沙箱环境
development 开发环境
                     * @return MidasEnvironment Midas环境标识 release 现网环境 sandbox 沙箱环境
development 开发环境
                     * 
                     */
                    std::string GetMidasEnvironment() const;

                    /**
                     * 设置Midas环境标识 release 现网环境 sandbox 沙箱环境
development 开发环境
                     * @param _midasEnvironment Midas环境标识 release 现网环境 sandbox 沙箱环境
development 开发环境
                     * 
                     */
                    void SetMidasEnvironment(const std::string& _midasEnvironment);

                    /**
                     * 判断参数 MidasEnvironment 是否已赋值
                     * @return MidasEnvironment 是否已赋值
                     * 
                     */
                    bool MidasEnvironmentHasBeenSet() const;

                    /**
                     * 获取转出子账户交易网会员代码
                     * @return OutTransNetMemberCode 转出子账户交易网会员代码
                     * 
                     */
                    std::string GetOutTransNetMemberCode() const;

                    /**
                     * 设置转出子账户交易网会员代码
                     * @param _outTransNetMemberCode 转出子账户交易网会员代码
                     * 
                     */
                    void SetOutTransNetMemberCode(const std::string& _outTransNetMemberCode);

                    /**
                     * 判断参数 OutTransNetMemberCode 是否已赋值
                     * @return OutTransNetMemberCode 是否已赋值
                     * 
                     */
                    bool OutTransNetMemberCodeHasBeenSet() const;

                    /**
                     * 获取转入子账户交易网会员代码
                     * @return InTransNetMemberCode 转入子账户交易网会员代码
                     * 
                     */
                    std::string GetInTransNetMemberCode() const;

                    /**
                     * 设置转入子账户交易网会员代码
                     * @param _inTransNetMemberCode 转入子账户交易网会员代码
                     * 
                     */
                    void SetInTransNetMemberCode(const std::string& _inTransNetMemberCode);

                    /**
                     * 判断参数 InTransNetMemberCode 是否已赋值
                     * @return InTransNetMemberCode 是否已赋值
                     * 
                     */
                    bool InTransNetMemberCodeHasBeenSet() const;

                    /**
                     * 获取保留域
                     * @return ReservedMessage 保留域
                     * 
                     */
                    std::string GetReservedMessage() const;

                    /**
                     * 设置保留域
                     * @param _reservedMessage 保留域
                     * 
                     */
                    void SetReservedMessage(const std::string& _reservedMessage);

                    /**
                     * 判断参数 ReservedMessage 是否已赋值
                     * @return ReservedMessage 是否已赋值
                     * 
                     */
                    bool ReservedMessageHasBeenSet() const;

                    /**
                     * 获取平台短号(银行分配)
                     * @return PlatformShortNumber 平台短号(银行分配)
                     * 
                     */
                    std::string GetPlatformShortNumber() const;

                    /**
                     * 设置平台短号(银行分配)
                     * @param _platformShortNumber 平台短号(银行分配)
                     * 
                     */
                    void SetPlatformShortNumber(const std::string& _platformShortNumber);

                    /**
                     * 判断参数 PlatformShortNumber 是否已赋值
                     * @return PlatformShortNumber 是否已赋值
                     * 
                     */
                    bool PlatformShortNumberHasBeenSet() const;

                    /**
                     * 获取0-登记挂账，1-撤销挂账
                     * @return TransType 0-登记挂账，1-撤销挂账
                     * 
                     */
                    std::string GetTransType() const;

                    /**
                     * 设置0-登记挂账，1-撤销挂账
                     * @param _transType 0-登记挂账，1-撤销挂账
                     * 
                     */
                    void SetTransType(const std::string& _transType);

                    /**
                     * 判断参数 TransType 是否已赋值
                     * @return TransType 是否已赋值
                     * 
                     */
                    bool TransTypeHasBeenSet() const;

                    /**
                     * 获取交易手续费
                     * @return TransFee 交易手续费
                     * 
                     */
                    std::string GetTransFee() const;

                    /**
                     * 设置交易手续费
                     * @param _transFee 交易手续费
                     * 
                     */
                    void SetTransFee(const std::string& _transFee);

                    /**
                     * 判断参数 TransFee 是否已赋值
                     * @return TransFee 是否已赋值
                     * 
                     */
                    bool TransFeeHasBeenSet() const;

                private:

                    /**
                     * 转出见证子账户的户名
                     */
                    std::string m_outSubAccountName;
                    bool m_outSubAccountNameHasBeenSet;

                    /**
                     * 转入见证子账户的户名
                     */
                    std::string m_inSubAccountName;
                    bool m_inSubAccountNameHasBeenSet;

                    /**
                     * 子渠道
                     */
                    int64_t m_payChannelSubId;
                    bool m_payChannelSubIdHasBeenSet;

                    /**
                     * 转出见证子账户账号
                     */
                    std::string m_outSubAccountNumber;
                    bool m_outSubAccountNumberHasBeenSet;

                    /**
                     * 计费签名
                     */
                    std::string m_midasSignature;
                    bool m_midasSignatureHasBeenSet;

                    /**
                     * 转入见证子账户账号
                     */
                    std::string m_inSubAccountNumber;
                    bool m_inSubAccountNumberHasBeenSet;

                    /**
                     * 聚鑫分配的安全ID
                     */
                    std::string m_midasSecretId;
                    bool m_midasSecretIdHasBeenSet;

                    /**
                     * 父账户账号，资金汇总账号
                     */
                    std::string m_bankAccountNumber;
                    bool m_bankAccountNumberHasBeenSet;

                    /**
                     * 原老订单流水号
                     */
                    std::string m_oldTransSequenceNumber;
                    bool m_oldTransSequenceNumberHasBeenSet;

                    /**
                     * 银行注册商户号
                     */
                    std::string m_merchantCode;
                    bool m_merchantCodeHasBeenSet;

                    /**
                     * 请求类型，固定为MemberTransactionRefundReq
                     */
                    std::string m_requestType;
                    bool m_requestTypeHasBeenSet;

                    /**
                     * 交易金额
                     */
                    std::string m_currencyAmount;
                    bool m_currencyAmountHasBeenSet;

                    /**
                     * 交易流水号
                     */
                    std::string m_transSequenceNumber;
                    bool m_transSequenceNumberHasBeenSet;

                    /**
                     * 渠道
                     */
                    std::string m_payChannel;
                    bool m_payChannelHasBeenSet;

                    /**
                     * 原订单号
                     */
                    std::string m_oldOrderId;
                    bool m_oldOrderIdHasBeenSet;

                    /**
                     * 聚鑫分配的支付主MidasAppId
                     */
                    std::string m_midasAppId;
                    bool m_midasAppIdHasBeenSet;

                    /**
                     * 订单号
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * Midas环境标识 release 现网环境 sandbox 沙箱环境
development 开发环境
                     */
                    std::string m_midasEnvironment;
                    bool m_midasEnvironmentHasBeenSet;

                    /**
                     * 转出子账户交易网会员代码
                     */
                    std::string m_outTransNetMemberCode;
                    bool m_outTransNetMemberCodeHasBeenSet;

                    /**
                     * 转入子账户交易网会员代码
                     */
                    std::string m_inTransNetMemberCode;
                    bool m_inTransNetMemberCodeHasBeenSet;

                    /**
                     * 保留域
                     */
                    std::string m_reservedMessage;
                    bool m_reservedMessageHasBeenSet;

                    /**
                     * 平台短号(银行分配)
                     */
                    std::string m_platformShortNumber;
                    bool m_platformShortNumberHasBeenSet;

                    /**
                     * 0-登记挂账，1-撤销挂账
                     */
                    std::string m_transType;
                    bool m_transTypeHasBeenSet;

                    /**
                     * 交易手续费
                     */
                    std::string m_transFee;
                    bool m_transFeeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_REFUNDMEMBERTRANSACTIONREQUEST_H_
