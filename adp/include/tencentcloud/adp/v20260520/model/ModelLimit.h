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
                * 模型限制信息
                */
                class ModelLimit : public AbstractModel
                {
                public:
                    ModelLimit();
                    ~ModelLimit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模型上下文长度展示文案（如 "128K"、"1000K"）
                     * @return ContextLengthDescription 模型上下文长度展示文案（如 "128K"、"1000K"）
                     * 
                     */
                    std::string GetContextLengthDescription() const;

                    /**
                     * 设置模型上下文长度展示文案（如 "128K"、"1000K"）
                     * @param _contextLengthDescription 模型上下文长度展示文案（如 "128K"、"1000K"）
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
                     * 获取模型对话框输入长度字符数限制
                     * @return InputLengthLimit 模型对话框输入长度字符数限制
                     * 
                     */
                    int64_t GetInputLengthLimit() const;

                    /**
                     * 设置模型对话框输入长度字符数限制
                     * @param _inputLengthLimit 模型对话框输入长度字符数限制
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
                     * 获取模型提示词长度字符数限制
                     * @return PromptLengthLimit 模型提示词长度字符数限制
                     * 
                     */
                    int64_t GetPromptLengthLimit() const;

                    /**
                     * 设置模型提示词长度字符数限制
                     * @param _promptLengthLimit 模型提示词长度字符数限制
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
                     * 模型上下文长度展示文案（如 "128K"、"1000K"）
                     */
                    std::string m_contextLengthDescription;
                    bool m_contextLengthDescriptionHasBeenSet;

                    /**
                     * 模型对话框输入长度字符数限制
                     */
                    int64_t m_inputLengthLimit;
                    bool m_inputLengthLimitHasBeenSet;

                    /**
                     * 模型提示词长度字符数限制
                     */
                    int64_t m_promptLengthLimit;
                    bool m_promptLengthLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODELLIMIT_H_
