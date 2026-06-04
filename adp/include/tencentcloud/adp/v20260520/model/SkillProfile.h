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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SKILLPROFILE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SKILLPROFILE_H_

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
                * SkillProfile Skill 基础展示信息。
                */
                class SkillProfile : public AbstractModel
                {
                public:
                    SkillProfile();
                    ~SkillProfile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取创建时间（Unix秒）
                     * @return CreateTime 创建时间（Unix秒）
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间（Unix秒）
                     * @param _createTime 创建时间（Unix秒）
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取创建者
                     * @return Creator 创建者
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置创建者
                     * @param _creator 创建者
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取Skill 描述
                     * @return Description Skill 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Skill 描述
                     * @param _description Skill 描述
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
                     * 获取Skill 展示描述
                     * @return DisplayDescription Skill 展示描述
                     * 
                     */
                    std::string GetDisplayDescription() const;

                    /**
                     * 设置Skill 展示描述
                     * @param _displayDescription Skill 展示描述
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
                     * 获取Skill 展示名称
                     * @return DisplayName Skill 展示名称
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置Skill 展示名称
                     * @param _displayName Skill 展示名称
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
                     * 获取Skill 图标
                     * @return IconUrl Skill 图标
                     * 
                     */
                    std::string GetIconUrl() const;

                    /**
                     * 设置Skill 图标
                     * @param _iconUrl Skill 图标
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
                     * 获取Skill 名称
                     * @return Name Skill 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Skill 名称
                     * @param _name Skill 名称
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
                     * 获取更新时间（Unix秒）
                     * @return UpdateTime 更新时间（Unix秒）
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间（Unix秒）
                     * @param _updateTime 更新时间（Unix秒）
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 创建时间（Unix秒）
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 创建者
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * Skill 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Skill 展示描述
                     */
                    std::string m_displayDescription;
                    bool m_displayDescriptionHasBeenSet;

                    /**
                     * Skill 展示名称
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * Skill 图标
                     */
                    std::string m_iconUrl;
                    bool m_iconUrlHasBeenSet;

                    /**
                     * Skill 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 更新时间（Unix秒）
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SKILLPROFILE_H_
