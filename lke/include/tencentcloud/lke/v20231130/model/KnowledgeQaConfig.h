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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEQACONFIG_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEQACONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/AppModel.h>
#include <tencentcloud/lke/v20231130/model/KnowledgeQaSearch.h>
#include <tencentcloud/lke/v20231130/model/KnowledgeQaOutput.h>
#include <tencentcloud/lke/v20231130/model/KnowledgeWorkflow.h>
#include <tencentcloud/lke/v20231130/model/SearchRange.h>
#include <tencentcloud/lke/v20231130/model/SearchStrategy.h>
#include <tencentcloud/lke/v20231130/model/KnowledgeQaSingleWorkflow.h>
#include <tencentcloud/lke/v20231130/model/KnowledgeQaPlugin.h>
#include <tencentcloud/lke/v20231130/model/IntentAchievement.h>
#include <tencentcloud/lke/v20231130/model/AICallConfig.h>
#include <tencentcloud/lke/v20231130/model/ShareKnowledgeBase.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 知识问答配置
                */
                class KnowledgeQaConfig : public AbstractModel
                {
                public:
                    KnowledgeQaConfig();
                    ~KnowledgeQaConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取欢迎语，200字符以内
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Greeting 欢迎语，200字符以内
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGreeting() const;

                    /**
                     * 设置欢迎语，200字符以内
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _greeting 欢迎语，200字符以内
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGreeting(const std::string& _greeting);

                    /**
                     * 判断参数 Greeting 是否已赋值
                     * @return Greeting 是否已赋值
                     * 
                     */
                    bool GreetingHasBeenSet() const;

                    /**
                     * 获取角色描述，4000字符以内。通过填写描述，设定应用的 #角色名称、 #风格特点 及可达成的#意图。建议按照下面的模板填写，且自定义意图建议不超过5个。

#角色名称：
#风格特点：
#输出要求：
#能力限制：

能够达成以下用户意图
##意图名称：
##意图描述：
##意图示例：
##意图实现：

注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoleDescription 角色描述，4000字符以内。通过填写描述，设定应用的 #角色名称、 #风格特点 及可达成的#意图。建议按照下面的模板填写，且自定义意图建议不超过5个。

#角色名称：
#风格特点：
#输出要求：
#能力限制：

能够达成以下用户意图
##意图名称：
##意图描述：
##意图示例：
##意图实现：

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRoleDescription() const;

                    /**
                     * 设置角色描述，4000字符以内。通过填写描述，设定应用的 #角色名称、 #风格特点 及可达成的#意图。建议按照下面的模板填写，且自定义意图建议不超过5个。

#角色名称：
#风格特点：
#输出要求：
#能力限制：

能够达成以下用户意图
##意图名称：
##意图描述：
##意图示例：
##意图实现：

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _roleDescription 角色描述，4000字符以内。通过填写描述，设定应用的 #角色名称、 #风格特点 及可达成的#意图。建议按照下面的模板填写，且自定义意图建议不超过5个。

#角色名称：
#风格特点：
#输出要求：
#能力限制：

能够达成以下用户意图
##意图名称：
##意图描述：
##意图示例：
##意图实现：

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRoleDescription(const std::string& _roleDescription);

                    /**
                     * 判断参数 RoleDescription 是否已赋值
                     * @return RoleDescription 是否已赋值
                     * 
                     */
                    bool RoleDescriptionHasBeenSet() const;

                    /**
                     * 获取生成模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Model 生成模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AppModel GetModel() const;

                    /**
                     * 设置生成模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _model 生成模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModel(const AppModel& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取知识搜索配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Search 知识搜索配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KnowledgeQaSearch> GetSearch() const;

                    /**
                     * 设置知识搜索配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _search 知识搜索配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSearch(const std::vector<KnowledgeQaSearch>& _search);

                    /**
                     * 判断参数 Search 是否已赋值
                     * @return Search 是否已赋值
                     * 
                     */
                    bool SearchHasBeenSet() const;

                    /**
                     * 获取知识管理输出配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Output 知识管理输出配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KnowledgeQaOutput GetOutput() const;

                    /**
                     * 设置知识管理输出配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _output 知识管理输出配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutput(const KnowledgeQaOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取工作流程配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Workflow 工作流程配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KnowledgeWorkflow GetWorkflow() const;

                    /**
                     * 设置工作流程配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflow 工作流程配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflow(const KnowledgeWorkflow& _workflow);

                    /**
                     * 判断参数 Workflow 是否已赋值
                     * @return Workflow 是否已赋值
                     * 
                     */
                    bool WorkflowHasBeenSet() const;

                    /**
                     * 获取检索范围
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SearchRange 检索范围
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SearchRange GetSearchRange() const;

                    /**
                     * 设置检索范围
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _searchRange 检索范围
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSearchRange(const SearchRange& _searchRange);

                    /**
                     * 判断参数 SearchRange 是否已赋值
                     * @return SearchRange 是否已赋值
                     * 
                     */
                    bool SearchRangeHasBeenSet() const;

                    /**
                     * 获取应用模式，standard:标准模式, agent: agent模式，single_workflow：单工作流模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Pattern 应用模式，standard:标准模式, agent: agent模式，single_workflow：单工作流模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPattern() const;

                    /**
                     * 设置应用模式，standard:标准模式, agent: agent模式，single_workflow：单工作流模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pattern 应用模式，standard:标准模式, agent: agent模式，single_workflow：单工作流模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPattern(const std::string& _pattern);

                    /**
                     * 判断参数 Pattern 是否已赋值
                     * @return Pattern 是否已赋值
                     * 
                     */
                    bool PatternHasBeenSet() const;

                    /**
                     * 获取检索策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SearchStrategy 检索策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SearchStrategy GetSearchStrategy() const;

                    /**
                     * 设置检索策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _searchStrategy 检索策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSearchStrategy(const SearchStrategy& _searchStrategy);

                    /**
                     * 判断参数 SearchStrategy 是否已赋值
                     * @return SearchStrategy 是否已赋值
                     * 
                     */
                    bool SearchStrategyHasBeenSet() const;

                    /**
                     * 获取单工作流ID，Pattern为single_workflow时传入
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SingleWorkflow 单工作流ID，Pattern为single_workflow时传入
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KnowledgeQaSingleWorkflow GetSingleWorkflow() const;

                    /**
                     * 设置单工作流ID，Pattern为single_workflow时传入
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _singleWorkflow 单工作流ID，Pattern为single_workflow时传入
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSingleWorkflow(const KnowledgeQaSingleWorkflow& _singleWorkflow);

                    /**
                     * 判断参数 SingleWorkflow 是否已赋值
                     * @return SingleWorkflow 是否已赋值
                     * 
                     */
                    bool SingleWorkflowHasBeenSet() const;

                    /**
                     * 获取应用关联插件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Plugins 应用关联插件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KnowledgeQaPlugin> GetPlugins() const;

                    /**
                     * 设置应用关联插件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _plugins 应用关联插件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPlugins(const std::vector<KnowledgeQaPlugin>& _plugins);

                    /**
                     * 判断参数 Plugins 是否已赋值
                     * @return Plugins 是否已赋值
                     * 
                     */
                    bool PluginsHasBeenSet() const;

                    /**
                     * 获取思考模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ThoughtModel 思考模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AppModel GetThoughtModel() const;

                    /**
                     * 设置思考模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _thoughtModel 思考模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetThoughtModel(const AppModel& _thoughtModel);

                    /**
                     * 判断参数 ThoughtModel 是否已赋值
                     * @return ThoughtModel 是否已赋值
                     * 
                     */
                    bool ThoughtModelHasBeenSet() const;

                    /**
                     * 获取意图达成方式优先级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntentAchievements 意图达成方式优先级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<IntentAchievement> GetIntentAchievements() const;

                    /**
                     * 设置意图达成方式优先级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _intentAchievements 意图达成方式优先级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIntentAchievements(const std::vector<IntentAchievement>& _intentAchievements);

                    /**
                     * 判断参数 IntentAchievements 是否已赋值
                     * @return IntentAchievements 是否已赋值
                     * 
                     */
                    bool IntentAchievementsHasBeenSet() const;

                    /**
                     * 获取是否开启图文检索
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageTextRetrieval 是否开启图文检索
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetImageTextRetrieval() const;

                    /**
                     * 设置是否开启图文检索
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageTextRetrieval 是否开启图文检索
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageTextRetrieval(const bool& _imageTextRetrieval);

                    /**
                     * 判断参数 ImageTextRetrieval 是否已赋值
                     * @return ImageTextRetrieval 是否已赋值
                     * 
                     */
                    bool ImageTextRetrievalHasBeenSet() const;

                    /**
                     * 获取配置语音通话参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AiCall 配置语音通话参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AICallConfig GetAiCall() const;

                    /**
                     * 设置配置语音通话参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aiCall 配置语音通话参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAiCall(const AICallConfig& _aiCall);

                    /**
                     * 判断参数 AiCall 是否已赋值
                     * @return AiCall 是否已赋值
                     * 
                     */
                    bool AiCallHasBeenSet() const;

                    /**
                     * 获取共享知识库关联配置
                     * @return ShareKnowledgeBases 共享知识库关联配置
                     * 
                     */
                    std::vector<ShareKnowledgeBase> GetShareKnowledgeBases() const;

                    /**
                     * 设置共享知识库关联配置
                     * @param _shareKnowledgeBases 共享知识库关联配置
                     * 
                     */
                    void SetShareKnowledgeBases(const std::vector<ShareKnowledgeBase>& _shareKnowledgeBases);

                    /**
                     * 判断参数 ShareKnowledgeBases 是否已赋值
                     * @return ShareKnowledgeBases 是否已赋值
                     * 
                     */
                    bool ShareKnowledgeBasesHasBeenSet() const;

                private:

                    /**
                     * 欢迎语，200字符以内
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_greeting;
                    bool m_greetingHasBeenSet;

                    /**
                     * 角色描述，4000字符以内。通过填写描述，设定应用的 #角色名称、 #风格特点 及可达成的#意图。建议按照下面的模板填写，且自定义意图建议不超过5个。

#角色名称：
#风格特点：
#输出要求：
#能力限制：

能够达成以下用户意图
##意图名称：
##意图描述：
##意图示例：
##意图实现：

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_roleDescription;
                    bool m_roleDescriptionHasBeenSet;

                    /**
                     * 生成模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AppModel m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 知识搜索配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KnowledgeQaSearch> m_search;
                    bool m_searchHasBeenSet;

                    /**
                     * 知识管理输出配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KnowledgeQaOutput m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * 工作流程配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KnowledgeWorkflow m_workflow;
                    bool m_workflowHasBeenSet;

                    /**
                     * 检索范围
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SearchRange m_searchRange;
                    bool m_searchRangeHasBeenSet;

                    /**
                     * 应用模式，standard:标准模式, agent: agent模式，single_workflow：单工作流模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pattern;
                    bool m_patternHasBeenSet;

                    /**
                     * 检索策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SearchStrategy m_searchStrategy;
                    bool m_searchStrategyHasBeenSet;

                    /**
                     * 单工作流ID，Pattern为single_workflow时传入
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KnowledgeQaSingleWorkflow m_singleWorkflow;
                    bool m_singleWorkflowHasBeenSet;

                    /**
                     * 应用关联插件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KnowledgeQaPlugin> m_plugins;
                    bool m_pluginsHasBeenSet;

                    /**
                     * 思考模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AppModel m_thoughtModel;
                    bool m_thoughtModelHasBeenSet;

                    /**
                     * 意图达成方式优先级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IntentAchievement> m_intentAchievements;
                    bool m_intentAchievementsHasBeenSet;

                    /**
                     * 是否开启图文检索
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_imageTextRetrieval;
                    bool m_imageTextRetrievalHasBeenSet;

                    /**
                     * 配置语音通话参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AICallConfig m_aiCall;
                    bool m_aiCallHasBeenSet;

                    /**
                     * 共享知识库关联配置
                     */
                    std::vector<ShareKnowledgeBase> m_shareKnowledgeBases;
                    bool m_shareKnowledgeBasesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEQACONFIG_H_
