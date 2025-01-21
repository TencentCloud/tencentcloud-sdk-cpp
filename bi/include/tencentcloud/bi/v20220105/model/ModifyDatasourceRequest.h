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
                     * 获取HOST
                     * @return DbHost HOST
                     * 
                     */
                    std::string GetDbHost() const;

                    /**
                     * 设置HOST
                     * @param _dbHost HOST
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
                     * 获取端口
                     * @return DbPort 端口
                     * 
                     */
                    uint64_t GetDbPort() const;

                    /**
                     * 设置端口
                     * @param _dbPort 端口
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
                     * 获取后端提供字典：域类型，1、腾讯云，2、本地
                     * @return ServiceType 后端提供字典：域类型，1、腾讯云，2、本地
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置后端提供字典：域类型，1、腾讯云，2、本地
                     * @param _serviceType 后端提供字典：域类型，1、腾讯云，2、本地
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
                     * 获取驱动
                     * @return DbType 驱动
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置驱动
                     * @param _dbType 驱动
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
                     * 获取数据库编码
                     * @return Charset 数据库编码
                     * 
                     */
                    std::string GetCharset() const;

                    /**
                     * 设置数据库编码
                     * @param _charset 数据库编码
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
                     * 获取用户名
                     * @return DbUser 用户名
                     * 
                     */
                    std::string GetDbUser() const;

                    /**
                     * 设置用户名
                     * @param _dbUser 用户名
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
                     * 获取密码
                     * @return DbPwd 密码
                     * 
                     */
                    std::string GetDbPwd() const;

                    /**
                     * 设置密码
                     * @param _dbPwd 密码
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
                     * 获取数据库名称
                     * @return DbName 数据库名称
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置数据库名称
                     * @param _dbName 数据库名称
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
                     * 获取数据库别名
                     * @return SourceName 数据库别名
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置数据库别名
                     * @param _sourceName 数据库别名
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
                     * 获取数据源id
                     * @return Id 数据源id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置数据源id
                     * @param _id 数据源id
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
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
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
                     * 获取catalog值
                     * @return Catalog catalog值
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置catalog值
                     * @param _catalog catalog值
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
                     * 获取第三方数据源标识
                     * @return DataOrigin 第三方数据源标识
                     * 
                     */
                    std::string GetDataOrigin() const;

                    /**
                     * 设置第三方数据源标识
                     * @param _dataOrigin 第三方数据源标识
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
                     * 获取第三方项目id
                     * @return DataOriginProjectId 第三方项目id
                     * 
                     */
                    std::string GetDataOriginProjectId() const;

                    /**
                     * 设置第三方项目id
                     * @param _dataOriginProjectId 第三方项目id
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
                     * 获取第三方数据源id
                     * @return DataOriginDatasourceId 第三方数据源id
                     * 
                     */
                    std::string GetDataOriginDatasourceId() const;

                    /**
                     * 设置第三方数据源id
                     * @param _dataOriginDatasourceId 第三方数据源id
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
                     * 获取扩展参数
                     * @return ExtraParam 扩展参数
                     * 
                     */
                    std::string GetExtraParam() const;

                    /**
                     * 设置扩展参数
                     * @param _extraParam 扩展参数
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
                     * 获取腾讯云私有网络统一标识
                     * @return UniqVpcId 腾讯云私有网络统一标识
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置腾讯云私有网络统一标识
                     * @param _uniqVpcId 腾讯云私有网络统一标识
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
                     * 获取私有网络ip
                     * @return Vip 私有网络ip
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置私有网络ip
                     * @param _vip 私有网络ip
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
                     * 获取私有网络端口
                     * @return Vport 私有网络端口
                     * 
                     */
                    std::string GetVport() const;

                    /**
                     * 设置私有网络端口
                     * @param _vport 私有网络端口
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
                     * 获取腾讯云私有网络标识
                     * @return VpcId 腾讯云私有网络标识
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置腾讯云私有网络标识
                     * @param _vpcId 腾讯云私有网络标识
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
                     * 获取开启vpc	
                     * @return UseVPC 开启vpc	
                     * 
                     */
                    bool GetUseVPC() const;

                    /**
                     * 设置开启vpc	
                     * @param _useVPC 开启vpc	
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
                     * 获取地域
                     * @return RegionId 地域
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置地域
                     * @param _regionId 地域
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                private:

                    /**
                     * HOST
                     */
                    std::string m_dbHost;
                    bool m_dbHostHasBeenSet;

                    /**
                     * 端口
                     */
                    uint64_t m_dbPort;
                    bool m_dbPortHasBeenSet;

                    /**
                     * 后端提供字典：域类型，1、腾讯云，2、本地
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 驱动
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * 数据库编码
                     */
                    std::string m_charset;
                    bool m_charsetHasBeenSet;

                    /**
                     * 用户名
                     */
                    std::string m_dbUser;
                    bool m_dbUserHasBeenSet;

                    /**
                     * 密码
                     */
                    std::string m_dbPwd;
                    bool m_dbPwdHasBeenSet;

                    /**
                     * 数据库名称
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 数据库别名
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * 数据源id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 项目ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * catalog值
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * 第三方数据源标识
                     */
                    std::string m_dataOrigin;
                    bool m_dataOriginHasBeenSet;

                    /**
                     * 第三方项目id
                     */
                    std::string m_dataOriginProjectId;
                    bool m_dataOriginProjectIdHasBeenSet;

                    /**
                     * 第三方数据源id
                     */
                    std::string m_dataOriginDatasourceId;
                    bool m_dataOriginDatasourceIdHasBeenSet;

                    /**
                     * 扩展参数
                     */
                    std::string m_extraParam;
                    bool m_extraParamHasBeenSet;

                    /**
                     * 腾讯云私有网络统一标识
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 私有网络ip
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 私有网络端口
                     */
                    std::string m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 腾讯云私有网络标识
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 开启vpc	
                     */
                    bool m_useVPC;
                    bool m_useVPCHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_MODIFYDATASOURCEREQUEST_H_
