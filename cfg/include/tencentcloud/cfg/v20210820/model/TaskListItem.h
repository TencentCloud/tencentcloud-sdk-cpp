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
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param TaskId 任务ID
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务标题
                     * @return TaskTitle 任务标题
                     */
                    std::string GetTaskTitle() const;

                    /**
                     * 设置任务标题
                     * @param TaskTitle 任务标题
                     */
                    void SetTaskTitle(const std::string& _taskTitle);

                    /**
                     * 判断参数 TaskTitle 是否已赋值
                     * @return TaskTitle 是否已赋值
                     */
                    bool TaskTitleHasBeenSet() const;

                    /**
                     * 获取任务描述
                     * @return TaskDescription 任务描述
                     */
                    std::string GetTaskDescription() const;

                    /**
                     * 设置任务描述
                     * @param TaskDescription 任务描述
                     */
                    void SetTaskDescription(const std::string& _taskDescription);

                    /**
                     * 判断参数 TaskDescription 是否已赋值
                     * @return TaskDescription 是否已赋值
                     */
                    bool TaskDescriptionHasBeenSet() const;

                    /**
                     * 获取任务标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskTag 任务标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTaskTag() const;

                    /**
                     * 设置任务标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TaskTag 任务标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTaskTag(const std::string& _taskTag);

                    /**
                     * 判断参数 TaskTag 是否已赋值
                     * @return TaskTag 是否已赋值
                     */
                    bool TaskTagHasBeenSet() const;

                    /**
                     * 获取任务状态(1001 -- 未开始   1002 -- 进行中  1003 -- 暂停中   1004 -- 任务结束)
                     * @return TaskStatus 任务状态(1001 -- 未开始   1002 -- 进行中  1003 -- 暂停中   1004 -- 任务结束)
                     */
                    int64_t GetTaskStatus() const;

                    /**
                     * 设置任务状态(1001 -- 未开始   1002 -- 进行中  1003 -- 暂停中   1004 -- 任务结束)
                     * @param TaskStatus 任务状态(1001 -- 未开始   1002 -- 进行中  1003 -- 暂停中   1004 -- 任务结束)
                     */
                    void SetTaskStatus(const int64_t& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取任务创建时间
                     * @return TaskCreateTime 任务创建时间
                     */
                    std::string GetTaskCreateTime() const;

                    /**
                     * 设置任务创建时间
                     * @param TaskCreateTime 任务创建时间
                     */
                    void SetTaskCreateTime(const std::string& _taskCreateTime);

                    /**
                     * 判断参数 TaskCreateTime 是否已赋值
                     * @return TaskCreateTime 是否已赋值
                     */
                    bool TaskCreateTimeHasBeenSet() const;

                    /**
                     * 获取任务更新时间
                     * @return TaskUpdateTime 任务更新时间
                     */
                    std::string GetTaskUpdateTime() const;

                    /**
                     * 设置任务更新时间
                     * @param TaskUpdateTime 任务更新时间
                     */
                    void SetTaskUpdateTime(const std::string& _taskUpdateTime);

                    /**
                     * 判断参数 TaskUpdateTime 是否已赋值
                     * @return TaskUpdateTime 是否已赋值
                     */
                    bool TaskUpdateTimeHasBeenSet() const;

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
注意：此字段可能返回 null，表示取不到有效值。
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TASKLISTITEM_H_
