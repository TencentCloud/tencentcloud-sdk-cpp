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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODELSPEC_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODELSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * 模型规格信息
                */
                class ModelSpec : public AbstractModel
                {
                public:
                    ModelSpec();
                    ~ModelSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取每分钟处理 Token 数（Tokens Per Minute）。
                     * @return TPM 每分钟处理 Token 数（Tokens Per Minute）。
                     * 
                     */
                    std::string GetTPM() const;

                    /**
                     * 设置每分钟处理 Token 数（Tokens Per Minute）。
                     * @param _tPM 每分钟处理 Token 数（Tokens Per Minute）。
                     * 
                     */
                    void SetTPM(const std::string& _tPM);

                    /**
                     * 判断参数 TPM 是否已赋值
                     * @return TPM 是否已赋值
                     * 
                     */
                    bool TPMHasBeenSet() const;

                    /**
                     * 获取每分钟请求数（Queries Per Minute）。
                     * @return QPM 每分钟请求数（Queries Per Minute）。
                     * 
                     */
                    std::string GetQPM() const;

                    /**
                     * 设置每分钟请求数（Queries Per Minute）。
                     * @param _qPM 每分钟请求数（Queries Per Minute）。
                     * 
                     */
                    void SetQPM(const std::string& _qPM);

                    /**
                     * 判断参数 QPM 是否已赋值
                     * @return QPM 是否已赋值
                     * 
                     */
                    bool QPMHasBeenSet() const;

                    /**
                     * 获取最大输入 Token 长度。
                     * @return MaxInputToken 最大输入 Token 长度。
                     * 
                     */
                    std::string GetMaxInputToken() const;

                    /**
                     * 设置最大输入 Token 长度。
                     * @param _maxInputToken 最大输入 Token 长度。
                     * 
                     */
                    void SetMaxInputToken(const std::string& _maxInputToken);

                    /**
                     * 判断参数 MaxInputToken 是否已赋值
                     * @return MaxInputToken 是否已赋值
                     * 
                     */
                    bool MaxInputTokenHasBeenSet() const;

                    /**
                     * 获取最大输出 Token 长度。
                     * @return MaxOutputToken 最大输出 Token 长度。
                     * 
                     */
                    std::string GetMaxOutputToken() const;

                    /**
                     * 设置最大输出 Token 长度。
                     * @param _maxOutputToken 最大输出 Token 长度。
                     * 
                     */
                    void SetMaxOutputToken(const std::string& _maxOutputToken);

                    /**
                     * 判断参数 MaxOutputToken 是否已赋值
                     * @return MaxOutputToken 是否已赋值
                     * 
                     */
                    bool MaxOutputTokenHasBeenSet() const;

                    /**
                     * 获取上下文窗口长度。
                     * @return ContextLength 上下文窗口长度。
                     * 
                     */
                    std::string GetContextLength() const;

                    /**
                     * 设置上下文窗口长度。
                     * @param _contextLength 上下文窗口长度。
                     * 
                     */
                    void SetContextLength(const std::string& _contextLength);

                    /**
                     * 判断参数 ContextLength 是否已赋值
                     * @return ContextLength 是否已赋值
                     * 
                     */
                    bool ContextLengthHasBeenSet() const;

                    /**
                     * 获取并发数。
                     * @return Concurrency 并发数。
                     * 
                     */
                    std::string GetConcurrency() const;

                    /**
                     * 设置并发数。
                     * @param _concurrency 并发数。
                     * 
                     */
                    void SetConcurrency(const std::string& _concurrency);

                    /**
                     * 判断参数 Concurrency 是否已赋值
                     * @return Concurrency 是否已赋值
                     * 
                     */
                    bool ConcurrencyHasBeenSet() const;

                    /**
                     * 获取输入要求描述。
                     * @return InputDescription 输入要求描述。
                     * 
                     */
                    std::string GetInputDescription() const;

                    /**
                     * 设置输入要求描述。
                     * @param _inputDescription 输入要求描述。
                     * 
                     */
                    void SetInputDescription(const std::string& _inputDescription);

                    /**
                     * 判断参数 InputDescription 是否已赋值
                     * @return InputDescription 是否已赋值
                     * 
                     */
                    bool InputDescriptionHasBeenSet() const;

                private:

                    /**
                     * 每分钟处理 Token 数（Tokens Per Minute）。
                     */
                    std::string m_tPM;
                    bool m_tPMHasBeenSet;

                    /**
                     * 每分钟请求数（Queries Per Minute）。
                     */
                    std::string m_qPM;
                    bool m_qPMHasBeenSet;

                    /**
                     * 最大输入 Token 长度。
                     */
                    std::string m_maxInputToken;
                    bool m_maxInputTokenHasBeenSet;

                    /**
                     * 最大输出 Token 长度。
                     */
                    std::string m_maxOutputToken;
                    bool m_maxOutputTokenHasBeenSet;

                    /**
                     * 上下文窗口长度。
                     */
                    std::string m_contextLength;
                    bool m_contextLengthHasBeenSet;

                    /**
                     * 并发数。
                     */
                    std::string m_concurrency;
                    bool m_concurrencyHasBeenSet;

                    /**
                     * 输入要求描述。
                     */
                    std::string m_inputDescription;
                    bool m_inputDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODELSPEC_H_
