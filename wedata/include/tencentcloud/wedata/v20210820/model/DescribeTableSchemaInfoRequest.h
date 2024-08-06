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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLESCHEMAINFOREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLESCHEMAINFOREQUEST_H_

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
                * DescribeTableSchemaInfo请求参数结构体
                */
                class DescribeTableSchemaInfoRequest : public AbstractModel
                {
                public:
                    DescribeTableSchemaInfoRequest();
                    ~DescribeTableSchemaInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取表名称
                     * @return Name 表名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置表名称
                     * @param _name 表名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取数据库名称
                     * @return DatabaseName 数据库名称
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名称
                     * @param _databaseName 数据库名称
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
                     * 获取数据源的类型（例如MYSQL、HIVE、KAFKA等）
                     * @return MsType 数据源的类型（例如MYSQL、HIVE、KAFKA等）
                     * 
                     */
                    std::string GetMsType() const;

                    /**
                     * 设置数据源的类型（例如MYSQL、HIVE、KAFKA等）
                     * @param _msType 数据源的类型（例如MYSQL、HIVE、KAFKA等）
                     * 
                     */
                    void SetMsType(const std::string& _msType);

                    /**
                     * 判断参数 MsType 是否已赋值
                     * @return MsType 是否已赋值
                     * 
                     */
                    bool MsTypeHasBeenSet() const;

                    /**
                     * 获取数据源id
                     * @return DatasourceId 数据源id
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置数据源id
                     * @param _datasourceId 数据源id
                     * 
                     */
                    void SetDatasourceId(const std::string& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取连接类型（示例值rpc）
                     * @return ConnectionType 连接类型（示例值rpc）
                     * 
                     */
                    std::string GetConnectionType() const;

                    /**
                     * 设置连接类型（示例值rpc）
                     * @param _connectionType 连接类型（示例值rpc）
                     * 
                     */
                    void SetConnectionType(const std::string& _connectionType);

                    /**
                     * 判断参数 ConnectionType 是否已赋值
                     * @return ConnectionType 是否已赋值
                     * 
                     */
                    bool ConnectionTypeHasBeenSet() const;

                    /**
                     * 获取元数据Database下的Schema名称
                     * @return SchemaName 元数据Database下的Schema名称
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置元数据Database下的Schema名称
                     * @param _schemaName 元数据Database下的Schema名称
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
                     * 获取项目空间ID
                     * @return ProjectId 项目空间ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目空间ID
                     * @param _projectId 项目空间ID
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
                     * 获取环境信息
                     * @return Env 环境信息
                     * 
                     */
                    std::string GetEnv() const;

                    /**
                     * 设置环境信息
                     * @param _env 环境信息
                     * 
                     */
                    void SetEnv(const std::string& _env);

                    /**
                     * 判断参数 Env 是否已赋值
                     * @return Env 是否已赋值
                     * 
                     */
                    bool EnvHasBeenSet() const;

                    /**
                     * 获取空间模式
                     * @return Model 空间模式
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置空间模式
                     * @param _model 空间模式
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取开发态的datasourceId
                     * @return DevDatasourceId 开发态的datasourceId
                     * 
                     */
                    std::string GetDevDatasourceId() const;

                    /**
                     * 设置开发态的datasourceId
                     * @param _devDatasourceId 开发态的datasourceId
                     * 
                     */
                    void SetDevDatasourceId(const std::string& _devDatasourceId);

                    /**
                     * 判断参数 DevDatasourceId 是否已赋值
                     * @return DevDatasourceId 是否已赋值
                     * 
                     */
                    bool DevDatasourceIdHasBeenSet() const;

                private:

                    /**
                     * 表名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 数据库名称
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 数据源的类型（例如MYSQL、HIVE、KAFKA等）
                     */
                    std::string m_msType;
                    bool m_msTypeHasBeenSet;

                    /**
                     * 数据源id
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 连接类型（示例值rpc）
                     */
                    std::string m_connectionType;
                    bool m_connectionTypeHasBeenSet;

                    /**
                     * 元数据Database下的Schema名称
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * 项目空间ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 环境信息
                     */
                    std::string m_env;
                    bool m_envHasBeenSet;

                    /**
                     * 空间模式
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 开发态的datasourceId
                     */
                    std::string m_devDatasourceId;
                    bool m_devDatasourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLESCHEMAINFOREQUEST_H_
