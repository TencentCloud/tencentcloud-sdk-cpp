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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEAGENTAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEAGENTAPPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateAgentApplication请求参数结构体
                */
                class CreateAgentApplicationRequest : public AbstractModel
                {
                public:
                    CreateAgentApplicationRequest();
                    ~CreateAgentApplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用名称</p><p>入参限制：</p><ul><li>不能为空字符串</li><li>不能包含字符<code>|</code></li><li>不能超过64字符</li></ul>
                     * @return ApplicationName <p>应用名称</p><p>入参限制：</p><ul><li>不能为空字符串</li><li>不能包含字符<code>|</code></li><li>不能超过64字符</li></ul>
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置<p>应用名称</p><p>入参限制：</p><ul><li>不能为空字符串</li><li>不能包含字符<code>|</code></li><li>不能超过64字符</li></ul>
                     * @param _applicationName <p>应用名称</p><p>入参限制：</p><ul><li>不能为空字符串</li><li>不能包含字符<code>|</code></li><li>不能超过64字符</li></ul>
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取<p>接入类型</p><p>枚举值：</p><ul><li>Langfuse： Langfuse 是一款开源的 LLM（大语言模型）工程与可观测性平台（LLMOps Tool）</li></ul>
                     * @return AccessType <p>接入类型</p><p>枚举值：</p><ul><li>Langfuse： Langfuse 是一款开源的 LLM（大语言模型）工程与可观测性平台（LLMOps Tool）</li></ul>
                     * 
                     */
                    std::string GetAccessType() const;

                    /**
                     * 设置<p>接入类型</p><p>枚举值：</p><ul><li>Langfuse： Langfuse 是一款开源的 LLM（大语言模型）工程与可观测性平台（LLMOps Tool）</li></ul>
                     * @param _accessType <p>接入类型</p><p>枚举值：</p><ul><li>Langfuse： Langfuse 是一款开源的 LLM（大语言模型）工程与可观测性平台（LLMOps Tool）</li></ul>
                     * 
                     */
                    void SetAccessType(const std::string& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取<p>日志集Id。通过 <a href="https://cloud.tencent.com/document/product/614/58624">获取日志集列表</a>获取日志集Id。</p>
                     * @return LogsetId <p>日志集Id。通过 <a href="https://cloud.tencent.com/document/product/614/58624">获取日志集列表</a>获取日志集Id。</p>
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置<p>日志集Id。通过 <a href="https://cloud.tencent.com/document/product/614/58624">获取日志集列表</a>获取日志集Id。</p>
                     * @param _logsetId <p>日志集Id。通过 <a href="https://cloud.tencent.com/document/product/614/58624">获取日志集列表</a>获取日志集Id。</p>
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                private:

                    /**
                     * <p>应用名称</p><p>入参限制：</p><ul><li>不能为空字符串</li><li>不能包含字符<code>|</code></li><li>不能超过64字符</li></ul>
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * <p>接入类型</p><p>枚举值：</p><ul><li>Langfuse： Langfuse 是一款开源的 LLM（大语言模型）工程与可观测性平台（LLMOps Tool）</li></ul>
                     */
                    std::string m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * <p>日志集Id。通过 <a href="https://cloud.tencent.com/document/product/614/58624">获取日志集列表</a>获取日志集Id。</p>
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEAGENTAPPLICATIONREQUEST_H_
