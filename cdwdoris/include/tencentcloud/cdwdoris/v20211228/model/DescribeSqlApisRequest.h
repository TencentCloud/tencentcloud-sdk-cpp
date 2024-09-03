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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBESQLAPISREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBESQLAPISREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeSqlApis请求参数结构体
                */
                class DescribeSqlApisRequest : public AbstractModel
                {
                public:
                    DescribeSqlApisRequest();
                    ~DescribeSqlApisRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
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
                     * 获取GetUsers：获取用户列表；
GetDatabases：获取数据库列表；
GetTables：获取数据库表列表；
GetUserPrivilegesV2：获取用户下的权限，粒度到表级别；
DeleteUser：删除用户；
GetCatalog：获取Catalog列表；
                     * @return ApiType GetUsers：获取用户列表；
GetDatabases：获取数据库列表；
GetTables：获取数据库表列表；
GetUserPrivilegesV2：获取用户下的权限，粒度到表级别；
DeleteUser：删除用户；
GetCatalog：获取Catalog列表；
                     * 
                     */
                    std::string GetApiType() const;

                    /**
                     * 设置GetUsers：获取用户列表；
GetDatabases：获取数据库列表；
GetTables：获取数据库表列表；
GetUserPrivilegesV2：获取用户下的权限，粒度到表级别；
DeleteUser：删除用户；
GetCatalog：获取Catalog列表；
                     * @param _apiType GetUsers：获取用户列表；
GetDatabases：获取数据库列表；
GetTables：获取数据库表列表；
GetUserPrivilegesV2：获取用户下的权限，粒度到表级别；
DeleteUser：删除用户；
GetCatalog：获取Catalog列表；
                     * 
                     */
                    void SetApiType(const std::string& _apiType);

                    /**
                     * 判断参数 ApiType 是否已赋值
                     * @return ApiType 是否已赋值
                     * 
                     */
                    bool ApiTypeHasBeenSet() const;

                    /**
                     * 获取用户名称
                     * @return UserName 用户名称
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名称
                     * @param _userName 用户名称
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取用户链接来自的 IP
                     * @return WhiteHost 用户链接来自的 IP
                     * 
                     */
                    std::string GetWhiteHost() const;

                    /**
                     * 设置用户链接来自的 IP
                     * @param _whiteHost 用户链接来自的 IP
                     * 
                     */
                    void SetWhiteHost(const std::string& _whiteHost);

                    /**
                     * 判断参数 WhiteHost 是否已赋值
                     * @return WhiteHost 是否已赋值
                     * 
                     */
                    bool WhiteHostHasBeenSet() const;

                    /**
                     * 获取catalog名称
                     * @return Catalog catalog名称
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置catalog名称
                     * @param _catalog catalog名称
                     * 
                     */
                    void SetCatalog(const std::string& _catalog);

                    /**
                     * 判断参数 Catalog 是否已赋值
                     * @return Catalog 是否已赋值
                     * 
                     */
                    bool CatalogHasBeenSet() const;

                    /**
                     * 获取catalog集合
                     * @return Catalogs catalog集合
                     * 
                     */
                    std::vector<std::string> GetCatalogs() const;

                    /**
                     * 设置catalog集合
                     * @param _catalogs catalog集合
                     * 
                     */
                    void SetCatalogs(const std::vector<std::string>& _catalogs);

                    /**
                     * 判断参数 Catalogs 是否已赋值
                     * @return Catalogs 是否已赋值
                     * 
                     */
                    bool CatalogsHasBeenSet() const;

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
                     * 获取表名
                     * @return TableName 表名
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名
                     * @param _tableName 表名
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * GetUsers：获取用户列表；
GetDatabases：获取数据库列表；
GetTables：获取数据库表列表；
GetUserPrivilegesV2：获取用户下的权限，粒度到表级别；
DeleteUser：删除用户；
GetCatalog：获取Catalog列表；
                     */
                    std::string m_apiType;
                    bool m_apiTypeHasBeenSet;

                    /**
                     * 用户名称
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 用户链接来自的 IP
                     */
                    std::string m_whiteHost;
                    bool m_whiteHostHasBeenSet;

                    /**
                     * catalog名称
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * catalog集合
                     */
                    std::vector<std::string> m_catalogs;
                    bool m_catalogsHasBeenSet;

                    /**
                     * 数据库名
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 表名
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBESQLAPISREQUEST_H_
