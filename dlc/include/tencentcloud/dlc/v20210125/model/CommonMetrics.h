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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_COMMONMETRICS_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_COMMONMETRICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 任务公共指标
                */
                class CommonMetrics : public AbstractModel
                {
                public:
                    CommonMetrics();
                    ~CommonMetrics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取创建任务时长，单位：ms
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTaskTime 创建任务时长，单位：ms
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetCreateTaskTime() const;

                    /**
                     * 设置创建任务时长，单位：ms
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTaskTime 创建任务时长，单位：ms
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTaskTime(const double& _createTaskTime);

                    /**
                     * 判断参数 CreateTaskTime 是否已赋值
                     * @return CreateTaskTime 是否已赋值
                     * 
                     */
                    bool CreateTaskTimeHasBeenSet() const;

                    /**
                     * 获取预处理总时长，单位：ms
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessTime 预处理总时长，单位：ms
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetProcessTime() const;

                    /**
                     * 设置预处理总时长，单位：ms
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processTime 预处理总时长，单位：ms
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessTime(const double& _processTime);

                    /**
                     * 判断参数 ProcessTime 是否已赋值
                     * @return ProcessTime 是否已赋值
                     * 
                     */
                    bool ProcessTimeHasBeenSet() const;

                    /**
                     * 获取排队时长，单位：ms
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueueTime 排队时长，单位：ms
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetQueueTime() const;

                    /**
                     * 设置排队时长，单位：ms
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queueTime 排队时长，单位：ms
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueueTime(const double& _queueTime);

                    /**
                     * 判断参数 QueueTime 是否已赋值
                     * @return QueueTime 是否已赋值
                     * 
                     */
                    bool QueueTimeHasBeenSet() const;

                    /**
                     * 获取执行时长，单位：ms
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionTime 执行时长，单位：ms
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetExecutionTime() const;

                    /**
                     * 设置执行时长，单位：ms
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionTime 执行时长，单位：ms
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutionTime(const double& _executionTime);

                    /**
                     * 判断参数 ExecutionTime 是否已赋值
                     * @return ExecutionTime 是否已赋值
                     * 
                     */
                    bool ExecutionTimeHasBeenSet() const;

                    /**
                     * 获取是否命中结果缓存
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsResultCacheHit 是否命中结果缓存
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsResultCacheHit() const;

                    /**
                     * 设置是否命中结果缓存
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isResultCacheHit 是否命中结果缓存
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsResultCacheHit(const bool& _isResultCacheHit);

                    /**
                     * 判断参数 IsResultCacheHit 是否已赋值
                     * @return IsResultCacheHit 是否已赋值
                     * 
                     */
                    bool IsResultCacheHitHasBeenSet() const;

                    /**
                     * 获取匹配物化视图数据量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MatchedMVBytes 匹配物化视图数据量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMatchedMVBytes() const;

                    /**
                     * 设置匹配物化视图数据量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _matchedMVBytes 匹配物化视图数据量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMatchedMVBytes(const int64_t& _matchedMVBytes);

                    /**
                     * 判断参数 MatchedMVBytes 是否已赋值
                     * @return MatchedMVBytes 是否已赋值
                     * 
                     */
                    bool MatchedMVBytesHasBeenSet() const;

                    /**
                     * 获取匹配物化视图列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MatchedMVs 匹配物化视图列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMatchedMVs() const;

                    /**
                     * 设置匹配物化视图列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _matchedMVs 匹配物化视图列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMatchedMVs(const std::string& _matchedMVs);

                    /**
                     * 判断参数 MatchedMVs 是否已赋值
                     * @return MatchedMVs 是否已赋值
                     * 
                     */
                    bool MatchedMVsHasBeenSet() const;

                    /**
                     * 获取结果数据量，单位：byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AffectedBytes 结果数据量，单位：byte
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAffectedBytes() const;

                    /**
                     * 设置结果数据量，单位：byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _affectedBytes 结果数据量，单位：byte
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAffectedBytes(const std::string& _affectedBytes);

                    /**
                     * 判断参数 AffectedBytes 是否已赋值
                     * @return AffectedBytes 是否已赋值
                     * 
                     */
                    bool AffectedBytesHasBeenSet() const;

                    /**
                     * 获取	结果行数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AffectedRows 	结果行数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAffectedRows() const;

                    /**
                     * 设置	结果行数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _affectedRows 	结果行数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAffectedRows(const int64_t& _affectedRows);

                    /**
                     * 判断参数 AffectedRows 是否已赋值
                     * @return AffectedRows 是否已赋值
                     * 
                     */
                    bool AffectedRowsHasBeenSet() const;

                    /**
                     * 获取扫描数据量，单位：byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessedBytes 扫描数据量，单位：byte
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProcessedBytes() const;

                    /**
                     * 设置扫描数据量，单位：byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processedBytes 扫描数据量，单位：byte
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessedBytes(const int64_t& _processedBytes);

                    /**
                     * 判断参数 ProcessedBytes 是否已赋值
                     * @return ProcessedBytes 是否已赋值
                     * 
                     */
                    bool ProcessedBytesHasBeenSet() const;

                    /**
                     * 获取	扫描行数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessedRows 	扫描行数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProcessedRows() const;

                    /**
                     * 设置	扫描行数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processedRows 	扫描行数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessedRows(const int64_t& _processedRows);

                    /**
                     * 判断参数 ProcessedRows 是否已赋值
                     * @return ProcessedRows 是否已赋值
                     * 
                     */
                    bool ProcessedRowsHasBeenSet() const;

                private:

                    /**
                     * 创建任务时长，单位：ms
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_createTaskTime;
                    bool m_createTaskTimeHasBeenSet;

                    /**
                     * 预处理总时长，单位：ms
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_processTime;
                    bool m_processTimeHasBeenSet;

                    /**
                     * 排队时长，单位：ms
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_queueTime;
                    bool m_queueTimeHasBeenSet;

                    /**
                     * 执行时长，单位：ms
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_executionTime;
                    bool m_executionTimeHasBeenSet;

                    /**
                     * 是否命中结果缓存
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isResultCacheHit;
                    bool m_isResultCacheHitHasBeenSet;

                    /**
                     * 匹配物化视图数据量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_matchedMVBytes;
                    bool m_matchedMVBytesHasBeenSet;

                    /**
                     * 匹配物化视图列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_matchedMVs;
                    bool m_matchedMVsHasBeenSet;

                    /**
                     * 结果数据量，单位：byte
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_affectedBytes;
                    bool m_affectedBytesHasBeenSet;

                    /**
                     * 	结果行数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_affectedRows;
                    bool m_affectedRowsHasBeenSet;

                    /**
                     * 扫描数据量，单位：byte
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_processedBytes;
                    bool m_processedBytesHasBeenSet;

                    /**
                     * 	扫描行数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_processedRows;
                    bool m_processedRowsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_COMMONMETRICS_H_
