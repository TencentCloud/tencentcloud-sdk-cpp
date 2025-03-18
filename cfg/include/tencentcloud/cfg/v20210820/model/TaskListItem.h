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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TASKLISTITEM_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TASKLISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 任务列表信息
                */
                class TaskListItem : public AbstractModel
                {
                public:
                    TaskListItem();
                    ~TaskListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
                     * 
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务标题
                     * @return TaskTitle 任务标题
                     * 
                     */
                    std::string GetTaskTitle() const;

                    /**
                     * 设置任务标题
                     * @param _taskTitle 任务标题
                     * 
                     */
                    void SetTaskTitle(const std::string& _taskTitle);

                    /**
                     * 判断参数 TaskTitle 是否已赋值
                     * @return TaskTitle 是否已赋值
                     * 
                     */
                    bool TaskTitleHasBeenSet() const;

                    /**
                     * 获取任务描述
                     * @return TaskDescription 任务描述
                     * 
                     */
                    std::string GetTaskDescription() const;

                    /**
                     * 设置任务描述
                     * @param _taskDescription 任务描述
                     * 
                     */
                    void SetTaskDescription(const std::string& _taskDescription);

                    /**
                     * 判断参数 TaskDescription 是否已赋值
                     * @return TaskDescription 是否已赋值
                     * 
                     */
                    bool TaskDescriptionHasBeenSet() const;

                    /**
                     * 获取任务标签
                     * @return TaskTag 任务标签
                     * 
                     */
                    std::string GetTaskTag() const;

                    /**
                     * 设置任务标签
                     * @param _taskTag 任务标签
                     * 
                     */
                    void SetTaskTag(const std::string& _taskTag);

                    /**
                     * 判断参数 TaskTag 是否已赋值
                     * @return TaskTag 是否已赋值
                     * 
                     */
                    bool TaskTagHasBeenSet() const;

                    /**
                     * 获取任务状态(1001 -- 未开始   1002 -- 进行中  1003 -- 暂停中   1004 -- 任务结束)
                     * @return TaskStatus 任务状态(1001 -- 未开始   1002 -- 进行中  1003 -- 暂停中   1004 -- 任务结束)
                     * 
                     */
                    int64_t GetTaskStatus() const;

                    /**
                     * 设置任务状态(1001 -- 未开始   1002 -- 进行中  1003 -- 暂停中   1004 -- 任务结束)
                     * @param _taskStatus 任务状态(1001 -- 未开始   1002 -- 进行中  1003 -- 暂停中   1004 -- 任务结束)
                     * 
                     */
                    void SetTaskStatus(const int64_t& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取任务创建时间
                     * @return TaskCreateTime 任务创建时间
                     * 
                     */
                    std::string GetTaskCreateTime() const;

                    /**
                     * 设置任务创建时间
                     * @param _taskCreateTime 任务创建时间
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
                     * 获取任务更新时间
                     * @return TaskUpdateTime 任务更新时间
                     * 
                     */
                    std::string GetTaskUpdateTime() const;

                    /**
                     * 设置任务更新时间
                     * @param _taskUpdateTime 任务更新时间
                     * 
                     */
                    void SetTaskUpdateTime(const std::string& _taskUpdateTime);

                    /**
                     * 判断参数 TaskUpdateTime 是否已赋值
                     * @return TaskUpdateTime 是否已赋值
                     * 
                     */
                    bool TaskUpdateTimeHasBeenSet() const;

                    /**
                     * 获取0--未开始，1--进行中，2--已完成
                     * @return TaskPreCheckStatus 0--未开始，1--进行中，2--已完成
                     * 
                     */
                    int64_t GetTaskPreCheckStatus() const;

                    /**
                     * 设置0--未开始，1--进行中，2--已完成
                     * @param _taskPreCheckStatus 0--未开始，1--进行中，2--已完成
                     * 
                     */
                    void SetTaskPreCheckStatus(const int64_t& _taskPreCheckStatus);

                    /**
                     * 判断参数 TaskPreCheckStatus 是否已赋值
                     * @return TaskPreCheckStatus 是否已赋值
                     * 
                     */
                    bool TaskPreCheckStatusHasBeenSet() const;

                    /**
                     * 获取环境检查是否通过
                     * @return TaskPreCheckSuccess 环境检查是否通过
                     * 
                     */
                    bool GetTaskPreCheckSuccess() const;

                    /**
                     * 设置环境检查是否通过
                     * @param _taskPreCheckSuccess 环境检查是否通过
                     * 
                     */
                    void SetTaskPreCheckSuccess(const bool& _taskPreCheckSuccess);

                    /**
                     * 判断参数 TaskPreCheckSuccess 是否已赋值
                     * @return TaskPreCheckSuccess 是否已赋值
                     * 
                     */
                    bool TaskPreCheckSuccessHasBeenSet() const;

                    /**
                     * 获取演练是否符合预期 1-符合预期 2-不符合预期
                     * @return TaskExpect 演练是否符合预期 1-符合预期 2-不符合预期
                     * 
                     */
                    int64_t GetTaskExpect() const;

                    /**
                     * 设置演练是否符合预期 1-符合预期 2-不符合预期
                     * @param _taskExpect 演练是否符合预期 1-符合预期 2-不符合预期
                     * 
                     */
                    void SetTaskExpect(const int64_t& _taskExpect);

                    /**
                     * 判断参数 TaskExpect 是否已赋值
                     * @return TaskExpect 是否已赋值
                     * 
                     */
                    bool TaskExpectHasBeenSet() const;

                    /**
                     * 获取关联应用ID
                     * @return ApplicationId 关联应用ID
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置关联应用ID
                     * @param _applicationId 关联应用ID
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取关联应用名称
                     * @return ApplicationName 关联应用名称
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置关联应用名称
                     * @param _applicationName 关联应用名称
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取验证项ID
                     * @return VerifyId 验证项ID
                     * 
                     */
                    uint64_t GetVerifyId() const;

                    /**
                     * 设置验证项ID
                     * @param _verifyId 验证项ID
                     * 
                     */
                    void SetVerifyId(const uint64_t& _verifyId);

                    /**
                     * 判断参数 VerifyId 是否已赋值
                     * @return VerifyId 是否已赋值
                     * 
                     */
                    bool VerifyIdHasBeenSet() const;

                    /**
                     * 获取状态类型: 0 -- 无状态，1 -- 成功，2-- 失败，3--终止
                     * @return TaskStatusType 状态类型: 0 -- 无状态，1 -- 成功，2-- 失败，3--终止
                     * 
                     */
                    uint64_t GetTaskStatusType() const;

                    /**
                     * 设置状态类型: 0 -- 无状态，1 -- 成功，2-- 失败，3--终止
                     * @param _taskStatusType 状态类型: 0 -- 无状态，1 -- 成功，2-- 失败，3--终止
                     * 
                     */
                    void SetTaskStatusType(const uint64_t& _taskStatusType);

                    /**
                     * 判断参数 TaskStatusType 是否已赋值
                     * @return TaskStatusType 是否已赋值
                     * 
                     */
                    bool TaskStatusTypeHasBeenSet() const;

                    /**
                     * 获取架构ID
                     * @return ArchId 架构ID
                     * 
                     */
                    std::string GetArchId() const;

                    /**
                     * 设置架构ID
                     * @param _archId 架构ID
                     * 
                     */
                    void SetArchId(const std::string& _archId);

                    /**
                     * 判断参数 ArchId 是否已赋值
                     * @return ArchId 是否已赋值
                     * 
                     */
                    bool ArchIdHasBeenSet() const;

                    /**
                     * 获取架构名称
                     * @return ArchName 架构名称
                     * 
                     */
                    std::string GetArchName() const;

                    /**
                     * 设置架构名称
                     * @param _archName 架构名称
                     * 
                     */
                    void SetArchName(const std::string& _archName);

                    /**
                     * 判断参数 ArchName 是否已赋值
                     * @return ArchName 是否已赋值
                     * 
                     */
                    bool ArchNameHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务标题
                     */
                    std::string m_taskTitle;
                    bool m_taskTitleHasBeenSet;

                    /**
                     * 任务描述
                     */
                    std::string m_taskDescription;
                    bool m_taskDescriptionHasBeenSet;

                    /**
                     * 任务标签
                     */
                    std::string m_taskTag;
                    bool m_taskTagHasBeenSet;

                    /**
                     * 任务状态(1001 -- 未开始   1002 -- 进行中  1003 -- 暂停中   1004 -- 任务结束)
                     */
                    int64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 任务创建时间
                     */
                    std::string m_taskCreateTime;
                    bool m_taskCreateTimeHasBeenSet;

                    /**
                     * 任务更新时间
                     */
                    std::string m_taskUpdateTime;
                    bool m_taskUpdateTimeHasBeenSet;

                    /**
                     * 0--未开始，1--进行中，2--已完成
                     */
                    int64_t m_taskPreCheckStatus;
                    bool m_taskPreCheckStatusHasBeenSet;

                    /**
                     * 环境检查是否通过
                     */
                    bool m_taskPreCheckSuccess;
                    bool m_taskPreCheckSuccessHasBeenSet;

                    /**
                     * 演练是否符合预期 1-符合预期 2-不符合预期
                     */
                    int64_t m_taskExpect;
                    bool m_taskExpectHasBeenSet;

                    /**
                     * 关联应用ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 关联应用名称
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * 验证项ID
                     */
                    uint64_t m_verifyId;
                    bool m_verifyIdHasBeenSet;

                    /**
                     * 状态类型: 0 -- 无状态，1 -- 成功，2-- 失败，3--终止
                     */
                    uint64_t m_taskStatusType;
                    bool m_taskStatusTypeHasBeenSet;

                    /**
                     * 架构ID
                     */
                    std::string m_archId;
                    bool m_archIdHasBeenSet;

                    /**
                     * 架构名称
                     */
                    std::string m_archName;
                    bool m_archNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TASKLISTITEM_H_
