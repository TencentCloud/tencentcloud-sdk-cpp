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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CHECKACCTREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CHECKACCTREQUEST_H_

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
                * CheckAcct请求参数结构体
                */
                class CheckAcctRequest : public AbstractModel
                {
                public:
                    CheckAcctRequest();
                    ~CheckAcctRequest() = default;
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
                     * 获取1 – 小额转账验证
2 – 短信验证
每个结算账户每天只能使用一次小额转账验证
                     * @return BindType 1 – 小额转账验证
2 – 短信验证
每个结算账户每天只能使用一次小额转账验证
                     * 
                     */
                    int64_t GetBindType() const;

                    /**
                     * 设置1 – 小额转账验证
2 – 短信验证
每个结算账户每天只能使用一次小额转账验证
                     * @param _bindType 1 – 小额转账验证
2 – 短信验证
每个结算账户每天只能使用一次小额转账验证
                     * 
                     */
                    void SetBindType(const int64_t& _bindType);

                    /**
                     * 判断参数 BindType 是否已赋值
                     * @return BindType 是否已赋值
                     * 
                     */
                    bool BindTypeHasBeenSet() const;

                    /**
                     * 获取结算账户账号
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * @return SettleAcctNo 结算账户账号
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * 
                     */
                    std::string GetSettleAcctNo() const;

                    /**
                     * 设置结算账户账号
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * @param _settleAcctNo 结算账户账号
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
                     * 获取短信验证码或指令号
BindType==2必填，平安渠道必填
                     * @return CheckCode 短信验证码或指令号
BindType==2必填，平安渠道必填
                     * 
                     */
                    std::string GetCheckCode() const;

                    /**
                     * 设置短信验证码或指令号
BindType==2必填，平安渠道必填
                     * @param _checkCode 短信验证码或指令号
BindType==2必填，平安渠道必填
                     * 
                     */
                    void SetCheckCode(const std::string& _checkCode);

                    /**
                     * 判断参数 CheckCode 是否已赋值
                     * @return CheckCode 是否已赋值
                     * 
                     */
                    bool CheckCodeHasBeenSet() const;

                    /**
                     * 获取币种 RMB
BindType==1必填
                     * @return CurrencyType 币种 RMB
BindType==1必填
                     * 
                     */
                    std::string GetCurrencyType() const;

                    /**
                     * 设置币种 RMB
BindType==1必填
                     * @param _currencyType 币种 RMB
BindType==1必填
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
                     * 获取单位
1：元，2：角，3：分
BindType==1必填
                     * @return CurrencyUnit 单位
1：元，2：角，3：分
BindType==1必填
                     * 
                     */
                    int64_t GetCurrencyUnit() const;

                    /**
                     * 设置单位
1：元，2：角，3：分
BindType==1必填
                     * @param _currencyUnit 单位
1：元，2：角，3：分
BindType==1必填
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
BindType==1必填
                     * @return CurrencyAmt 金额
BindType==1必填
                     * 
                     */
                    std::string GetCurrencyAmt() const;

                    /**
                     * 设置金额
BindType==1必填
                     * @param _currencyAmt 金额
BindType==1必填
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
                     * 1 – 小额转账验证
2 – 短信验证
每个结算账户每天只能使用一次小额转账验证
                     */
                    int64_t m_bindType;
                    bool m_bindTypeHasBeenSet;

                    /**
                     * 结算账户账号
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     */
                    std::string m_settleAcctNo;
                    bool m_settleAcctNoHasBeenSet;

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
                     * 短信验证码或指令号
BindType==2必填，平安渠道必填
                     */
                    std::string m_checkCode;
                    bool m_checkCodeHasBeenSet;

                    /**
                     * 币种 RMB
BindType==1必填
                     */
                    std::string m_currencyType;
                    bool m_currencyTypeHasBeenSet;

                    /**
                     * 单位
1：元，2：角，3：分
BindType==1必填
                     */
                    int64_t m_currencyUnit;
                    bool m_currencyUnitHasBeenSet;

                    /**
                     * 金额
BindType==1必填
                     */
                    std::string m_currencyAmt;
                    bool m_currencyAmtHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CHECKACCTREQUEST_H_
