/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_MODIFYDATASOURCEREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_MODIFYDATASOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * ModifyDatasource请求参数结构体
                */
                class ModifyDatasourceRequest : public AbstractModel
                {
                public:
                    ModifyDatasourceRequest();
                    ~ModifyDatasourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>HOST</p>
                     * @return DbHost <p>HOST</p>
                     * 
                     */
                    std::string GetDbHost() const;

                    /**
                     * 设置<p>HOST</p>
                     * @param _dbHost <p>HOST</p>
                     * 
                     */
                    void SetDbHost(const std::string& _dbHost);

                    /**
                     * 判断参数 DbHost 是否已赋值
                     * @return DbHost 是否已赋值
                     * 
                     */
                    bool DbHostHasBeenSet() const;

                    /**
                     * 获取<p>端口</p>
                     * @return DbPort <p>端口</p>
                     * 
                     */
                    uint64_t GetDbPort() const;

                    /**
                     * 设置<p>端口</p>
                     * @param _dbPort <p>端口</p>
                     * 
                     */
                    void SetDbPort(const uint64_t& _dbPort);

                    /**
                     * 判断参数 DbPort 是否已赋值
                     * @return DbPort 是否已赋值
                     * 
                     */
                    bool DbPortHasBeenSet() const;

                    /**
                     * 获取<p>后端提供字典：域类型，1、腾讯云，2、本地</p>
                     * @return ServiceType <p>后端提供字典：域类型，1、腾讯云，2、本地</p>
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置<p>后端提供字典：域类型，1、腾讯云，2、本地</p>
                     * @param _serviceType <p>后端提供字典：域类型，1、腾讯云，2、本地</p>
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取<p>驱动</p><p>枚举值：</p><ul><li>MYSQL： MySQL数据库</li><li>PRESTO： PRESTO数据库</li><li>POSTGRE： PostgreSQL数据库</li><li>DLC： DLC数据库</li><li>MSSQL： 微软SQL Server数据库</li></ul>
                     * @return DbType <p>驱动</p><p>枚举值：</p><ul><li>MYSQL： MySQL数据库</li><li>PRESTO： PRESTO数据库</li><li>POSTGRE： PostgreSQL数据库</li><li>DLC： DLC数据库</li><li>MSSQL： 微软SQL Server数据库</li></ul>
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置<p>驱动</p><p>枚举值：</p><ul><li>MYSQL： MySQL数据库</li><li>PRESTO： PRESTO数据库</li><li>POSTGRE： PostgreSQL数据库</li><li>DLC： DLC数据库</li><li>MSSQL： 微软SQL Server数据库</li></ul>
                     * @param _dbType <p>驱动</p><p>枚举值：</p><ul><li>MYSQL： MySQL数据库</li><li>PRESTO： PRESTO数据库</li><li>POSTGRE： PostgreSQL数据库</li><li>DLC： DLC数据库</li><li>MSSQL： 微软SQL Server数据库</li></ul>
                     * 
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     * 
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取<p>数据库编码</p>
                     * @return Charset <p>数据库编码</p>
                     * 
                     */
                    std::string GetCharset() const;

                    /**
                     * 设置<p>数据库编码</p>
                     * @param _charset <p>数据库编码</p>
                     * 
                     */
                    void SetCharset(const std::string& _charset);

                    /**
                     * 判断参数 Charset 是否已赋值
                     * @return Charset 是否已赋值
                     * 
                     */
                    bool CharsetHasBeenSet() const;

                    /**
                     * 获取<p>用户名</p>
                     * @return DbUser <p>用户名</p>
                     * 
                     */
                    std::string GetDbUser() const;

                    /**
                     * 设置<p>用户名</p>
                     * @param _dbUser <p>用户名</p>
                     * 
                     */
                    void SetDbUser(const std::string& _dbUser);

                    /**
                     * 判断参数 DbUser 是否已赋值
                     * @return DbUser 是否已赋值
                     * 
                     */
                    bool DbUserHasBeenSet() const;

                    /**
                     * 获取<p>密码</p>
                     * @return DbPwd <p>密码</p>
                     * 
                     */
                    std::string GetDbPwd() const;

                    /**
                     * 设置<p>密码</p>
                     * @param _dbPwd <p>密码</p>
                     * 
                     */
                    void SetDbPwd(const std::string& _dbPwd);

                    /**
                     * 判断参数 DbPwd 是否已赋值
                     * @return DbPwd 是否已赋值
                     * 
                     */
                    bool DbPwdHasBeenSet() const;

                    /**
                     * 获取<p>数据库名称</p>
                     * @return DbName <p>数据库名称</p>
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置<p>数据库名称</p>
                     * @param _dbName <p>数据库名称</p>
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取<p>数据库别名</p>
                     * @return SourceName <p>数据库别名</p>
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置<p>数据库别名</p>
                     * @param _sourceName <p>数据库别名</p>
                     * 
                     */
                    void SetSourceName(const std::string& _sourceName);

                    /**
                     * 判断参数 SourceName 是否已赋值
                     * @return SourceName 是否已赋值
                     * 
                     */
                    bool SourceNameHasBeenSet() const;

                    /**
                     * 获取<p>数据源id</p>
                     * @return Id <p>数据源id</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>数据源id</p>
                     * @param _id <p>数据源id</p>
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>项目ID</p>
                     * @return ProjectId <p>项目ID</p>
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置<p>项目ID</p>
                     * @param _projectId <p>项目ID</p>
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>catalog值</p>
                     * @return Catalog <p>catalog值</p>
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置<p>catalog值</p>
                     * @param _catalog <p>catalog值</p>
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
                     * 获取<p>第三方数据源标识</p>
                     * @return DataOrigin <p>第三方数据源标识</p>
                     * 
                     */
                    std::string GetDataOrigin() const;

                    /**
                     * 设置<p>第三方数据源标识</p>
                     * @param _dataOrigin <p>第三方数据源标识</p>
                     * 
                     */
                    void SetDataOrigin(const std::string& _dataOrigin);

                    /**
                     * 判断参数 DataOrigin 是否已赋值
                     * @return DataOrigin 是否已赋值
                     * 
                     */
                    bool DataOriginHasBeenSet() const;

                    /**
                     * 获取<p>第三方项目id</p>
                     * @return DataOriginProjectId <p>第三方项目id</p>
                     * 
                     */
                    std::string GetDataOriginProjectId() const;

                    /**
                     * 设置<p>第三方项目id</p>
                     * @param _dataOriginProjectId <p>第三方项目id</p>
                     * 
                     */
                    void SetDataOriginProjectId(const std::string& _dataOriginProjectId);

                    /**
                     * 判断参数 DataOriginProjectId 是否已赋值
                     * @return DataOriginProjectId 是否已赋值
                     * 
                     */
                    bool DataOriginProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>第三方数据源id</p>
                     * @return DataOriginDatasourceId <p>第三方数据源id</p>
                     * 
                     */
                    std::string GetDataOriginDatasourceId() const;

                    /**
                     * 设置<p>第三方数据源id</p>
                     * @param _dataOriginDatasourceId <p>第三方数据源id</p>
                     * 
                     */
                    void SetDataOriginDatasourceId(const std::string& _dataOriginDatasourceId);

                    /**
                     * 判断参数 DataOriginDatasourceId 是否已赋值
                     * @return DataOriginDatasourceId 是否已赋值
                     * 
                     */
                    bool DataOriginDatasourceIdHasBeenSet() const;

                    /**
                     * 获取<p>扩展参数</p>
                     * @return ExtraParam <p>扩展参数</p>
                     * 
                     */
                    std::string GetExtraParam() const;

                    /**
                     * 设置<p>扩展参数</p>
                     * @param _extraParam <p>扩展参数</p>
                     * 
                     */
                    void SetExtraParam(const std::string& _extraParam);

                    /**
                     * 判断参数 ExtraParam 是否已赋值
                     * @return ExtraParam 是否已赋值
                     * 
                     */
                    bool ExtraParamHasBeenSet() const;

                    /**
                     * 获取<p>腾讯云私有网络统一标识</p>
                     * @return UniqVpcId <p>腾讯云私有网络统一标识</p>
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置<p>腾讯云私有网络统一标识</p>
                     * @param _uniqVpcId <p>腾讯云私有网络统一标识</p>
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取<p>私有网络ip</p>
                     * @return Vip <p>私有网络ip</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>私有网络ip</p>
                     * @param _vip <p>私有网络ip</p>
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取<p>私有网络端口</p>
                     * @return Vport <p>私有网络端口</p>
                     * 
                     */
                    std::string GetVport() const;

                    /**
                     * 设置<p>私有网络端口</p>
                     * @param _vport <p>私有网络端口</p>
                     * 
                     */
                    void SetVport(const std::string& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取<p>腾讯云私有网络标识</p>
                     * @return VpcId <p>腾讯云私有网络标识</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>腾讯云私有网络标识</p>
                     * @param _vpcId <p>腾讯云私有网络标识</p>
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>开启vpc</p>
                     * @return UseVPC <p>开启vpc</p>
                     * 
                     */
                    bool GetUseVPC() const;

                    /**
                     * 设置<p>开启vpc</p>
                     * @param _useVPC <p>开启vpc</p>
                     * 
                     */
                    void SetUseVPC(const bool& _useVPC);

                    /**
                     * 判断参数 UseVPC 是否已赋值
                     * @return UseVPC 是否已赋值
                     * 
                     */
                    bool UseVPCHasBeenSet() const;

                    /**
                     * 获取<p>地域</p>
                     * @return RegionId <p>地域</p>
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置<p>地域</p>
                     * @param _regionId <p>地域</p>
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取<p>数据库schema</p>
                     * @return Schema <p>数据库schema</p>
                     * 
                     */
                    std::string GetSchema() const;

                    /**
                     * 设置<p>数据库schema</p>
                     * @param _schema <p>数据库schema</p>
                     * 
                     */
                    void SetSchema(const std::string& _schema);

                    /**
                     * 判断参数 Schema 是否已赋值
                     * @return Schema 是否已赋值
                     * 
                     */
                    bool SchemaHasBeenSet() const;

                    /**
                     * 获取<p>数据库版本</p>
                     * @return DbVersion <p>数据库版本</p>
                     * 
                     */
                    std::string GetDbVersion() const;

                    /**
                     * 设置<p>数据库版本</p>
                     * @param _dbVersion <p>数据库版本</p>
                     * 
                     */
                    void SetDbVersion(const std::string& _dbVersion);

                    /**
                     * 判断参数 DbVersion 是否已赋值
                     * @return DbVersion 是否已赋值
                     * 
                     */
                    bool DbVersionHasBeenSet() const;

                private:

                    /**
                     * <p>HOST</p>
                     */
                    std::string m_dbHost;
                    bool m_dbHostHasBeenSet;

                    /**
                     * <p>端口</p>
                     */
                    uint64_t m_dbPort;
                    bool m_dbPortHasBeenSet;

                    /**
                     * <p>后端提供字典：域类型，1、腾讯云，2、本地</p>
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * <p>驱动</p><p>枚举值：</p><ul><li>MYSQL： MySQL数据库</li><li>PRESTO： PRESTO数据库</li><li>POSTGRE： PostgreSQL数据库</li><li>DLC： DLC数据库</li><li>MSSQL： 微软SQL Server数据库</li></ul>
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * <p>数据库编码</p>
                     */
                    std::string m_charset;
                    bool m_charsetHasBeenSet;

                    /**
                     * <p>用户名</p>
                     */
                    std::string m_dbUser;
                    bool m_dbUserHasBeenSet;

                    /**
                     * <p>密码</p>
                     */
                    std::string m_dbPwd;
                    bool m_dbPwdHasBeenSet;

                    /**
                     * <p>数据库名称</p>
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * <p>数据库别名</p>
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * <p>数据源id</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>项目ID</p>
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>catalog值</p>
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * <p>第三方数据源标识</p>
                     */
                    std::string m_dataOrigin;
                    bool m_dataOriginHasBeenSet;

                    /**
                     * <p>第三方项目id</p>
                     */
                    std::string m_dataOriginProjectId;
                    bool m_dataOriginProjectIdHasBeenSet;

                    /**
                     * <p>第三方数据源id</p>
                     */
                    std::string m_dataOriginDatasourceId;
                    bool m_dataOriginDatasourceIdHasBeenSet;

                    /**
                     * <p>扩展参数</p>
                     */
                    std::string m_extraParam;
                    bool m_extraParamHasBeenSet;

                    /**
                     * <p>腾讯云私有网络统一标识</p>
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * <p>私有网络ip</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>私有网络端口</p>
                     */
                    std::string m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * <p>腾讯云私有网络标识</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>开启vpc</p>
                     */
                    bool m_useVPC;
                    bool m_useVPCHasBeenSet;

                    /**
                     * <p>地域</p>
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * <p>数据库schema</p>
                     */
                    std::string m_schema;
                    bool m_schemaHasBeenSet;

                    /**
                     * <p>数据库版本</p>
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_MODIFYDATASOURCEREQUEST_H_
