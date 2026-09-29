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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_SQLRUNEXECUTIONRESULT_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_SQLRUNEXECUTIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/ResultColumnInfo.h>
#include <tencentcloud/wedata/v20250806/model/SqlRunResultRow.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 单个子查询（对应一条 SQL 语句）的查询结果
                */
                class SqlRunExecutionResult : public AbstractModel
                {
                public:
                    SqlRunExecutionResult();
                    ~SqlRunExecutionResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子查询任务运行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobExecutionId 子查询任务运行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJobExecutionId() const;

                    /**
                     * 设置子查询任务运行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobExecutionId 子查询任务运行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobExecutionId(const std::string& _jobExecutionId);

                    /**
                     * 判断参数 JobExecutionId 是否已赋值
                     * @return JobExecutionId 是否已赋值
                     * 
                     */
                    bool JobExecutionIdHasBeenSet() const;

                    /**
                     * 获取子查询状态：SUCCESS、FAILED、TERMINATED、CANCELED 等
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 子查询状态：SUCCESS、FAILED、TERMINATED、CANCELED 等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置子查询状态：SUCCESS、FAILED、TERMINATED、CANCELED 等
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 子查询状态：SUCCESS、FAILED、TERMINATED、CANCELED 等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取结果集字段信息；非查询类语句（INSERT/CREATE 等）为空列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Columns 结果集字段信息；非查询类语句（INSERT/CREATE 等）为空列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ResultColumnInfo> GetColumns() const;

                    /**
                     * 设置结果集字段信息；非查询类语句（INSERT/CREATE 等）为空列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columns 结果集字段信息；非查询类语句（INSERT/CREATE 等）为空列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumns(const std::vector<ResultColumnInfo>& _columns);

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     * 
                     */
                    bool ColumnsHasBeenSet() const;

                    /**
                     * 获取结果数据行，每个元素的 Values 顺序与 Columns 一致
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Rows 结果数据行，每个元素的 Values 顺序与 Columns 一致
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SqlRunResultRow> GetRows() const;

                    /**
                     * 设置结果数据行，每个元素的 Values 顺序与 Columns 一致
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rows 结果数据行，每个元素的 Values 顺序与 Columns 一致
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRows(const std::vector<SqlRunResultRow>& _rows);

                    /**
                     * 判断参数 Rows 是否已赋值
                     * @return Rows 是否已赋值
                     * 
                     */
                    bool RowsHasBeenSet() const;

                    /**
                     * 获取本子查询的预览结果行数。预览行数上限遵循「项目管理-数据分析配置-单次运行的预览行数上限」，由执行平台在结果产出阶段截断
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 本子查询的预览结果行数。预览行数上限遵循「项目管理-数据分析配置-单次运行的预览行数上限」，由执行平台在结果产出阶段截断
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置本子查询的预览结果行数。预览行数上限遵循「项目管理-数据分析配置-单次运行的预览行数上限」，由执行平台在结果产出阶段截断
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _total 本子查询的预览结果行数。预览行数上限遵循「项目管理-数据分析配置-单次运行的预览行数上限」，由执行平台在结果产出阶段截断
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取本子查询耗时，单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CostMs 本子查询耗时，单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCostMs() const;

                    /**
                     * 设置本子查询耗时，单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _costMs 本子查询耗时，单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCostMs(const int64_t& _costMs);

                    /**
                     * 判断参数 CostMs 是否已赋值
                     * @return CostMs 是否已赋值
                     * 
                     */
                    bool CostMsHasBeenSet() const;

                    /**
                     * 获取本子查询结果是否不完整。返回数据总大小超过 10MB、或结果文件已被清理导致读取不完整时为 true
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Truncated 本子查询结果是否不完整。返回数据总大小超过 10MB、或结果文件已被清理导致读取不完整时为 true
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetTruncated() const;

                    /**
                     * 设置本子查询结果是否不完整。返回数据总大小超过 10MB、或结果文件已被清理导致读取不完整时为 true
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _truncated 本子查询结果是否不完整。返回数据总大小超过 10MB、或结果文件已被清理导致读取不完整时为 true
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTruncated(const bool& _truncated);

                    /**
                     * 判断参数 Truncated 是否已赋值
                     * @return Truncated 是否已赋值
                     * 
                     */
                    bool TruncatedHasBeenSet() const;

                private:

                    /**
                     * 子查询任务运行ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobExecutionId;
                    bool m_jobExecutionIdHasBeenSet;

                    /**
                     * 子查询状态：SUCCESS、FAILED、TERMINATED、CANCELED 等
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 结果集字段信息；非查询类语句（INSERT/CREATE 等）为空列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ResultColumnInfo> m_columns;
                    bool m_columnsHasBeenSet;

                    /**
                     * 结果数据行，每个元素的 Values 顺序与 Columns 一致
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SqlRunResultRow> m_rows;
                    bool m_rowsHasBeenSet;

                    /**
                     * 本子查询的预览结果行数。预览行数上限遵循「项目管理-数据分析配置-单次运行的预览行数上限」，由执行平台在结果产出阶段截断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 本子查询耗时，单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_costMs;
                    bool m_costMsHasBeenSet;

                    /**
                     * 本子查询结果是否不完整。返回数据总大小超过 10MB、或结果文件已被清理导致读取不完整时为 true
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_truncated;
                    bool m_truncatedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_SQLRUNEXECUTIONRESULT_H_
