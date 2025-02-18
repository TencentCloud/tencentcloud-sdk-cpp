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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CLBLISTENERRULE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CLBLISTENERRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/Certificate.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * CLB监听器规则
                */
                class ClbListenerRule : public AbstractModel
                {
                public:
                    ClbListenerRule();
                    ~ClbListenerRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则ID
                     * @return LocationId 规则ID
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置规则ID
                     * @param _locationId 规则ID
                     * 
                     */
                    void SetLocationId(const std::string& _locationId);

                    /**
                     * 判断参数 LocationId 是否已赋值
                     * @return LocationId 是否已赋值
                     * 
                     */
                    bool LocationIdHasBeenSet() const;

                    /**
                     * 获取规则绑定的域名
                     * @return Domain 规则绑定的域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置规则绑定的域名
                     * @param _domain 规则绑定的域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取规则是否匹配待绑定证书的域名
                     * @return IsMatch 规则是否匹配待绑定证书的域名
                     * 
                     */
                    bool GetIsMatch() const;

                    /**
                     * 设置规则是否匹配待绑定证书的域名
                     * @param _isMatch 规则是否匹配待绑定证书的域名
                     * 
                     */
                    void SetIsMatch(const bool& _isMatch);

                    /**
                     * 判断参数 IsMatch 是否已赋值
                     * @return IsMatch 是否已赋值
                     * 
                     */
                    bool IsMatchHasBeenSet() const;

                    /**
                     * 获取规则已绑定的证书数据
                     * @return Certificate 规则已绑定的证书数据
                     * 
                     */
                    Certificate GetCertificate() const;

                    /**
                     * 设置规则已绑定的证书数据
                     * @param _certificate 规则已绑定的证书数据
                     * 
                     */
                    void SetCertificate(const Certificate& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     * 
                     */
                    bool CertificateHasBeenSet() const;

                    /**
                     * 获取不匹配域名列表
                     * @return NoMatchDomains 不匹配域名列表
                     * 
                     */
                    std::vector<std::string> GetNoMatchDomains() const;

                    /**
                     * 设置不匹配域名列表
                     * @param _noMatchDomains 不匹配域名列表
                     * 
                     */
                    void SetNoMatchDomains(const std::vector<std::string>& _noMatchDomains);

                    /**
                     * 判断参数 NoMatchDomains 是否已赋值
                     * @return NoMatchDomains 是否已赋值
                     * 
                     */
                    bool NoMatchDomainsHasBeenSet() const;

                    /**
                     * 获取规则绑定的路径
                     * @return Url 规则绑定的路径
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置规则绑定的路径
                     * @param _url 规则绑定的路径
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * 规则ID
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * 规则绑定的域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 规则是否匹配待绑定证书的域名
                     */
                    bool m_isMatch;
                    bool m_isMatchHasBeenSet;

                    /**
                     * 规则已绑定的证书数据
                     */
                    Certificate m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * 不匹配域名列表
                     */
                    std::vector<std::string> m_noMatchDomains;
                    bool m_noMatchDomainsHasBeenSet;

                    /**
                     * 规则绑定的路径
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CLBLISTENERRULE_H_
