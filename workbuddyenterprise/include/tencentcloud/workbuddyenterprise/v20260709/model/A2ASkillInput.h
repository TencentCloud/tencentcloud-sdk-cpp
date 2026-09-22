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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_A2ASKILLINPUT_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_A2ASKILLINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * A2A skill 录入项（注册外部 Agent 时传入）
                */
                class A2ASkillInput : public AbstractModel
                {
                public:
                    A2ASkillInput();
                    ~A2ASkillInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>A2A skill ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return A2ASkillId <p>A2A skill ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetA2ASkillId() const;

                    /**
                     * 设置<p>A2A skill ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _a2ASkillId <p>A2A skill ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetA2ASkillId(const std::string& _a2ASkillId);

                    /**
                     * 判断参数 A2ASkillId 是否已赋值
                     * @return A2ASkillId 是否已赋值
                     * 
                     */
                    bool A2ASkillIdHasBeenSet() const;

                    /**
                     * 获取<p>skill 名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>skill 名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>skill 名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>skill 名称</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>skill 描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>skill 描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>skill 描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>skill 描述</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置<p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>示例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Examples <p>示例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetExamples() const;

                    /**
                     * 设置<p>示例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _examples <p>示例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExamples(const std::vector<std::string>& _examples);

                    /**
                     * 判断参数 Examples 是否已赋值
                     * @return Examples 是否已赋值
                     * 
                     */
                    bool ExamplesHasBeenSet() const;

                private:

                    /**
                     * <p>A2A skill ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_a2ASkillId;
                    bool m_a2ASkillIdHasBeenSet;

                    /**
                     * <p>skill 名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>skill 描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>示例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_examples;
                    bool m_examplesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_A2ASKILLINPUT_H_
