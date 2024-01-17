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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETECUSTOMFUNCTIONREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETECUSTOMFUNCTIONREQUEST_H_

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
                * DeleteCustomFunction请求参数结构体
                */
                class DeleteCustomFunctionRequest : public AbstractModel
                {
                public:
                    DeleteCustomFunctionRequest();
                    ~DeleteCustomFunctionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群实例 ID
                     * @return ClusterIdentifier 集群实例 ID
                     * 
                     */
                    std::string GetClusterIdentifier() const;

                    /**
                     * 设置集群实例 ID
                     * @param _clusterIdentifier 集群实例 ID
                     * 
                     */
                    void SetClusterIdentifier(const std::string& _clusterIdentifier);

                    /**
                     * 判断参数 ClusterIdentifier 是否已赋值
                     * @return ClusterIdentifier 是否已赋值
                     * 
                     */
                    bool ClusterIdentifierHasBeenSet() const;

                    /**
                     * 获取函数 ID
                     * @return FunctionId 函数 ID
                     * 
                     */
                    std::string GetFunctionId() const;

                    /**
                     * 设置函数 ID
                     * @param _functionId 函数 ID
                     * 
                     */
                    void SetFunctionId(const std::string& _functionId);

                    /**
                     * 判断参数 FunctionId 是否已赋值
                     * @return FunctionId 是否已赋值
                     * 
                     */
                    bool FunctionIdHasBeenSet() const;

                    /**
                     * 获取项目ID，必须填
                     * @return ProjectId 项目ID，必须填
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID，必须填
                     * @param _projectId 项目ID，必须填
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
                     * 获取函数名称
                     * @return FunctionName 函数名称
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置函数名称
                     * @param _functionName 函数名称
                     * 
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     * 
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取函数类型，HIVE，SPARK，DLC，CDW_POSTGRESQL
                     * @return FunctionType 函数类型，HIVE，SPARK，DLC，CDW_POSTGRESQL
                     * 
                     */
                    std::string GetFunctionType() const;

                    /**
                     * 设置函数类型，HIVE，SPARK，DLC，CDW_POSTGRESQL
                     * @param _functionType 函数类型，HIVE，SPARK，DLC，CDW_POSTGRESQL
                     * 
                     */
                    void SetFunctionType(const std::string& _functionType);

                    /**
                     * 判断参数 FunctionType 是否已赋值
                     * @return FunctionType 是否已赋值
                     * 
                     */
                    bool FunctionTypeHasBeenSet() const;

                    /**
                     * 获取数据库名
                     * @return DatabaseName 数据库名
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名
                     * @param _databaseName 数据库名
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
                     * 获取模式名
                     * @return SchemaName 模式名
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置模式名
                     * @param _schemaName 模式名
                     * 
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                    /**
                     * 获取函数命令格式
                     * @return CommandFormat 函数命令格式
                     * 
                     */
                    std::string GetCommandFormat() const;

                    /**
                     * 设置函数命令格式
                     * @param _commandFormat 函数命令格式
                     * 
                     */
                    void SetCommandFormat(const std::string& _commandFormat);

                    /**
                     * 判断参数 CommandFormat 是否已赋值
                     * @return CommandFormat 是否已赋值
                     * 
                     */
                    bool CommandFormatHasBeenSet() const;

                private:

                    /**
                     * 集群实例 ID
                     */
                    std::string m_clusterIdentifier;
                    bool m_clusterIdentifierHasBeenSet;

                    /**
                     * 函数 ID
                     */
                    std::string m_functionId;
                    bool m_functionIdHasBeenSet;

                    /**
                     * 项目ID，必须填
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 函数名称
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 函数类型，HIVE，SPARK，DLC，CDW_POSTGRESQL
                     */
                    std::string m_functionType;
                    bool m_functionTypeHasBeenSet;

                    /**
                     * 数据库名
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 模式名
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * 函数命令格式
                     */
                    std::string m_commandFormat;
                    bool m_commandFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETECUSTOMFUNCTIONREQUEST_H_
