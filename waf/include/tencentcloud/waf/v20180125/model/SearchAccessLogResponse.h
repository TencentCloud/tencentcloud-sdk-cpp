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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_SEARCHACCESSLOGRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_SEARCHACCESSLOGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/AccessLogInfo.h>
#include <tencentcloud/waf/v20180125/model/AccessLogItems.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * SearchAccessLog返回参数结构体
                */
                class SearchAccessLogResponse : public AbstractModel
                {
                public:
                    SearchAccessLogResponse();
                    ~SearchAccessLogResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取新接口此字段失效，默认返回空字符串
                     * @return Context 新接口此字段失效，默认返回空字符串
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
                     * 获取日志查询结果是否全部返回，其中，“true”表示结果返回，“false”表示结果为返回
                     * @return ListOver 日志查询结果是否全部返回，其中，“true”表示结果返回，“false”表示结果为返回
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
                     * 获取返回的是否为分析结果，其中，“true”表示返回分析结果，“false”表示未返回分析结果
                     * @return Analysis 返回的是否为分析结果，其中，“true”表示返回分析结果，“false”表示未返回分析结果
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
                     * 获取如果Analysis为True，则返回分析结果的列名，否则为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColNames 如果Analysis为True，则返回分析结果的列名，否则为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::vector<std::string> GetColNames() const;

                    /**
                     * 判断参数 ColNames 是否已赋值
                     * @return ColNames 是否已赋值
                     * @deprecated
                     */
                    bool ColNamesHasBeenSet() const;

                    /**
                     * 获取日志查询结果；当Analysis为True时，可能返回为null
注意：此字段可能返回 null，表示取不到有效值
                     * @return Results 日志查询结果；当Analysis为True时，可能返回为null
注意：此字段可能返回 null，表示取不到有效值
                     * 
                     */
                    std::vector<AccessLogInfo> GetResults() const;

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                    /**
                     * 获取日志分析结果；当Analysis为False时，可能返回为null
注意：此字段可能返回 null，表示取不到有效值
                     * @return AnalysisResults 日志分析结果；当Analysis为False时，可能返回为null
注意：此字段可能返回 null，表示取不到有效值
                     * @deprecated
                     */
                    std::vector<AccessLogItems> GetAnalysisResults() const;

                    /**
                     * 判断参数 AnalysisResults 是否已赋值
                     * @return AnalysisResults 是否已赋值
                     * @deprecated
                     */
                    bool AnalysisResultsHasBeenSet() const;

                private:

                    /**
                     * 新接口此字段失效，默认返回空字符串
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * 日志查询结果是否全部返回，其中，“true”表示结果返回，“false”表示结果为返回
                     */
                    bool m_listOver;
                    bool m_listOverHasBeenSet;

                    /**
                     * 返回的是否为分析结果，其中，“true”表示返回分析结果，“false”表示未返回分析结果
                     */
                    bool m_analysis;
                    bool m_analysisHasBeenSet;

                    /**
                     * 如果Analysis为True，则返回分析结果的列名，否则为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_colNames;
                    bool m_colNamesHasBeenSet;

                    /**
                     * 日志查询结果；当Analysis为True时，可能返回为null
注意：此字段可能返回 null，表示取不到有效值
                     */
                    std::vector<AccessLogInfo> m_results;
                    bool m_resultsHasBeenSet;

                    /**
                     * 日志分析结果；当Analysis为False时，可能返回为null
注意：此字段可能返回 null，表示取不到有效值
                     */
                    std::vector<AccessLogItems> m_analysisResults;
                    bool m_analysisResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_SEARCHACCESSLOGRESPONSE_H_
