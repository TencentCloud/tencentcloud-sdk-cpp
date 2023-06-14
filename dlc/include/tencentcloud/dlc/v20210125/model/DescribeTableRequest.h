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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETABLEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETABLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeTable请求参数结构体
                */
                class DescribeTableRequest : public AbstractModel
                {
                public:
                    DescribeTableRequest();
                    ~DescribeTableRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询对象表名称
                     * @return TableName 查询对象表名称
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置查询对象表名称
                     * @param _tableName 查询对象表名称
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
                     * 获取查询表所在的数据库名称。
                     * @return DatabaseName 查询表所在的数据库名称。
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置查询表所在的数据库名称。
                     * @param _databaseName 查询表所在的数据库名称。
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
                     * 获取查询表所在的数据源名称
                     * @return DatasourceConnectionName 查询表所在的数据源名称
                     * 
                     */
                    std::string GetDatasourceConnectionName() const;

                    /**
                     * 设置查询表所在的数据源名称
                     * @param _datasourceConnectionName 查询表所在的数据源名称
                     * 
                     */
                    void SetDatasourceConnectionName(const std::string& _datasourceConnectionName);

                    /**
                     * 判断参数 DatasourceConnectionName 是否已赋值
                     * @return DatasourceConnectionName 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionNameHasBeenSet() const;

                private:

                    /**
                     * 查询对象表名称
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 查询表所在的数据库名称。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 查询表所在的数据源名称
                     */
                    std::string m_datasourceConnectionName;
                    bool m_datasourceConnectionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETABLEREQUEST_H_
