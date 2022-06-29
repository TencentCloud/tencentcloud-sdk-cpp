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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHLOGRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHLOGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/LogInfo.h>
#include <tencentcloud/cls/v20201016/model/LogItems.h>
#include <tencentcloud/cls/v20201016/model/Column.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * SearchLog返回参数结构体
                */
                class SearchLogResponse : public AbstractModel
                {
                public:
                    SearchLogResponse();
                    ~SearchLogResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取透传本次接口返回的Context值，可获取后续更多日志，过期时间1小时
                     * @return Context 透传本次接口返回的Context值，可获取后续更多日志，过期时间1小时
                     */
                    std::string GetContext() const;

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取符合检索条件的日志是否已全部返回，如未全部返回可使用Context参数获取后续更多日志
注意：仅当检索分析语句(Query)不包含SQL时有效
                     * @return ListOver 符合检索条件的日志是否已全部返回，如未全部返回可使用Context参数获取后续更多日志
注意：仅当检索分析语句(Query)不包含SQL时有效
                     */
                    bool GetListOver() const;

                    /**
                     * 判断参数 ListOver 是否已赋值
                     * @return ListOver 是否已赋值
                     */
                    bool ListOverHasBeenSet() const;

                    /**
                     * 获取返回的是否为统计分析（即SQL）结果
                     * @return Analysis 返回的是否为统计分析（即SQL）结果
                     */
                    bool GetAnalysis() const;

                    /**
                     * 判断参数 Analysis 是否已赋值
                     * @return Analysis 是否已赋值
                     */
                    bool AnalysisHasBeenSet() const;

                    /**
                     * 获取匹配检索条件的原始日志
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Results 匹配检索条件的原始日志
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LogInfo> GetResults() const;

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     */
                    bool ResultsHasBeenSet() const;

                    /**
                     * 获取日志统计分析结果的列名
当UseNewAnalysis为false时生效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColNames 日志统计分析结果的列名
当UseNewAnalysis为false时生效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetColNames() const;

                    /**
                     * 判断参数 ColNames 是否已赋值
                     * @return ColNames 是否已赋值
                     */
                    bool ColNamesHasBeenSet() const;

                    /**
                     * 获取日志统计分析结果
当UseNewAnalysis为false时生效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AnalysisResults 日志统计分析结果
当UseNewAnalysis为false时生效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LogItems> GetAnalysisResults() const;

                    /**
                     * 判断参数 AnalysisResults 是否已赋值
                     * @return AnalysisResults 是否已赋值
                     */
                    bool AnalysisResultsHasBeenSet() const;

                    /**
                     * 获取日志统计分析结果
当UseNewAnalysis为true时生效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AnalysisRecords 日志统计分析结果
当UseNewAnalysis为true时生效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetAnalysisRecords() const;

                    /**
                     * 判断参数 AnalysisRecords 是否已赋值
                     * @return AnalysisRecords 是否已赋值
                     */
                    bool AnalysisRecordsHasBeenSet() const;

                    /**
                     * 获取日志统计分析结果的列属性
当UseNewAnalysis为true时生效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Columns 日志统计分析结果的列属性
当UseNewAnalysis为true时生效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Column> GetColumns() const;

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     */
                    bool ColumnsHasBeenSet() const;

                private:

                    /**
                     * 透传本次接口返回的Context值，可获取后续更多日志，过期时间1小时
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * 符合检索条件的日志是否已全部返回，如未全部返回可使用Context参数获取后续更多日志
注意：仅当检索分析语句(Query)不包含SQL时有效
                     */
                    bool m_listOver;
                    bool m_listOverHasBeenSet;

                    /**
                     * 返回的是否为统计分析（即SQL）结果
                     */
                    bool m_analysis;
                    bool m_analysisHasBeenSet;

                    /**
                     * 匹配检索条件的原始日志
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LogInfo> m_results;
                    bool m_resultsHasBeenSet;

                    /**
                     * 日志统计分析结果的列名
当UseNewAnalysis为false时生效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_colNames;
                    bool m_colNamesHasBeenSet;

                    /**
                     * 日志统计分析结果
当UseNewAnalysis为false时生效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LogItems> m_analysisResults;
                    bool m_analysisResultsHasBeenSet;

                    /**
                     * 日志统计分析结果
当UseNewAnalysis为true时生效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_analysisRecords;
                    bool m_analysisRecordsHasBeenSet;

                    /**
                     * 日志统计分析结果的列属性
当UseNewAnalysis为true时生效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Column> m_columns;
                    bool m_columnsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHLOGRESPONSE_H_
