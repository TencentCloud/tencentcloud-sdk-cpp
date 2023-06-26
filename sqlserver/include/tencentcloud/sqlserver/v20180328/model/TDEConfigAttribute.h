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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QuoteUin 开通TDE加密时引用的其他主账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQuoteUin() const;

                    /**
                     * 设置开通TDE加密时引用的其他主账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _quoteUin 开通TDE加密时引用的其他主账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQuoteUin(const std::string& _quoteUin);

                    /**
                     * 判断参数 QuoteUin 是否已赋值
                     * @return QuoteUin 是否已赋值
                     * 
                     */
                    bool QuoteUinHasBeenSet() const;

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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_quoteUin;
                    bool m_quoteUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_TDECONFIGATTRIBUTE_H_
