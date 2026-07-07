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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_INTENTROUTERTIERDICTITEM_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_INTENTROUTERTIERDICTITEM_H_

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
                * IntentRouter Tier 字典项
                */
                class IntentRouterTierDictItem : public AbstractModel
                {
                public:
                    IntentRouterTierDictItem();
                    ~IntentRouterTierDictItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Tier 标识</p><p>枚举值：</p><ul><li>default： 默认</li><li>general_chat： 通用对话</li><li>transformation_rewrite： 转换与改写</li><li>knowledge_qa： 知识问答</li><li>summarization： 摘要</li><li>extraction_structuring： 抽取与结构化输出</li><li>content_generation： 内容生成</li><li>coding_technical： 编码与技术</li><li>data_math_analysis： 数据、数学与分析</li><li>reasoning_planning： 推理与规划</li><li>tool_agentic_workflow： 工具与智能体工作流</li></ul>
                     * @return TierId <p>Tier 标识</p><p>枚举值：</p><ul><li>default： 默认</li><li>general_chat： 通用对话</li><li>transformation_rewrite： 转换与改写</li><li>knowledge_qa： 知识问答</li><li>summarization： 摘要</li><li>extraction_structuring： 抽取与结构化输出</li><li>content_generation： 内容生成</li><li>coding_technical： 编码与技术</li><li>data_math_analysis： 数据、数学与分析</li><li>reasoning_planning： 推理与规划</li><li>tool_agentic_workflow： 工具与智能体工作流</li></ul>
                     * 
                     */
                    std::string GetTierId() const;

                    /**
                     * 设置<p>Tier 标识</p><p>枚举值：</p><ul><li>default： 默认</li><li>general_chat： 通用对话</li><li>transformation_rewrite： 转换与改写</li><li>knowledge_qa： 知识问答</li><li>summarization： 摘要</li><li>extraction_structuring： 抽取与结构化输出</li><li>content_generation： 内容生成</li><li>coding_technical： 编码与技术</li><li>data_math_analysis： 数据、数学与分析</li><li>reasoning_planning： 推理与规划</li><li>tool_agentic_workflow： 工具与智能体工作流</li></ul>
                     * @param _tierId <p>Tier 标识</p><p>枚举值：</p><ul><li>default： 默认</li><li>general_chat： 通用对话</li><li>transformation_rewrite： 转换与改写</li><li>knowledge_qa： 知识问答</li><li>summarization： 摘要</li><li>extraction_structuring： 抽取与结构化输出</li><li>content_generation： 内容生成</li><li>coding_technical： 编码与技术</li><li>data_math_analysis： 数据、数学与分析</li><li>reasoning_planning： 推理与规划</li><li>tool_agentic_workflow： 工具与智能体工作流</li></ul>
                     * 
                     */
                    void SetTierId(const std::string& _tierId);

                    /**
                     * 判断参数 TierId 是否已赋值
                     * @return TierId 是否已赋值
                     * 
                     */
                    bool TierIdHasBeenSet() const;

                    /**
                     * 获取<p>Tier 显示名称（已国际化）</p>
                     * @return DisplayName <p>Tier 显示名称（已国际化）</p>
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置<p>Tier 显示名称（已国际化）</p>
                     * @param _displayName <p>Tier 显示名称（已国际化）</p>
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取<p>Tier 描述（已国际化）</p>
                     * @return Description <p>Tier 描述（已国际化）</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Tier 描述（已国际化）</p>
                     * @param _description <p>Tier 描述（已国际化）</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>Tier 标识</p><p>枚举值：</p><ul><li>default： 默认</li><li>general_chat： 通用对话</li><li>transformation_rewrite： 转换与改写</li><li>knowledge_qa： 知识问答</li><li>summarization： 摘要</li><li>extraction_structuring： 抽取与结构化输出</li><li>content_generation： 内容生成</li><li>coding_technical： 编码与技术</li><li>data_math_analysis： 数据、数学与分析</li><li>reasoning_planning： 推理与规划</li><li>tool_agentic_workflow： 工具与智能体工作流</li></ul>
                     */
                    std::string m_tierId;
                    bool m_tierIdHasBeenSet;

                    /**
                     * <p>Tier 显示名称（已国际化）</p>
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * <p>Tier 描述（已国际化）</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_INTENTROUTERTIERDICTITEM_H_
