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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_CREATESCDNDOMAINREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_CREATESCDNDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/ScdnWafConfig.h>
#include <tencentcloud/cdn/v20180606/model/ScdnAclConfig.h>
#include <tencentcloud/cdn/v20180606/model/ScdnConfig.h>
#include <tencentcloud/cdn/v20180606/model/ScdnDdosConfig.h>
#include <tencentcloud/cdn/v20180606/model/ScdnBotConfig.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * CreateScdnDomain请求参数结构体
                */
                class CreateScdnDomainRequest : public AbstractModel
                {
                public:
                    CreateScdnDomainRequest();
                    ~CreateScdnDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
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
                     * 获取Web 攻击防护（WAF）配置
                     * @return Waf Web 攻击防护（WAF）配置
                     * 
                     */
                    ScdnWafConfig GetWaf() const;

                    /**
                     * 设置Web 攻击防护（WAF）配置
                     * @param _waf Web 攻击防护（WAF）配置
                     * 
                     */
                    void SetWaf(const ScdnWafConfig& _waf);

                    /**
                     * 判断参数 Waf 是否已赋值
                     * @return Waf 是否已赋值
                     * 
                     */
                    bool WafHasBeenSet() const;

                    /**
                     * 获取自定义防护策略配置
                     * @return Acl 自定义防护策略配置
                     * 
                     */
                    ScdnAclConfig GetAcl() const;

                    /**
                     * 设置自定义防护策略配置
                     * @param _acl 自定义防护策略配置
                     * 
                     */
                    void SetAcl(const ScdnAclConfig& _acl);

                    /**
                     * 判断参数 Acl 是否已赋值
                     * @return Acl 是否已赋值
                     * 
                     */
                    bool AclHasBeenSet() const;

                    /**
                     * 获取CC 防护配置，目前 CC 防护默认开启
                     * @return CC CC 防护配置，目前 CC 防护默认开启
                     * 
                     */
                    ScdnConfig GetCC() const;

                    /**
                     * 设置CC 防护配置，目前 CC 防护默认开启
                     * @param _cC CC 防护配置，目前 CC 防护默认开启
                     * 
                     */
                    void SetCC(const ScdnConfig& _cC);

                    /**
                     * 判断参数 CC 是否已赋值
                     * @return CC 是否已赋值
                     * 
                     */
                    bool CCHasBeenSet() const;

                    /**
                     * 获取DDOS 防护配置，目前 DDoS 防护默认开启
                     * @return Ddos DDOS 防护配置，目前 DDoS 防护默认开启
                     * 
                     */
                    ScdnDdosConfig GetDdos() const;

                    /**
                     * 设置DDOS 防护配置，目前 DDoS 防护默认开启
                     * @param _ddos DDOS 防护配置，目前 DDoS 防护默认开启
                     * 
                     */
                    void SetDdos(const ScdnDdosConfig& _ddos);

                    /**
                     * 判断参数 Ddos 是否已赋值
                     * @return Ddos 是否已赋值
                     * 
                     */
                    bool DdosHasBeenSet() const;

                    /**
                     * 获取BOT 防护配置
                     * @return Bot BOT 防护配置
                     * 
                     */
                    ScdnBotConfig GetBot() const;

                    /**
                     * 设置BOT 防护配置
                     * @param _bot BOT 防护配置
                     * 
                     */
                    void SetBot(const ScdnBotConfig& _bot);

                    /**
                     * 判断参数 Bot 是否已赋值
                     * @return Bot 是否已赋值
                     * 
                     */
                    bool BotHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Web 攻击防护（WAF）配置
                     */
                    ScdnWafConfig m_waf;
                    bool m_wafHasBeenSet;

                    /**
                     * 自定义防护策略配置
                     */
                    ScdnAclConfig m_acl;
                    bool m_aclHasBeenSet;

                    /**
                     * CC 防护配置，目前 CC 防护默认开启
                     */
                    ScdnConfig m_cC;
                    bool m_cCHasBeenSet;

                    /**
                     * DDOS 防护配置，目前 DDoS 防护默认开启
                     */
                    ScdnDdosConfig m_ddos;
                    bool m_ddosHasBeenSet;

                    /**
                     * BOT 防护配置
                     */
                    ScdnBotConfig m_bot;
                    bool m_botHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_CREATESCDNDOMAINREQUEST_H_
