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
                     * 获取<p>场景ID</p>
                     * @return SceneId <p>场景ID</p>
                     * 
                     */
                    std::string GetSceneId() const;

                    /**
                     * 设置<p>场景ID</p>
                     * @param _sceneId <p>场景ID</p>
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
                     * 获取<p>场景名称</p>
                     * @return SceneName <p>场景名称</p>
                     * 
                     */
                    std::string GetSceneName() const;

                    /**
                     * 设置<p>场景名称</p>
                     * @param _sceneName <p>场景名称</p>
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
                     * 获取<p>技能列表，包含：rag（知识检索）、data_analytics（数据分析）、data_prediction（数据预测）</p>
                     * @return Skills <p>技能列表，包含：rag（知识检索）、data_analytics（数据分析）、data_prediction（数据预测）</p>
                     * 
                     */
                    std::vector<std::string> GetSkills() const;

                    /**
                     * 设置<p>技能列表，包含：rag（知识检索）、data_analytics（数据分析）、data_prediction（数据预测）</p>
                     * @param _skills <p>技能列表，包含：rag（知识检索）、data_analytics（数据分析）、data_prediction（数据预测）</p>
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
                     * 获取<p>提示词文本</p>
                     * @return Prompt <p>提示词文本</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>提示词文本</p>
                     * @param _prompt <p>提示词文本</p>
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
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _description <p>描述</p>
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
                     * 获取<p>检索配置</p>
                     * @return SearchConfig <p>检索配置</p>
                     * 
                     */
                    SearchConfig GetSearchConfig() const;

                    /**
                     * 设置<p>检索配置</p>
                     * @param _searchConfig <p>检索配置</p>
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
                     * 获取<p>示例问答列表</p>
                     * @return ExampleQAList <p>示例问答列表</p>
                     * 
                     */
                    std::vector<ExampleQA> GetExampleQAList() const;

                    /**
                     * 设置<p>示例问答列表</p>
                     * @param _exampleQAList <p>示例问答列表</p>
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
                     * 获取<p>记录的创建时间</p>
                     * @return CreateTime <p>记录的创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>记录的创建时间</p>
                     * @param _createTime <p>记录的创建时间</p>
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
                     * 获取<p>记录的最后更新时间</p>
                     * @return UpdateTime <p>记录的最后更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>记录的最后更新时间</p>
                     * @param _updateTime <p>记录的最后更新时间</p>
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
                     * 获取<p>创建者Uin</p>
                     * @return CreatorUin <p>创建者Uin</p>
                     * 
                     */
                    std::string GetCreatorUin() const;

                    /**
                     * 设置<p>创建者Uin</p>
                     * @param _creatorUin <p>创建者Uin</p>
                     * 
                     */
                    void SetCreatorUin(const std::string& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     * 
                     */
                    bool CreatorUinHasBeenSet() const;

                    /**
                     * 获取<p>知识</p>
                     * @return Knowledge <p>知识</p>
                     * 
                     */
                    std::string GetKnowledge() const;

                    /**
                     * 设置<p>知识</p>
                     * @param _knowledge <p>知识</p>
                     * 
                     */
                    void SetKnowledge(const std::string& _knowledge);

                    /**
                     * 判断参数 Knowledge 是否已赋值
                     * @return Knowledge 是否已赋值
                     * 
                     */
                    bool KnowledgeHasBeenSet() const;

                private:

                    /**
                     * <p>场景ID</p>
                     */
                    std::string m_sceneId;
                    bool m_sceneIdHasBeenSet;

                    /**
                     * <p>场景名称</p>
                     */
                    std::string m_sceneName;
                    bool m_sceneNameHasBeenSet;

                    /**
                     * <p>技能列表，包含：rag（知识检索）、data_analytics（数据分析）、data_prediction（数据预测）</p>
                     */
                    std::vector<std::string> m_skills;
                    bool m_skillsHasBeenSet;

                    /**
                     * <p>提示词文本</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>检索配置</p>
                     */
                    SearchConfig m_searchConfig;
                    bool m_searchConfigHasBeenSet;

                    /**
                     * <p>示例问答列表</p>
                     */
                    std::vector<ExampleQA> m_exampleQAList;
                    bool m_exampleQAListHasBeenSet;

                    /**
                     * <p>记录的创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>记录的最后更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>创建者Uin</p>
                     */
                    std::string m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * <p>知识</p>
                     */
                    std::string m_knowledge;
                    bool m_knowledgeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_SCENE_H_
