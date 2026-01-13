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

#ifndef TENCENTCLOUD_DATAAGENT_V20250513_MODEL_SCENE_H_
#define TENCENTCLOUD_DATAAGENT_V20250513_MODEL_SCENE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dataagent/v20250513/model/SearchConfig.h>
#include <tencentcloud/dataagent/v20250513/model/ExampleQA.h>


namespace TencentCloud
{
    namespace Dataagent
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * 场景
                */
                class Scene : public AbstractModel
                {
                public:
                    Scene();
                    ~Scene() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取场景ID
                     * @return SceneId 场景ID
                     * 
                     */
                    std::string GetSceneId() const;

                    /**
                     * 设置场景ID
                     * @param _sceneId 场景ID
                     * 
                     */
                    void SetSceneId(const std::string& _sceneId);

                    /**
                     * 判断参数 SceneId 是否已赋值
                     * @return SceneId 是否已赋值
                     * 
                     */
                    bool SceneIdHasBeenSet() const;

                    /**
                     * 获取场景名称
                     * @return SceneName 场景名称
                     * 
                     */
                    std::string GetSceneName() const;

                    /**
                     * 设置场景名称
                     * @param _sceneName 场景名称
                     * 
                     */
                    void SetSceneName(const std::string& _sceneName);

                    /**
                     * 判断参数 SceneName 是否已赋值
                     * @return SceneName 是否已赋值
                     * 
                     */
                    bool SceneNameHasBeenSet() const;

                    /**
                     * 获取技能列表，包含：rag（知识检索）、data_analytics（数据分析）、data_prediction（数据预测）
                     * @return Skills 技能列表，包含：rag（知识检索）、data_analytics（数据分析）、data_prediction（数据预测）
                     * 
                     */
                    std::vector<std::string> GetSkills() const;

                    /**
                     * 设置技能列表，包含：rag（知识检索）、data_analytics（数据分析）、data_prediction（数据预测）
                     * @param _skills 技能列表，包含：rag（知识检索）、data_analytics（数据分析）、data_prediction（数据预测）
                     * 
                     */
                    void SetSkills(const std::vector<std::string>& _skills);

                    /**
                     * 判断参数 Skills 是否已赋值
                     * @return Skills 是否已赋值
                     * 
                     */
                    bool SkillsHasBeenSet() const;

                    /**
                     * 获取提示词文本
                     * @return Prompt 提示词文本
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置提示词文本
                     * @param _prompt 提示词文本
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
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
                     * 获取检索配置
                     * @return SearchConfig 检索配置
                     * 
                     */
                    SearchConfig GetSearchConfig() const;

                    /**
                     * 设置检索配置
                     * @param _searchConfig 检索配置
                     * 
                     */
                    void SetSearchConfig(const SearchConfig& _searchConfig);

                    /**
                     * 判断参数 SearchConfig 是否已赋值
                     * @return SearchConfig 是否已赋值
                     * 
                     */
                    bool SearchConfigHasBeenSet() const;

                    /**
                     * 获取示例问答列表
                     * @return ExampleQAList 示例问答列表
                     * 
                     */
                    std::vector<ExampleQA> GetExampleQAList() const;

                    /**
                     * 设置示例问答列表
                     * @param _exampleQAList 示例问答列表
                     * 
                     */
                    void SetExampleQAList(const std::vector<ExampleQA>& _exampleQAList);

                    /**
                     * 判断参数 ExampleQAList 是否已赋值
                     * @return ExampleQAList 是否已赋值
                     * 
                     */
                    bool ExampleQAListHasBeenSet() const;

                    /**
                     * 获取记录的创建时间
                     * @return CreateTime 记录的创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置记录的创建时间
                     * @param _createTime 记录的创建时间
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
                     * 获取记录的最后更新时间
                     * @return UpdateTime 记录的最后更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置记录的最后更新时间
                     * @param _updateTime 记录的最后更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取创建者Uin
                     * @return CreatorUin 创建者Uin
                     * 
                     */
                    std::string GetCreatorUin() const;

                    /**
                     * 设置创建者Uin
                     * @param _creatorUin 创建者Uin
                     * 
                     */
                    void SetCreatorUin(const std::string& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     * 
                     */
                    bool CreatorUinHasBeenSet() const;

                private:

                    /**
                     * 场景ID
                     */
                    std::string m_sceneId;
                    bool m_sceneIdHasBeenSet;

                    /**
                     * 场景名称
                     */
                    std::string m_sceneName;
                    bool m_sceneNameHasBeenSet;

                    /**
                     * 技能列表，包含：rag（知识检索）、data_analytics（数据分析）、data_prediction（数据预测）
                     */
                    std::vector<std::string> m_skills;
                    bool m_skillsHasBeenSet;

                    /**
                     * 提示词文本
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 检索配置
                     */
                    SearchConfig m_searchConfig;
                    bool m_searchConfigHasBeenSet;

                    /**
                     * 示例问答列表
                     */
                    std::vector<ExampleQA> m_exampleQAList;
                    bool m_exampleQAListHasBeenSet;

                    /**
                     * 记录的创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 记录的最后更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 创建者Uin
                     */
                    std::string m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_SCENE_H_
