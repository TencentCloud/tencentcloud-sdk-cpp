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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEHIVETABLEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEHIVETABLEREQUEST_H_

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
                * CreateHiveTable请求参数结构体
                */
                class CreateHiveTableRequest : public AbstractModel
                {
                public:
                    CreateHiveTableRequest();
                    ~CreateHiveTableRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取数据库名称
                     * @return Database 数据库名称
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置数据库名称
                     * @param _database 数据库名称
                     * 
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取base64转码之后的建表语句
                     * @return DDLSql base64转码之后的建表语句
                     * 
                     */
                    std::string GetDDLSql() const;

                    /**
                     * 设置base64转码之后的建表语句
                     * @param _dDLSql base64转码之后的建表语句
                     * 
                     */
                    void SetDDLSql(const std::string& _dDLSql);

                    /**
                     * 判断参数 DDLSql 是否已赋值
                     * @return DDLSql 是否已赋值
                     * 
                     */
                    bool DDLSqlHasBeenSet() const;

                    /**
                     * 获取表权限 ，默认为0:项目共享;1:仅个人与管理员
                     * @return Privilege 表权限 ，默认为0:项目共享;1:仅个人与管理员
                     * 
                     */
                    int64_t GetPrivilege() const;

                    /**
                     * 设置表权限 ，默认为0:项目共享;1:仅个人与管理员
                     * @param _privilege 表权限 ，默认为0:项目共享;1:仅个人与管理员
                     * 
                     */
                    void SetPrivilege(const int64_t& _privilege);

                    /**
                     * 判断参数 Privilege 是否已赋值
                     * @return Privilege 是否已赋值
                     * 
                     */
                    bool PrivilegeHasBeenSet() const;

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
                     * 获取责任人
                     * @return Incharge 责任人
                     * 
                     */
                    std::string GetIncharge() const;

                    /**
                     * 设置责任人
                     * @param _incharge 责任人
                     * 
                     */
                    void SetIncharge(const std::string& _incharge);

                    /**
                     * 判断参数 Incharge 是否已赋值
                     * @return Incharge 是否已赋值
                     * 
                     */
                    bool InchargeHasBeenSet() const;

                    /**
                     * 获取数据优化引擎
                     * @return DataOptimizationResource 数据优化引擎
                     * 
                     */
                    std::string GetDataOptimizationResource() const;

                    /**
                     * 设置数据优化引擎
                     * @param _dataOptimizationResource 数据优化引擎
                     * 
                     */
                    void SetDataOptimizationResource(const std::string& _dataOptimizationResource);

                    /**
                     * 判断参数 DataOptimizationResource 是否已赋值
                     * @return DataOptimizationResource 是否已赋值
                     * 
                     */
                    bool DataOptimizationResourceHasBeenSet() const;

                    /**
                     * 获取是否开启数据优化
                     * @return SmartOptimizerWritten 是否开启数据优化
                     * 
                     */
                    std::string GetSmartOptimizerWritten() const;

                    /**
                     * 设置是否开启数据优化
                     * @param _smartOptimizerWritten 是否开启数据优化
                     * 
                     */
                    void SetSmartOptimizerWritten(const std::string& _smartOptimizerWritten);

                    /**
                     * 判断参数 SmartOptimizerWritten 是否已赋值
                     * @return SmartOptimizerWritten 是否已赋值
                     * 
                     */
                    bool SmartOptimizerWrittenHasBeenSet() const;

                    /**
                     * 获取数据优化针对的表
                     * @return TableName 数据优化针对的表
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置数据优化针对的表
                     * @param _tableName 数据优化针对的表
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取数据优化资源组
                     * @return ResourceGroupName 数据优化资源组
                     * 
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置数据优化资源组
                     * @param _resourceGroupName 数据优化资源组
                     * 
                     */
                    void SetResourceGroupName(const std::string& _resourceGroupName);

                    /**
                     * 判断参数 ResourceGroupName 是否已赋值
                     * @return ResourceGroupName 是否已赋值
                     * 
                     */
                    bool ResourceGroupNameHasBeenSet() const;

                private:

                    /**
                     * 数据源id
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 数据库名称
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * base64转码之后的建表语句
                     */
                    std::string m_dDLSql;
                    bool m_dDLSqlHasBeenSet;

                    /**
                     * 表权限 ，默认为0:项目共享;1:仅个人与管理员
                     */
                    int64_t m_privilege;
                    bool m_privilegeHasBeenSet;

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 责任人
                     */
                    std::string m_incharge;
                    bool m_inchargeHasBeenSet;

                    /**
                     * 数据优化引擎
                     */
                    std::string m_dataOptimizationResource;
                    bool m_dataOptimizationResourceHasBeenSet;

                    /**
                     * 是否开启数据优化
                     */
                    std::string m_smartOptimizerWritten;
                    bool m_smartOptimizerWrittenHasBeenSet;

                    /**
                     * 数据优化针对的表
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 数据优化资源组
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEHIVETABLEREQUEST_H_
