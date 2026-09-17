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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYVODDOMAINCONFIGREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYVODDOMAINCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/RefererAuthPolicy.h>
#include <tencentcloud/vod/v20180717/model/UrlSignatureAuthPolicy.h>
#include <tencentcloud/vod/v20180717/model/DomainQUICConfig.h>
#include <tencentcloud/vod/v20180717/model/IPFilterPolicy.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ModifyVodDomainConfig请求参数结构体
                */
                class ModifyVodDomainConfigRequest : public AbstractModel
                {
                public:
                    ModifyVodDomainConfigRequest();
                    ~ModifyVodDomainConfigRequest() = default;
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
                     * 获取<p><a href="/document/product/266/14046">Referer 防盗链</a>规则。</p>
                     * @return RefererAuthPolicy <p><a href="/document/product/266/14046">Referer 防盗链</a>规则。</p>
                     * 
                     */
                    RefererAuthPolicy GetRefererAuthPolicy() const;

                    /**
                     * 设置<p><a href="/document/product/266/14046">Referer 防盗链</a>规则。</p>
                     * @param _refererAuthPolicy <p><a href="/document/product/266/14046">Referer 防盗链</a>规则。</p>
                     * 
                     */
                    void SetRefererAuthPolicy(const RefererAuthPolicy& _refererAuthPolicy);

                    /**
                     * 判断参数 RefererAuthPolicy 是否已赋值
                     * @return RefererAuthPolicy 是否已赋值
                     * 
                     */
                    bool RefererAuthPolicyHasBeenSet() const;

                    /**
                     * 获取<p><a href="/document/product/266/14047">Key 防盗链</a>规则。</p>
                     * @return UrlSignatureAuthPolicy <p><a href="/document/product/266/14047">Key 防盗链</a>规则。</p>
                     * 
                     */
                    UrlSignatureAuthPolicy GetUrlSignatureAuthPolicy() const;

                    /**
                     * 设置<p><a href="/document/product/266/14047">Key 防盗链</a>规则。</p>
                     * @param _urlSignatureAuthPolicy <p><a href="/document/product/266/14047">Key 防盗链</a>规则。</p>
                     * 
                     */
                    void SetUrlSignatureAuthPolicy(const UrlSignatureAuthPolicy& _urlSignatureAuthPolicy);

                    /**
                     * 判断参数 UrlSignatureAuthPolicy 是否已赋值
                     * @return UrlSignatureAuthPolicy 是否已赋值
                     * 
                     */
                    bool UrlSignatureAuthPolicyHasBeenSet() const;

                    /**
                     * 获取<p>QUIC 配置。</p>
                     * @return QUICConfig <p>QUIC 配置。</p>
                     * 
                     */
                    DomainQUICConfig GetQUICConfig() const;

                    /**
                     * 设置<p>QUIC 配置。</p>
                     * @param _qUICConfig <p>QUIC 配置。</p>
                     * 
                     */
                    void SetQUICConfig(const DomainQUICConfig& _qUICConfig);

                    /**
                     * 判断参数 QUICConfig 是否已赋值
                     * @return QUICConfig 是否已赋值
                     * 
                     */
                    bool QUICConfigHasBeenSet() const;

                    /**
                     * 获取<p>IP 访问限制规则。</p>
                     * @return IPFilterPolicy <p>IP 访问限制规则。</p>
                     * 
                     */
                    IPFilterPolicy GetIPFilterPolicy() const;

                    /**
                     * 设置<p>IP 访问限制规则。</p>
                     * @param _iPFilterPolicy <p>IP 访问限制规则。</p>
                     * 
                     */
                    void SetIPFilterPolicy(const IPFilterPolicy& _iPFilterPolicy);

                    /**
                     * 判断参数 IPFilterPolicy 是否已赋值
                     * @return IPFilterPolicy 是否已赋值
                     * 
                     */
                    bool IPFilterPolicyHasBeenSet() const;

                private:

                    /**
                     * <p>域名。</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p><a href="/document/product/266/14046">Referer 防盗链</a>规则。</p>
                     */
                    RefererAuthPolicy m_refererAuthPolicy;
                    bool m_refererAuthPolicyHasBeenSet;

                    /**
                     * <p><a href="/document/product/266/14047">Key 防盗链</a>规则。</p>
                     */
                    UrlSignatureAuthPolicy m_urlSignatureAuthPolicy;
                    bool m_urlSignatureAuthPolicyHasBeenSet;

                    /**
                     * <p>QUIC 配置。</p>
                     */
                    DomainQUICConfig m_qUICConfig;
                    bool m_qUICConfigHasBeenSet;

                    /**
                     * <p>IP 访问限制规则。</p>
                     */
                    IPFilterPolicy m_iPFilterPolicy;
                    bool m_iPFilterPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYVODDOMAINCONFIGREQUEST_H_
