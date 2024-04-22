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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_USAGE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_USAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 消耗量
                */
                class Usage : public AbstractModel
                {
                public:
                    Usage();
                    ~Usage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文档页数
                     * @return TotalPages 文档页数
                     * 
                     */
                    int64_t GetTotalPages() const;

                    /**
                     * 设置文档页数
                     * @param _totalPages 文档页数
                     * 
                     */
                    void SetTotalPages(const int64_t& _totalPages);

                    /**
                     * 判断参数 TotalPages 是否已赋值
                     * @return TotalPages 是否已赋值
                     * 
                     */
                    bool TotalPagesHasBeenSet() const;

                    /**
                     * 获取输入token数
                     * @return InputTokens 输入token数
                     * 
                     */
                    int64_t GetInputTokens() const;

                    /**
                     * 设置输入token数
                     * @param _inputTokens 输入token数
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
                     * 获取输出token数
                     * @return OutputTokens 输出token数
                     * 
                     */
                    int64_t GetOutputTokens() const;

                    /**
                     * 设置输出token数
                     * @param _outputTokens 输出token数
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
                     * 文档页数
                     */
                    int64_t m_totalPages;
                    bool m_totalPagesHasBeenSet;

                    /**
                     * 输入token数
                     */
                    int64_t m_inputTokens;
                    bool m_inputTokensHasBeenSet;

                    /**
                     * 输出token数
                     */
                    int64_t m_outputTokens;
                    bool m_outputTokensHasBeenSet;

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

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_USAGE_H_
