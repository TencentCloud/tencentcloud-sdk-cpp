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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_TOKENUSAGE_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_TOKENUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * Token用量
                */
                class TokenUsage : public AbstractModel
                {
                public:
                    TokenUsage();
                    ~TokenUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>输入Token</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputTokens <p>输入Token</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInputTokens() const;

                    /**
                     * 设置<p>输入Token</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputTokens <p>输入Token</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInputTokens(const int64_t& _inputTokens);

                    /**
                     * 判断参数 InputTokens 是否已赋值
                     * @return InputTokens 是否已赋值
                     * 
                     */
                    bool InputTokensHasBeenSet() const;

                    /**
                     * 获取<p>输出Token</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputTokens <p>输出Token</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOutputTokens() const;

                    /**
                     * 设置<p>输出Token</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputTokens <p>输出Token</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutputTokens(const int64_t& _outputTokens);

                    /**
                     * 判断参数 OutputTokens 是否已赋值
                     * @return OutputTokens 是否已赋值
                     * 
                     */
                    bool OutputTokensHasBeenSet() const;

                    /**
                     * 获取<p>总Token</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalTokens <p>总Token</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalTokens() const;

                    /**
                     * 设置<p>总Token</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalTokens <p>总Token</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalTokens(const int64_t& _totalTokens);

                    /**
                     * 判断参数 TotalTokens 是否已赋值
                     * @return TotalTokens 是否已赋值
                     * 
                     */
                    bool TotalTokensHasBeenSet() const;

                    /**
                     * 获取<p>统计口径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Scope <p>统计口径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置<p>统计口径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scope <p>统计口径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScope(const std::string& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                private:

                    /**
                     * <p>输入Token</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_inputTokens;
                    bool m_inputTokensHasBeenSet;

                    /**
                     * <p>输出Token</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_outputTokens;
                    bool m_outputTokensHasBeenSet;

                    /**
                     * <p>总Token</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalTokens;
                    bool m_totalTokensHasBeenSet;

                    /**
                     * <p>统计口径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_TOKENUSAGE_H_
