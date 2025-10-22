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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_AIANALYSISRESULT_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_AIANALYSISRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * AI会话分析结果
                */
                class AIAnalysisResult : public AbstractModel
                {
                public:
                    AIAnalysisResult();
                    ~AIAnalysisResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取summary: 会话小结
mood: 情绪分析
intention: 意向提取
                     * @return Type summary: 会话小结
mood: 情绪分析
intention: 意向提取
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置summary: 会话小结
mood: 情绪分析
intention: 意向提取
                     * @param _type summary: 会话小结
mood: 情绪分析
intention: 意向提取
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取AI会话分析结果
                     * @return Result AI会话分析结果
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置AI会话分析结果
                     * @param _result AI会话分析结果
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * summary: 会话小结
mood: 情绪分析
intention: 意向提取
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * AI会话分析结果
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_AIANALYSISRESULT_H_
