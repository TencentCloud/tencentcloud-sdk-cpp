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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_KNOWLEDGEANALYSISINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_KNOWLEDGEANALYSISINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/KnowledgeAnalysisResult.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 知识库媒体分析信息。
                */
                class KnowledgeAnalysisInfo : public AbstractModel
                {
                public:
                    KnowledgeAnalysisInfo();
                    ~KnowledgeAnalysisInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>大模型解析模板号</p>
                     * @return Definition <p>大模型解析模板号</p>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置<p>大模型解析模板号</p>
                     * @param _definition <p>大模型解析模板号</p>
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取<p>大模型解析结果</p>
                     * @return AnalysisResults <p>大模型解析结果</p>
                     * 
                     */
                    std::vector<KnowledgeAnalysisResult> GetAnalysisResults() const;

                    /**
                     * 设置<p>大模型解析结果</p>
                     * @param _analysisResults <p>大模型解析结果</p>
                     * 
                     */
                    void SetAnalysisResults(const std::vector<KnowledgeAnalysisResult>& _analysisResults);

                    /**
                     * 判断参数 AnalysisResults 是否已赋值
                     * @return AnalysisResults 是否已赋值
                     * 
                     */
                    bool AnalysisResultsHasBeenSet() const;

                private:

                    /**
                     * <p>大模型解析模板号</p>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>大模型解析结果</p>
                     */
                    std::vector<KnowledgeAnalysisResult> m_analysisResults;
                    bool m_analysisResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_KNOWLEDGEANALYSISINFO_H_
