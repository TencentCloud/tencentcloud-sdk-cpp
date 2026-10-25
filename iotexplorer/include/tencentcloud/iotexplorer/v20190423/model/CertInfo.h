/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CERTINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CERTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
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
                     * 获取<p>证书名称</p>
                     * @return CertName <p>证书名称</p>
                     * 
                     */
                    std::string GetCertName() const;

                    /**
                     * 设置<p>证书名称</p>
                     * @param _certName <p>证书名称</p>
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
                     * 获取<p>证书序列号</p>
                     * @return CertSN <p>证书序列号</p>
                     * 
                     */
                    std::string GetCertSN() const;

                    /**
                     * 设置<p>证书序列号</p>
                     * @param _certSN <p>证书序列号</p>
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
                     * 获取<p>证书颁发者名称（颁发机构的 CN）</p>
                     * @return IssuerName <p>证书颁发者名称（颁发机构的 CN）</p>
                     * 
                     */
                    std::string GetIssuerName() const;

                    /**
                     * 设置<p>证书颁发者名称（颁发机构的 CN）</p>
                     * @param _issuerName <p>证书颁发者名称（颁发机构的 CN）</p>
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
                     * 获取<p>证书主题，即证书持有者信息</p>
                     * @return Subject <p>证书主题，即证书持有者信息</p>
                     * 
                     */
                    std::string GetSubject() const;

                    /**
                     * 设置<p>证书主题，即证书持有者信息</p>
                     * @param _subject <p>证书主题，即证书持有者信息</p>
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
                     * 获取<p>证书创建时间，Unix 时间戳，</p><p>单位：秒</p>
                     * @return CreateTime <p>证书创建时间，Unix 时间戳，</p><p>单位：秒</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>证书创建时间，Unix 时间戳，</p><p>单位：秒</p>
                     * @param _createTime <p>证书创建时间，Unix 时间戳，</p><p>单位：秒</p>
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
                     * 获取<p>证书生效时间，Unix 时间戳，</p><p>单位：秒</p>
                     * @return EffectiveTime <p>证书生效时间，Unix 时间戳，</p><p>单位：秒</p>
                     * 
                     */
                    uint64_t GetEffectiveTime() const;

                    /**
                     * 设置<p>证书生效时间，Unix 时间戳，</p><p>单位：秒</p>
                     * @param _effectiveTime <p>证书生效时间，Unix 时间戳，</p><p>单位：秒</p>
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
                     * 获取<p>证书过期时间，Unix 时间戳，</p><p>单位：秒</p>
                     * @return ExpireTime <p>证书过期时间，Unix 时间戳，</p><p>单位：秒</p>
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置<p>证书过期时间，Unix 时间戳，</p><p>单位：秒</p>
                     * @param _expireTime <p>证书过期时间，Unix 时间戳，</p><p>单位：秒</p>
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
                     * 获取<p>证书内容，PEM 格式文本</p>
                     * @return CertText <p>证书内容，PEM 格式文本</p>
                     * 
                     */
                    std::string GetCertText() const;

                    /**
                     * 设置<p>证书内容，PEM 格式文本</p>
                     * @param _certText <p>证书内容，PEM 格式文本</p>
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
                     * <p>证书名称</p>
                     */
                    std::string m_certName;
                    bool m_certNameHasBeenSet;

                    /**
                     * <p>证书序列号</p>
                     */
                    std::string m_certSN;
                    bool m_certSNHasBeenSet;

                    /**
                     * <p>证书颁发者名称（颁发机构的 CN）</p>
                     */
                    std::string m_issuerName;
                    bool m_issuerNameHasBeenSet;

                    /**
                     * <p>证书主题，即证书持有者信息</p>
                     */
                    std::string m_subject;
                    bool m_subjectHasBeenSet;

                    /**
                     * <p>证书创建时间，Unix 时间戳，</p><p>单位：秒</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>证书生效时间，Unix 时间戳，</p><p>单位：秒</p>
                     */
                    uint64_t m_effectiveTime;
                    bool m_effectiveTimeHasBeenSet;

                    /**
                     * <p>证书过期时间，Unix 时间戳，</p><p>单位：秒</p>
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>证书内容，PEM 格式文本</p>
                     */
                    std::string m_certText;
                    bool m_certTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CERTINFO_H_
