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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATETASKSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATETASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/TasksInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateTasks请求参数结构体
                */
                class CreateTasksRequest : public AbstractModel
                {
                public:
                    CreateTasksRequest();
                    ~CreateTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据库名称。如果SQL语句中有数据库名称，优先使用SQL语句中的数据库，否则使用该参数指定的数据库（注：当提交建库sql时，该字段传空字符串）。
                     * @return DatabaseName 数据库名称。如果SQL语句中有数据库名称，优先使用SQL语句中的数据库，否则使用该参数指定的数据库（注：当提交建库sql时，该字段传空字符串）。
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名称。如果SQL语句中有数据库名称，优先使用SQL语句中的数据库，否则使用该参数指定的数据库（注：当提交建库sql时，该字段传空字符串）。
                     * @param DatabaseName 数据库名称。如果SQL语句中有数据库名称，优先使用SQL语句中的数据库，否则使用该参数指定的数据库（注：当提交建库sql时，该字段传空字符串）。
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取SQL任务信息
                     * @return Tasks SQL任务信息
                     */
                    TasksInfo GetTasks() const;

                    /**
                     * 设置SQL任务信息
                     * @param Tasks SQL任务信息
                     */
                    void SetTasks(const TasksInfo& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取数据源名称，默认为DataLakeCatalog
                     * @return DatasourceConnectionName 数据源名称，默认为DataLakeCatalog
                     */
                    std::string GetDatasourceConnectionName() const;

                    /**
                     * 设置数据源名称，默认为DataLakeCatalog
                     * @param DatasourceConnectionName 数据源名称，默认为DataLakeCatalog
                     */
                    void SetDatasourceConnectionName(const std::string& _datasourceConnectionName);

                    /**
                     * 判断参数 DatasourceConnectionName 是否已赋值
                     * @return DatasourceConnectionName 是否已赋值
                     */
                    bool DatasourceConnectionNameHasBeenSet() const;

                    /**
                     * 获取计算引擎名称，不填任务提交到默认集群
                     * @return DataEngineName 计算引擎名称，不填任务提交到默认集群
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置计算引擎名称，不填任务提交到默认集群
                     * @param DataEngineName 计算引擎名称，不填任务提交到默认集群
                     */
                    void SetDataEngineName(const std::string& _dataEngineName);

                    /**
                     * 判断参数 DataEngineName 是否已赋值
                     * @return DataEngineName 是否已赋值
                     */
                    bool DataEngineNameHasBeenSet() const;

                private:

                    /**
                     * 数据库名称。如果SQL语句中有数据库名称，优先使用SQL语句中的数据库，否则使用该参数指定的数据库（注：当提交建库sql时，该字段传空字符串）。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * SQL任务信息
                     */
                    TasksInfo m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * 数据源名称，默认为DataLakeCatalog
                     */
                    std::string m_datasourceConnectionName;
                    bool m_datasourceConnectionNameHasBeenSet;

                    /**
                     * 计算引擎名称，不填任务提交到默认集群
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATETASKSREQUEST_H_
