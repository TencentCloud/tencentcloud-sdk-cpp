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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_HISTORY_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_HISTORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * 混元生图多轮对话历史记录。
                */
                class History : public AbstractModel
                {
                public:
                    History();
                    ~History() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对话的 ID，用于唯一标识一轮对话
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChatId 对话的 ID，用于唯一标识一轮对话
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChatId() const;

                    /**
                     * 设置对话的 ID，用于唯一标识一轮对话
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chatId 对话的 ID，用于唯一标识一轮对话
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChatId(const std::string& _chatId);

                    /**
                     * 判断参数 ChatId 是否已赋值
                     * @return ChatId 是否已赋值
                     * 
                     */
                    bool ChatIdHasBeenSet() const;

                    /**
                     * 获取原始输入的 Prompt 文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Prompt 原始输入的 Prompt 文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置原始输入的 Prompt 文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _prompt 原始输入的 Prompt 文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                    /**
                     * 获取扩写后的 Prompt 文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RevisedPrompt 扩写后的 Prompt 文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRevisedPrompt() const;

                    /**
                     * 设置扩写后的 Prompt 文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _revisedPrompt 扩写后的 Prompt 文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRevisedPrompt(const std::string& _revisedPrompt);

                    /**
                     * 判断参数 RevisedPrompt 是否已赋值
                     * @return RevisedPrompt 是否已赋值
                     * 
                     */
                    bool RevisedPromptHasBeenSet() const;

                    /**
                     * 获取生成图的随机种子
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Seed 生成图的随机种子
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSeed() const;

                    /**
                     * 设置生成图的随机种子
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _seed 生成图的随机种子
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSeed(const int64_t& _seed);

                    /**
                     * 判断参数 Seed 是否已赋值
                     * @return Seed 是否已赋值
                     * 
                     */
                    bool SeedHasBeenSet() const;

                private:

                    /**
                     * 对话的 ID，用于唯一标识一轮对话
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_chatId;
                    bool m_chatIdHasBeenSet;

                    /**
                     * 原始输入的 Prompt 文本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * 扩写后的 Prompt 文本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_revisedPrompt;
                    bool m_revisedPromptHasBeenSet;

                    /**
                     * 生成图的随机种子
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_seed;
                    bool m_seedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_HISTORY_H_
