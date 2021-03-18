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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATETASKREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Task.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateTask请求参数结构体
                */
                class CreateTaskRequest : public AbstractModel
                {
                public:
                    CreateTaskRequest();
                    ~CreateTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取计算任务，该参数中包含任务类型及其相关配置信息
                     * @return Task 计算任务，该参数中包含任务类型及其相关配置信息
                     */
                    Task GetTask() const;

                    /**
                     * 设置计算任务，该参数中包含任务类型及其相关配置信息
                     * @param Task 计算任务，该参数中包含任务类型及其相关配置信息
                     */
                    void SetTask(const Task& _task);

                    /**
                     * 判断参数 Task 是否已赋值
                     * @return Task 是否已赋值
                     */
                    bool TaskHasBeenSet() const;

                    /**
                     * 获取数据库名称。任务在执行前均会USE该数据库， 除了首次建库时，其他情况建议均添加上。
                     * @return DatabaseName 数据库名称。任务在执行前均会USE该数据库， 除了首次建库时，其他情况建议均添加上。
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名称。任务在执行前均会USE该数据库， 除了首次建库时，其他情况建议均添加上。
                     * @param DatabaseName 数据库名称。任务在执行前均会USE该数据库， 除了首次建库时，其他情况建议均添加上。
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     */
                    bool DatabaseNameHasBeenSet() const;

                private:

                    /**
                     * 计算任务，该参数中包含任务类型及其相关配置信息
                     */
                    Task m_task;
                    bool m_taskHasBeenSet;

                    /**
                     * 数据库名称。任务在执行前均会USE该数据库， 除了首次建库时，其他情况建议均添加上。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATETASKREQUEST_H_
