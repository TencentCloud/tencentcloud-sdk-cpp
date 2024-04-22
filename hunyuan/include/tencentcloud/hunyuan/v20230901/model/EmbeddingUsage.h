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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_EMBEDDINGUSAGE_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_EMBEDDINGUSAGE_H_

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
                * Token 使用计数。
                */
                class EmbeddingUsage : public AbstractModel
                {
                public:
                    EmbeddingUsage();
                    ~EmbeddingUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输入 Token 数。
                     * @return PromptTokens 输入 Token 数。
                     * 
                     */
                    int64_t GetPromptTokens() const;

                    /**
                     * 设置输入 Token 数。
                     * @param _promptTokens 输入 Token 数。
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
                     * 获取总 Token 数。
                     * @return TotalTokens 总 Token 数。
                     * 
                     */
                    int64_t GetTotalTokens() const;

                    /**
                     * 设置总 Token 数。
                     * @param _totalTokens 总 Token 数。
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
                     * 输入 Token 数。
                     */
                    int64_t m_promptTokens;
                    bool m_promptTokensHasBeenSet;

                    /**
                     * 总 Token 数。
                     */
                    int64_t m_totalTokens;
                    bool m_totalTokensHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_EMBEDDINGUSAGE_H_
