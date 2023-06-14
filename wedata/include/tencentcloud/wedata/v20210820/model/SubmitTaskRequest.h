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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBMITTASKREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBMITTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * SubmitTask请求参数结构体
                */
                class SubmitTaskRequest : public AbstractModel
                {
                public:
                    SubmitTaskRequest();
                    ~SubmitTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param _projectId 项目Id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
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
                     * 获取版本备注
                     * @return VersionRemark 版本备注
                     * 
                     */
                    std::string GetVersionRemark() const;

                    /**
                     * 设置版本备注
                     * @param _versionRemark 版本备注
                     * 
                     */
                    void SetVersionRemark(const std::string& _versionRemark);

                    /**
                     * 判断参数 VersionRemark 是否已赋值
                     * @return VersionRemark 是否已赋值
                     * 
                     */
                    bool VersionRemarkHasBeenSet() const;

                    /**
                     * 获取是否启动调度
                     * @return StartScheduling 是否启动调度
                     * 
                     */
                    bool GetStartScheduling() const;

                    /**
                     * 设置是否启动调度
                     * @param _startScheduling 是否启动调度
                     * 
                     */
                    void SetStartScheduling(const bool& _startScheduling);

                    /**
                     * 判断参数 StartScheduling 是否已赋值
                     * @return StartScheduling 是否已赋值
                     * 
                     */
                    bool StartSchedulingHasBeenSet() const;

                private:

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 版本备注
                     */
                    std::string m_versionRemark;
                    bool m_versionRemarkHasBeenSet;

                    /**
                     * 是否启动调度
                     */
                    bool m_startScheduling;
                    bool m_startSchedulingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBMITTASKREQUEST_H_
