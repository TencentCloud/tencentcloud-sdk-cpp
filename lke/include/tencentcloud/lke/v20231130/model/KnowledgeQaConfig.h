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
                     * 获取角色描述，300字符以内
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoleDescription 角色描述，300字符以内
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRoleDescription() const;

                    /**
                     * 设置角色描述，300字符以内
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _roleDescription 角色描述，300字符以内
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
                     * 获取模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Model 模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AppModel GetModel() const;

                    /**
                     * 设置模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _model 模型配置
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

                private:

                    /**
                     * 欢迎语，200字符以内
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_greeting;
                    bool m_greetingHasBeenSet;

                    /**
                     * 角色描述，300字符以内
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_roleDescription;
                    bool m_roleDescriptionHasBeenSet;

                    /**
                     * 模型配置
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEQACONFIG_H_
