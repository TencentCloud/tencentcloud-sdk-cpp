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

#ifndef TENCENTCLOUD_MSP_V20180319_MODEL_MODIFYMIGRATIONTASKSTATUSREQUEST_H_
#define TENCENTCLOUD_MSP_V20180319_MODEL_MODIFYMIGRATIONTASKSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Msp
    {
        namespace V20180319
        {
            namespace Model
            {
                /**
                * ModifyMigrationTaskStatus请求参数结构体
                */
                class ModifyMigrationTaskStatusRequest : public AbstractModel
                {
                public:
                    ModifyMigrationTaskStatusRequest();
                    ~ModifyMigrationTaskStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务状态，取值为unstart，migrating，finish，fail之一，分别代表该迁移任务状态为迁移未开始，迁移中，迁移完成，迁移失败
                     * @return Status 任务状态，取值为unstart，migrating，finish，fail之一，分别代表该迁移任务状态为迁移未开始，迁移中，迁移完成，迁移失败
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态，取值为unstart，migrating，finish，fail之一，分别代表该迁移任务状态为迁移未开始，迁移中，迁移完成，迁移失败
                     * @param _status 任务状态，取值为unstart，migrating，finish，fail之一，分别代表该迁移任务状态为迁移未开始，迁移中，迁移完成，迁移失败
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
                     * 获取任务ID，例如msp-jitoh33n
                     * @return TaskId 任务ID，例如msp-jitoh33n
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID，例如msp-jitoh33n
                     * @param _taskId 任务ID，例如msp-jitoh33n
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 任务状态，取值为unstart，migrating，finish，fail之一，分别代表该迁移任务状态为迁移未开始，迁移中，迁移完成，迁移失败
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务ID，例如msp-jitoh33n
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MSP_V20180319_MODEL_MODIFYMIGRATIONTASKSTATUSREQUEST_H_
