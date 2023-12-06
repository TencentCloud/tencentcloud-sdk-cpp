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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_MODIFYDATASOURCECLOUDREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_MODIFYDATASOURCECLOUDREQUEST_H_

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
                * ModifyDatasourceCloud请求参数结构体
                */
                class ModifyDatasourceCloudRequest : public AbstractModel
                {
                public:
                    ModifyDatasourceCloudRequest();
                    ~ModifyDatasourceCloudRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
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
                     * 获取住键
                     * @return Id 住键
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置住键
                     * @param _id 住键
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取公有云内网ip
                     * @return Vip 公有云内网ip
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置公有云内网ip
                     * @param _vip 公有云内网ip
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
                     * 获取公有云内网端口
                     * @return Vport 公有云内网端口
                     * 
                     */
                    std::string GetVport() const;

                    /**
                     * 设置公有云内网端口
                     * @param _vport 公有云内网端口
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
                     * 获取vpc标识
                     * @return VpcId vpc标识
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc标识
                     * @param _vpcId vpc标识
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
                     * 获取统一vpc标识
                     * @return UniqVpcId 统一vpc标识
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置统一vpc标识
                     * @param _uniqVpcId 统一vpc标识
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
                     * 获取区域标识（gz,bj)
                     * @return RegionId 区域标识（gz,bj)
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置区域标识（gz,bj)
                     * @param _regionId 区域标识（gz,bj)
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
                     * 获取数据源产品名
                     * @return ProdDbName 数据源产品名
                     * 
                     */
                    std::string GetProdDbName() const;

                    /**
                     * 设置数据源产品名
                     * @param _prodDbName 数据源产品名
                     * 
                     */
                    void SetProdDbName(const std::string& _prodDbName);

                    /**
                     * 判断参数 ProdDbName 是否已赋值
                     * @return ProdDbName 是否已赋值
                     * 
                     */
                    bool ProdDbNameHasBeenSet() const;

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
                     * 获取集群id
                     * @return ClusterId 集群id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
                     * @param _clusterId 集群id
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

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
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 住键
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 公有云内网ip
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 公有云内网端口
                     */
                    std::string m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * vpc标识
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 统一vpc标识
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 区域标识（gz,bj)
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 扩展参数
                     */
                    std::string m_extraParam;
                    bool m_extraParamHasBeenSet;

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 数据源产品名
                     */
                    std::string m_prodDbName;
                    bool m_prodDbNameHasBeenSet;

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
                     * 集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_MODIFYDATASOURCECLOUDREQUEST_H_
