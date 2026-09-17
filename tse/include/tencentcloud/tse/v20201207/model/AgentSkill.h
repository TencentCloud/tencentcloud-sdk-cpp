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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_AGENTSKILL_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_AGENTSKILL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * AgentSkill AI Agent 技能定义
                */
                class AgentSkill : public AbstractModel
                {
                public:
                    AgentSkill();
                    ~AgentSkill() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>agentID</p>
                     * @return Id <p>agentID</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>agentID</p>
                     * @param _id <p>agentID</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

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
                     * 获取<p>标签</p>
                     * @return Tags <p>标签</p>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _tags <p>标签</p>
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
                     * 获取<p>样例</p>
                     * @return Examples <p>样例</p>
                     * 
                     */
                    std::vector<std::string> GetExamples() const;

                    /**
                     * 设置<p>样例</p>
                     * @param _examples <p>样例</p>
                     * 
                     */
                    void SetExamples(const std::vector<std::string>& _examples);

                    /**
                     * 判断参数 Examples 是否已赋值
                     * @return Examples 是否已赋值
                     * 
                     */
                    bool ExamplesHasBeenSet() const;

                    /**
                     * 获取<p>输入模式</p>
                     * @return InputModes <p>输入模式</p>
                     * 
                     */
                    std::vector<std::string> GetInputModes() const;

                    /**
                     * 设置<p>输入模式</p>
                     * @param _inputModes <p>输入模式</p>
                     * 
                     */
                    void SetInputModes(const std::vector<std::string>& _inputModes);

                    /**
                     * 判断参数 InputModes 是否已赋值
                     * @return InputModes 是否已赋值
                     * 
                     */
                    bool InputModesHasBeenSet() const;

                    /**
                     * 获取<p>输出模式</p>
                     * @return OutputModes <p>输出模式</p>
                     * 
                     */
                    std::vector<std::string> GetOutputModes() const;

                    /**
                     * 设置<p>输出模式</p>
                     * @param _outputModes <p>输出模式</p>
                     * 
                     */
                    void SetOutputModes(const std::vector<std::string>& _outputModes);

                    /**
                     * 判断参数 OutputModes 是否已赋值
                     * @return OutputModes 是否已赋值
                     * 
                     */
                    bool OutputModesHasBeenSet() const;

                    /**
                     * 获取<p>版本</p>
                     * @return Version <p>版本</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>版本</p>
                     * @param _version <p>版本</p>
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                private:

                    /**
                     * <p>agentID</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>skill名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>样例</p>
                     */
                    std::vector<std::string> m_examples;
                    bool m_examplesHasBeenSet;

                    /**
                     * <p>输入模式</p>
                     */
                    std::vector<std::string> m_inputModes;
                    bool m_inputModesHasBeenSet;

                    /**
                     * <p>输出模式</p>
                     */
                    std::vector<std::string> m_outputModes;
                    bool m_outputModesHasBeenSet;

                    /**
                     * <p>版本</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_AGENTSKILL_H_
