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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBETASKLISTREQUEST_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBETASKLISTREQUEST_H_

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
                * DescribeTaskList请求参数结构体
                */
                class DescribeTaskListRequest : public AbstractModel
                {
                public:
                    DescribeTaskListRequest();
                    ~DescribeTaskListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，如：kee-6ubh****。
                     * @return InstanceId 实例 ID，如：kee-6ubh****。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，如：kee-6ubh****。
                     * @param _instanceId 实例 ID，如：kee-6ubh****。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例名称。
                     * @return InstanceName 实例名称。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称。
                     * @param _instanceName 实例名称。
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取每页输出的任务列表大小。默认为 20，最多输出100条。
                     * @return Limit 每页输出的任务列表大小。默认为 20，最多输出100条。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页输出的任务列表大小。默认为 20，最多输出100条。
                     * @param _limit 每页输出的任务列表大小。默认为 20，最多输出100条。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset：分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     * @return Offset Offset：分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset：分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     * @param _offset Offset：分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取项目ID。
                     * @return ProjectIds 项目ID。
                     * 
                     */
                    std::vector<int64_t> GetProjectIds() const;

                    /**
                     * 设置项目ID。
                     * @param _projectIds 项目ID。
                     * 
                     */
                    void SetProjectIds(const std::vector<int64_t>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取任务类型。可设置为：FLOW_CREATE、FLOW_SETPWD、FLOW_CLOSE等。
                     * @return TaskTypes 任务类型。可设置为：FLOW_CREATE、FLOW_SETPWD、FLOW_CLOSE等。
                     * 
                     */
                    std::vector<std::string> GetTaskTypes() const;

                    /**
                     * 设置任务类型。可设置为：FLOW_CREATE、FLOW_SETPWD、FLOW_CLOSE等。
                     * @param _taskTypes 任务类型。可设置为：FLOW_CREATE、FLOW_SETPWD、FLOW_CLOSE等。
                     * 
                     */
                    void SetTaskTypes(const std::vector<std::string>& _taskTypes);

                    /**
                     * 判断参数 TaskTypes 是否已赋值
                     * @return TaskTypes 是否已赋值
                     * 
                     */
                    bool TaskTypesHasBeenSet() const;

                    /**
                     * 获取起始时间。
                     * @return BeginTime 起始时间。
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置起始时间。
                     * @param _beginTime 起始时间。
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取终止时间。
                     * @return EndTime 终止时间。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置终止时间。
                     * @param _endTime 终止时间。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取任务状态。
                     * @return TaskStatus 任务状态。
                     * 
                     */
                    std::vector<int64_t> GetTaskStatus() const;

                    /**
                     * 设置任务状态。
                     * @param _taskStatus 任务状态。
                     * 
                     */
                    void SetTaskStatus(const std::vector<int64_t>& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，如：kee-6ubh****。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 每页输出的任务列表大小。默认为 20，最多输出100条。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset：分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 项目ID。
                     */
                    std::vector<int64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * 任务类型。可设置为：FLOW_CREATE、FLOW_SETPWD、FLOW_CLOSE等。
                     */
                    std::vector<std::string> m_taskTypes;
                    bool m_taskTypesHasBeenSet;

                    /**
                     * 起始时间。
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 终止时间。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 任务状态。
                     */
                    std::vector<int64_t> m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBETASKLISTREQUEST_H_
