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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_SCDNDOMAIN_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_SCDNDOMAIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 聚合了SCDN域名的基本信息
                */
                class ScdnDomain : public AbstractModel
                {
                public:
                    ScdnDomain();
                    ~ScdnDomain() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取当前状态，取值online | offline | process
                     * @return Status 当前状态，取值online | offline | process
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置当前状态，取值online | offline | process
                     * @param _status 当前状态，取值online | offline | process
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Waf 状态默认为‘/’，取值 close | intercept | observe
                     * @return Waf Waf 状态默认为‘/’，取值 close | intercept | observe
                     * 
                     */
                    std::string GetWaf() const;

                    /**
                     * 设置Waf 状态默认为‘/’，取值 close | intercept | observe
                     * @param _waf Waf 状态默认为‘/’，取值 close | intercept | observe
                     * 
                     */
                    void SetWaf(const std::string& _waf);

                    /**
                     * 判断参数 Waf 是否已赋值
                     * @return Waf 是否已赋值
                     * 
                     */
                    bool WafHasBeenSet() const;

                    /**
                     * 获取Acl 状态默认为‘/’，取值 close | open
                     * @return Acl Acl 状态默认为‘/’，取值 close | open
                     * 
                     */
                    std::string GetAcl() const;

                    /**
                     * 设置Acl 状态默认为‘/’，取值 close | open
                     * @param _acl Acl 状态默认为‘/’，取值 close | open
                     * 
                     */
                    void SetAcl(const std::string& _acl);

                    /**
                     * 判断参数 Acl 是否已赋值
                     * @return Acl 是否已赋值
                     * 
                     */
                    bool AclHasBeenSet() const;

                    /**
                     * 获取CC 状态默认为‘/’，取值 close | open
                     * @return CC CC 状态默认为‘/’，取值 close | open
                     * 
                     */
                    std::string GetCC() const;

                    /**
                     * 设置CC 状态默认为‘/’，取值 close | open
                     * @param _cC CC 状态默认为‘/’，取值 close | open
                     * 
                     */
                    void SetCC(const std::string& _cC);

                    /**
                     * 判断参数 CC 是否已赋值
                     * @return CC 是否已赋值
                     * 
                     */
                    bool CCHasBeenSet() const;

                    /**
                     * 获取Ddos 状态默认为‘/’，取值 close | open
                     * @return Ddos Ddos 状态默认为‘/’，取值 close | open
                     * 
                     */
                    std::string GetDdos() const;

                    /**
                     * 设置Ddos 状态默认为‘/’，取值 close | open
                     * @param _ddos Ddos 状态默认为‘/’，取值 close | open
                     * 
                     */
                    void SetDdos(const std::string& _ddos);

                    /**
                     * 判断参数 Ddos 是否已赋值
                     * @return Ddos 是否已赋值
                     * 
                     */
                    bool DdosHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Acl 规则数
                     * @return AclRuleNumbers Acl 规则数
                     * 
                     */
                    uint64_t GetAclRuleNumbers() const;

                    /**
                     * 设置Acl 规则数
                     * @param _aclRuleNumbers Acl 规则数
                     * 
                     */
                    void SetAclRuleNumbers(const uint64_t& _aclRuleNumbers);

                    /**
                     * 判断参数 AclRuleNumbers 是否已赋值
                     * @return AclRuleNumbers 是否已赋值
                     * 
                     */
                    bool AclRuleNumbersHasBeenSet() const;

                    /**
                     * 获取Bot 状态默认为‘/’，取值 close | open
                     * @return Bot Bot 状态默认为‘/’，取值 close | open
                     * 
                     */
                    std::string GetBot() const;

                    /**
                     * 设置Bot 状态默认为‘/’，取值 close | open
                     * @param _bot Bot 状态默认为‘/’，取值 close | open
                     * 
                     */
                    void SetBot(const std::string& _bot);

                    /**
                     * 判断参数 Bot 是否已赋值
                     * @return Bot 是否已赋值
                     * 
                     */
                    bool BotHasBeenSet() const;

                    /**
                     * 获取域名加速区域，取值global | mainland |  overseas
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Area 域名加速区域，取值global | mainland |  overseas
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置域名加速区域，取值global | mainland |  overseas
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _area 域名加速区域，取值global | mainland |  overseas
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取waf规则等级，可取100|200|300
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WafLevel waf规则等级，可取100|200|300
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWafLevel() const;

                    /**
                     * 设置waf规则等级，可取100|200|300
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wafLevel waf规则等级，可取100|200|300
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWafLevel(const int64_t& _wafLevel);

                    /**
                     * 判断参数 WafLevel 是否已赋值
                     * @return WafLevel 是否已赋值
                     * 
                     */
                    bool WafLevelHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 当前状态，取值online | offline | process
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Waf 状态默认为‘/’，取值 close | intercept | observe
                     */
                    std::string m_waf;
                    bool m_wafHasBeenSet;

                    /**
                     * Acl 状态默认为‘/’，取值 close | open
                     */
                    std::string m_acl;
                    bool m_aclHasBeenSet;

                    /**
                     * CC 状态默认为‘/’，取值 close | open
                     */
                    std::string m_cC;
                    bool m_cCHasBeenSet;

                    /**
                     * Ddos 状态默认为‘/’，取值 close | open
                     */
                    std::string m_ddos;
                    bool m_ddosHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Acl 规则数
                     */
                    uint64_t m_aclRuleNumbers;
                    bool m_aclRuleNumbersHasBeenSet;

                    /**
                     * Bot 状态默认为‘/’，取值 close | open
                     */
                    std::string m_bot;
                    bool m_botHasBeenSet;

                    /**
                     * 域名加速区域，取值global | mainland |  overseas
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * waf规则等级，可取100|200|300
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_wafLevel;
                    bool m_wafLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_SCDNDOMAIN_H_
