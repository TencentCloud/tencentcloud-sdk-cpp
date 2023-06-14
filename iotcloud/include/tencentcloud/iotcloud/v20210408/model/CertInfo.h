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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_CERTINFO_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_CERTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * X509证书信息
                */
                class CertInfo : public AbstractModel
                {
                public:
                    CertInfo();
                    ~CertInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取证书名称
                     * @return CertName 证书名称
                     * 
                     */
                    std::string GetCertName() const;

                    /**
                     * 设置证书名称
                     * @param _certName 证书名称
                     * 
                     */
                    void SetCertName(const std::string& _certName);

                    /**
                     * 判断参数 CertName 是否已赋值
                     * @return CertName 是否已赋值
                     * 
                     */
                    bool CertNameHasBeenSet() const;

                    /**
                     * 获取证书的序列号，16进制编码
                     * @return CertSN 证书的序列号，16进制编码
                     * 
                     */
                    std::string GetCertSN() const;

                    /**
                     * 设置证书的序列号，16进制编码
                     * @param _certSN 证书的序列号，16进制编码
                     * 
                     */
                    void SetCertSN(const std::string& _certSN);

                    /**
                     * 判断参数 CertSN 是否已赋值
                     * @return CertSN 是否已赋值
                     * 
                     */
                    bool CertSNHasBeenSet() const;

                    /**
                     * 获取证书颁发着名称
                     * @return IssuerName 证书颁发着名称
                     * 
                     */
                    std::string GetIssuerName() const;

                    /**
                     * 设置证书颁发着名称
                     * @param _issuerName 证书颁发着名称
                     * 
                     */
                    void SetIssuerName(const std::string& _issuerName);

                    /**
                     * 判断参数 IssuerName 是否已赋值
                     * @return IssuerName 是否已赋值
                     * 
                     */
                    bool IssuerNameHasBeenSet() const;

                    /**
                     * 获取证书主题
                     * @return Subject 证书主题
                     * 
                     */
                    std::string GetSubject() const;

                    /**
                     * 设置证书主题
                     * @param _subject 证书主题
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
                     * 获取证书创建时间，秒级时间戳
                     * @return CreateTime 证书创建时间，秒级时间戳
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置证书创建时间，秒级时间戳
                     * @param _createTime 证书创建时间，秒级时间戳
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取证书生效时间，秒级时间戳
                     * @return EffectiveTime 证书生效时间，秒级时间戳
                     * 
                     */
                    uint64_t GetEffectiveTime() const;

                    /**
                     * 设置证书生效时间，秒级时间戳
                     * @param _effectiveTime 证书生效时间，秒级时间戳
                     * 
                     */
                    void SetEffectiveTime(const uint64_t& _effectiveTime);

                    /**
                     * 判断参数 EffectiveTime 是否已赋值
                     * @return EffectiveTime 是否已赋值
                     * 
                     */
                    bool EffectiveTimeHasBeenSet() const;

                    /**
                     * 获取证书失效时间，秒级时间戳
                     * @return ExpireTime 证书失效时间，秒级时间戳
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置证书失效时间，秒级时间戳
                     * @param _expireTime 证书失效时间，秒级时间戳
                     * 
                     */
                    void SetExpireTime(const uint64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取X509证书内容
                     * @return CertText X509证书内容
                     * 
                     */
                    std::string GetCertText() const;

                    /**
                     * 设置X509证书内容
                     * @param _certText X509证书内容
                     * 
                     */
                    void SetCertText(const std::string& _certText);

                    /**
                     * 判断参数 CertText 是否已赋值
                     * @return CertText 是否已赋值
                     * 
                     */
                    bool CertTextHasBeenSet() const;

                private:

                    /**
                     * 证书名称
                     */
                    std::string m_certName;
                    bool m_certNameHasBeenSet;

                    /**
                     * 证书的序列号，16进制编码
                     */
                    std::string m_certSN;
                    bool m_certSNHasBeenSet;

                    /**
                     * 证书颁发着名称
                     */
                    std::string m_issuerName;
                    bool m_issuerNameHasBeenSet;

                    /**
                     * 证书主题
                     */
                    std::string m_subject;
                    bool m_subjectHasBeenSet;

                    /**
                     * 证书创建时间，秒级时间戳
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 证书生效时间，秒级时间戳
                     */
                    uint64_t m_effectiveTime;
                    bool m_effectiveTimeHasBeenSet;

                    /**
                     * 证书失效时间，秒级时间戳
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * X509证书内容
                     */
                    std::string m_certText;
                    bool m_certTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_CERTINFO_H_
