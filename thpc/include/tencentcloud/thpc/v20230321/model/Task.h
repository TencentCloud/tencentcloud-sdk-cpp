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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_TASK_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_TASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/thpc/v20230321/model/Application.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * 作业任务配置信息。
                */
                class Task : public AbstractModel
                {
                public:
                    Task();
                    ~Task() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取作业任务的应用环境配置信息。
                     * @return Application 作业任务的应用环境配置信息。
                     * 
                     */
                    Application GetApplication() const;

                    /**
                     * 设置作业任务的应用环境配置信息。
                     * @param _application 作业任务的应用环境配置信息。
                     * 
                     */
                    void SetApplication(const Application& _application);

                    /**
                     * 判断参数 Application 是否已赋值
                     * @return Application 是否已赋值
                     * 
                     */
                    bool ApplicationHasBeenSet() const;

                    /**
                     * 获取作业任务名称。
                     * @return TaskName 作业任务名称。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置作业任务名称。
                     * @param _taskName 作业任务名称。
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
                     * 获取作业任务所需的节点数/副本数。
                     * @return TaskInstanceNum 作业任务所需的节点数/副本数。
                     * 
                     */
                    uint64_t GetTaskInstanceNum() const;

                    /**
                     * 设置作业任务所需的节点数/副本数。
                     * @param _taskInstanceNum 作业任务所需的节点数/副本数。
                     * 
                     */
                    void SetTaskInstanceNum(const uint64_t& _taskInstanceNum);

                    /**
                     * 判断参数 TaskInstanceNum 是否已赋值
                     * @return TaskInstanceNum 是否已赋值
                     * 
                     */
                    bool TaskInstanceNumHasBeenSet() const;

                    /**
                     * 获取任务超时时间(单位：秒)。
                     * @return Timeout 任务超时时间(单位：秒)。
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置任务超时时间(单位：秒)。
                     * @param _timeout 任务超时时间(单位：秒)。
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                private:

                    /**
                     * 作业任务的应用环境配置信息。
                     */
                    Application m_application;
                    bool m_applicationHasBeenSet;

                    /**
                     * 作业任务名称。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 作业任务所需的节点数/副本数。
                     */
                    uint64_t m_taskInstanceNum;
                    bool m_taskInstanceNumHasBeenSet;

                    /**
                     * 任务超时时间(单位：秒)。
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_TASK_H_
