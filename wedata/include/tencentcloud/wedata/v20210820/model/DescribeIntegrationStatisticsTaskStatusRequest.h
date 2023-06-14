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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINTEGRATIONSTATISTICSTASKSTATUSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINTEGRATIONSTATISTICSTASKSTATUSREQUEST_H_

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
                * DescribeIntegrationStatisticsTaskStatus请求参数结构体
                */
                class DescribeIntegrationStatisticsTaskStatusRequest : public AbstractModel
                {
                public:
                    DescribeIntegrationStatisticsTaskStatusRequest();
                    ~DescribeIntegrationStatisticsTaskStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务类型（实时：201，离线：202）
                     * @return TaskType 任务类型（实时：201，离线：202）
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置任务类型（实时：201，离线：202）
                     * @param _taskType 任务类型（实时：201，离线：202）
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

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

                    /**
                     * 获取查询日期
                     * @return QueryDate 查询日期
                     * 
                     */
                    std::string GetQueryDate() const;

                    /**
                     * 设置查询日期
                     * @param _queryDate 查询日期
                     * 
                     */
                    void SetQueryDate(const std::string& _queryDate);

                    /**
                     * 判断参数 QueryDate 是否已赋值
                     * @return QueryDate 是否已赋值
                     * 
                     */
                    bool QueryDateHasBeenSet() const;

                    /**
                     * 获取资源组id
                     * @return ExecutorGroupId 资源组id
                     * 
                     */
                    std::string GetExecutorGroupId() const;

                    /**
                     * 设置资源组id
                     * @param _executorGroupId 资源组id
                     * 
                     */
                    void SetExecutorGroupId(const std::string& _executorGroupId);

                    /**
                     * 判断参数 ExecutorGroupId 是否已赋值
                     * @return ExecutorGroupId 是否已赋值
                     * 
                     */
                    bool ExecutorGroupIdHasBeenSet() const;

                private:

                    /**
                     * 任务类型（实时：201，离线：202）
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 查询日期
                     */
                    std::string m_queryDate;
                    bool m_queryDateHasBeenSet;

                    /**
                     * 资源组id
                     */
                    std::string m_executorGroupId;
                    bool m_executorGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINTEGRATIONSTATISTICSTASKSTATUSREQUEST_H_
