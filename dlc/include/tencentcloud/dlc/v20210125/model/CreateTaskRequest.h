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
#include <tencentcloud/dlc/v20210125/model/KVPair.h>


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
                     * 
                     */
                    Task GetTask() const;

                    /**
                     * 设置计算任务，该参数中包含任务类型及其相关配置信息
                     * @param _task 计算任务，该参数中包含任务类型及其相关配置信息
                     * 
                     */
                    void SetTask(const Task& _task);

                    /**
                     * 判断参数 Task 是否已赋值
                     * @return Task 是否已赋值
                     * 
                     */
                    bool TaskHasBeenSet() const;

                    /**
                     * 获取数据库名称。如果SQL语句中有数据库名称，优先使用SQL语句中的数据库，否则使用该参数指定的数据库（注：当提交建库sql时，该字段传空字符串）。
                     * @return DatabaseName 数据库名称。如果SQL语句中有数据库名称，优先使用SQL语句中的数据库，否则使用该参数指定的数据库（注：当提交建库sql时，该字段传空字符串）。
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名称。如果SQL语句中有数据库名称，优先使用SQL语句中的数据库，否则使用该参数指定的数据库（注：当提交建库sql时，该字段传空字符串）。
                     * @param _databaseName 数据库名称。如果SQL语句中有数据库名称，优先使用SQL语句中的数据库，否则使用该参数指定的数据库（注：当提交建库sql时，该字段传空字符串）。
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取默认数据源名称。
                     * @return DatasourceConnectionName 默认数据源名称。
                     * 
                     */
                    std::string GetDatasourceConnectionName() const;

                    /**
                     * 设置默认数据源名称。
                     * @param _datasourceConnectionName 默认数据源名称。
                     * 
                     */
                    void SetDatasourceConnectionName(const std::string& _datasourceConnectionName);

                    /**
                     * 判断参数 DatasourceConnectionName 是否已赋值
                     * @return DatasourceConnectionName 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionNameHasBeenSet() const;

                    /**
                     * 获取数据引擎名称，不填提交到默认集群
                     * @return DataEngineName 数据引擎名称，不填提交到默认集群
                     * 
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置数据引擎名称，不填提交到默认集群
                     * @param _dataEngineName 数据引擎名称，不填提交到默认集群
                     * 
                     */
                    void SetDataEngineName(const std::string& _dataEngineName);

                    /**
                     * 判断参数 DataEngineName 是否已赋值
                     * @return DataEngineName 是否已赋值
                     * 
                     */
                    bool DataEngineNameHasBeenSet() const;

                    /**
                     * 获取标准spark执行任务resourceGroupName
                     * @return ResourceGroupName 标准spark执行任务resourceGroupName
                     * 
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置标准spark执行任务resourceGroupName
                     * @param _resourceGroupName 标准spark执行任务resourceGroupName
                     * 
                     */
                    void SetResourceGroupName(const std::string& _resourceGroupName);

                    /**
                     * 判断参数 ResourceGroupName 是否已赋值
                     * @return ResourceGroupName 是否已赋值
                     * 
                     */
                    bool ResourceGroupNameHasBeenSet() const;

                    /**
                     * 获取任务来源信息
                     * @return SourceInfo 任务来源信息
                     * 
                     */
                    std::vector<KVPair> GetSourceInfo() const;

                    /**
                     * 设置任务来源信息
                     * @param _sourceInfo 任务来源信息
                     * 
                     */
                    void SetSourceInfo(const std::vector<KVPair>& _sourceInfo);

                    /**
                     * 判断参数 SourceInfo 是否已赋值
                     * @return SourceInfo 是否已赋值
                     * 
                     */
                    bool SourceInfoHasBeenSet() const;

                private:

                    /**
                     * 计算任务，该参数中包含任务类型及其相关配置信息
                     */
                    Task m_task;
                    bool m_taskHasBeenSet;

                    /**
                     * 数据库名称。如果SQL语句中有数据库名称，优先使用SQL语句中的数据库，否则使用该参数指定的数据库（注：当提交建库sql时，该字段传空字符串）。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 默认数据源名称。
                     */
                    std::string m_datasourceConnectionName;
                    bool m_datasourceConnectionNameHasBeenSet;

                    /**
                     * 数据引擎名称，不填提交到默认集群
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                    /**
                     * 标准spark执行任务resourceGroupName
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                    /**
                     * 任务来源信息
                     */
                    std::vector<KVPair> m_sourceInfo;
                    bool m_sourceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATETASKREQUEST_H_
