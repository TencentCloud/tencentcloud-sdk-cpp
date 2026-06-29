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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLSLOGLISTV3RESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLSLOGLISTV3RESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/LogSearchResult.h>
#include <tencentcloud/csip/v20221121/model/LogItems.h>
#include <tencentcloud/csip/v20221121/model/LogColumn.h>
#include <tencentcloud/csip/v20221121/model/LogSearchTopics.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCLSLogListV3返回参数结构体
                */
                class DescribeCLSLogListV3Response : public AbstractModel
                {
                public:
                    DescribeCLSLogListV3Response();
                    ~DescribeCLSLogListV3Response() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>上下文</p>
                     * @return Context <p>上下文</p>
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取<p>listover</p>
                     * @return ListOver <p>listover</p>
                     * 
                     */
                    bool GetListOver() const;

                    /**
                     * 判断参数 ListOver 是否已赋值
                     * @return ListOver 是否已赋值
                     * 
                     */
                    bool ListOverHasBeenSet() const;

                    /**
                     * 获取<p>是否采用分析</p>
                     * @return Analysis <p>是否采用分析</p>
                     * 
                     */
                    bool GetAnalysis() const;

                    /**
                     * 判断参数 Analysis 是否已赋值
                     * @return Analysis 是否已赋值
                     * 
                     */
                    bool AnalysisHasBeenSet() const;

                    /**
                     * 获取<p>结果</p>
                     * @return Results <p>结果</p>
                     * 
                     */
                    std::vector<LogSearchResult> GetResults() const;

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                    /**
                     * 获取<p>列名</p>
                     * @return ColNames <p>列名</p>
                     * 
                     */
                    std::vector<std::string> GetColNames() const;

                    /**
                     * 判断参数 ColNames 是否已赋值
                     * @return ColNames 是否已赋值
                     * 
                     */
                    bool ColNamesHasBeenSet() const;

                    /**
                     * 获取<p>分析结果</p>
                     * @return AnalysisResults <p>分析结果</p>
                     * 
                     */
                    std::vector<LogItems> GetAnalysisResults() const;

                    /**
                     * 判断参数 AnalysisResults 是否已赋值
                     * @return AnalysisResults 是否已赋值
                     * 
                     */
                    bool AnalysisResultsHasBeenSet() const;

                    /**
                     * 获取<p>分析记录</p>
                     * @return AnalysisRecords <p>分析记录</p>
                     * 
                     */
                    std::vector<std::string> GetAnalysisRecords() const;

                    /**
                     * 判断参数 AnalysisRecords 是否已赋值
                     * @return AnalysisRecords 是否已赋值
                     * 
                     */
                    bool AnalysisRecordsHasBeenSet() const;

                    /**
                     * 获取<p>列名</p>
                     * @return Columns <p>列名</p>
                     * 
                     */
                    std::vector<LogColumn> GetColumns() const;

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     * 
                     */
                    bool ColumnsHasBeenSet() const;

                    /**
                     * 获取<p>采样</p>
                     * @return SamplingRate <p>采样</p>
                     * 
                     */
                    double GetSamplingRate() const;

                    /**
                     * 判断参数 SamplingRate 是否已赋值
                     * @return SamplingRate 是否已赋值
                     * 
                     */
                    bool SamplingRateHasBeenSet() const;

                    /**
                     * 获取<p>主题信息</p>
                     * @return Topics <p>主题信息</p>
                     * 
                     */
                    LogSearchTopics GetTopics() const;

                    /**
                     * 判断参数 Topics 是否已赋值
                     * @return Topics 是否已赋值
                     * 
                     */
                    bool TopicsHasBeenSet() const;

                private:

                    /**
                     * <p>上下文</p>
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * <p>listover</p>
                     */
                    bool m_listOver;
                    bool m_listOverHasBeenSet;

                    /**
                     * <p>是否采用分析</p>
                     */
                    bool m_analysis;
                    bool m_analysisHasBeenSet;

                    /**
                     * <p>结果</p>
                     */
                    std::vector<LogSearchResult> m_results;
                    bool m_resultsHasBeenSet;

                    /**
                     * <p>列名</p>
                     */
                    std::vector<std::string> m_colNames;
                    bool m_colNamesHasBeenSet;

                    /**
                     * <p>分析结果</p>
                     */
                    std::vector<LogItems> m_analysisResults;
                    bool m_analysisResultsHasBeenSet;

                    /**
                     * <p>分析记录</p>
                     */
                    std::vector<std::string> m_analysisRecords;
                    bool m_analysisRecordsHasBeenSet;

                    /**
                     * <p>列名</p>
                     */
                    std::vector<LogColumn> m_columns;
                    bool m_columnsHasBeenSet;

                    /**
                     * <p>采样</p>
                     */
                    double m_samplingRate;
                    bool m_samplingRateHasBeenSet;

                    /**
                     * <p>主题信息</p>
                     */
                    LogSearchTopics m_topics;
                    bool m_topicsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLSLOGLISTV3RESPONSE_H_
