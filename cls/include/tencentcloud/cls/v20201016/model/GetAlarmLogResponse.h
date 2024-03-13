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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_GETALARMLOGRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_GETALARMLOGRESPONSE_H_

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
                * GetAlarmLog返回参数结构体
                */
                class GetAlarmLogResponse : public AbstractModel
                {
                public:
                    GetAlarmLogResponse();
                    ~GetAlarmLogResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取加载后续详情的Context
                     * @return Context 加载后续详情的Context
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
                     * 获取指定时间范围内的告警执行详情是否完整返回
                     * @return ListOver 指定时间范围内的告警执行详情是否完整返回
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
                     * 获取返回的结果是否为SQL分析结果
                     * @return Analysis 返回的结果是否为SQL分析结果
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
                     * 获取分析结果的列名，如果Query语句有SQL查询，则返回查询字段的列名；
否则为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColNames 分析结果的列名，如果Query语句有SQL查询，则返回查询字段的列名；
否则为空。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取执行详情查询结果。
当Query字段无SQL语句时，返回查询结果。
当Query字段有SQL语句时，可能返回null。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Results 执行详情查询结果。
当Query字段无SQL语句时，返回查询结果。
当Query字段有SQL语句时，可能返回null。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LogInfo> GetResults() const;

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                    /**
                     * 获取执行详情统计分析结果。当Query字段有SQL语句时，返回SQL统计结果，否则可能返回null。

注意：此字段可能返回 null，表示取不到有效值。
                     * @return AnalysisResults 执行详情统计分析结果。当Query字段有SQL语句时，返回SQL统计结果，否则可能返回null。

注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取执行详情统计分析结果；UseNewAnalysis为true有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AnalysisRecords 执行详情统计分析结果；UseNewAnalysis为true有效。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取分析结果的列名， UseNewAnalysis为true有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Columns 分析结果的列名， UseNewAnalysis为true有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Column> GetColumns() const;

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     * 
                     */
                    bool ColumnsHasBeenSet() const;

                private:

                    /**
                     * 加载后续详情的Context
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * 指定时间范围内的告警执行详情是否完整返回
                     */
                    bool m_listOver;
                    bool m_listOverHasBeenSet;

                    /**
                     * 返回的结果是否为SQL分析结果
                     */
                    bool m_analysis;
                    bool m_analysisHasBeenSet;

                    /**
                     * 分析结果的列名，如果Query语句有SQL查询，则返回查询字段的列名；
否则为空。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_colNames;
                    bool m_colNamesHasBeenSet;

                    /**
                     * 执行详情查询结果。
当Query字段无SQL语句时，返回查询结果。
当Query字段有SQL语句时，可能返回null。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LogInfo> m_results;
                    bool m_resultsHasBeenSet;

                    /**
                     * 执行详情统计分析结果。当Query字段有SQL语句时，返回SQL统计结果，否则可能返回null。

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LogItems> m_analysisResults;
                    bool m_analysisResultsHasBeenSet;

                    /**
                     * 执行详情统计分析结果；UseNewAnalysis为true有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_analysisRecords;
                    bool m_analysisRecordsHasBeenSet;

                    /**
                     * 分析结果的列名， UseNewAnalysis为true有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Column> m_columns;
                    bool m_columnsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_GETALARMLOGRESPONSE_H_
