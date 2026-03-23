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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SKILLINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SKILLINFO_H_

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
                * Skill 的信息
                */
                class SkillInfo : public AbstractModel
                {
                public:
                    SkillInfo();
                    ~SkillInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Skill名称
                     * @return SkillName Skill名称
                     * 
                     */
                    std::string GetSkillName() const;

                    /**
                     * 设置Skill名称
                     * @param _skillName Skill名称
                     * 
                     */
                    void SetSkillName(const std::string& _skillName);

                    /**
                     * 判断参数 SkillName 是否已赋值
                     * @return SkillName 是否已赋值
                     * 
                     */
                    bool SkillNameHasBeenSet() const;

                    /**
                     * 获取Skill 描述
                     * @return SkillDesc Skill 描述
                     * 
                     */
                    std::string GetSkillDesc() const;

                    /**
                     * 设置Skill 描述
                     * @param _skillDesc Skill 描述
                     * 
                     */
                    void SetSkillDesc(const std::string& _skillDesc);

                    /**
                     * 判断参数 SkillDesc 是否已赋值
                     * @return SkillDesc 是否已赋值
                     * 
                     */
                    bool SkillDescHasBeenSet() const;

                    /**
                     * 获取Skill来源
                     * @return SkillSource Skill来源
                     * 
                     */
                    std::string GetSkillSource() const;

                    /**
                     * 设置Skill来源
                     * @param _skillSource Skill来源
                     * 
                     */
                    void SetSkillSource(const std::string& _skillSource);

                    /**
                     * 判断参数 SkillSource 是否已赋值
                     * @return SkillSource 是否已赋值
                     * 
                     */
                    bool SkillSourceHasBeenSet() const;

                    /**
                     * 获取Skill风险标签
                     * @return Tags Skill风险标签
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置Skill风险标签
                     * @param _tags Skill风险标签
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取skill风险描述
                     * @return RiskDesc skill风险描述
                     * 
                     */
                    std::string GetRiskDesc() const;

                    /**
                     * 设置skill风险描述
                     * @param _riskDesc skill风险描述
                     * 
                     */
                    void SetRiskDesc(const std::string& _riskDesc);

                    /**
                     * 判断参数 RiskDesc 是否已赋值
                     * @return RiskDesc 是否已赋值
                     * 
                     */
                    bool RiskDescHasBeenSet() const;

                    /**
                     * 获取证据链
                     * @return Evidence 证据链
                     * 
                     */
                    std::string GetEvidence() const;

                    /**
                     * 设置证据链
                     * @param _evidence 证据链
                     * 
                     */
                    void SetEvidence(const std::string& _evidence);

                    /**
                     * 判断参数 Evidence 是否已赋值
                     * @return Evidence 是否已赋值
                     * 
                     */
                    bool EvidenceHasBeenSet() const;

                    /**
                     * 获取事件ID
                     * @return Id 事件ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置事件ID
                     * @param _id 事件ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * Skill名称
                     */
                    std::string m_skillName;
                    bool m_skillNameHasBeenSet;

                    /**
                     * Skill 描述
                     */
                    std::string m_skillDesc;
                    bool m_skillDescHasBeenSet;

                    /**
                     * Skill来源
                     */
                    std::string m_skillSource;
                    bool m_skillSourceHasBeenSet;

                    /**
                     * Skill风险标签
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * skill风险描述
                     */
                    std::string m_riskDesc;
                    bool m_riskDescHasBeenSet;

                    /**
                     * 证据链
                     */
                    std::string m_evidence;
                    bool m_evidenceHasBeenSet;

                    /**
                     * 事件ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SKILLINFO_H_
