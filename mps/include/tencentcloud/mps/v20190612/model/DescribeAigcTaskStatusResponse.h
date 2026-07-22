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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEAIGCTASKSTATUSRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEAIGCTASKSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeAigcTaskStatus返回参数结构体
                */
                class DescribeAigcTaskStatusResponse : public AbstractModel
                {
                public:
                    DescribeAigcTaskStatusResponse();
                    ~DescribeAigcTaskStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务ID</p>
                     * @return TaskId <p>任务ID</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>任务状态描述</p><p>枚举值：</p><ul><li>PENDING： 任务等待调度</li><li>RUNNING： 任务运行中</li><li>FINISHED： 任务执行成功</li><li>STOP： 任务被中止</li><li>FAILED： 任务失败</li><li>TIMEOUT： 任务超时</li></ul>
                     * @return TaskStatus <p>任务状态描述</p><p>枚举值：</p><ul><li>PENDING： 任务等待调度</li><li>RUNNING： 任务运行中</li><li>FINISHED： 任务执行成功</li><li>STOP： 任务被中止</li><li>FAILED： 任务失败</li><li>TIMEOUT： 任务超时</li></ul>
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取<p>输出url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputUrl <p>输出url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutputUrl() const;

                    /**
                     * 判断参数 OutputUrl 是否已赋值
                     * @return OutputUrl 是否已赋值
                     * 
                     */
                    bool OutputUrlHasBeenSet() const;

                    /**
                     * 获取<p>任务创建时间</p>
                     * @return CreateTime <p>任务创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>任务调度时间</p>
                     * @return ScheduledTime <p>任务调度时间</p>
                     * 
                     */
                    std::string GetScheduledTime() const;

                    /**
                     * 判断参数 ScheduledTime 是否已赋值
                     * @return ScheduledTime 是否已赋值
                     * 
                     */
                    bool ScheduledTimeHasBeenSet() const;

                    /**
                     * 获取<p>任务完成时间</p>
                     * @return FinishedTime <p>任务完成时间</p>
                     * 
                     */
                    std::string GetFinishedTime() const;

                    /**
                     * 判断参数 FinishedTime 是否已赋值
                     * @return FinishedTime 是否已赋值
                     * 
                     */
                    bool FinishedTimeHasBeenSet() const;

                    /**
                     * 获取<p>任务错误码</p>
                     * @return TaskResultCode <p>任务错误码</p>
                     * 
                     */
                    int64_t GetTaskResultCode() const;

                    /**
                     * 判断参数 TaskResultCode 是否已赋值
                     * @return TaskResultCode 是否已赋值
                     * 
                     */
                    bool TaskResultCodeHasBeenSet() const;

                    /**
                     * 获取<p>任务返回错误信息</p>
                     * @return TaskResultMsg <p>任务返回错误信息</p>
                     * 
                     */
                    std::string GetTaskResultMsg() const;

                    /**
                     * 判断参数 TaskResultMsg 是否已赋值
                     * @return TaskResultMsg 是否已赋值
                     * 
                     */
                    bool TaskResultMsgHasBeenSet() const;

                    /**
                     * 获取<p>请求结构体</p>
                     * @return RequestBody <p>请求结构体</p>
                     * 
                     */
                    std::string GetRequestBody() const;

                    /**
                     * 判断参数 RequestBody 是否已赋值
                     * @return RequestBody 是否已赋值
                     * 
                     */
                    bool RequestBodyHasBeenSet() const;

                    /**
                     * 获取<p>任务类型</p>
                     * @return TaskType <p>任务类型</p>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                private:

                    /**
                     * <p>任务ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务状态描述</p><p>枚举值：</p><ul><li>PENDING： 任务等待调度</li><li>RUNNING： 任务运行中</li><li>FINISHED： 任务执行成功</li><li>STOP： 任务被中止</li><li>FAILED： 任务失败</li><li>TIMEOUT： 任务超时</li></ul>
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * <p>输出url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outputUrl;
                    bool m_outputUrlHasBeenSet;

                    /**
                     * <p>任务创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>任务调度时间</p>
                     */
                    std::string m_scheduledTime;
                    bool m_scheduledTimeHasBeenSet;

                    /**
                     * <p>任务完成时间</p>
                     */
                    std::string m_finishedTime;
                    bool m_finishedTimeHasBeenSet;

                    /**
                     * <p>任务错误码</p>
                     */
                    int64_t m_taskResultCode;
                    bool m_taskResultCodeHasBeenSet;

                    /**
                     * <p>任务返回错误信息</p>
                     */
                    std::string m_taskResultMsg;
                    bool m_taskResultMsgHasBeenSet;

                    /**
                     * <p>请求结构体</p>
                     */
                    std::string m_requestBody;
                    bool m_requestBodyHasBeenSet;

                    /**
                     * <p>任务类型</p>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEAIGCTASKSTATUSRESPONSE_H_
