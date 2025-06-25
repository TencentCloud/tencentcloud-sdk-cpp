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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_AGENTKNOWLEDGEATTRLABEL_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_AGENTKNOWLEDGEATTRLABEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/AgentInput.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 标签过滤器
                */
                class AgentKnowledgeAttrLabel : public AbstractModel
                {
                public:
                    AgentKnowledgeAttrLabel();
                    ~AgentKnowledgeAttrLabel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取属性ID
                     * @return AttributeBizId 属性ID
                     * 
                     */
                    std::string GetAttributeBizId() const;

                    /**
                     * 设置属性ID
                     * @param _attributeBizId 属性ID
                     * 
                     */
                    void SetAttributeBizId(const std::string& _attributeBizId);

                    /**
                     * 判断参数 AttributeBizId 是否已赋值
                     * @return AttributeBizId 是否已赋值
                     * 
                     */
                    bool AttributeBizIdHasBeenSet() const;

                    /**
                     * 获取标签值，标签值之间是或的关系，只有匹配的，才会进行知识检索，否则报检索不到
                     * @return Inputs 标签值，标签值之间是或的关系，只有匹配的，才会进行知识检索，否则报检索不到
                     * 
                     */
                    std::vector<AgentInput> GetInputs() const;

                    /**
                     * 设置标签值，标签值之间是或的关系，只有匹配的，才会进行知识检索，否则报检索不到
                     * @param _inputs 标签值，标签值之间是或的关系，只有匹配的，才会进行知识检索，否则报检索不到
                     * 
                     */
                    void SetInputs(const std::vector<AgentInput>& _inputs);

                    /**
                     * 判断参数 Inputs 是否已赋值
                     * @return Inputs 是否已赋值
                     * 
                     */
                    bool InputsHasBeenSet() const;

                private:

                    /**
                     * 属性ID
                     */
                    std::string m_attributeBizId;
                    bool m_attributeBizIdHasBeenSet;

                    /**
                     * 标签值，标签值之间是或的关系，只有匹配的，才会进行知识检索，否则报检索不到
                     */
                    std::vector<AgentInput> m_inputs;
                    bool m_inputsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_AGENTKNOWLEDGEATTRLABEL_H_
