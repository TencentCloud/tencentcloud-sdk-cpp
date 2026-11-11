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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODELCHATCOMPLETIONUSAGE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODELCHATCOMPLETIONUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 模型调用的 token 用量统计。
                */
                class ModelChatCompletionUsage : public AbstractModel
                {
                public:
                    ModelChatCompletionUsage();
                    ~ModelChatCompletionUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>输入 token 数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PromptTokens <p>输入 token 数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPromptTokens() const;

                    /**
                     * 设置<p>输入 token 数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _promptTokens <p>输入 token 数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPromptTokens(const int64_t& _promptTokens);

                    /**
                     * 判断参数 PromptTokens 是否已赋值
                     * @return PromptTokens 是否已赋值
                     * 
                     */
                    bool PromptTokensHasBeenSet() const;

                    /**
                     * 获取<p>输出 token 数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompletionTokens <p>输出 token 数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCompletionTokens() const;

                    /**
                     * 设置<p>输出 token 数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _completionTokens <p>输出 token 数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompletionTokens(const int64_t& _completionTokens);

                    /**
                     * 判断参数 CompletionTokens 是否已赋值
                     * @return CompletionTokens 是否已赋值
                     * 
                     */
                    bool CompletionTokensHasBeenSet() const;

                    /**
                     * 获取<p>总 token 数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalTokens <p>总 token 数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalTokens() const;

                    /**
                     * 设置<p>总 token 数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalTokens <p>总 token 数</p>
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

                private:

                    /**
                     * <p>输入 token 数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_promptTokens;
                    bool m_promptTokensHasBeenSet;

                    /**
                     * <p>输出 token 数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_completionTokens;
                    bool m_completionTokensHasBeenSet;

                    /**
                     * <p>总 token 数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalTokens;
                    bool m_totalTokensHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODELCHATCOMPLETIONUSAGE_H_
