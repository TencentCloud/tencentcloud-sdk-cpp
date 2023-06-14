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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_DESCRIBEORDERSTATUSREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_DESCRIBEORDERSTATUSREQUEST_H_

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
                * DescribeOrderStatus请求参数结构体
                */
                class DescribeOrderStatusRequest : public AbstractModel
                {
                public:
                    DescribeOrderStatusRequest();
                    ~DescribeOrderStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取请求类型，此接口固定填：QueryOrderStatusReq
                     * @return RequestType 请求类型，此接口固定填：QueryOrderStatusReq
                     * 
                     */
                    std::string GetRequestType() const;

                    /**
                     * 设置请求类型，此接口固定填：QueryOrderStatusReq
                     * @param _requestType 请求类型，此接口固定填：QueryOrderStatusReq
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
                     * 获取交易订单号或流水号，提现，充值或会员交易请求时的CnsmrSeqNo值
                     * @return OrderId 交易订单号或流水号，提现，充值或会员交易请求时的CnsmrSeqNo值
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置交易订单号或流水号，提现，充值或会员交易请求时的CnsmrSeqNo值
                     * @param _orderId 交易订单号或流水号，提现，充值或会员交易请求时的CnsmrSeqNo值
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
                     * 获取功能标志 0：会员间交易 1：提现 2：充值
                     * @return QueryType 功能标志 0：会员间交易 1：提现 2：充值
                     * 
                     */
                    std::string GetQueryType() const;

                    /**
                     * 设置功能标志 0：会员间交易 1：提现 2：充值
                     * @param _queryType 功能标志 0：会员间交易 1：提现 2：充值
                     * 
                     */
                    void SetQueryType(const std::string& _queryType);

                    /**
                     * 判断参数 QueryType 是否已赋值
                     * @return QueryType 是否已赋值
                     * 
                     */
                    bool QueryTypeHasBeenSet() const;

                    /**
                     * 获取银行流水号
                     * @return TransSequenceNumber 银行流水号
                     * 
                     */
                    std::string GetTransSequenceNumber() const;

                    /**
                     * 设置银行流水号
                     * @param _transSequenceNumber 银行流水号
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

                    /**
                     * 获取保留字段
                     * @return ReservedMessage 保留字段
                     * 
                     */
                    std::string GetReservedMessage() const;

                    /**
                     * 设置保留字段
                     * @param _reservedMessage 保留字段
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
                     * 获取子账户账号 暂未使用
                     * @return BankSubAccountNumber 子账户账号 暂未使用
                     * 
                     */
                    std::string GetBankSubAccountNumber() const;

                    /**
                     * 设置子账户账号 暂未使用
                     * @param _bankSubAccountNumber 子账户账号 暂未使用
                     * 
                     */
                    void SetBankSubAccountNumber(const std::string& _bankSubAccountNumber);

                    /**
                     * 判断参数 BankSubAccountNumber 是否已赋值
                     * @return BankSubAccountNumber 是否已赋值
                     * 
                     */
                    bool BankSubAccountNumberHasBeenSet() const;

                    /**
                     * 获取交易日期 暂未使用
                     * @return TransDate 交易日期 暂未使用
                     * 
                     */
                    std::string GetTransDate() const;

                    /**
                     * 设置交易日期 暂未使用
                     * @param _transDate 交易日期 暂未使用
                     * 
                     */
                    void SetTransDate(const std::string& _transDate);

                    /**
                     * 判断参数 TransDate 是否已赋值
                     * @return TransDate 是否已赋值
                     * 
                     */
                    bool TransDateHasBeenSet() const;

                private:

                    /**
                     * 请求类型，此接口固定填：QueryOrderStatusReq
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
                     * 交易订单号或流水号，提现，充值或会员交易请求时的CnsmrSeqNo值
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
                     * 功能标志 0：会员间交易 1：提现 2：充值
                     */
                    std::string m_queryType;
                    bool m_queryTypeHasBeenSet;

                    /**
                     * 银行流水号
                     */
                    std::string m_transSequenceNumber;
                    bool m_transSequenceNumberHasBeenSet;

                    /**
                     * 计费签名
                     */
                    std::string m_midasSignature;
                    bool m_midasSignatureHasBeenSet;

                    /**
                     * 聚鑫分配的支付主MidasAppId
                     */
                    std::string m_midasAppId;
                    bool m_midasAppIdHasBeenSet;

                    /**
                     * 聚鑫分配的安全ID
                     */
                    std::string m_midasSecretId;
                    bool m_midasSecretIdHasBeenSet;

                    /**
                     * Midas环境参数
                     */
                    std::string m_midasEnvironment;
                    bool m_midasEnvironmentHasBeenSet;

                    /**
                     * 保留字段
                     */
                    std::string m_reservedMessage;
                    bool m_reservedMessageHasBeenSet;

                    /**
                     * 子账户账号 暂未使用
                     */
                    std::string m_bankSubAccountNumber;
                    bool m_bankSubAccountNumberHasBeenSet;

                    /**
                     * 交易日期 暂未使用
                     */
                    std::string m_transDate;
                    bool m_transDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_DESCRIBEORDERSTATUSREQUEST_H_
