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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_SKILLLIST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_SKILLLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 查询指定实例下的 AI Skill 列表。
                */
                class SkillList : public AbstractModel
                {
                public:
                    SkillList();
                    ~SkillList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return SkillName 
                     * 
                     */
                    std::string GetSkillName() const;

                    /**
                     * 设置
                     * @param _skillName 
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
                     * 获取
                     * @return Description 
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置
                     * @param _description 
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
                     * 获取
                     * @return SkillType 
                     * 
                     */
                    std::string GetSkillType() const;

                    /**
                     * 设置
                     * @param _skillType 
                     * 
                     */
                    void SetSkillType(const std::string& _skillType);

                    /**
                     * 判断参数 SkillType 是否已赋值
                     * @return SkillType 是否已赋值
                     * 
                     */
                    bool SkillTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Tags 
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置
                     * @param _tags 
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
                     * 获取
                     * @return LatestVersion 
                     * 
                     */
                    std::string GetLatestVersion() const;

                    /**
                     * 设置
                     * @param _latestVersion 
                     * 
                     */
                    void SetLatestVersion(const std::string& _latestVersion);

                    /**
                     * 判断参数 LatestVersion 是否已赋值
                     * @return LatestVersion 是否已赋值
                     * 
                     */
                    bool LatestVersionHasBeenSet() const;

                    /**
                     * 获取
                     * @return Status 
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置
                     * @param _status 
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
                     * 获取
                     * @return UpdateTime 
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置
                     * @param _updateTime 
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
                     * 
                     */
                    std::string m_skillName;
                    bool m_skillNameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_skillType;
                    bool m_skillTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_latestVersion;
                    bool m_latestVersionHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_SKILLLIST_H_
