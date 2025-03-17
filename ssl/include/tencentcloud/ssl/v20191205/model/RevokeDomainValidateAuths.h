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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_REVOKEDOMAINVALIDATEAUTHS_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_REVOKEDOMAINVALIDATEAUTHS_H_

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
                * 吊销证书域名验证信息。
                */
                class RevokeDomainValidateAuths : public AbstractModel
                {
                public:
                    RevokeDomainValidateAuths();
                    ~RevokeDomainValidateAuths() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DV 认证值路径。
                     * @return DomainValidateAuthPath DV 认证值路径。
                     * 
                     */
                    std::string GetDomainValidateAuthPath() const;

                    /**
                     * 设置DV 认证值路径。
                     * @param _domainValidateAuthPath DV 认证值路径。
                     * 
                     */
                    void SetDomainValidateAuthPath(const std::string& _domainValidateAuthPath);

                    /**
                     * 判断参数 DomainValidateAuthPath 是否已赋值
                     * @return DomainValidateAuthPath 是否已赋值
                     * 
                     */
                    bool DomainValidateAuthPathHasBeenSet() const;

                    /**
                     * 获取DV 认证 KEY。
                     * @return DomainValidateAuthKey DV 认证 KEY。
                     * 
                     */
                    std::string GetDomainValidateAuthKey() const;

                    /**
                     * 设置DV 认证 KEY。
                     * @param _domainValidateAuthKey DV 认证 KEY。
                     * 
                     */
                    void SetDomainValidateAuthKey(const std::string& _domainValidateAuthKey);

                    /**
                     * 判断参数 DomainValidateAuthKey 是否已赋值
                     * @return DomainValidateAuthKey 是否已赋值
                     * 
                     */
                    bool DomainValidateAuthKeyHasBeenSet() const;

                    /**
                     * 获取DV 认证值。
                     * @return DomainValidateAuthValue DV 认证值。
                     * 
                     */
                    std::string GetDomainValidateAuthValue() const;

                    /**
                     * 设置DV 认证值。
                     * @param _domainValidateAuthValue DV 认证值。
                     * 
                     */
                    void SetDomainValidateAuthValue(const std::string& _domainValidateAuthValue);

                    /**
                     * 判断参数 DomainValidateAuthValue 是否已赋值
                     * @return DomainValidateAuthValue 是否已赋值
                     * 
                     */
                    bool DomainValidateAuthValueHasBeenSet() const;

                    /**
                     * 获取DV 认证域名。
                     * @return DomainValidateAuthDomain DV 认证域名。
                     * 
                     */
                    std::string GetDomainValidateAuthDomain() const;

                    /**
                     * 设置DV 认证域名。
                     * @param _domainValidateAuthDomain DV 认证域名。
                     * 
                     */
                    void SetDomainValidateAuthDomain(const std::string& _domainValidateAuthDomain);

                    /**
                     * 判断参数 DomainValidateAuthDomain 是否已赋值
                     * @return DomainValidateAuthDomain 是否已赋值
                     * 
                     */
                    bool DomainValidateAuthDomainHasBeenSet() const;

                private:

                    /**
                     * DV 认证值路径。
                     */
                    std::string m_domainValidateAuthPath;
                    bool m_domainValidateAuthPathHasBeenSet;

                    /**
                     * DV 认证 KEY。
                     */
                    std::string m_domainValidateAuthKey;
                    bool m_domainValidateAuthKeyHasBeenSet;

                    /**
                     * DV 认证值。
                     */
                    std::string m_domainValidateAuthValue;
                    bool m_domainValidateAuthValueHasBeenSet;

                    /**
                     * DV 认证域名。
                     */
                    std::string m_domainValidateAuthDomain;
                    bool m_domainValidateAuthDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_REVOKEDOMAINVALIDATEAUTHS_H_
