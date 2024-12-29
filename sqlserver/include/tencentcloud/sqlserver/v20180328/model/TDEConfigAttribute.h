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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_TDECONFIGATTRIBUTE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_TDECONFIGATTRIBUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * TDE透明数据加密配置
                */
                class TDEConfigAttribute : public AbstractModel
                {
                public:
                    TDEConfigAttribute();
                    ~TDEConfigAttribute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否已开通TDE加密，enable-已开通，disable-未开通
                     * @return Encryption 是否已开通TDE加密，enable-已开通，disable-未开通
                     * 
                     */
                    std::string GetEncryption() const;

                    /**
                     * 设置是否已开通TDE加密，enable-已开通，disable-未开通
                     * @param _encryption 是否已开通TDE加密，enable-已开通，disable-未开通
                     * 
                     */
                    void SetEncryption(const std::string& _encryption);

                    /**
                     * 判断参数 Encryption 是否已赋值
                     * @return Encryption 是否已赋值
                     * 
                     */
                    bool EncryptionHasBeenSet() const;

                    /**
                     * 获取证书归属。self-表示使用该账号自身的证书，others-表示引用其他账号的证书，none-表示没有证书
                     * @return CertificateAttribution 证书归属。self-表示使用该账号自身的证书，others-表示引用其他账号的证书，none-表示没有证书
                     * 
                     */
                    std::string GetCertificateAttribution() const;

                    /**
                     * 设置证书归属。self-表示使用该账号自身的证书，others-表示引用其他账号的证书，none-表示没有证书
                     * @param _certificateAttribution 证书归属。self-表示使用该账号自身的证书，others-表示引用其他账号的证书，none-表示没有证书
                     * 
                     */
                    void SetCertificateAttribution(const std::string& _certificateAttribution);

                    /**
                     * 判断参数 CertificateAttribution 是否已赋值
                     * @return CertificateAttribution 是否已赋值
                     * 
                     */
                    bool CertificateAttributionHasBeenSet() const;

                    /**
                     * 获取开通TDE加密时引用的其他主账号ID
                     * @return QuoteUin 开通TDE加密时引用的其他主账号ID
                     * 
                     */
                    std::string GetQuoteUin() const;

                    /**
                     * 设置开通TDE加密时引用的其他主账号ID
                     * @param _quoteUin 开通TDE加密时引用的其他主账号ID
                     * 
                     */
                    void SetQuoteUin(const std::string& _quoteUin);

                    /**
                     * 判断参数 QuoteUin 是否已赋值
                     * @return QuoteUin 是否已赋值
                     * 
                     */
                    bool QuoteUinHasBeenSet() const;

                    /**
                     * 获取KMS中购买的用户主密钥ID（CMK）
                     * @return CMKId KMS中购买的用户主密钥ID（CMK）
                     * 
                     */
                    std::string GetCMKId() const;

                    /**
                     * 设置KMS中购买的用户主密钥ID（CMK）
                     * @param _cMKId KMS中购买的用户主密钥ID（CMK）
                     * 
                     */
                    void SetCMKId(const std::string& _cMKId);

                    /**
                     * 判断参数 CMKId 是否已赋值
                     * @return CMKId 是否已赋值
                     * 
                     */
                    bool CMKIdHasBeenSet() const;

                    /**
                     * 获取CMK所属的地域，不同地域的CMK不互通
                     * @return CMKRegion CMK所属的地域，不同地域的CMK不互通
                     * 
                     */
                    std::string GetCMKRegion() const;

                    /**
                     * 设置CMK所属的地域，不同地域的CMK不互通
                     * @param _cMKRegion CMK所属的地域，不同地域的CMK不互通
                     * 
                     */
                    void SetCMKRegion(const std::string& _cMKRegion);

                    /**
                     * 判断参数 CMKRegion 是否已赋值
                     * @return CMKRegion 是否已赋值
                     * 
                     */
                    bool CMKRegionHasBeenSet() const;

                private:

                    /**
                     * 是否已开通TDE加密，enable-已开通，disable-未开通
                     */
                    std::string m_encryption;
                    bool m_encryptionHasBeenSet;

                    /**
                     * 证书归属。self-表示使用该账号自身的证书，others-表示引用其他账号的证书，none-表示没有证书
                     */
                    std::string m_certificateAttribution;
                    bool m_certificateAttributionHasBeenSet;

                    /**
                     * 开通TDE加密时引用的其他主账号ID
                     */
                    std::string m_quoteUin;
                    bool m_quoteUinHasBeenSet;

                    /**
                     * KMS中购买的用户主密钥ID（CMK）
                     */
                    std::string m_cMKId;
                    bool m_cMKIdHasBeenSet;

                    /**
                     * CMK所属的地域，不同地域的CMK不互通
                     */
                    std::string m_cMKRegion;
                    bool m_cMKRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_TDECONFIGATTRIBUTE_H_
