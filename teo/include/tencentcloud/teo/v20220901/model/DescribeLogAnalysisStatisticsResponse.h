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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOGANALYSISSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOGANALYSISSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/StatisticsRecord.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeLogAnalysisStatistics返回参数结构体
                */
                class DescribeLogAnalysisStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeLogAnalysisStatisticsResponse();
                    ~DescribeLogAnalysisStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>日志分析统计结果的列名，对应入参 Query 中 SQL 部分 SELECT 的字段。<br>示例：<br>入参 Query = <code>${EdgeCacheStatus} in [&#39;miss&#39;,&#39;other&#39;] | select EdgeCacheStatus as status, count(*) as cnt group by status limit 2</code><br>出参 Columns  = <code>[&quot;status&quot;,&quot;cnt&quot;]</code></p>
                     * @return Columns <p>日志分析统计结果的列名，对应入参 Query 中 SQL 部分 SELECT 的字段。<br>示例：<br>入参 Query = <code>${EdgeCacheStatus} in [&#39;miss&#39;,&#39;other&#39;] | select EdgeCacheStatus as status, count(*) as cnt group by status limit 2</code><br>出参 Columns  = <code>[&quot;status&quot;,&quot;cnt&quot;]</code></p>
                     * 
                     */
                    std::vector<std::string> GetColumns() const;

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     * 
                     */
                    bool ColumnsHasBeenSet() const;

                    /**
                     * 获取<p>日志分析统计结果的数据行，每行值下标与列下标一一对应。<br>示例：<br>Columns = <code>[&quot;status&quot;,&quot;cnt&quot;]</code><br>Records = <code>[[&quot;miss&quot;,&quot;9695&quot;],[&quot;other&quot;,&quot;278&quot;]]</code></p>
                     * @return Records <p>日志分析统计结果的数据行，每行值下标与列下标一一对应。<br>示例：<br>Columns = <code>[&quot;status&quot;,&quot;cnt&quot;]</code><br>Records = <code>[[&quot;miss&quot;,&quot;9695&quot;],[&quot;other&quot;,&quot;278&quot;]]</code></p>
                     * 
                     */
                    std::vector<StatisticsRecord> GetRecords() const;

                    /**
                     * 判断参数 Records 是否已赋值
                     * @return Records 是否已赋值
                     * 
                     */
                    bool RecordsHasBeenSet() const;

                private:

                    /**
                     * <p>日志分析统计结果的列名，对应入参 Query 中 SQL 部分 SELECT 的字段。<br>示例：<br>入参 Query = <code>${EdgeCacheStatus} in [&#39;miss&#39;,&#39;other&#39;] | select EdgeCacheStatus as status, count(*) as cnt group by status limit 2</code><br>出参 Columns  = <code>[&quot;status&quot;,&quot;cnt&quot;]</code></p>
                     */
                    std::vector<std::string> m_columns;
                    bool m_columnsHasBeenSet;

                    /**
                     * <p>日志分析统计结果的数据行，每行值下标与列下标一一对应。<br>示例：<br>Columns = <code>[&quot;status&quot;,&quot;cnt&quot;]</code><br>Records = <code>[[&quot;miss&quot;,&quot;9695&quot;],[&quot;other&quot;,&quot;278&quot;]]</code></p>
                     */
                    std::vector<StatisticsRecord> m_records;
                    bool m_recordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOGANALYSISSTATISTICSRESPONSE_H_
