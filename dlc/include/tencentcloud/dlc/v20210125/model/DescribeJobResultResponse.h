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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEJOBRESULTRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEJOBRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/ResultColumn.h>
#include <tencentcloud/dlc/v20210125/model/ResultRow.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeJobResult返回参数结构体
                */
                class DescribeJobResultResponse : public AbstractModel
                {
                public:
                    DescribeJobResultResponse();
                    ~DescribeJobResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>总记录数.</p>
                     * @return Total <p>总记录数.</p>
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取<p>作业 ID。</p>
                     * @return JobId <p>作业 ID。</p>
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取<p>结果状态（对客）：SUCCEEDED（结果集可用，含 0 行——DDL/DML 等无结果集语句亦归入此类，message 说明）/ UNAVAILABLE（终态无结果：statement 已失败或取消）/ ERROR（结果集拉取出错）/ NOT_READY（结果未就绪）/ NOT_SUPPORTED（作业形态不产出结果集）。</p>
                     * @return State <p>结果状态（对客）：SUCCEEDED（结果集可用，含 0 行——DDL/DML 等无结果集语句亦归入此类，message 说明）/ UNAVAILABLE（终态无结果：statement 已失败或取消）/ ERROR（结果集拉取出错）/ NOT_READY（结果未就绪）/ NOT_SUPPORTED（作业形态不产出结果集）。</p>
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取<p>状态描述（SUCCEEDED 0 行时为无结果集说明；ERROR 为错误信息；UNAVAILABLE 为 statement 失败/取消原因）。</p>
                     * @return Message <p>状态描述（SUCCEEDED 0 行时为无结果集说明；ERROR 为错误信息；UNAVAILABLE 为 statement 失败/取消原因）。</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取<p>列定义列表（按结果集列顺序；State=SUCCEEDED 才有）。</p>
                     * @return Columns <p>列定义列表（按结果集列顺序；State=SUCCEEDED 才有）。</p>
                     * 
                     */
                    std::vector<ResultColumn> GetColumns() const;

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     * 
                     */
                    bool ColumnsHasBeenSet() const;

                    /**
                     * 获取<p>结果集全量行数（未按在线展示上限封顶）。Total 为在线可见行数，二者不等说明仅部分行可内联查看，完整结果通过 Download 获取。</p>
                     * @return TotalRows <p>结果集全量行数（未按在线展示上限封顶）。Total 为在线可见行数，二者不等说明仅部分行可内联查看，完整结果通过 Download 获取。</p>
                     * 
                     */
                    int64_t GetTotalRows() const;

                    /**
                     * 判断参数 TotalRows 是否已赋值
                     * @return TotalRows 是否已赋值
                     * 
                     */
                    bool TotalRowsHasBeenSet() const;

                    /**
                     * 获取<p>行数据（State=SUCCEEDED 才有），每行为 {"Values": [单元格值...]} 数组。</p>
                     * @return Rows <p>行数据（State=SUCCEEDED 才有），每行为 {"Values": [单元格值...]} 数组。</p>
                     * 
                     */
                    std::vector<ResultRow> GetRows() const;

                    /**
                     * 判断参数 Rows 是否已赋值
                     * @return Rows 是否已赋值
                     * 
                     */
                    bool RowsHasBeenSet() const;

                    /**
                     * 获取<p>本页内容是否因响应大小限制被截断（单元格/行超限，结果集仅 1 行时也可能触发）。行数超过在线展示上限不由本标记表达，以 TotalRows > Total 判断，完整结果通过 Download 获取.</p>
                     * @return Truncated <p>本页内容是否因响应大小限制被截断（单元格/行超限，结果集仅 1 行时也可能触发）。行数超过在线展示上限不由本标记表达，以 TotalRows > Total 判断，完整结果通过 Download 获取.</p>
                     * 
                     */
                    bool GetTruncated() const;

                    /**
                     * 判断参数 Truncated 是否已赋值
                     * @return Truncated 是否已赋值
                     * 
                     */
                    bool TruncatedHasBeenSet() const;

                private:

                    /**
                     * <p>总记录数.</p>
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>作业 ID。</p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>结果状态（对客）：SUCCEEDED（结果集可用，含 0 行——DDL/DML 等无结果集语句亦归入此类，message 说明）/ UNAVAILABLE（终态无结果：statement 已失败或取消）/ ERROR（结果集拉取出错）/ NOT_READY（结果未就绪）/ NOT_SUPPORTED（作业形态不产出结果集）。</p>
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>状态描述（SUCCEEDED 0 行时为无结果集说明；ERROR 为错误信息；UNAVAILABLE 为 statement 失败/取消原因）。</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>列定义列表（按结果集列顺序；State=SUCCEEDED 才有）。</p>
                     */
                    std::vector<ResultColumn> m_columns;
                    bool m_columnsHasBeenSet;

                    /**
                     * <p>结果集全量行数（未按在线展示上限封顶）。Total 为在线可见行数，二者不等说明仅部分行可内联查看，完整结果通过 Download 获取。</p>
                     */
                    int64_t m_totalRows;
                    bool m_totalRowsHasBeenSet;

                    /**
                     * <p>行数据（State=SUCCEEDED 才有），每行为 {"Values": [单元格值...]} 数组。</p>
                     */
                    std::vector<ResultRow> m_rows;
                    bool m_rowsHasBeenSet;

                    /**
                     * <p>本页内容是否因响应大小限制被截断（单元格/行超限，结果集仅 1 行时也可能触发）。行数超过在线展示上限不由本标记表达，以 TotalRows > Total 判断，完整结果通过 Download 获取.</p>
                     */
                    bool m_truncated;
                    bool m_truncatedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEJOBRESULTRESPONSE_H_
