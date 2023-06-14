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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYWITHDRAWALREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYWITHDRAWALREQUEST_H_

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
                * ApplyWithdrawal请求参数结构体
                */
                class ApplyWithdrawalRequest : public AbstractModel
                {
                public:
                    ApplyWithdrawalRequest();
                    ~ApplyWithdrawalRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取聚鑫计费SubAppId，代表子商户
                     * @return SubAppId 聚鑫计费SubAppId，代表子商户
                     * 
                     */
                    std::string GetSubAppId() const;

                    /**
                     * 设置聚鑫计费SubAppId，代表子商户
                     * @param _subAppId 聚鑫计费SubAppId，代表子商户
                     * 
                     */
                    void SetSubAppId(const std::string& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取用于提现
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * @return SettleAcctNo 用于提现
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * 
                     */
                    std::string GetSettleAcctNo() const;

                    /**
                     * 设置用于提现
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * @param _settleAcctNo 用于提现
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * 
                     */
                    void SetSettleAcctNo(const std::string& _settleAcctNo);

                    /**
                     * 判断参数 SettleAcctNo 是否已赋值
                     * @return SettleAcctNo 是否已赋值
                     * 
                     */
                    bool SettleAcctNoHasBeenSet() const;

                    /**
                     * 获取结算账户户名
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * @return SettleAcctName 结算账户户名
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * 
                     */
                    std::string GetSettleAcctName() const;

                    /**
                     * 设置结算账户户名
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * @param _settleAcctName 结算账户户名
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * 
                     */
                    void SetSettleAcctName(const std::string& _settleAcctName);

                    /**
                     * 判断参数 SettleAcctName 是否已赋值
                     * @return SettleAcctName 是否已赋值
                     * 
                     */
                    bool SettleAcctNameHasBeenSet() const;

                    /**
                     * 获取币种 RMB
                     * @return CurrencyType 币种 RMB
                     * 
                     */
                    std::string GetCurrencyType() const;

                    /**
                     * 设置币种 RMB
                     * @param _currencyType 币种 RMB
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
                     * 获取单位，1：元，2：角，3：分
                     * @return CurrencyUnit 单位，1：元，2：角，3：分
                     * 
                     */
                    int64_t GetCurrencyUnit() const;

                    /**
                     * 设置单位，1：元，2：角，3：分
                     * @param _currencyUnit 单位，1：元，2：角，3：分
                     * 
                     */
                    void SetCurrencyUnit(const int64_t& _currencyUnit);

                    /**
                     * 判断参数 CurrencyUnit 是否已赋值
                     * @return CurrencyUnit 是否已赋值
                     * 
                     */
                    bool CurrencyUnitHasBeenSet() const;

                    /**
                     * 获取金额
                     * @return CurrencyAmt 金额
                     * 
                     */
                    std::string GetCurrencyAmt() const;

                    /**
                     * 设置金额
                     * @param _currencyAmt 金额
                     * 
                     */
                    void SetCurrencyAmt(const std::string& _currencyAmt);

                    /**
                     * 判断参数 CurrencyAmt 是否已赋值
                     * @return CurrencyAmt 是否已赋值
                     * 
                     */
                    bool CurrencyAmtHasBeenSet() const;

                    /**
                     * 获取交易网名称
                     * @return TranWebName 交易网名称
                     * 
                     */
                    std::string GetTranWebName() const;

                    /**
                     * 设置交易网名称
                     * @param _tranWebName 交易网名称
                     * 
                     */
                    void SetTranWebName(const std::string& _tranWebName);

                    /**
                     * 判断参数 TranWebName 是否已赋值
                     * @return TranWebName 是否已赋值
                     * 
                     */
                    bool TranWebNameHasBeenSet() const;

                    /**
                     * 获取会员证件类型
                     * @return IdType 会员证件类型
                     * 
                     */
                    std::string GetIdType() const;

                    /**
                     * 设置会员证件类型
                     * @param _idType 会员证件类型
                     * 
                     */
                    void SetIdType(const std::string& _idType);

                    /**
                     * 判断参数 IdType 是否已赋值
                     * @return IdType 是否已赋值
                     * 
                     */
                    bool IdTypeHasBeenSet() const;

                    /**
                     * 获取会员证件号码
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * @return IdCode 会员证件号码
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * 
                     */
                    std::string GetIdCode() const;

                    /**
                     * 设置会员证件号码
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * @param _idCode 会员证件号码
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * 
                     */
                    void SetIdCode(const std::string& _idCode);

                    /**
                     * 判断参数 IdCode 是否已赋值
                     * @return IdCode 是否已赋值
                     * 
                     */
                    bool IdCodeHasBeenSet() const;

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
                     * 获取按照聚鑫安全密钥计算的签名
                     * @return MidasSignature 按照聚鑫安全密钥计算的签名
                     * 
                     */
                    std::string GetMidasSignature() const;

                    /**
                     * 设置按照聚鑫安全密钥计算的签名
                     * @param _midasSignature 按照聚鑫安全密钥计算的签名
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
                     * 获取敏感信息加密类型:
RSA: rsa非对称加密，使用RSA-PKCS1-v1_5
AES: aes对称加密，使用AES256-CBC-PCKS7padding
缺省: RSA
                     * @return EncryptType 敏感信息加密类型:
RSA: rsa非对称加密，使用RSA-PKCS1-v1_5
AES: aes对称加密，使用AES256-CBC-PCKS7padding
缺省: RSA
                     * 
                     */
                    std::string GetEncryptType() const;

                    /**
                     * 设置敏感信息加密类型:
RSA: rsa非对称加密，使用RSA-PKCS1-v1_5
AES: aes对称加密，使用AES256-CBC-PCKS7padding
缺省: RSA
                     * @param _encryptType 敏感信息加密类型:
RSA: rsa非对称加密，使用RSA-PKCS1-v1_5
AES: aes对称加密，使用AES256-CBC-PCKS7padding
缺省: RSA
                     * 
                     */
                    void SetEncryptType(const std::string& _encryptType);

                    /**
                     * 判断参数 EncryptType 是否已赋值
                     * @return EncryptType 是否已赋值
                     * 
                     */
                    bool EncryptTypeHasBeenSet() const;

                    /**
                     * 获取环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * @return MidasEnvironment 环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * 
                     */
                    std::string GetMidasEnvironment() const;

                    /**
                     * 设置环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * @param _midasEnvironment 环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
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
                     * 获取手续费金额
                     * @return CommissionAmount 手续费金额
                     * 
                     */
                    std::string GetCommissionAmount() const;

                    /**
                     * 设置手续费金额
                     * @param _commissionAmount 手续费金额
                     * 
                     */
                    void SetCommissionAmount(const std::string& _commissionAmount);

                    /**
                     * 判断参数 CommissionAmount 是否已赋值
                     * @return CommissionAmount 是否已赋值
                     * 
                     */
                    bool CommissionAmountHasBeenSet() const;

                    /**
                     * 获取提现单号，长度32字节
                     * @return WithdrawOrderId 提现单号，长度32字节
                     * 
                     */
                    std::string GetWithdrawOrderId() const;

                    /**
                     * 设置提现单号，长度32字节
                     * @param _withdrawOrderId 提现单号，长度32字节
                     * 
                     */
                    void SetWithdrawOrderId(const std::string& _withdrawOrderId);

                    /**
                     * 判断参数 WithdrawOrderId 是否已赋值
                     * @return WithdrawOrderId 是否已赋值
                     * 
                     */
                    bool WithdrawOrderIdHasBeenSet() const;

                private:

                    /**
                     * 聚鑫分配的支付主MidasAppId
                     */
                    std::string m_midasAppId;
                    bool m_midasAppIdHasBeenSet;

                    /**
                     * 聚鑫计费SubAppId，代表子商户
                     */
                    std::string m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 用于提现
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     */
                    std::string m_settleAcctNo;
                    bool m_settleAcctNoHasBeenSet;

                    /**
                     * 结算账户户名
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     */
                    std::string m_settleAcctName;
                    bool m_settleAcctNameHasBeenSet;

                    /**
                     * 币种 RMB
                     */
                    std::string m_currencyType;
                    bool m_currencyTypeHasBeenSet;

                    /**
                     * 单位，1：元，2：角，3：分
                     */
                    int64_t m_currencyUnit;
                    bool m_currencyUnitHasBeenSet;

                    /**
                     * 金额
                     */
                    std::string m_currencyAmt;
                    bool m_currencyAmtHasBeenSet;

                    /**
                     * 交易网名称
                     */
                    std::string m_tranWebName;
                    bool m_tranWebNameHasBeenSet;

                    /**
                     * 会员证件类型
                     */
                    std::string m_idType;
                    bool m_idTypeHasBeenSet;

                    /**
                     * 会员证件号码
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     */
                    std::string m_idCode;
                    bool m_idCodeHasBeenSet;

                    /**
                     * 聚鑫分配的安全ID
                     */
                    std::string m_midasSecretId;
                    bool m_midasSecretIdHasBeenSet;

                    /**
                     * 按照聚鑫安全密钥计算的签名
                     */
                    std::string m_midasSignature;
                    bool m_midasSignatureHasBeenSet;

                    /**
                     * 敏感信息加密类型:
RSA: rsa非对称加密，使用RSA-PKCS1-v1_5
AES: aes对称加密，使用AES256-CBC-PCKS7padding
缺省: RSA
                     */
                    std::string m_encryptType;
                    bool m_encryptTypeHasBeenSet;

                    /**
                     * 环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     */
                    std::string m_midasEnvironment;
                    bool m_midasEnvironmentHasBeenSet;

                    /**
                     * 手续费金额
                     */
                    std::string m_commissionAmount;
                    bool m_commissionAmountHasBeenSet;

                    /**
                     * 提现单号，长度32字节
                     */
                    std::string m_withdrawOrderId;
                    bool m_withdrawOrderIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYWITHDRAWALREQUEST_H_
