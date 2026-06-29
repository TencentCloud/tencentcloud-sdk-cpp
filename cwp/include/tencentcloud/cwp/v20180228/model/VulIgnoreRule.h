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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULIGNORERULE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULIGNORERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 漏洞忽略规则
                */
                class VulIgnoreRule : public AbstractModel
                {
                public:
                    VulIgnoreRule();
                    ~VulIgnoreRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取漏洞规则ID
                     * @return VulID 漏洞规则ID
                     * 
                     */
                    uint64_t GetVulID() const;

                    /**
                     * 设置漏洞规则ID
                     * @param _vulID 漏洞规则ID
                     * 
                     */
                    void SetVulID(const uint64_t& _vulID);

                    /**
                     * 判断参数 VulID 是否已赋值
                     * @return VulID 是否已赋值
                     * 
                     */
                    bool VulIDHasBeenSet() const;

                    /**
                     * 获取<li>0:全部主机</li>
<li>1:自选主机</li>
                     * @return AssetScopeType <li>0:全部主机</li>
<li>1:自选主机</li>
                     * 
                     */
                    uint64_t GetAssetScopeType() const;

                    /**
                     * 设置<li>0:全部主机</li>
<li>1:自选主机</li>
                     * @param _assetScopeType <li>0:全部主机</li>
<li>1:自选主机</li>
                     * 
                     */
                    void SetAssetScopeType(const uint64_t& _assetScopeType);

                    /**
                     * 判断参数 AssetScopeType 是否已赋值
                     * @return AssetScopeType 是否已赋值
                     * 
                     */
                    bool AssetScopeTypeHasBeenSet() const;

                    /**
                     * 获取自选主机情况下自选主机quuid列表
                     * @return IncludeQuuidList 自选主机情况下自选主机quuid列表
                     * 
                     */
                    std::vector<std::string> GetIncludeQuuidList() const;

                    /**
                     * 设置自选主机情况下自选主机quuid列表
                     * @param _includeQuuidList 自选主机情况下自选主机quuid列表
                     * 
                     */
                    void SetIncludeQuuidList(const std::vector<std::string>& _includeQuuidList);

                    /**
                     * 判断参数 IncludeQuuidList 是否已赋值
                     * @return IncludeQuuidList 是否已赋值
                     * 
                     */
                    bool IncludeQuuidListHasBeenSet() const;

                    /**
                     * 获取全部主机情况下排出的主机
                     * @return ExcludeQuuidList 全部主机情况下排出的主机
                     * 
                     */
                    std::vector<std::string> GetExcludeQuuidList() const;

                    /**
                     * 设置全部主机情况下排出的主机
                     * @param _excludeQuuidList 全部主机情况下排出的主机
                     * 
                     */
                    void SetExcludeQuuidList(const std::vector<std::string>& _excludeQuuidList);

                    /**
                     * 判断参数 ExcludeQuuidList 是否已赋值
                     * @return ExcludeQuuidList 是否已赋值
                     * 
                     */
                    bool ExcludeQuuidListHasBeenSet() const;

                    /**
                     * 获取忽略的原因
                     * @return Remark 忽略的原因
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置忽略的原因
                     * @param _remark 忽略的原因
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取配置主机数
                     * @return ConfigHostCount 配置主机数
                     * 
                     */
                    uint64_t GetConfigHostCount() const;

                    /**
                     * 设置配置主机数
                     * @param _configHostCount 配置主机数
                     * 
                     */
                    void SetConfigHostCount(const uint64_t& _configHostCount);

                    /**
                     * 判断参数 ConfigHostCount 是否已赋值
                     * @return ConfigHostCount 是否已赋值
                     * 
                     */
                    bool ConfigHostCountHasBeenSet() const;

                    /**
                     * 获取实际受影响主机数
                     * @return AffectedHostCount 实际受影响主机数
                     * 
                     */
                    uint64_t GetAffectedHostCount() const;

                    /**
                     * 设置实际受影响主机数
                     * @param _affectedHostCount 实际受影响主机数
                     * 
                     */
                    void SetAffectedHostCount(const uint64_t& _affectedHostCount);

                    /**
                     * 判断参数 AffectedHostCount 是否已赋值
                     * @return AffectedHostCount 是否已赋值
                     * 
                     */
                    bool AffectedHostCountHasBeenSet() const;

                    /**
                     * 获取漏洞名字
                     * @return VulName 漏洞名字
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置漏洞名字
                     * @param _vulName 漏洞名字
                     * 
                     */
                    void SetVulName(const std::string& _vulName);

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     * 
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取忽略规则ID
                     * @return RuleID 忽略规则ID
                     * 
                     */
                    uint64_t GetRuleID() const;

                    /**
                     * 设置忽略规则ID
                     * @param _ruleID 忽略规则ID
                     * 
                     */
                    void SetRuleID(const uint64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取最近更新时间
                     * @return ModifyTime 最近更新时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置最近更新时间
                     * @param _modifyTime 最近更新时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * 漏洞规则ID
                     */
                    uint64_t m_vulID;
                    bool m_vulIDHasBeenSet;

                    /**
                     * <li>0:全部主机</li>
<li>1:自选主机</li>
                     */
                    uint64_t m_assetScopeType;
                    bool m_assetScopeTypeHasBeenSet;

                    /**
                     * 自选主机情况下自选主机quuid列表
                     */
                    std::vector<std::string> m_includeQuuidList;
                    bool m_includeQuuidListHasBeenSet;

                    /**
                     * 全部主机情况下排出的主机
                     */
                    std::vector<std::string> m_excludeQuuidList;
                    bool m_excludeQuuidListHasBeenSet;

                    /**
                     * 忽略的原因
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 配置主机数
                     */
                    uint64_t m_configHostCount;
                    bool m_configHostCountHasBeenSet;

                    /**
                     * 实际受影响主机数
                     */
                    uint64_t m_affectedHostCount;
                    bool m_affectedHostCountHasBeenSet;

                    /**
                     * 漏洞名字
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * 忽略规则ID
                     */
                    uint64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * 最近更新时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULIGNORERULE_H_
