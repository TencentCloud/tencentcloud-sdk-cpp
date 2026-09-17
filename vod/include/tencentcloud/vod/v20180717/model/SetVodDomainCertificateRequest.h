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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SETVODDOMAINCERTIFICATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SETVODDOMAINCERTIFICATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * SetVodDomainCertificate请求参数结构体
                */
                class SetVodDomainCertificateRequest : public AbstractModel
                {
                public:
                    SetVodDomainCertificateRequest();
                    ~SetVodDomainCertificateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>域名。</p>
                     * @return Domain <p>域名。</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>域名。</p>
                     * @param _domain <p>域名。</p>
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
                     * 获取<p>本次接口调用的操作类型，可选值：</p><li>Set：设置域名的 HTTPS 所需证书；</li><li>Clear: 清空域名 HTTPS 配置，清空后该域名无法支持 HTTPS 访问。</li>
                     * @return Operation <p>本次接口调用的操作类型，可选值：</p><li>Set：设置域名的 HTTPS 所需证书；</li><li>Clear: 清空域名 HTTPS 配置，清空后该域名无法支持 HTTPS 访问。</li>
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置<p>本次接口调用的操作类型，可选值：</p><li>Set：设置域名的 HTTPS 所需证书；</li><li>Clear: 清空域名 HTTPS 配置，清空后该域名无法支持 HTTPS 访问。</li>
                     * @param _operation <p>本次接口调用的操作类型，可选值：</p><li>Set：设置域名的 HTTPS 所需证书；</li><li>Clear: 清空域名 HTTPS 配置，清空后该域名无法支持 HTTPS 访问。</li>
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取<p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @return SubAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @param _subAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p><a href="/document/product/400/7572">腾讯云SSL</a> 上传的证书 ID。清空域名 HTTPS 配置时无需填写该字段。</p>
                     * @return CertID <p><a href="/document/product/400/7572">腾讯云SSL</a> 上传的证书 ID。清空域名 HTTPS 配置时无需填写该字段。</p>
                     * 
                     */
                    std::string GetCertID() const;

                    /**
                     * 设置<p><a href="/document/product/400/7572">腾讯云SSL</a> 上传的证书 ID。清空域名 HTTPS 配置时无需填写该字段。</p>
                     * @param _certID <p><a href="/document/product/400/7572">腾讯云SSL</a> 上传的证书 ID。清空域名 HTTPS 配置时无需填写该字段。</p>
                     * 
                     */
                    void SetCertID(const std::string& _certID);

                    /**
                     * 判断参数 CertID 是否已赋值
                     * @return CertID 是否已赋值
                     * 
                     */
                    bool CertIDHasBeenSet() const;

                private:

                    /**
                     * <p>域名。</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>本次接口调用的操作类型，可选值：</p><li>Set：设置域名的 HTTPS 所需证书；</li><li>Clear: 清空域名 HTTPS 配置，清空后该域名无法支持 HTTPS 访问。</li>
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p><a href="/document/product/400/7572">腾讯云SSL</a> 上传的证书 ID。清空域名 HTTPS 配置时无需填写该字段。</p>
                     */
                    std::string m_certID;
                    bool m_certIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SETVODDOMAINCERTIFICATEREQUEST_H_
