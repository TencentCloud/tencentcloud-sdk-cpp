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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBETASKINFORESPONSE_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBETASKINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Keewidb
    {
        namespace V20220308
        {
            namespace Model
            {
                /**
                * DescribeTaskInfo返回参数结构体
                */
                class DescribeTaskInfoResponse : public AbstractModel
                {
                public:
                    DescribeTaskInfoResponse();
                    ~DescribeTaskInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务状态。<ul><li>preparing：待执行。</li><li>running：执行中。</li><li>succeed：成功。</li><li>failed：失败。</li><li>error：执行出错。</li></ul>
                     * @return Status 任务状态。<ul><li>preparing：待执行。</li><li>running：执行中。</li><li>succeed：成功。</li><li>failed：失败。</li><li>error：执行出错。</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取任务开始时间。
                     * @return StartTime 任务开始时间。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取任务类型。
                     * @return TaskType 任务类型。
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取实例的ID。
                     * @return InstanceId 实例的ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取任务信息，错误时显示错误信息。执行中与成功则为空值。
                     * @return TaskMessage 任务信息，错误时显示错误信息。执行中与成功则为空值。
                     * 
                     */
                    std::string GetTaskMessage() const;

                    /**
                     * 判断参数 TaskMessage 是否已赋值
                     * @return TaskMessage 是否已赋值
                     * 
                     */
                    bool TaskMessageHasBeenSet() const;

                private:

                    /**
                     * 任务状态。<ul><li>preparing：待执行。</li><li>running：执行中。</li><li>succeed：成功。</li><li>failed：失败。</li><li>error：执行出错。</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务开始时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 任务类型。
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 实例的ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 任务信息，错误时显示错误信息。执行中与成功则为空值。
                     */
                    std::string m_taskMessage;
                    bool m_taskMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBETASKINFORESPONSE_H_
