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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_REGISTERBILLREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_REGISTERBILLREQUEST_H_

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
                * RegisterBill请求参数结构体
                */
                class RegisterBillRequest : public AbstractModel
                {
                public:
                    RegisterBillRequest();
                    ~RegisterBillRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取请求类型此接口固定填：RegBillSupportWithdrawReq
                     * @return RequestType 请求类型此接口固定填：RegBillSupportWithdrawReq
                     * 
                     */
                    std::string GetRequestType() const;

                    /**
                     * 设置请求类型此接口固定填：RegBillSupportWithdrawReq
                     * @param _requestType 请求类型此接口固定填：RegBillSupportWithdrawReq
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
                     * 获取交易订单号
                     * @return OrderId 交易订单号
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置交易订单号
                     * @param _orderId 交易订单号
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
                     * @return BankAccountNo 父账户账号，资金汇总账号
                     * 
                     */
                    std::string GetBankAccountNo() const;

                    /**
                     * 设置父账户账号，资金汇总账号
                     * @param _bankAccountNo 父账户账号，资金汇总账号
                     * 
                     */
                    void SetBankAccountNo(const std::string& _bankAccountNo);

                    /**
                     * 判断参数 BankAccountNo 是否已赋值
                     * @return BankAccountNo 是否已赋值
                     * 
                     */
                    bool BankAccountNoHasBeenSet() const;

                    /**
                     * 获取平台短号(银行分配)
                     * @return PlatformShortNo 平台短号(银行分配)
                     * 
                     */
                    std::string GetPlatformShortNo() const;

                    /**
                     * 设置平台短号(银行分配)
                     * @param _platformShortNo 平台短号(银行分配)
                     * 
                     */
                    void SetPlatformShortNo(const std::string& _platformShortNo);

                    /**
                     * 判断参数 PlatformShortNo 是否已赋值
                     * @return PlatformShortNo 是否已赋值
                     * 
                     */
                    bool PlatformShortNoHasBeenSet() const;

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
                     * @return TransSeqNo 交易流水号
                     * 
                     */
                    std::string GetTransSeqNo() const;

                    /**
                     * 设置交易流水号
                     * @param _transSeqNo 交易流水号
                     * 
                     */
                    void SetTransSeqNo(const std::string& _transSeqNo);

                    /**
                     * 判断参数 TransSeqNo 是否已赋值
                     * @return TransSeqNo 是否已赋值
                     * 
                     */
                    bool TransSeqNoHasBeenSet() const;

                    /**
                     * 获取暂未使用，默认传0.0
                     * @return TranFee 暂未使用，默认传0.0
                     * 
                     */
                    std::string GetTranFee() const;

                    /**
                     * 设置暂未使用，默认传0.0
                     * @param _tranFee 暂未使用，默认传0.0
                     * 
                     */
                    void SetTranFee(const std::string& _tranFee);

                    /**
                     * 判断参数 TranFee 是否已赋值
                     * @return TranFee 是否已赋值
                     * 
                     */
                    bool TranFeeHasBeenSet() const;

                    /**
                     * 获取挂账金额，以元为单位
                     * @return OrderAmt 挂账金额，以元为单位
                     * 
                     */
                    std::string GetOrderAmt() const;

                    /**
                     * 设置挂账金额，以元为单位
                     * @param _orderAmt 挂账金额，以元为单位
                     * 
                     */
                    void SetOrderAmt(const std::string& _orderAmt);

                    /**
                     * 判断参数 OrderAmt 是否已赋值
                     * @return OrderAmt 是否已赋值
                     * 
                     */
                    bool OrderAmtHasBeenSet() const;

                    /**
                     * 获取子账户账号
                     * @return BankSubAccountNo 子账户账号
                     * 
                     */
                    std::string GetBankSubAccountNo() const;

                    /**
                     * 设置子账户账号
                     * @param _bankSubAccountNo 子账户账号
                     * 
                     */
                    void SetBankSubAccountNo(const std::string& _bankSubAccountNo);

                    /**
                     * 判断参数 BankSubAccountNo 是否已赋值
                     * @return BankSubAccountNo 是否已赋值
                     * 
                     */
                    bool BankSubAccountNoHasBeenSet() const;

                    /**
                     * 获取交易网会员代码
                     * @return TranNetMemberCode 交易网会员代码
                     * 
                     */
                    std::string GetTranNetMemberCode() const;

                    /**
                     * 设置交易网会员代码
                     * @param _tranNetMemberCode 交易网会员代码
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
                     * 获取0,登记挂账，1，撤销挂账
                     * @return TranType 0,登记挂账，1，撤销挂账
                     * 
                     */
                    std::string GetTranType() const;

                    /**
                     * 设置0,登记挂账，1，撤销挂账
                     * @param _tranType 0,登记挂账，1，撤销挂账
                     * 
                     */
                    void SetTranType(const std::string& _tranType);

                    /**
                     * 判断参数 TranType 是否已赋值
                     * @return TranType 是否已赋值
                     * 
                     */
                    bool TranTypeHasBeenSet() const;

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

                    /**
                     * 获取Midas环境参数
                     * @return MidasEnvironment Midas环境参数
                     * 
                     */
                    std::string GetMidasEnvironment() const;

                    /**
                     * 设置Midas环境参数
                     * @param _midasEnvironment Midas环境参数
                     * 
                     */
                    void SetMidasEnvironment(const std::string& _midasEnvironment);

                    /**
                     * 判断参数 MidasEnvironment 是否已赋值
                     * @return MidasEnvironment 是否已赋值
                     * 
                     */
                    bool MidasEnvironmentHasBeenSet() const;

                private:

                    /**
                     * 请求类型此接口固定填：RegBillSupportWithdrawReq
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
                     * 交易订单号
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 父账户账号，资金汇总账号
                     */
                    std::string m_bankAccountNo;
                    bool m_bankAccountNoHasBeenSet;

                    /**
                     * 平台短号(银行分配)
                     */
                    std::string m_platformShortNo;
                    bool m_platformShortNoHasBeenSet;

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
                    std::string m_transSeqNo;
                    bool m_transSeqNoHasBeenSet;

                    /**
                     * 暂未使用，默认传0.0
                     */
                    std::string m_tranFee;
                    bool m_tranFeeHasBeenSet;

                    /**
                     * 挂账金额，以元为单位
                     */
                    std::string m_orderAmt;
                    bool m_orderAmtHasBeenSet;

                    /**
                     * 子账户账号
                     */
                    std::string m_bankSubAccountNo;
                    bool m_bankSubAccountNoHasBeenSet;

                    /**
                     * 交易网会员代码
                     */
                    std::string m_tranNetMemberCode;
                    bool m_tranNetMemberCodeHasBeenSet;

                    /**
                     * 0,登记挂账，1，撤销挂账
                     */
                    std::string m_tranType;
                    bool m_tranTypeHasBeenSet;

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

                    /**
                     * Midas环境参数
                     */
                    std::string m_midasEnvironment;
                    bool m_midasEnvironmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_REGISTERBILLREQUEST_H_
