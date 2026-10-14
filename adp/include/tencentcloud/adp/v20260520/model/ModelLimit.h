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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODELLIMIT_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODELLIMIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * <p>模型限制信息</p>
                */
                class ModelLimit : public AbstractModel
                {
                public:
                    ModelLimit();
                    ~ModelLimit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模型上下文长度展示文案（如 128K、1000K）</p>
                     * @return ContextLengthDescription <p>模型上下文长度展示文案（如 128K、1000K）</p>
                     * 
                     */
                    std::string GetContextLengthDescription() const;

                    /**
                     * 设置<p>模型上下文长度展示文案（如 128K、1000K）</p>
                     * @param _contextLengthDescription <p>模型上下文长度展示文案（如 128K、1000K）</p>
                     * 
                     */
                    void SetContextLengthDescription(const std::string& _contextLengthDescription);

                    /**
                     * 判断参数 ContextLengthDescription 是否已赋值
                     * @return ContextLengthDescription 是否已赋值
                     * 
                     */
                    bool ContextLengthDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>模型对话框输入长度字符数限制</p>
                     * @return InputLengthLimit <p>模型对话框输入长度字符数限制</p>
                     * 
                     */
                    int64_t GetInputLengthLimit() const;

                    /**
                     * 设置<p>模型对话框输入长度字符数限制</p>
                     * @param _inputLengthLimit <p>模型对话框输入长度字符数限制</p>
                     * 
                     */
                    void SetInputLengthLimit(const int64_t& _inputLengthLimit);

                    /**
                     * 判断参数 InputLengthLimit 是否已赋值
                     * @return InputLengthLimit 是否已赋值
                     * 
                     */
                    bool InputLengthLimitHasBeenSet() const;

                    /**
                     * 获取<p>最大输入 Tokens 展示文案（如 960k，服务端格式化，未配置为空串）</p>
                     * @return MaxInputTokensDescription <p>最大输入 Tokens 展示文案（如 960k，服务端格式化，未配置为空串）</p>
                     * 
                     */
                    std::string GetMaxInputTokensDescription() const;

                    /**
                     * 设置<p>最大输入 Tokens 展示文案（如 960k，服务端格式化，未配置为空串）</p>
                     * @param _maxInputTokensDescription <p>最大输入 Tokens 展示文案（如 960k，服务端格式化，未配置为空串）</p>
                     * 
                     */
                    void SetMaxInputTokensDescription(const std::string& _maxInputTokensDescription);

                    /**
                     * 判断参数 MaxInputTokensDescription 是否已赋值
                     * @return MaxInputTokensDescription 是否已赋值
                     * 
                     */
                    bool MaxInputTokensDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>最大输出 Tokens 展示文案（如 64k，服务端格式化，未配置为空串）</p>
                     * @return MaxOutputTokensDescription <p>最大输出 Tokens 展示文案（如 64k，服务端格式化，未配置为空串）</p>
                     * 
                     */
                    std::string GetMaxOutputTokensDescription() const;

                    /**
                     * 设置<p>最大输出 Tokens 展示文案（如 64k，服务端格式化，未配置为空串）</p>
                     * @param _maxOutputTokensDescription <p>最大输出 Tokens 展示文案（如 64k，服务端格式化，未配置为空串）</p>
                     * 
                     */
                    void SetMaxOutputTokensDescription(const std::string& _maxOutputTokensDescription);

                    /**
                     * 判断参数 MaxOutputTokensDescription 是否已赋值
                     * @return MaxOutputTokensDescription 是否已赋值
                     * 
                     */
                    bool MaxOutputTokensDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>模型提示词长度字符数限制</p>
                     * @return PromptLengthLimit <p>模型提示词长度字符数限制</p>
                     * 
                     */
                    int64_t GetPromptLengthLimit() const;

                    /**
                     * 设置<p>模型提示词长度字符数限制</p>
                     * @param _promptLengthLimit <p>模型提示词长度字符数限制</p>
                     * 
                     */
                    void SetPromptLengthLimit(const int64_t& _promptLengthLimit);

                    /**
                     * 判断参数 PromptLengthLimit 是否已赋值
                     * @return PromptLengthLimit 是否已赋值
                     * 
                     */
                    bool PromptLengthLimitHasBeenSet() const;

                private:

                    /**
                     * <p>模型上下文长度展示文案（如 128K、1000K）</p>
                     */
                    std::string m_contextLengthDescription;
                    bool m_contextLengthDescriptionHasBeenSet;

                    /**
                     * <p>模型对话框输入长度字符数限制</p>
                     */
                    int64_t m_inputLengthLimit;
                    bool m_inputLengthLimitHasBeenSet;

                    /**
                     * <p>最大输入 Tokens 展示文案（如 960k，服务端格式化，未配置为空串）</p>
                     */
                    std::string m_maxInputTokensDescription;
                    bool m_maxInputTokensDescriptionHasBeenSet;

                    /**
                     * <p>最大输出 Tokens 展示文案（如 64k，服务端格式化，未配置为空串）</p>
                     */
                    std::string m_maxOutputTokensDescription;
                    bool m_maxOutputTokensDescriptionHasBeenSet;

                    /**
                     * <p>模型提示词长度字符数限制</p>
                     */
                    int64_t m_promptLengthLimit;
                    bool m_promptLengthLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODELLIMIT_H_
