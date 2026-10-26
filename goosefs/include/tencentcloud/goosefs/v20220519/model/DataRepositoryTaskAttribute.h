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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DATAREPOSITORYTASKATTRIBUTE_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DATAREPOSITORYTASKATTRIBUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * 数据流通任务属性
                */
                class DataRepositoryTaskAttribute : public AbstractModel
                {
                public:
                    DataRepositoryTaskAttribute();
                    ~DataRepositoryTaskAttribute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>数据流通任务类型, FS_TO_COS(文件系统到COS Bucket),或者Bucket到文件系统(COS_TO_FS)</p>
                     * @return TaskType <p>数据流通任务类型, FS_TO_COS(文件系统到COS Bucket),或者Bucket到文件系统(COS_TO_FS)</p>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置<p>数据流通任务类型, FS_TO_COS(文件系统到COS Bucket),或者Bucket到文件系统(COS_TO_FS)</p>
                     * @param _taskType <p>数据流通任务类型, FS_TO_COS(文件系统到COS Bucket),或者Bucket到文件系统(COS_TO_FS)</p>
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>bucket名</p>
                     * @return Bucket <p>bucket名</p>
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置<p>bucket名</p>
                     * @param _bucket <p>bucket名</p>
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取<p>bucket路径</p>
                     * @return TaskPath <p>bucket路径</p>
                     * 
                     */
                    std::string GetTaskPath() const;

                    /**
                     * 设置<p>bucket路径</p>
                     * @param _taskPath <p>bucket路径</p>
                     * 
                     */
                    void SetTaskPath(const std::string& _taskPath);

                    /**
                     * 判断参数 TaskPath 是否已赋值
                     * @return TaskPath 是否已赋值
                     * 
                     */
                    bool TaskPathHasBeenSet() const;

                    /**
                     * 获取<p>总的容量(单位Byte)</p>
                     * @return TotalCapacity <p>总的容量(单位Byte)</p>
                     * 
                     */
                    uint64_t GetTotalCapacity() const;

                    /**
                     * 设置<p>总的容量(单位Byte)</p>
                     * @param _totalCapacity <p>总的容量(单位Byte)</p>
                     * 
                     */
                    void SetTotalCapacity(const uint64_t& _totalCapacity);

                    /**
                     * 判断参数 TotalCapacity 是否已赋值
                     * @return TotalCapacity 是否已赋值
                     * 
                     */
                    bool TotalCapacityHasBeenSet() const;

                    /**
                     * 获取<p>已完成的数据量(单位Byte)</p>
                     * @return FinishedCapacity <p>已完成的数据量(单位Byte)</p>
                     * 
                     */
                    uint64_t GetFinishedCapacity() const;

                    /**
                     * 设置<p>已完成的数据量(单位Byte)</p>
                     * @param _finishedCapacity <p>已完成的数据量(单位Byte)</p>
                     * 
                     */
                    void SetFinishedCapacity(const uint64_t& _finishedCapacity);

                    /**
                     * 判断参数 FinishedCapacity 是否已赋值
                     * @return FinishedCapacity 是否已赋值
                     * 
                     */
                    bool FinishedCapacityHasBeenSet() const;

                    /**
                     * 获取<p>任务创建时间</p>
                     * @return TaskCreateTime <p>任务创建时间</p>
                     * 
                     */
                    std::string GetTaskCreateTime() const;

                    /**
                     * 设置<p>任务创建时间</p>
                     * @param _taskCreateTime <p>任务创建时间</p>
                     * 
                     */
                    void SetTaskCreateTime(const std::string& _taskCreateTime);

                    /**
                     * 判断参数 TaskCreateTime 是否已赋值
                     * @return TaskCreateTime 是否已赋值
                     * 
                     */
                    bool TaskCreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>任务开始执行时间</p>
                     * @return TaskStartTime <p>任务开始执行时间</p>
                     * 
                     */
                    std::string GetTaskStartTime() const;

                    /**
                     * 设置<p>任务开始执行时间</p>
                     * @param _taskStartTime <p>任务开始执行时间</p>
                     * 
                     */
                    void SetTaskStartTime(const std::string& _taskStartTime);

                    /**
                     * 判断参数 TaskStartTime 是否已赋值
                     * @return TaskStartTime 是否已赋值
                     * 
                     */
                    bool TaskStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>任务结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskEndTime <p>任务结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskEndTime() const;

                    /**
                     * 设置<p>任务结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskEndTime <p>任务结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskEndTime(const std::string& _taskEndTime);

                    /**
                     * 判断参数 TaskEndTime 是否已赋值
                     * @return TaskEndTime 是否已赋值
                     * 
                     */
                    bool TaskEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>INIT(任务初始化中) RUNNING(任务执行中) SUCCESS(任务已完成) FAIL(任务失败)</p>
                     * @return TaskStatus <p>INIT(任务初始化中) RUNNING(任务执行中) SUCCESS(任务已完成) FAIL(任务失败)</p>
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置<p>INIT(任务初始化中) RUNNING(任务执行中) SUCCESS(任务已完成) FAIL(任务失败)</p>
                     * @param _taskStatus <p>INIT(任务初始化中) RUNNING(任务执行中) SUCCESS(任务已完成) FAIL(任务失败)</p>
                     * 
                     */
                    void SetTaskStatus(const std::string& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取<p>任务ID</p>
                     * @return TaskId <p>任务ID</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务ID</p>
                     * @param _taskId <p>任务ID</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>任务名</p>
                     * @return TaskName <p>任务名</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>任务名</p>
                     * @param _taskName <p>任务名</p>
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取<p>任务失败原因</p>
                     * @return TaskFailMsg <p>任务失败原因</p>
                     * 
                     */
                    std::string GetTaskFailMsg() const;

                    /**
                     * 设置<p>任务失败原因</p>
                     * @param _taskFailMsg <p>任务失败原因</p>
                     * 
                     */
                    void SetTaskFailMsg(const std::string& _taskFailMsg);

                    /**
                     * 判断参数 TaskFailMsg 是否已赋值
                     * @return TaskFailMsg 是否已赋值
                     * 
                     */
                    bool TaskFailMsgHasBeenSet() const;

                    /**
                     * 获取<p>总共的文件个数</p>
                     * @return TotalFileNumber <p>总共的文件个数</p>
                     * 
                     */
                    uint64_t GetTotalFileNumber() const;

                    /**
                     * 设置<p>总共的文件个数</p>
                     * @param _totalFileNumber <p>总共的文件个数</p>
                     * 
                     */
                    void SetTotalFileNumber(const uint64_t& _totalFileNumber);

                    /**
                     * 判断参数 TotalFileNumber 是否已赋值
                     * @return TotalFileNumber 是否已赋值
                     * 
                     */
                    bool TotalFileNumberHasBeenSet() const;

                    /**
                     * 获取<p>已完成的文件个数</p>
                     * @return FinishedFileNumber <p>已完成的文件个数</p>
                     * 
                     */
                    uint64_t GetFinishedFileNumber() const;

                    /**
                     * 设置<p>已完成的文件个数</p>
                     * @param _finishedFileNumber <p>已完成的文件个数</p>
                     * 
                     */
                    void SetFinishedFileNumber(const uint64_t& _finishedFileNumber);

                    /**
                     * 判断参数 FinishedFileNumber 是否已赋值
                     * @return FinishedFileNumber 是否已赋值
                     * 
                     */
                    bool FinishedFileNumberHasBeenSet() const;

                    /**
                     * 获取<p>列表地址</p>
                     * @return TextLocation <p>列表地址</p>
                     * 
                     */
                    std::string GetTextLocation() const;

                    /**
                     * 设置<p>列表地址</p>
                     * @param _textLocation <p>列表地址</p>
                     * 
                     */
                    void SetTextLocation(const std::string& _textLocation);

                    /**
                     * 判断参数 TextLocation 是否已赋值
                     * @return TextLocation 是否已赋值
                     * 
                     */
                    bool TextLocationHasBeenSet() const;

                    /**
                     * 获取<p>执行器类型</p>
                     * @return RepositoryType <p>执行器类型</p>
                     * 
                     */
                    std::string GetRepositoryType() const;

                    /**
                     * 设置<p>执行器类型</p>
                     * @param _repositoryType <p>执行器类型</p>
                     * 
                     */
                    void SetRepositoryType(const std::string& _repositoryType);

                    /**
                     * 判断参数 RepositoryType 是否已赋值
                     * @return RepositoryType 是否已赋值
                     * 
                     */
                    bool RepositoryTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否自定义路径</p>
                     * @return EnableDataFlowSubPath <p>是否自定义路径</p>
                     * @deprecated
                     */
                    bool GetEnableDataFlowSubPath() const;

                    /**
                     * 设置<p>是否自定义路径</p>
                     * @param _enableDataFlowSubPath <p>是否自定义路径</p>
                     * @deprecated
                     */
                    void SetEnableDataFlowSubPath(const bool& _enableDataFlowSubPath);

                    /**
                     * 判断参数 EnableDataFlowSubPath 是否已赋值
                     * @return EnableDataFlowSubPath 是否已赋值
                     * @deprecated
                     */
                    bool EnableDataFlowSubPathHasBeenSet() const;

                    /**
                     * 获取<p>自定义路径</p>
                     * @return DataFlowSubPath <p>自定义路径</p>
                     * @deprecated
                     */
                    std::string GetDataFlowSubPath() const;

                    /**
                     * 设置<p>自定义路径</p>
                     * @param _dataFlowSubPath <p>自定义路径</p>
                     * @deprecated
                     */
                    void SetDataFlowSubPath(const std::string& _dataFlowSubPath);

                    /**
                     * 判断参数 DataFlowSubPath 是否已赋值
                     * @return DataFlowSubPath 是否已赋值
                     * @deprecated
                     */
                    bool DataFlowSubPathHasBeenSet() const;

                    /**
                     * 获取<p>是否支持自定义目的路径（沉降表示桶前缀，预热表示本地路径）</p>
                     * @return EnableCustomDestPath <p>是否支持自定义目的路径（沉降表示桶前缀，预热表示本地路径）</p>
                     * 
                     */
                    bool GetEnableCustomDestPath() const;

                    /**
                     * 设置<p>是否支持自定义目的路径（沉降表示桶前缀，预热表示本地路径）</p>
                     * @param _enableCustomDestPath <p>是否支持自定义目的路径（沉降表示桶前缀，预热表示本地路径）</p>
                     * 
                     */
                    void SetEnableCustomDestPath(const bool& _enableCustomDestPath);

                    /**
                     * 判断参数 EnableCustomDestPath 是否已赋值
                     * @return EnableCustomDestPath 是否已赋值
                     * 
                     */
                    bool EnableCustomDestPathHasBeenSet() const;

                    /**
                     * 获取<p>自定义目的路径（沉降表示桶前缀，预热表示本地路径）</p>
                     * @return CustomDestPath <p>自定义目的路径（沉降表示桶前缀，预热表示本地路径）</p>
                     * 
                     */
                    std::string GetCustomDestPath() const;

                    /**
                     * 设置<p>自定义目的路径（沉降表示桶前缀，预热表示本地路径）</p>
                     * @param _customDestPath <p>自定义目的路径（沉降表示桶前缀，预热表示本地路径）</p>
                     * 
                     */
                    void SetCustomDestPath(const std::string& _customDestPath);

                    /**
                     * 判断参数 CustomDestPath 是否已赋值
                     * @return CustomDestPath 是否已赋值
                     * 
                     */
                    bool CustomDestPathHasBeenSet() const;

                    /**
                     * 获取<p>任务路径是否表示绝对路径（暂时仅支持沉降使用）</p>
                     * @return IsTaskPathAbsolute <p>任务路径是否表示绝对路径（暂时仅支持沉降使用）</p>
                     * 
                     */
                    bool GetIsTaskPathAbsolute() const;

                    /**
                     * 设置<p>任务路径是否表示绝对路径（暂时仅支持沉降使用）</p>
                     * @param _isTaskPathAbsolute <p>任务路径是否表示绝对路径（暂时仅支持沉降使用）</p>
                     * 
                     */
                    void SetIsTaskPathAbsolute(const bool& _isTaskPathAbsolute);

                    /**
                     * 判断参数 IsTaskPathAbsolute 是否已赋值
                     * @return IsTaskPathAbsolute 是否已赋值
                     * 
                     */
                    bool IsTaskPathAbsoluteHasBeenSet() const;

                    /**
                     * 获取<p>任务内容输出桶</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputBucket <p>任务内容输出桶</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutputBucket() const;

                    /**
                     * 设置<p>任务内容输出桶</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputBucket <p>任务内容输出桶</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutputBucket(const std::string& _outputBucket);

                    /**
                     * 判断参数 OutputBucket 是否已赋值
                     * @return OutputBucket 是否已赋值
                     * 
                     */
                    bool OutputBucketHasBeenSet() const;

                    /**
                     * 获取<p>任务内容输出桶前缀</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputPrefix <p>任务内容输出桶前缀</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutputPrefix() const;

                    /**
                     * 设置<p>任务内容输出桶前缀</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputPrefix <p>任务内容输出桶前缀</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutputPrefix(const std::string& _outputPrefix);

                    /**
                     * 判断参数 OutputPrefix 是否已赋值
                     * @return OutputPrefix 是否已赋值
                     * 
                     */
                    bool OutputPrefixHasBeenSet() const;

                    /**
                     * 获取<p>是否支持自定义数据源路径(暂时仅支持清单过滤使用)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableCustomSrcPath <p>是否支持自定义数据源路径(暂时仅支持清单过滤使用)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableCustomSrcPath() const;

                    /**
                     * 设置<p>是否支持自定义数据源路径(暂时仅支持清单过滤使用)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableCustomSrcPath <p>是否支持自定义数据源路径(暂时仅支持清单过滤使用)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableCustomSrcPath(const bool& _enableCustomSrcPath);

                    /**
                     * 判断参数 EnableCustomSrcPath 是否已赋值
                     * @return EnableCustomSrcPath 是否已赋值
                     * 
                     */
                    bool EnableCustomSrcPathHasBeenSet() const;

                    /**
                     * 获取<p>自定义数据源路径(暂时仅支持清单过滤使用)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomSrcPath <p>自定义数据源路径(暂时仅支持清单过滤使用)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCustomSrcPath() const;

                    /**
                     * 设置<p>自定义数据源路径(暂时仅支持清单过滤使用)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customSrcPath <p>自定义数据源路径(暂时仅支持清单过滤使用)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomSrcPath(const std::string& _customSrcPath);

                    /**
                     * 判断参数 CustomSrcPath 是否已赋值
                     * @return CustomSrcPath 是否已赋值
                     * 
                     */
                    bool CustomSrcPathHasBeenSet() const;

                private:

                    /**
                     * <p>数据流通任务类型, FS_TO_COS(文件系统到COS Bucket),或者Bucket到文件系统(COS_TO_FS)</p>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>bucket名</p>
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * <p>bucket路径</p>
                     */
                    std::string m_taskPath;
                    bool m_taskPathHasBeenSet;

                    /**
                     * <p>总的容量(单位Byte)</p>
                     */
                    uint64_t m_totalCapacity;
                    bool m_totalCapacityHasBeenSet;

                    /**
                     * <p>已完成的数据量(单位Byte)</p>
                     */
                    uint64_t m_finishedCapacity;
                    bool m_finishedCapacityHasBeenSet;

                    /**
                     * <p>任务创建时间</p>
                     */
                    std::string m_taskCreateTime;
                    bool m_taskCreateTimeHasBeenSet;

                    /**
                     * <p>任务开始执行时间</p>
                     */
                    std::string m_taskStartTime;
                    bool m_taskStartTimeHasBeenSet;

                    /**
                     * <p>任务结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskEndTime;
                    bool m_taskEndTimeHasBeenSet;

                    /**
                     * <p>INIT(任务初始化中) RUNNING(任务执行中) SUCCESS(任务已完成) FAIL(任务失败)</p>
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * <p>任务ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务名</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>任务失败原因</p>
                     */
                    std::string m_taskFailMsg;
                    bool m_taskFailMsgHasBeenSet;

                    /**
                     * <p>总共的文件个数</p>
                     */
                    uint64_t m_totalFileNumber;
                    bool m_totalFileNumberHasBeenSet;

                    /**
                     * <p>已完成的文件个数</p>
                     */
                    uint64_t m_finishedFileNumber;
                    bool m_finishedFileNumberHasBeenSet;

                    /**
                     * <p>列表地址</p>
                     */
                    std::string m_textLocation;
                    bool m_textLocationHasBeenSet;

                    /**
                     * <p>执行器类型</p>
                     */
                    std::string m_repositoryType;
                    bool m_repositoryTypeHasBeenSet;

                    /**
                     * <p>是否自定义路径</p>
                     */
                    bool m_enableDataFlowSubPath;
                    bool m_enableDataFlowSubPathHasBeenSet;

                    /**
                     * <p>自定义路径</p>
                     */
                    std::string m_dataFlowSubPath;
                    bool m_dataFlowSubPathHasBeenSet;

                    /**
                     * <p>是否支持自定义目的路径（沉降表示桶前缀，预热表示本地路径）</p>
                     */
                    bool m_enableCustomDestPath;
                    bool m_enableCustomDestPathHasBeenSet;

                    /**
                     * <p>自定义目的路径（沉降表示桶前缀，预热表示本地路径）</p>
                     */
                    std::string m_customDestPath;
                    bool m_customDestPathHasBeenSet;

                    /**
                     * <p>任务路径是否表示绝对路径（暂时仅支持沉降使用）</p>
                     */
                    bool m_isTaskPathAbsolute;
                    bool m_isTaskPathAbsoluteHasBeenSet;

                    /**
                     * <p>任务内容输出桶</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outputBucket;
                    bool m_outputBucketHasBeenSet;

                    /**
                     * <p>任务内容输出桶前缀</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outputPrefix;
                    bool m_outputPrefixHasBeenSet;

                    /**
                     * <p>是否支持自定义数据源路径(暂时仅支持清单过滤使用)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableCustomSrcPath;
                    bool m_enableCustomSrcPathHasBeenSet;

                    /**
                     * <p>自定义数据源路径(暂时仅支持清单过滤使用)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_customSrcPath;
                    bool m_customSrcPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DATAREPOSITORYTASKATTRIBUTE_H_
