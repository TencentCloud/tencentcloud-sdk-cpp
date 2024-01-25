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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKDETAILDSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKDETAILDSREQUEST_H_

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
                * DescribeTaskDetailDs请求参数结构体
                */
                class DescribeTaskDetailDsRequest : public AbstractModel
                {
                public:
                    DescribeTaskDetailDsRequest();
                    ~DescribeTaskDetailDsRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取任务告警状态
                     * @return TaskAlarmStatus 任务告警状态
                     * 
                     */
                    int64_t GetTaskAlarmStatus() const;

                    /**
                     * 设置任务告警状态
                     * @param _taskAlarmStatus 任务告警状态
                     * 
                     */
                    void SetTaskAlarmStatus(const int64_t& _taskAlarmStatus);

                    /**
                     * 判断参数 TaskAlarmStatus 是否已赋值
                     * @return TaskAlarmStatus 是否已赋值
                     * 
                     */
                    bool TaskAlarmStatusHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务告警状态
                     */
                    int64_t m_taskAlarmStatus;
                    bool m_taskAlarmStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKDETAILDSREQUEST_H_
