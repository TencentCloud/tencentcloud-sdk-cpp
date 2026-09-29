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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_SQLRUNRESULT_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_SQLRUNRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/SqlRunExecutionResult.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * GetSQLRunResult 出参：一个查询任务下全部（或指定）子查询的结果集合
                */
                class SqlRunResult : public AbstractModel
                {
                public:
                    SqlRunResult();
                    ~SqlRunResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取查询任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobId 查询任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置查询任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobId 查询任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取查询任务状态。终态取值：SUCCESS（成功）、FAILED（失败）、TERMINATED（已终止）、CANCELED（已取消）；非终态取值：QUEUED（排队中）、RUNNING（执行中）。非终态时不报错，Results 返回空数组，调用方应指数退避轮询直至进入终态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 查询任务状态。终态取值：SUCCESS（成功）、FAILED（失败）、TERMINATED（已终止）、CANCELED（已取消）；非终态取值：QUEUED（排队中）、RUNNING（执行中）。非终态时不报错，Results 返回空数组，调用方应指数退避轮询直至进入终态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置查询任务状态。终态取值：SUCCESS（成功）、FAILED（失败）、TERMINATED（已终止）、CANCELED（已取消）；非终态取值：QUEUED（排队中）、RUNNING（执行中）。非终态时不报错，Results 返回空数组，调用方应指数退避轮询直至进入终态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 查询任务状态。终态取值：SUCCESS（成功）、FAILED（失败）、TERMINATED（已终止）、CANCELED（已取消）；非终态取值：QUEUED（排队中）、RUNNING（执行中）。非终态时不报错，Results 返回空数组，调用方应指数退避轮询直至进入终态
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
                     * 获取当前状态的可读说明，任意状态下均有值。用于说明 Results 为空的具体原因并给出下一步动作建议：任务未完成时提示稍后以相同 JobId 重试；任务失败/终止/取消时提示无结果数据及后续处理；成功且结果被截断时提示缩小查询范围。命名上与云API错误响应的 Error.Message 区分，本字段描述的是业务状态而非错误信息。随 Language 参数国际化
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusMessage 当前状态的可读说明，任意状态下均有值。用于说明 Results 为空的具体原因并给出下一步动作建议：任务未完成时提示稍后以相同 JobId 重试；任务失败/终止/取消时提示无结果数据及后续处理；成功且结果被截断时提示缩小查询范围。命名上与云API错误响应的 Error.Message 区分，本字段描述的是业务状态而非错误信息。随 Language 参数国际化
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatusMessage() const;

                    /**
                     * 设置当前状态的可读说明，任意状态下均有值。用于说明 Results 为空的具体原因并给出下一步动作建议：任务未完成时提示稍后以相同 JobId 重试；任务失败/终止/取消时提示无结果数据及后续处理；成功且结果被截断时提示缩小查询范围。命名上与云API错误响应的 Error.Message 区分，本字段描述的是业务状态而非错误信息。随 Language 参数国际化
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusMessage 当前状态的可读说明，任意状态下均有值。用于说明 Results 为空的具体原因并给出下一步动作建议：任务未完成时提示稍后以相同 JobId 重试；任务失败/终止/取消时提示无结果数据及后续处理；成功且结果被截断时提示缩小查询范围。命名上与云API错误响应的 Error.Message 区分，本字段描述的是业务状态而非错误信息。随 Language 参数国际化
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusMessage(const std::string& _statusMessage);

                    /**
                     * 判断参数 StatusMessage 是否已赋值
                     * @return StatusMessage 是否已赋值
                     * 
                     */
                    bool StatusMessageHasBeenSet() const;

                    /**
                     * 获取查询任务总耗时，单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CostMs 查询任务总耗时，单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCostMs() const;

                    /**
                     * 设置查询任务总耗时，单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _costMs 查询任务总耗时，单位毫秒
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
                     * 获取是否存在结果不完整的子查询。任一子查询的 Truncated 为 true 时本字段为 true
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Truncated 是否存在结果不完整的子查询。任一子查询的 Truncated 为 true 时本字段为 true
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetTruncated() const;

                    /**
                     * 设置是否存在结果不完整的子查询。任一子查询的 Truncated 为 true 时本字段为 true
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _truncated 是否存在结果不完整的子查询。任一子查询的 Truncated 为 true 时本字段为 true
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

                    /**
                     * 获取各子查询的结果列表，顺序与 SQL 语句执行顺序一致
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Results 各子查询的结果列表，顺序与 SQL 语句执行顺序一致
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SqlRunExecutionResult> GetResults() const;

                    /**
                     * 设置各子查询的结果列表，顺序与 SQL 语句执行顺序一致
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _results 各子查询的结果列表，顺序与 SQL 语句执行顺序一致
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResults(const std::vector<SqlRunExecutionResult>& _results);

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                private:

                    /**
                     * 查询任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 查询任务状态。终态取值：SUCCESS（成功）、FAILED（失败）、TERMINATED（已终止）、CANCELED（已取消）；非终态取值：QUEUED（排队中）、RUNNING（执行中）。非终态时不报错，Results 返回空数组，调用方应指数退避轮询直至进入终态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 当前状态的可读说明，任意状态下均有值。用于说明 Results 为空的具体原因并给出下一步动作建议：任务未完成时提示稍后以相同 JobId 重试；任务失败/终止/取消时提示无结果数据及后续处理；成功且结果被截断时提示缩小查询范围。命名上与云API错误响应的 Error.Message 区分，本字段描述的是业务状态而非错误信息。随 Language 参数国际化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_statusMessage;
                    bool m_statusMessageHasBeenSet;

                    /**
                     * 查询任务总耗时，单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_costMs;
                    bool m_costMsHasBeenSet;

                    /**
                     * 是否存在结果不完整的子查询。任一子查询的 Truncated 为 true 时本字段为 true
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_truncated;
                    bool m_truncatedHasBeenSet;

                    /**
                     * 各子查询的结果列表，顺序与 SQL 语句执行顺序一致
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SqlRunExecutionResult> m_results;
                    bool m_resultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_SQLRUNRESULT_H_
