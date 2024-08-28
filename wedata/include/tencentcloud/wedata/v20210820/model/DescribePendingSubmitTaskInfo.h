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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEPENDINGSUBMITTASKINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEPENDINGSUBMITTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskSubmitPreCheckDetailInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 待提交任务信息
                */
                class DescribePendingSubmitTaskInfo : public AbstractModel
                {
                public:
                    DescribePendingSubmitTaskInfo();
                    ~DescribePendingSubmitTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 任务编号
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskName 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskName 任务名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取修改类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyType 修改类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifyType() const;

                    /**
                     * 设置修改类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyType 修改类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifyType(const std::string& _modifyType);

                    /**
                     * 判断参数 ModifyType 是否已赋值
                     * @return ModifyType 是否已赋值
                     * 
                     */
                    bool ModifyTypeHasBeenSet() const;

                    /**
                     * 获取任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskStatus 任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskStatus 任务状态
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取提交预检查（Y/N）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubmitPreCheck 提交预检查（Y/N）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubmitPreCheck() const;

                    /**
                     * 设置提交预检查（Y/N）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _submitPreCheck 提交预检查（Y/N）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubmitPreCheck(const std::string& _submitPreCheck);

                    /**
                     * 判断参数 SubmitPreCheck 是否已赋值
                     * @return SubmitPreCheck 是否已赋值
                     * 
                     */
                    bool SubmitPreCheckHasBeenSet() const;

                    /**
                     * 获取提交预检查提交可能会失败的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubmitPreCheckDetailList 提交预检查提交可能会失败的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TaskSubmitPreCheckDetailInfo> GetSubmitPreCheckDetailList() const;

                    /**
                     * 设置提交预检查提交可能会失败的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _submitPreCheckDetailList 提交预检查提交可能会失败的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubmitPreCheckDetailList(const std::vector<TaskSubmitPreCheckDetailInfo>& _submitPreCheckDetailList);

                    /**
                     * 判断参数 SubmitPreCheckDetailList 是否已赋值
                     * @return SubmitPreCheckDetailList 是否已赋值
                     * 
                     */
                    bool SubmitPreCheckDetailListHasBeenSet() const;

                    /**
                     * 获取资源组编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorGroupId 资源组编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutorGroupId() const;

                    /**
                     * 设置资源组编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executorGroupId 资源组编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutorGroupId(const std::string& _executorGroupId);

                    /**
                     * 判断参数 ExecutorGroupId 是否已赋值
                     * @return ExecutorGroupId 是否已赋值
                     * 
                     */
                    bool ExecutorGroupIdHasBeenSet() const;

                    /**
                     * 获取资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorGroupName 资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutorGroupName() const;

                    /**
                     * 设置资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executorGroupName 资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutorGroupName(const std::string& _executorGroupName);

                    /**
                     * 判断参数 ExecutorGroupName 是否已赋值
                     * @return ExecutorGroupName 是否已赋值
                     * 
                     */
                    bool ExecutorGroupNameHasBeenSet() const;

                private:

                    /**
                     * 任务编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 修改类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyType;
                    bool m_modifyTypeHasBeenSet;

                    /**
                     * 任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 提交预检查（Y/N）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_submitPreCheck;
                    bool m_submitPreCheckHasBeenSet;

                    /**
                     * 提交预检查提交可能会失败的原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TaskSubmitPreCheckDetailInfo> m_submitPreCheckDetailList;
                    bool m_submitPreCheckDetailListHasBeenSet;

                    /**
                     * 资源组编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executorGroupId;
                    bool m_executorGroupIdHasBeenSet;

                    /**
                     * 资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executorGroupName;
                    bool m_executorGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEPENDINGSUBMITTASKINFO_H_
