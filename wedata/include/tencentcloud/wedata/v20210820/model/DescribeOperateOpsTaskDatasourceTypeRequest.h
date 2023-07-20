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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEOPERATEOPSTASKDATASOURCETYPEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEOPERATEOPSTASKDATASOURCETYPEREQUEST_H_

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
                * DescribeOperateOpsTaskDatasourceType请求参数结构体
                */
                class DescribeOperateOpsTaskDatasourceTypeRequest : public AbstractModel
                {
                public:
                    DescribeOperateOpsTaskDatasourceTypeRequest();
                    ~DescribeOperateOpsTaskDatasourceTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
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
                     * 获取任务类型ID
                     * @return TaskType 任务类型ID
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置任务类型ID
                     * @param _taskType 任务类型ID
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
                     * 获取数据源来源/去向
                     * @return ServiceKind 数据源来源/去向
                     * 
                     */
                    std::string GetServiceKind() const;

                    /**
                     * 设置数据源来源/去向
                     * @param _serviceKind 数据源来源/去向
                     * 
                     */
                    void SetServiceKind(const std::string& _serviceKind);

                    /**
                     * 判断参数 ServiceKind 是否已赋值
                     * @return ServiceKind 是否已赋值
                     * 
                     */
                    bool ServiceKindHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务类型ID
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 数据源来源/去向
                     */
                    std::string m_serviceKind;
                    bool m_serviceKindHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEOPERATEOPSTASKDATASOURCETYPEREQUEST_H_
