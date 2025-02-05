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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_CHATUSAGE_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_CHATUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * 消耗量
                */
                class ChatUsage : public AbstractModel
                {
                public:
                    ChatUsage();
                    ~ChatUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输入token数
                     * @return PromptTokens 输入token数
                     * 
                     */
                    int64_t GetPromptTokens() const;

                    /**
                     * 设置输入token数
                     * @param _promptTokens 输入token数
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
                     * 获取输出token数
                     * @return CompletionTokens 输出token数
                     * 
                     */
                    int64_t GetCompletionTokens() const;

                    /**
                     * 设置输出token数
                     * @param _completionTokens 输出token数
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
                     * 获取总token数
                     * @return TotalTokens 总token数
                     * 
                     */
                    int64_t GetTotalTokens() const;

                    /**
                     * 设置总token数
                     * @param _totalTokens 总token数
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
                     * 输入token数
                     */
                    int64_t m_promptTokens;
                    bool m_promptTokensHasBeenSet;

                    /**
                     * 输出token数
                     */
                    int64_t m_completionTokens;
                    bool m_completionTokensHasBeenSet;

                    /**
                     * 总token数
                     */
                    int64_t m_totalTokens;
                    bool m_totalTokensHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_CHATUSAGE_H_
