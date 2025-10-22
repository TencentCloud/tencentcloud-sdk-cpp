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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_RESTARTLIVEPULLSTREAMTASKREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_RESTARTLIVEPULLSTREAMTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * RestartLivePullStreamTask请求参数结构体
                */
                class RestartLivePullStreamTaskRequest : public AbstractModel
                {
                public:
                    RestartLivePullStreamTaskRequest();
                    ~RestartLivePullStreamTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务 Id。
                     * @return TaskId 任务 Id。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务 Id。
                     * @param _taskId 任务 Id。
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
                     * 获取操作人备注名称。
                     * @return Operator 操作人备注名称。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作人备注名称。
                     * @param _operator 操作人备注名称。
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 任务 Id。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 操作人备注名称。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_RESTARTLIVEPULLSTREAMTASKREQUEST_H_
