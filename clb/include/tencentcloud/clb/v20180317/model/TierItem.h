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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_TIERITEM_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_TIERITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 意图路由分层配置对象。支持两种分层协议（二选一，不可混用）：① 复杂度分层——必须包含全部 4 个固定分层：SIMPLE/MEDIUM/COMPLEX/REASONING；② 语义分层——包含 default 及各语义 Tier。TierName 取值见下。
                */
                class TierItem : public AbstractModel
                {
                public:
                    TierItem();
                    ~TierItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>该分层下的模型显示名称列表。</p><p>至少包含一个模型，模型名称必须是已关联到该模型路由实例的模型。同一分层内不允许重复模型名称。</p>
                     * @return Models <p>该分层下的模型显示名称列表。</p><p>至少包含一个模型，模型名称必须是已关联到该模型路由实例的模型。同一分层内不允许重复模型名称。</p>
                     * 
                     */
                    std::vector<std::string> GetModels() const;

                    /**
                     * 设置<p>该分层下的模型显示名称列表。</p><p>至少包含一个模型，模型名称必须是已关联到该模型路由实例的模型。同一分层内不允许重复模型名称。</p>
                     * @param _models <p>该分层下的模型显示名称列表。</p><p>至少包含一个模型，模型名称必须是已关联到该模型路由实例的模型。同一分层内不允许重复模型名称。</p>
                     * 
                     */
                    void SetModels(const std::vector<std::string>& _models);

                    /**
                     * 判断参数 Models 是否已赋值
                     * @return Models 是否已赋值
                     * 
                     */
                    bool ModelsHasBeenSet() const;

                    /**
                     * 获取<p>Tier 标识。<br>枚举值：</p><ul><li>复杂度分层（4 个固定值，需全部包含）：SIMPLE、MEDIUM、COMPLEX、REASONING</li><li>default：默认</li><li>general_chat：通用对话</li><li>transformation_rewrite：转换与改写</li><li>knowledge_qa：知识问答</li><li>summarization：摘要</li><li>extraction_structuring：抽取与结构化输出</li><li>content_generation：内容生成</li><li>coding_technical：编码与技术</li><li>data_math_analysis：数据、数学与分析</li><li>reasoning_planning：推理与规划</li><li>tool_agentic_workflow：工具与智能体工作流</li></ul>
                     * @return TierName <p>Tier 标识。<br>枚举值：</p><ul><li>复杂度分层（4 个固定值，需全部包含）：SIMPLE、MEDIUM、COMPLEX、REASONING</li><li>default：默认</li><li>general_chat：通用对话</li><li>transformation_rewrite：转换与改写</li><li>knowledge_qa：知识问答</li><li>summarization：摘要</li><li>extraction_structuring：抽取与结构化输出</li><li>content_generation：内容生成</li><li>coding_technical：编码与技术</li><li>data_math_analysis：数据、数学与分析</li><li>reasoning_planning：推理与规划</li><li>tool_agentic_workflow：工具与智能体工作流</li></ul>
                     * 
                     */
                    std::string GetTierName() const;

                    /**
                     * 设置<p>Tier 标识。<br>枚举值：</p><ul><li>复杂度分层（4 个固定值，需全部包含）：SIMPLE、MEDIUM、COMPLEX、REASONING</li><li>default：默认</li><li>general_chat：通用对话</li><li>transformation_rewrite：转换与改写</li><li>knowledge_qa：知识问答</li><li>summarization：摘要</li><li>extraction_structuring：抽取与结构化输出</li><li>content_generation：内容生成</li><li>coding_technical：编码与技术</li><li>data_math_analysis：数据、数学与分析</li><li>reasoning_planning：推理与规划</li><li>tool_agentic_workflow：工具与智能体工作流</li></ul>
                     * @param _tierName <p>Tier 标识。<br>枚举值：</p><ul><li>复杂度分层（4 个固定值，需全部包含）：SIMPLE、MEDIUM、COMPLEX、REASONING</li><li>default：默认</li><li>general_chat：通用对话</li><li>transformation_rewrite：转换与改写</li><li>knowledge_qa：知识问答</li><li>summarization：摘要</li><li>extraction_structuring：抽取与结构化输出</li><li>content_generation：内容生成</li><li>coding_technical：编码与技术</li><li>data_math_analysis：数据、数学与分析</li><li>reasoning_planning：推理与规划</li><li>tool_agentic_workflow：工具与智能体工作流</li></ul>
                     * 
                     */
                    void SetTierName(const std::string& _tierName);

                    /**
                     * 判断参数 TierName 是否已赋值
                     * @return TierName 是否已赋值
                     * 
                     */
                    bool TierNameHasBeenSet() const;

                private:

                    /**
                     * <p>该分层下的模型显示名称列表。</p><p>至少包含一个模型，模型名称必须是已关联到该模型路由实例的模型。同一分层内不允许重复模型名称。</p>
                     */
                    std::vector<std::string> m_models;
                    bool m_modelsHasBeenSet;

                    /**
                     * <p>Tier 标识。<br>枚举值：</p><ul><li>复杂度分层（4 个固定值，需全部包含）：SIMPLE、MEDIUM、COMPLEX、REASONING</li><li>default：默认</li><li>general_chat：通用对话</li><li>transformation_rewrite：转换与改写</li><li>knowledge_qa：知识问答</li><li>summarization：摘要</li><li>extraction_structuring：抽取与结构化输出</li><li>content_generation：内容生成</li><li>coding_technical：编码与技术</li><li>data_math_analysis：数据、数学与分析</li><li>reasoning_planning：推理与规划</li><li>tool_agentic_workflow：工具与智能体工作流</li></ul>
                     */
                    std::string m_tierName;
                    bool m_tierNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_TIERITEM_H_
