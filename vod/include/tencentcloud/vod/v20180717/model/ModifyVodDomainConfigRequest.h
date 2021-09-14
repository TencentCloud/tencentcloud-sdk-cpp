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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYVODDOMAINCONFIGREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYVODDOMAINCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/RefererAuthPolicy.h>
#include <tencentcloud/vod/v20180717/model/UrlSignatureAuthPolicy.h>


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
                     * 获取域名。
                     * @return Domain 域名。
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名。
                     * @param Domain 域名。
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取[Referer 防盗链](/document/product/266/14046)规则。
                     * @return RefererAuthPolicy [Referer 防盗链](/document/product/266/14046)规则。
                     */
                    RefererAuthPolicy GetRefererAuthPolicy() const;

                    /**
                     * 设置[Referer 防盗链](/document/product/266/14046)规则。
                     * @param RefererAuthPolicy [Referer 防盗链](/document/product/266/14046)规则。
                     */
                    void SetRefererAuthPolicy(const RefererAuthPolicy& _refererAuthPolicy);

                    /**
                     * 判断参数 RefererAuthPolicy 是否已赋值
                     * @return RefererAuthPolicy 是否已赋值
                     */
                    bool RefererAuthPolicyHasBeenSet() const;

                    /**
                     * 获取[Key 防盗链](/document/product/266/14047)规则。
                     * @return UrlSignatureAuthPolicy [Key 防盗链](/document/product/266/14047)规则。
                     */
                    UrlSignatureAuthPolicy GetUrlSignatureAuthPolicy() const;

                    /**
                     * 设置[Key 防盗链](/document/product/266/14047)规则。
                     * @param UrlSignatureAuthPolicy [Key 防盗链](/document/product/266/14047)规则。
                     */
                    void SetUrlSignatureAuthPolicy(const UrlSignatureAuthPolicy& _urlSignatureAuthPolicy);

                    /**
                     * 判断参数 UrlSignatureAuthPolicy 是否已赋值
                     * @return UrlSignatureAuthPolicy 是否已赋值
                     */
                    bool UrlSignatureAuthPolicyHasBeenSet() const;

                    /**
                     * 获取点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     * @return SubAppId 点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     * @param SubAppId 点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * 域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * [Referer 防盗链](/document/product/266/14046)规则。
                     */
                    RefererAuthPolicy m_refererAuthPolicy;
                    bool m_refererAuthPolicyHasBeenSet;

                    /**
                     * [Key 防盗链](/document/product/266/14047)规则。
                     */
                    UrlSignatureAuthPolicy m_urlSignatureAuthPolicy;
                    bool m_urlSignatureAuthPolicyHasBeenSet;

                    /**
                     * 点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYVODDOMAINCONFIGREQUEST_H_
