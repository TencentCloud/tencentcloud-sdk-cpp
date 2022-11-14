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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_EXPORTTASKINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_EXPORTTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 数据导出任务详情
                */
                class ExportTaskInfo : public AbstractModel
                {
                public:
                    ExportTaskInfo();
                    ~ExportTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取导出任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExportTaskId 导出任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetExportTaskId() const;

                    /**
                     * 设置导出任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExportTaskId 导出任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExportTaskId(const uint64_t& _exportTaskId);

                    /**
                     * 判断参数 ExportTaskId 是否已赋值
                     * @return ExportTaskId 是否已赋值
                     */
                    bool ExportTaskIdHasBeenSet() const;

                    /**
                     * 获取导出任务类型(1.全部,2.触发行,3.通过行)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskType 导出任务类型(1.全部,2.触发行,3.通过行)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetTaskType() const;

                    /**
                     * 设置导出任务类型(1.全部,2.触发行,3.通过行)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TaskType 导出任务类型(1.全部,2.触发行,3.通过行)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTaskType(const uint64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取任务创建人 id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperatorId 任务创建人 id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetOperatorId() const;

                    /**
                     * 设置任务创建人 id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OperatorId 任务创建人 id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOperatorId(const uint64_t& _operatorId);

                    /**
                     * 判断参数 OperatorId 是否已赋值
                     * @return OperatorId 是否已赋值
                     */
                    bool OperatorIdHasBeenSet() const;

                    /**
                     * 获取任务创建人昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperatorName 任务创建人昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOperatorName() const;

                    /**
                     * 设置任务创建人昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OperatorName 任务创建人昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOperatorName(const std::string& _operatorName);

                    /**
                     * 判断参数 OperatorName 是否已赋值
                     * @return OperatorName 是否已赋值
                     */
                    bool OperatorNameHasBeenSet() const;

                    /**
                     * 获取任务创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 任务创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 任务创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取导出状态(1.已提交 2.导出中 3.导出成功 4.导出失败)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 导出状态(1.已提交 2.导出中 3.导出成功 4.导出失败)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置导出状态(1.已提交 2.导出中 3.导出成功 4.导出失败)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 导出状态(1.已提交 2.导出中 3.导出成功 4.导出失败)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取调度任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchedulerTaskId 调度任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSchedulerTaskId() const;

                    /**
                     * 设置调度任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SchedulerTaskId 调度任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSchedulerTaskId(const std::string& _schedulerTaskId);

                    /**
                     * 判断参数 SchedulerTaskId 是否已赋值
                     * @return SchedulerTaskId 是否已赋值
                     */
                    bool SchedulerTaskIdHasBeenSet() const;

                    /**
                     * 获取调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchedulerCurRunDate 调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSchedulerCurRunDate() const;

                    /**
                     * 设置调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SchedulerCurRunDate 调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSchedulerCurRunDate(const std::string& _schedulerCurRunDate);

                    /**
                     * 判断参数 SchedulerCurRunDate 是否已赋值
                     * @return SchedulerCurRunDate 是否已赋值
                     */
                    bool SchedulerCurRunDateHasBeenSet() const;

                    /**
                     * 获取文件相对路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FilePath 文件相对路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置文件相对路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FilePath 文件相对路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     */
                    bool FilePathHasBeenSet() const;

                private:

                    /**
                     * 导出任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_exportTaskId;
                    bool m_exportTaskIdHasBeenSet;

                    /**
                     * 导出任务类型(1.全部,2.触发行,3.通过行)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 任务创建人 id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_operatorId;
                    bool m_operatorIdHasBeenSet;

                    /**
                     * 任务创建人昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operatorName;
                    bool m_operatorNameHasBeenSet;

                    /**
                     * 任务创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 导出状态(1.已提交 2.导出中 3.导出成功 4.导出失败)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 调度任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schedulerTaskId;
                    bool m_schedulerTaskIdHasBeenSet;

                    /**
                     * 调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schedulerCurRunDate;
                    bool m_schedulerCurRunDateHasBeenSet;

                    /**
                     * 文件相对路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_EXPORTTASKINFO_H_
