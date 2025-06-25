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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_AGENTKNOWLEDGEFILTERTAG_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_AGENTKNOWLEDGEFILTERTAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/AgentKnowledgeAttrLabel.h>


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
                class AgentKnowledgeFilterTag : public AbstractModel
                {
                public:
                    AgentKnowledgeFilterTag();
                    ~AgentKnowledgeFilterTag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签之间的关系;0:AND, 1:OR
                     * @return Operator 标签之间的关系;0:AND, 1:OR
                     * 
                     */
                    uint64_t GetOperator() const;

                    /**
                     * 设置标签之间的关系;0:AND, 1:OR
                     * @param _operator 标签之间的关系;0:AND, 1:OR
                     * 
                     */
                    void SetOperator(const uint64_t& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Labels 标签
                     * 
                     */
                    std::vector<AgentKnowledgeAttrLabel> GetLabels() const;

                    /**
                     * 设置标签
                     * @param _labels 标签
                     * 
                     */
                    void SetLabels(const std::vector<AgentKnowledgeAttrLabel>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                private:

                    /**
                     * 标签之间的关系;0:AND, 1:OR
                     */
                    uint64_t m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<AgentKnowledgeAttrLabel> m_labels;
                    bool m_labelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_AGENTKNOWLEDGEFILTERTAG_H_
