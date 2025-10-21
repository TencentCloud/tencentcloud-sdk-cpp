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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DDOSPROTECTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DDOSPROTECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/DomainDDoSProtection.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 独立 DDoS 防护配置。
                */
                class DDoSProtection : public AbstractModel
                {
                public:
                    DDoSProtection();
                    ~DDoSProtection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指定独立 DDoS 的防护范围。取值为：
<li> protect_all_domains：独立 DDoS 防护对站点内全部域名生效，新接入域名自动开启独立 DDoS 防护，入参为 protect_all_domains 时，入参 DomainDDoSProtections 不作处理；</li>
<li> protect_specified_domains：仅对指定域名生效，具体范围可通过 DomainDDoSProtection 参数指定。</li>
                     * @return ProtectionOption 指定独立 DDoS 的防护范围。取值为：
<li> protect_all_domains：独立 DDoS 防护对站点内全部域名生效，新接入域名自动开启独立 DDoS 防护，入参为 protect_all_domains 时，入参 DomainDDoSProtections 不作处理；</li>
<li> protect_specified_domains：仅对指定域名生效，具体范围可通过 DomainDDoSProtection 参数指定。</li>
                     * 
                     */
                    std::string GetProtectionOption() const;

                    /**
                     * 设置指定独立 DDoS 的防护范围。取值为：
<li> protect_all_domains：独立 DDoS 防护对站点内全部域名生效，新接入域名自动开启独立 DDoS 防护，入参为 protect_all_domains 时，入参 DomainDDoSProtections 不作处理；</li>
<li> protect_specified_domains：仅对指定域名生效，具体范围可通过 DomainDDoSProtection 参数指定。</li>
                     * @param _protectionOption 指定独立 DDoS 的防护范围。取值为：
<li> protect_all_domains：独立 DDoS 防护对站点内全部域名生效，新接入域名自动开启独立 DDoS 防护，入参为 protect_all_domains 时，入参 DomainDDoSProtections 不作处理；</li>
<li> protect_specified_domains：仅对指定域名生效，具体范围可通过 DomainDDoSProtection 参数指定。</li>
                     * 
                     */
                    void SetProtectionOption(const std::string& _protectionOption);

                    /**
                     * 判断参数 ProtectionOption 是否已赋值
                     * @return ProtectionOption 是否已赋值
                     * 
                     */
                    bool ProtectionOptionHasBeenSet() const;

                    /**
                     * 获取域名的独立 DDoS 防护配置。在入参场景中：
<li> 当 ProtectionOption 保持为 protect_specified_domains 时：未填写的域名维持原有独立 DDoS 防护配置不变，显式指定的域名​按传入参数更新；</li>
<li> 当 ProtectionOption 由 protect_all_domains 切换为 protect_specified_domains 时：若 DomainDDoSProtections 传空，停用站点下全部域名的独立 DDoS 防护；若 DomainDDoSProtections 不为空，参数中指定的域名停用或保持独立 DDoS 防护，其余未列出的域名统一停用独立 DDoS 防护。</li>
                     * @return DomainDDoSProtections 域名的独立 DDoS 防护配置。在入参场景中：
<li> 当 ProtectionOption 保持为 protect_specified_domains 时：未填写的域名维持原有独立 DDoS 防护配置不变，显式指定的域名​按传入参数更新；</li>
<li> 当 ProtectionOption 由 protect_all_domains 切换为 protect_specified_domains 时：若 DomainDDoSProtections 传空，停用站点下全部域名的独立 DDoS 防护；若 DomainDDoSProtections 不为空，参数中指定的域名停用或保持独立 DDoS 防护，其余未列出的域名统一停用独立 DDoS 防护。</li>
                     * 
                     */
                    std::vector<DomainDDoSProtection> GetDomainDDoSProtections() const;

                    /**
                     * 设置域名的独立 DDoS 防护配置。在入参场景中：
<li> 当 ProtectionOption 保持为 protect_specified_domains 时：未填写的域名维持原有独立 DDoS 防护配置不变，显式指定的域名​按传入参数更新；</li>
<li> 当 ProtectionOption 由 protect_all_domains 切换为 protect_specified_domains 时：若 DomainDDoSProtections 传空，停用站点下全部域名的独立 DDoS 防护；若 DomainDDoSProtections 不为空，参数中指定的域名停用或保持独立 DDoS 防护，其余未列出的域名统一停用独立 DDoS 防护。</li>
                     * @param _domainDDoSProtections 域名的独立 DDoS 防护配置。在入参场景中：
<li> 当 ProtectionOption 保持为 protect_specified_domains 时：未填写的域名维持原有独立 DDoS 防护配置不变，显式指定的域名​按传入参数更新；</li>
<li> 当 ProtectionOption 由 protect_all_domains 切换为 protect_specified_domains 时：若 DomainDDoSProtections 传空，停用站点下全部域名的独立 DDoS 防护；若 DomainDDoSProtections 不为空，参数中指定的域名停用或保持独立 DDoS 防护，其余未列出的域名统一停用独立 DDoS 防护。</li>
                     * 
                     */
                    void SetDomainDDoSProtections(const std::vector<DomainDDoSProtection>& _domainDDoSProtections);

                    /**
                     * 判断参数 DomainDDoSProtections 是否已赋值
                     * @return DomainDDoSProtections 是否已赋值
                     * 
                     */
                    bool DomainDDoSProtectionsHasBeenSet() const;

                    /**
                     * 获取共享 CNAME 的独立 DDoS 防护配置。仅作为出参使用。
                     * @return SharedCNAMEDDoSProtections 共享 CNAME 的独立 DDoS 防护配置。仅作为出参使用。
                     * 
                     */
                    std::vector<DomainDDoSProtection> GetSharedCNAMEDDoSProtections() const;

                    /**
                     * 设置共享 CNAME 的独立 DDoS 防护配置。仅作为出参使用。
                     * @param _sharedCNAMEDDoSProtections 共享 CNAME 的独立 DDoS 防护配置。仅作为出参使用。
                     * 
                     */
                    void SetSharedCNAMEDDoSProtections(const std::vector<DomainDDoSProtection>& _sharedCNAMEDDoSProtections);

                    /**
                     * 判断参数 SharedCNAMEDDoSProtections 是否已赋值
                     * @return SharedCNAMEDDoSProtections 是否已赋值
                     * 
                     */
                    bool SharedCNAMEDDoSProtectionsHasBeenSet() const;

                private:

                    /**
                     * 指定独立 DDoS 的防护范围。取值为：
<li> protect_all_domains：独立 DDoS 防护对站点内全部域名生效，新接入域名自动开启独立 DDoS 防护，入参为 protect_all_domains 时，入参 DomainDDoSProtections 不作处理；</li>
<li> protect_specified_domains：仅对指定域名生效，具体范围可通过 DomainDDoSProtection 参数指定。</li>
                     */
                    std::string m_protectionOption;
                    bool m_protectionOptionHasBeenSet;

                    /**
                     * 域名的独立 DDoS 防护配置。在入参场景中：
<li> 当 ProtectionOption 保持为 protect_specified_domains 时：未填写的域名维持原有独立 DDoS 防护配置不变，显式指定的域名​按传入参数更新；</li>
<li> 当 ProtectionOption 由 protect_all_domains 切换为 protect_specified_domains 时：若 DomainDDoSProtections 传空，停用站点下全部域名的独立 DDoS 防护；若 DomainDDoSProtections 不为空，参数中指定的域名停用或保持独立 DDoS 防护，其余未列出的域名统一停用独立 DDoS 防护。</li>
                     */
                    std::vector<DomainDDoSProtection> m_domainDDoSProtections;
                    bool m_domainDDoSProtectionsHasBeenSet;

                    /**
                     * 共享 CNAME 的独立 DDoS 防护配置。仅作为出参使用。
                     */
                    std::vector<DomainDDoSProtection> m_sharedCNAMEDDoSProtections;
                    bool m_sharedCNAMEDDoSProtectionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DDOSPROTECTION_H_
