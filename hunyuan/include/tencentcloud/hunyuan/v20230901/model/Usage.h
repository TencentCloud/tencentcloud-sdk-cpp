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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_USAGE_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_USAGE_H_

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
                * Token 数量
                */
                class Usage : public AbstractModel
                {
                public:
                    Usage();
                    ~Usage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输入 Token 数量。
                     * @return PromptTokens 输入 Token 数量。
                     * 
                     */
                    int64_t GetPromptTokens() const;

                    /**
                     * 设置输入 Token 数量。
                     * @param _promptTokens 输入 Token 数量。
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
                     * 获取输出 Token 数量。
                     * @return CompletionTokens 输出 Token 数量。
                     * 
                     */
                    int64_t GetCompletionTokens() const;

                    /**
                     * 设置输出 Token 数量。
                     * @param _completionTokens 输出 Token 数量。
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
                     * 获取总 Token 数量。
                     * @return TotalTokens 总 Token 数量。
                     * 
                     */
                    int64_t GetTotalTokens() const;

                    /**
                     * 设置总 Token 数量。
                     * @param _totalTokens 总 Token 数量。
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
                     * 输入 Token 数量。
                     */
                    int64_t m_promptTokens;
                    bool m_promptTokensHasBeenSet;

                    /**
                     * 输出 Token 数量。
                     */
                    int64_t m_completionTokens;
                    bool m_completionTokensHasBeenSet;

                    /**
                     * 总 Token 数量。
                     */
                    int64_t m_totalTokens;
                    bool m_totalTokensHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_USAGE_H_
