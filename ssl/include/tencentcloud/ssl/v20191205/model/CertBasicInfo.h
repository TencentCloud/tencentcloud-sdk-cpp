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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CERTBASICINFO_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CERTBASICINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * 证书基本信息
                */
                class CertBasicInfo : public AbstractModel
                {
                public:
                    CertBasicInfo();
                    ~CertBasicInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取颁发者
                     * @return Issuer 颁发者
                     * 
                     */
                    std::string GetIssuer() const;

                    /**
                     * 设置颁发者
                     * @param _issuer 颁发者
                     * 
                     */
                    void SetIssuer(const std::string& _issuer);

                    /**
                     * 判断参数 Issuer 是否已赋值
                     * @return Issuer 是否已赋值
                     * 
                     */
                    bool IssuerHasBeenSet() const;

                    /**
                     * 获取颁发给
                     * @return Subject 颁发给
                     * 
                     */
                    std::string GetSubject() const;

                    /**
                     * 设置颁发给
                     * @param _subject 颁发给
                     * 
                     */
                    void SetSubject(const std::string& _subject);

                    /**
                     * 判断参数 Subject 是否已赋值
                     * @return Subject 是否已赋值
                     * 
                     */
                    bool SubjectHasBeenSet() const;

                    /**
                     * 获取证书指纹
                     * @return Fingerprint 证书指纹
                     * 
                     */
                    std::string GetFingerprint() const;

                    /**
                     * 设置证书指纹
                     * @param _fingerprint 证书指纹
                     * 
                     */
                    void SetFingerprint(const std::string& _fingerprint);

                    /**
                     * 判断参数 Fingerprint 是否已赋值
                     * @return Fingerprint 是否已赋值
                     * 
                     */
                    bool FingerprintHasBeenSet() const;

                    /**
                     * 获取证书有效期开始时间
                     * @return ValidFrom 证书有效期开始时间
                     * 
                     */
                    std::string GetValidFrom() const;

                    /**
                     * 设置证书有效期开始时间
                     * @param _validFrom 证书有效期开始时间
                     * 
                     */
                    void SetValidFrom(const std::string& _validFrom);

                    /**
                     * 判断参数 ValidFrom 是否已赋值
                     * @return ValidFrom 是否已赋值
                     * 
                     */
                    bool ValidFromHasBeenSet() const;

                    /**
                     * 获取证书有效期结束时间
                     * @return ValidTo 证书有效期结束时间
                     * 
                     */
                    std::string GetValidTo() const;

                    /**
                     * 设置证书有效期结束时间
                     * @param _validTo 证书有效期结束时间
                     * 
                     */
                    void SetValidTo(const std::string& _validTo);

                    /**
                     * 判断参数 ValidTo 是否已赋值
                     * @return ValidTo 是否已赋值
                     * 
                     */
                    bool ValidToHasBeenSet() const;

                private:

                    /**
                     * 颁发者
                     */
                    std::string m_issuer;
                    bool m_issuerHasBeenSet;

                    /**
                     * 颁发给
                     */
                    std::string m_subject;
                    bool m_subjectHasBeenSet;

                    /**
                     * 证书指纹
                     */
                    std::string m_fingerprint;
                    bool m_fingerprintHasBeenSet;

                    /**
                     * 证书有效期开始时间
                     */
                    std::string m_validFrom;
                    bool m_validFromHasBeenSet;

                    /**
                     * 证书有效期结束时间
                     */
                    std::string m_validTo;
                    bool m_validToHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CERTBASICINFO_H_
