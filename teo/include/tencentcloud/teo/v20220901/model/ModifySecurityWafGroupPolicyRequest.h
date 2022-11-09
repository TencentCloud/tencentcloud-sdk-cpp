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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYSECURITYWAFGROUPPOLICYREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYSECURITYWAFGROUPPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/WafRule.h>
#include <tencentcloud/teo/v20220901/model/AiRule.h>
#include <tencentcloud/teo/v20220901/model/WafGroup.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifySecurityWafGroupPolicy请求参数结构体
                */
                class ModifySecurityWafGroupPolicyRequest : public AbstractModel
                {
                public:
                    ModifySecurityWafGroupPolicyRequest();
                    ~ModifySecurityWafGroupPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点Id。当使用ZoneId和Entity时可不填写TemplateId，否则必须填写TemplateId。
                     * @return ZoneId 站点Id。当使用ZoneId和Entity时可不填写TemplateId，否则必须填写TemplateId。
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点Id。当使用ZoneId和Entity时可不填写TemplateId，否则必须填写TemplateId。
                     * @param ZoneId 站点Id。当使用ZoneId和Entity时可不填写TemplateId，否则必须填写TemplateId。
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取子域名。当使用ZoneId和Entity时可不填写TemplateId，否则必须填写TemplateId。
                     * @return Entity 子域名。当使用ZoneId和Entity时可不填写TemplateId，否则必须填写TemplateId。
                     */
                    std::string GetEntity() const;

                    /**
                     * 设置子域名。当使用ZoneId和Entity时可不填写TemplateId，否则必须填写TemplateId。
                     * @param Entity 子域名。当使用ZoneId和Entity时可不填写TemplateId，否则必须填写TemplateId。
                     */
                    void SetEntity(const std::string& _entity);

                    /**
                     * 判断参数 Entity 是否已赋值
                     * @return Entity 是否已赋值
                     */
                    bool EntityHasBeenSet() const;

                    /**
                     * 获取总开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>不填默认为上次的配置。
                     * @return Switch 总开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>不填默认为上次的配置。
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置总开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>不填默认为上次的配置。
                     * @param Switch 总开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>不填默认为上次的配置。
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取规则等级，取值有：
<li> loose：宽松；</li>
<li> normal：正常；</li>
<li> strict：严格；</li>
<li> stricter：超严格；</li>
<li> custom：自定义。</li>不填默认为上次的配置。
                     * @return Level 规则等级，取值有：
<li> loose：宽松；</li>
<li> normal：正常；</li>
<li> strict：严格；</li>
<li> stricter：超严格；</li>
<li> custom：自定义。</li>不填默认为上次的配置。
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置规则等级，取值有：
<li> loose：宽松；</li>
<li> normal：正常；</li>
<li> strict：严格；</li>
<li> stricter：超严格；</li>
<li> custom：自定义。</li>不填默认为上次的配置。
                     * @param Level 规则等级，取值有：
<li> loose：宽松；</li>
<li> normal：正常；</li>
<li> strict：严格；</li>
<li> stricter：超严格；</li>
<li> custom：自定义。</li>不填默认为上次的配置。
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取处置方式，取值有：
<li> block：阻断；</li>
<li> observe：观察。</li>不填默认为上次的配置。
                     * @return Mode 处置方式，取值有：
<li> block：阻断；</li>
<li> observe：观察。</li>不填默认为上次的配置。
                     */
                    std::string GetMode() const;

                    /**
                     * 设置处置方式，取值有：
<li> block：阻断；</li>
<li> observe：观察。</li>不填默认为上次的配置。
                     * @param Mode 处置方式，取值有：
<li> block：阻断；</li>
<li> observe：观察。</li>不填默认为上次的配置。
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取托管规则。不填默认为上次的配置。
                     * @return WafRules 托管规则。不填默认为上次的配置。
                     */
                    WafRule GetWafRules() const;

                    /**
                     * 设置托管规则。不填默认为上次的配置。
                     * @param WafRules 托管规则。不填默认为上次的配置。
                     */
                    void SetWafRules(const WafRule& _wafRules);

                    /**
                     * 判断参数 WafRules 是否已赋值
                     * @return WafRules 是否已赋值
                     */
                    bool WafRulesHasBeenSet() const;

                    /**
                     * 获取AI引擎模式。不填默认为上次的配置。
                     * @return AiRule AI引擎模式。不填默认为上次的配置。
                     */
                    AiRule GetAiRule() const;

                    /**
                     * 设置AI引擎模式。不填默认为上次的配置。
                     * @param AiRule AI引擎模式。不填默认为上次的配置。
                     */
                    void SetAiRule(const AiRule& _aiRule);

                    /**
                     * 判断参数 AiRule 是否已赋值
                     * @return AiRule 是否已赋值
                     */
                    bool AiRuleHasBeenSet() const;

                    /**
                     * 获取托管规则等级组。不填默认为上次的配置。
                     * @return WafGroups 托管规则等级组。不填默认为上次的配置。
                     */
                    std::vector<WafGroup> GetWafGroups() const;

                    /**
                     * 设置托管规则等级组。不填默认为上次的配置。
                     * @param WafGroups 托管规则等级组。不填默认为上次的配置。
                     */
                    void SetWafGroups(const std::vector<WafGroup>& _wafGroups);

                    /**
                     * 判断参数 WafGroups 是否已赋值
                     * @return WafGroups 是否已赋值
                     */
                    bool WafGroupsHasBeenSet() const;

                    /**
                     * 获取模板Id。当使用模板Id时可不填ZoneId和Entity，否则必须填写ZoneId和Entity。
                     * @return TemplateId 模板Id。当使用模板Id时可不填ZoneId和Entity，否则必须填写ZoneId和Entity。
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板Id。当使用模板Id时可不填ZoneId和Entity，否则必须填写ZoneId和Entity。
                     * @param TemplateId 模板Id。当使用模板Id时可不填ZoneId和Entity，否则必须填写ZoneId和Entity。
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                private:

                    /**
                     * 站点Id。当使用ZoneId和Entity时可不填写TemplateId，否则必须填写TemplateId。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 子域名。当使用ZoneId和Entity时可不填写TemplateId，否则必须填写TemplateId。
                     */
                    std::string m_entity;
                    bool m_entityHasBeenSet;

                    /**
                     * 总开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>不填默认为上次的配置。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 规则等级，取值有：
<li> loose：宽松；</li>
<li> normal：正常；</li>
<li> strict：严格；</li>
<li> stricter：超严格；</li>
<li> custom：自定义。</li>不填默认为上次的配置。
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 处置方式，取值有：
<li> block：阻断；</li>
<li> observe：观察。</li>不填默认为上次的配置。
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 托管规则。不填默认为上次的配置。
                     */
                    WafRule m_wafRules;
                    bool m_wafRulesHasBeenSet;

                    /**
                     * AI引擎模式。不填默认为上次的配置。
                     */
                    AiRule m_aiRule;
                    bool m_aiRuleHasBeenSet;

                    /**
                     * 托管规则等级组。不填默认为上次的配置。
                     */
                    std::vector<WafGroup> m_wafGroups;
                    bool m_wafGroupsHasBeenSet;

                    /**
                     * 模板Id。当使用模板Id时可不填ZoneId和Entity，否则必须填写ZoneId和Entity。
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYSECURITYWAFGROUPPOLICYREQUEST_H_
