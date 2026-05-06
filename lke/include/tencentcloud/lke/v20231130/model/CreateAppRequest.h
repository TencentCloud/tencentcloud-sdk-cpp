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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CREATEAPPREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CREATEAPPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/BaseConfig.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * CreateApp请求参数结构体
                */
                class CreateAppRequest : public AbstractModel
                {
                public:
                    CreateAppRequest();
                    ~CreateAppRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用类型；<code>&quot;knowledge_qa&quot;</code> 知识问答应用（包含标准模式 单工作流 Multi-Agent 等模式）</p>
                     * @return AppType <p>应用类型；<code>&quot;knowledge_qa&quot;</code> 知识问答应用（包含标准模式 单工作流 Multi-Agent 等模式）</p>
                     * 
                     */
                    std::string GetAppType() const;

                    /**
                     * 设置<p>应用类型；<code>&quot;knowledge_qa&quot;</code> 知识问答应用（包含标准模式 单工作流 Multi-Agent 等模式）</p>
                     * @param _appType <p>应用类型；<code>&quot;knowledge_qa&quot;</code> 知识问答应用（包含标准模式 单工作流 Multi-Agent 等模式）</p>
                     * 
                     */
                    void SetAppType(const std::string& _appType);

                    /**
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     * 
                     */
                    bool AppTypeHasBeenSet() const;

                    /**
                     * 获取<p>应用基础配置</p>
                     * @return BaseConfig <p>应用基础配置</p>
                     * 
                     */
                    BaseConfig GetBaseConfig() const;

                    /**
                     * 设置<p>应用基础配置</p>
                     * @param _baseConfig <p>应用基础配置</p>
                     * 
                     */
                    void SetBaseConfig(const BaseConfig& _baseConfig);

                    /**
                     * 判断参数 BaseConfig 是否已赋值
                     * @return BaseConfig 是否已赋值
                     * 
                     */
                    bool BaseConfigHasBeenSet() const;

                    /**
                     * 获取<p>应用模式 standard:标准模式, agent: agent模式，single_workflow：单工作流模式,ClawAgent:Claw模式</p>
                     * @return Pattern <p>应用模式 standard:标准模式, agent: agent模式，single_workflow：单工作流模式,ClawAgent:Claw模式</p>
                     * 
                     */
                    std::string GetPattern() const;

                    /**
                     * 设置<p>应用模式 standard:标准模式, agent: agent模式，single_workflow：单工作流模式,ClawAgent:Claw模式</p>
                     * @param _pattern <p>应用模式 standard:标准模式, agent: agent模式，single_workflow：单工作流模式,ClawAgent:Claw模式</p>
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
                     * 获取<p>智能体类型，用于区分应用最终以何种智能体形态对外服务（对话(&quot;dialogue&quot;) / 公众号(&quot;wechat&quot;)）。当前 ADP 创建页面不区分对话/公众号智能体，ADP 创建页默认走对话智能体。</p>
                     * @return AgentType <p>智能体类型，用于区分应用最终以何种智能体形态对外服务（对话(&quot;dialogue&quot;) / 公众号(&quot;wechat&quot;)）。当前 ADP 创建页面不区分对话/公众号智能体，ADP 创建页默认走对话智能体。</p>
                     * 
                     */
                    std::string GetAgentType() const;

                    /**
                     * 设置<p>智能体类型，用于区分应用最终以何种智能体形态对外服务（对话(&quot;dialogue&quot;) / 公众号(&quot;wechat&quot;)）。当前 ADP 创建页面不区分对话/公众号智能体，ADP 创建页默认走对话智能体。</p>
                     * @param _agentType <p>智能体类型，用于区分应用最终以何种智能体形态对外服务（对话(&quot;dialogue&quot;) / 公众号(&quot;wechat&quot;)）。当前 ADP 创建页面不区分对话/公众号智能体，ADP 创建页默认走对话智能体。</p>
                     * 
                     */
                    void SetAgentType(const std::string& _agentType);

                    /**
                     * 判断参数 AgentType 是否已赋值
                     * @return AgentType 是否已赋值
                     * 
                     */
                    bool AgentTypeHasBeenSet() const;

                private:

                    /**
                     * <p>应用类型；<code>&quot;knowledge_qa&quot;</code> 知识问答应用（包含标准模式 单工作流 Multi-Agent 等模式）</p>
                     */
                    std::string m_appType;
                    bool m_appTypeHasBeenSet;

                    /**
                     * <p>应用基础配置</p>
                     */
                    BaseConfig m_baseConfig;
                    bool m_baseConfigHasBeenSet;

                    /**
                     * <p>应用模式 standard:标准模式, agent: agent模式，single_workflow：单工作流模式,ClawAgent:Claw模式</p>
                     */
                    std::string m_pattern;
                    bool m_patternHasBeenSet;

                    /**
                     * <p>智能体类型，用于区分应用最终以何种智能体形态对外服务（对话(&quot;dialogue&quot;) / 公众号(&quot;wechat&quot;)）。当前 ADP 创建页面不区分对话/公众号智能体，ADP 创建页默认走对话智能体。</p>
                     */
                    std::string m_agentType;
                    bool m_agentTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CREATEAPPREQUEST_H_
