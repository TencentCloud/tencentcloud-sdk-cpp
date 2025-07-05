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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHCREATEINTEGRATIONTASKALARMSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHCREATEINTEGRATIONTASKALARMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskAlarmInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * BatchCreateIntegrationTaskAlarms请求参数结构体
                */
                class BatchCreateIntegrationTaskAlarmsRequest : public AbstractModel
                {
                public:
                    BatchCreateIntegrationTaskAlarmsRequest();
                    ~BatchCreateIntegrationTaskAlarmsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务id
                     * @return TaskIds 任务id
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置任务id
                     * @param _taskIds 任务id
                     * 
                     */
                    void SetTaskIds(const std::vector<std::string>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                    /**
                     * 获取告警配置信息
                     * @return TaskAlarmInfo 告警配置信息
                     * 
                     */
                    TaskAlarmInfo GetTaskAlarmInfo() const;

                    /**
                     * 设置告警配置信息
                     * @param _taskAlarmInfo 告警配置信息
                     * 
                     */
                    void SetTaskAlarmInfo(const TaskAlarmInfo& _taskAlarmInfo);

                    /**
                     * 判断参数 TaskAlarmInfo 是否已赋值
                     * @return TaskAlarmInfo 是否已赋值
                     * 
                     */
                    bool TaskAlarmInfoHasBeenSet() const;

                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 任务id
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * 告警配置信息
                     */
                    TaskAlarmInfo m_taskAlarmInfo;
                    bool m_taskAlarmInfoHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHCREATEINTEGRATIONTASKALARMSREQUEST_H_
