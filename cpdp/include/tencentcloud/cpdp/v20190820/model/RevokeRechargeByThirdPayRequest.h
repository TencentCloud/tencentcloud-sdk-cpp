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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_REVOKERECHARGEBYTHIRDPAYREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_REVOKERECHARGEBYTHIRDPAYREQUEST_H_

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
                * RevokeRechargeByThirdPay请求参数结构体
                */
                class RevokeRechargeByThirdPayRequest : public AbstractModel
                {
                public:
                    RevokeRechargeByThirdPayRequest();
                    ~RevokeRechargeByThirdPayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取请求类型此接口固定填：RevokeMemberRechargeThirdPayReq
                     * @return RequestType 请求类型此接口固定填：RevokeMemberRechargeThirdPayReq
                     * 
                     */
                    std::string GetRequestType() const;

                    /**
                     * 设置请求类型此接口固定填：RevokeMemberRechargeThirdPayReq
                     * @param _requestType 请求类型此接口固定填：RevokeMemberRechargeThirdPayReq
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
                     * 获取商户号
                     * @return MerchantCode 商户号
                     * 
                     */
                    std::string GetMerchantCode() const;

                    /**
                     * 设置商户号
                     * @param _merchantCode 商户号
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
                     * 获取支付渠道
                     * @return PayChannel 支付渠道
                     * 
                     */
                    std::string GetPayChannel() const;

                    /**
                     * 设置支付渠道
                     * @param _payChannel 支付渠道
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
                     * 获取原始充值交易订单号
                     * @return OrderId 原始充值交易订单号
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置原始充值交易订单号
                     * @param _orderId 原始充值交易订单号
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
                     * 获取申请撤销的手续费金额,以元为单位
                     * @return TransFee 申请撤销的手续费金额,以元为单位
                     * 
                     */
                    std::string GetTransFee() const;

                    /**
                     * 设置申请撤销的手续费金额,以元为单位
                     * @param _transFee 申请撤销的手续费金额,以元为单位
                     * 
                     */
                    void SetTransFee(const std::string& _transFee);

                    /**
                     * 判断参数 TransFee 是否已赋值
                     * @return TransFee 是否已赋值
                     * 
                     */
                    bool TransFeeHasBeenSet() const;

                    /**
                     * 获取第三方支付渠道类型 0001-微信 0002-支付宝 0003-京东支付
                     * @return ThirdPayChannel 第三方支付渠道类型 0001-微信 0002-支付宝 0003-京东支付
                     * 
                     */
                    std::string GetThirdPayChannel() const;

                    /**
                     * 设置第三方支付渠道类型 0001-微信 0002-支付宝 0003-京东支付
                     * @param _thirdPayChannel 第三方支付渠道类型 0001-微信 0002-支付宝 0003-京东支付
                     * 
                     */
                    void SetThirdPayChannel(const std::string& _thirdPayChannel);

                    /**
                     * 判断参数 ThirdPayChannel 是否已赋值
                     * @return ThirdPayChannel 是否已赋值
                     * 
                     */
                    bool ThirdPayChannelHasBeenSet() const;

                    /**
                     * 获取第三方渠道订单号或流水号
                     * @return ThirdPayChannelOrderId 第三方渠道订单号或流水号
                     * 
                     */
                    std::string GetThirdPayChannelOrderId() const;

                    /**
                     * 设置第三方渠道订单号或流水号
                     * @param _thirdPayChannelOrderId 第三方渠道订单号或流水号
                     * 
                     */
                    void SetThirdPayChannelOrderId(const std::string& _thirdPayChannelOrderId);

                    /**
                     * 判断参数 ThirdPayChannelOrderId 是否已赋值
                     * @return ThirdPayChannelOrderId 是否已赋值
                     * 
                     */
                    bool ThirdPayChannelOrderIdHasBeenSet() const;

                    /**
                     * 获取充值接口银行返回的流水号(FrontSeqNo)
                     * @return OldFrontSequenceNumber 充值接口银行返回的流水号(FrontSeqNo)
                     * 
                     */
                    std::string GetOldFrontSequenceNumber() const;

                    /**
                     * 设置充值接口银行返回的流水号(FrontSeqNo)
                     * @param _oldFrontSequenceNumber 充值接口银行返回的流水号(FrontSeqNo)
                     * 
                     */
                    void SetOldFrontSequenceNumber(const std::string& _oldFrontSequenceNumber);

                    /**
                     * 判断参数 OldFrontSequenceNumber 是否已赋值
                     * @return OldFrontSequenceNumber 是否已赋值
                     * 
                     */
                    bool OldFrontSequenceNumberHasBeenSet() const;

                    /**
                     * 获取申请撤销的金额
                     * @return CurrencyAmount 申请撤销的金额
                     * 
                     */
                    std::string GetCurrencyAmount() const;

                    /**
                     * 设置申请撤销的金额
                     * @param _currencyAmount 申请撤销的金额
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
                     * 获取单位，1：元，2：角，3：分 目前固定填1
                     * @return CurrencyUnit 单位，1：元，2：角，3：分 目前固定填1
                     * 
                     */
                    std::string GetCurrencyUnit() const;

                    /**
                     * 设置单位，1：元，2：角，3：分 目前固定填1
                     * @param _currencyUnit 单位，1：元，2：角，3：分 目前固定填1
                     * 
                     */
                    void SetCurrencyUnit(const std::string& _currencyUnit);

                    /**
                     * 判断参数 CurrencyUnit 是否已赋值
                     * @return CurrencyUnit 是否已赋值
                     * 
                     */
                    bool CurrencyUnitHasBeenSet() const;

                    /**
                     * 获取币种 目前固定填RMB
                     * @return CurrencyType 币种 目前固定填RMB
                     * 
                     */
                    std::string GetCurrencyType() const;

                    /**
                     * 设置币种 目前固定填RMB
                     * @param _currencyType 币种 目前固定填RMB
                     * 
                     */
                    void SetCurrencyType(const std::string& _currencyType);

                    /**
                     * 判断参数 CurrencyType 是否已赋值
                     * @return CurrencyType 是否已赋值
                     * 
                     */
                    bool CurrencyTypeHasBeenSet() const;

                    /**
                     * 获取Midas环境标识
                     * @return MidasEnvironment Midas环境标识
                     * 
                     */
                    std::string GetMidasEnvironment() const;

                    /**
                     * 设置Midas环境标识
                     * @param _midasEnvironment Midas环境标识
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
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
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
                     * 请求类型此接口固定填：RevokeMemberRechargeThirdPayReq
                     */
                    std::string m_requestType;
                    bool m_requestTypeHasBeenSet;

                    /**
                     * 商户号
                     */
                    std::string m_merchantCode;
                    bool m_merchantCodeHasBeenSet;

                    /**
                     * 支付渠道
                     */
                    std::string m_payChannel;
                    bool m_payChannelHasBeenSet;

                    /**
                     * 子渠道
                     */
                    int64_t m_payChannelSubId;
                    bool m_payChannelSubIdHasBeenSet;

                    /**
                     * 原始充值交易订单号
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 父账户账号，资金汇总账号
                     */
                    std::string m_bankAccountNumber;
                    bool m_bankAccountNumberHasBeenSet;

                    /**
                     * 平台短号(银行分配)
                     */
                    std::string m_platformShortNumber;
                    bool m_platformShortNumberHasBeenSet;

                    /**
                     * 聚鑫分配的安全ID
                     */
                    std::string m_midasSecretId;
                    bool m_midasSecretIdHasBeenSet;

                    /**
                     * 聚鑫分配的支付主MidasAppId
                     */
                    std::string m_midasAppId;
                    bool m_midasAppIdHasBeenSet;

                    /**
                     * 计费签名
                     */
                    std::string m_midasSignature;
                    bool m_midasSignatureHasBeenSet;

                    /**
                     * 交易流水号
                     */
                    std::string m_transSequenceNumber;
                    bool m_transSequenceNumberHasBeenSet;

                    /**
                     * 申请撤销的手续费金额,以元为单位
                     */
                    std::string m_transFee;
                    bool m_transFeeHasBeenSet;

                    /**
                     * 第三方支付渠道类型 0001-微信 0002-支付宝 0003-京东支付
                     */
                    std::string m_thirdPayChannel;
                    bool m_thirdPayChannelHasBeenSet;

                    /**
                     * 第三方渠道订单号或流水号
                     */
                    std::string m_thirdPayChannelOrderId;
                    bool m_thirdPayChannelOrderIdHasBeenSet;

                    /**
                     * 充值接口银行返回的流水号(FrontSeqNo)
                     */
                    std::string m_oldFrontSequenceNumber;
                    bool m_oldFrontSequenceNumberHasBeenSet;

                    /**
                     * 申请撤销的金额
                     */
                    std::string m_currencyAmount;
                    bool m_currencyAmountHasBeenSet;

                    /**
                     * 单位，1：元，2：角，3：分 目前固定填1
                     */
                    std::string m_currencyUnit;
                    bool m_currencyUnitHasBeenSet;

                    /**
                     * 币种 目前固定填RMB
                     */
                    std::string m_currencyType;
                    bool m_currencyTypeHasBeenSet;

                    /**
                     * Midas环境标识
                     */
                    std::string m_midasEnvironment;
                    bool m_midasEnvironmentHasBeenSet;

                    /**
                     * 保留域
                     */
                    std::string m_reservedMessage;
                    bool m_reservedMessageHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_REVOKERECHARGEBYTHIRDPAYREQUEST_H_
