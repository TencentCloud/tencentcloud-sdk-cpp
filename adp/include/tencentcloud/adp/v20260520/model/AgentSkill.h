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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AGENTSKILL_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AGENTSKILL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Agent 技能详情
                */
                class AgentSkill : public AbstractModel
                {
                public:
                    AgentSkill();
                    ~AgentSkill() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>skillId</p>
                     * @return SkillId <p>skillId</p>
                     * 
                     */
                    std::string GetSkillId() const;

                    /**
                     * 设置<p>skillId</p>
                     * @param _skillId <p>skillId</p>
                     * 
                     */
                    void SetSkillId(const std::string& _skillId);

                    /**
                     * 判断参数 SkillId 是否已赋值
                     * @return SkillId 是否已赋值
                     * 
                     */
                    bool SkillIdHasBeenSet() const;

                    /**
                     * 获取<p>skill名称</p>
                     * @return Name <p>skill名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>skill名称</p>
                     * @param _name <p>skill名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>技能描述</p>
                     * @return Description <p>技能描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>技能描述</p>
                     * @param _description <p>技能描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>skill展示名称</p>
                     * @return DisplayName <p>skill展示名称</p>
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置<p>skill展示名称</p>
                     * @param _displayName <p>skill展示名称</p>
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取<p>技能展示描述</p>
                     * @return DisplayDescription <p>技能展示描述</p>
                     * 
                     */
                    std::string GetDisplayDescription() const;

                    /**
                     * 设置<p>技能展示描述</p>
                     * @param _displayDescription <p>技能展示描述</p>
                     * 
                     */
                    void SetDisplayDescription(const std::string& _displayDescription);

                    /**
                     * 判断参数 DisplayDescription 是否已赋值
                     * @return DisplayDescription 是否已赋值
                     * 
                     */
                    bool DisplayDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>skill图标url</p>
                     * @return IconUrl <p>skill图标url</p>
                     * 
                     */
                    std::string GetIconUrl() const;

                    /**
                     * 设置<p>skill图标url</p>
                     * @param _iconUrl <p>skill图标url</p>
                     * 
                     */
                    void SetIconUrl(const std::string& _iconUrl);

                    /**
                     * 判断参数 IconUrl 是否已赋值
                     * @return IconUrl 是否已赋值
                     * 
                     */
                    bool IconUrlHasBeenSet() const;

                    /**
                     * 获取<p>Skill来源</p>
                     * @return SourceType <p>Skill来源</p>
                     * 
                     */
                    int64_t GetSourceType() const;

                    /**
                     * 设置<p>Skill来源</p>
                     * @param _sourceType <p>Skill来源</p>
                     * 
                     */
                    void SetSourceType(const int64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Skill版本</p>
                     * @return CurrentVersion <p>Skill版本</p>
                     * 
                     */
                    std::string GetCurrentVersion() const;

                    /**
                     * 设置<p>Skill版本</p>
                     * @param _currentVersion <p>Skill版本</p>
                     * 
                     */
                    void SetCurrentVersion(const std::string& _currentVersion);

                    /**
                     * 判断参数 CurrentVersion 是否已赋值
                     * @return CurrentVersion 是否已赋值
                     * 
                     */
                    bool CurrentVersionHasBeenSet() const;

                private:

                    /**
                     * <p>skillId</p>
                     */
                    std::string m_skillId;
                    bool m_skillIdHasBeenSet;

                    /**
                     * <p>skill名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>技能描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>skill展示名称</p>
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * <p>技能展示描述</p>
                     */
                    std::string m_displayDescription;
                    bool m_displayDescriptionHasBeenSet;

                    /**
                     * <p>skill图标url</p>
                     */
                    std::string m_iconUrl;
                    bool m_iconUrlHasBeenSet;

                    /**
                     * <p>Skill来源</p>
                     */
                    int64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * <p>Skill版本</p>
                     */
                    std::string m_currentVersion;
                    bool m_currentVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTSKILL_H_
