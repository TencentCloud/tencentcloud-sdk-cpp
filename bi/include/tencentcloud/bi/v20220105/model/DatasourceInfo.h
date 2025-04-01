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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_DATASOURCEINFO_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_DATASOURCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/BaseStateAction.h>
#include <tencentcloud/bi/v20220105/model/PermissionGroup.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * 数据源详情
                */
                class DatasourceInfo : public AbstractModel
                {
                public:
                    DatasourceInfo();
                    ~DatasourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库ID
                     * @return Id 数据库ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置数据库ID
                     * @param _id 数据库ID
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
                     * 获取域类型，1、腾讯云，2、本地
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceType 域类型，1、腾讯云，2、本地
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置域类型，1、腾讯云，2、本地
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceType 域类型，1、腾讯云，2、本地
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取数据库驱动
                     * @return DbType 数据库驱动
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置数据库驱动
                     * @param _dbType 数据库驱动
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
                     * 获取创建时间
                     * @return CreatedAt 创建时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间
                     * @param _createdAt 创建时间
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return UpdatedAt 修改时间
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置修改时间
                     * @param _updatedAt 修改时间
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedUser 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedUser() const;

                    /**
                     * 设置创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdUser 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedUser(const std::string& _createdUser);

                    /**
                     * 判断参数 CreatedUser 是否已赋值
                     * @return CreatedUser 是否已赋值
                     * 
                     */
                    bool CreatedUserHasBeenSet() const;

                    /**
                     * 获取catalog值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Catalog catalog值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置catalog值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _catalog catalog值
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取连接类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConnectType 连接类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConnectType() const;

                    /**
                     * 设置连接类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _connectType 连接类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConnectType(const std::string& _connectType);

                    /**
                     * 判断参数 ConnectType 是否已赋值
                     * @return ConnectType 是否已赋值
                     * 
                     */
                    bool ConnectTypeHasBeenSet() const;

                    /**
                     * 获取项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取数据源描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Desc 数据源描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置数据源描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _desc 数据源描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取数据源状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 数据源状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置数据源状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 数据源状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取来源平台
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourcePlat 来源平台
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourcePlat() const;

                    /**
                     * 设置来源平台
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourcePlat 来源平台
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourcePlat(const std::string& _sourcePlat);

                    /**
                     * 判断参数 SourcePlat 是否已赋值
                     * @return SourcePlat 是否已赋值
                     * 
                     */
                    bool SourcePlatHasBeenSet() const;

                    /**
                     * 获取扩展参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraParam 扩展参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtraParam() const;

                    /**
                     * 设置扩展参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extraParam 扩展参数
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AddInfo 额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAddInfo() const;

                    /**
                     * 设置额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _addInfo 额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAddInfo(const std::string& _addInfo);

                    /**
                     * 判断参数 AddInfo 是否已赋值
                     * @return AddInfo 是否已赋值
                     * 
                     */
                    bool AddInfoHasBeenSet() const;

                    /**
                     * 获取项目名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectName 项目名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectName 项目名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取引擎类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineType 引擎类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置引擎类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineType 引擎类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                    /**
                     * 获取数据源负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Manager 数据源负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetManager() const;

                    /**
                     * 设置数据源负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _manager 数据源负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetManager(const std::string& _manager);

                    /**
                     * 判断参数 Manager 是否已赋值
                     * @return Manager 是否已赋值
                     * 
                     */
                    bool ManagerHasBeenSet() const;

                    /**
                     * 获取特定操作人员白名单
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperatorWhitelist 特定操作人员白名单
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOperatorWhitelist() const;

                    /**
                     * 设置特定操作人员白名单
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operatorWhitelist 特定操作人员白名单
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperatorWhitelist(const std::string& _operatorWhitelist);

                    /**
                     * 判断参数 OperatorWhitelist 是否已赋值
                     * @return OperatorWhitelist 是否已赋值
                     * 
                     */
                    bool OperatorWhitelistHasBeenSet() const;

                    /**
                     * 获取数据源的vpc信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId 数据源的vpc信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置数据源的vpc信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcId 数据源的vpc信息
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取数据源的uniqVpc信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UniqVpcId 数据源的uniqVpc信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置数据源的uniqVpc信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uniqVpcId 数据源的uniqVpc信息
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取数据源的地域信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionId 数据源的地域信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置数据源的地域信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regionId 数据源的地域信息
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取操作属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StateAction 操作属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BaseStateAction GetStateAction() const;

                    /**
                     * 设置操作属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stateAction 操作属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStateAction(const BaseStateAction& _stateAction);

                    /**
                     * 判断参数 StateAction 是否已赋值
                     * @return StateAction 是否已赋值
                     * 
                     */
                    bool StateActionHasBeenSet() const;

                    /**
                     * 获取更新人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedUser 更新人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedUser() const;

                    /**
                     * 设置更新人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedUser 更新人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedUser(const std::string& _updatedUser);

                    /**
                     * 判断参数 UpdatedUser 是否已赋值
                     * @return UpdatedUser 是否已赋值
                     * 
                     */
                    bool UpdatedUserHasBeenSet() const;

                    /**
                     * 获取权限列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PermissionList 权限列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PermissionGroup> GetPermissionList() const;

                    /**
                     * 设置权限列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _permissionList 权限列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPermissionList(const std::vector<PermissionGroup>& _permissionList);

                    /**
                     * 判断参数 PermissionList 是否已赋值
                     * @return PermissionList 是否已赋值
                     * 
                     */
                    bool PermissionListHasBeenSet() const;

                    /**
                     * 获取权限值列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthList 权限值列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAuthList() const;

                    /**
                     * 设置权限值列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authList 权限值列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuthList(const std::vector<std::string>& _authList);

                    /**
                     * 判断参数 AuthList 是否已赋值
                     * @return AuthList 是否已赋值
                     * 
                     */
                    bool AuthListHasBeenSet() const;

                    /**
                     * 获取第三方数据源标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataOrigin 第三方数据源标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataOrigin() const;

                    /**
                     * 设置第三方数据源标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataOrigin 第三方数据源标识
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataOriginProjectId 第三方项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataOriginProjectId() const;

                    /**
                     * 设置第三方项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataOriginProjectId 第三方项目id
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataOriginDatasourceId 第三方数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataOriginDatasourceId() const;

                    /**
                     * 设置第三方数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataOriginDatasourceId 第三方数据源id
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId 集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbTypeName 数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDbTypeName() const;

                    /**
                     * 设置数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dbTypeName 数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDbTypeName(const std::string& _dbTypeName);

                    /**
                     * 判断参数 DbTypeName 是否已赋值
                     * @return DbTypeName 是否已赋值
                     * 
                     */
                    bool DbTypeNameHasBeenSet() const;

                    /**
                     * 获取开启vpc
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UseVPC 开启vpc
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetUseVPC() const;

                    /**
                     * 设置开启vpc
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _useVPC 开启vpc
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取所属人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Owner 所属人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置所属人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _owner 所属人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取所属人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerName 所属人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerName() const;

                    /**
                     * 设置所属人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerName 所属人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerName(const std::string& _ownerName);

                    /**
                     * 判断参数 OwnerName 是否已赋值
                     * @return OwnerName 是否已赋值
                     * 
                     */
                    bool OwnerNameHasBeenSet() const;

                private:

                    /**
                     * 数据库ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 数据库名称
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 域类型，1、腾讯云，2、本地
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 数据库别名
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * 数据库驱动
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

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
                     * 用户名
                     */
                    std::string m_dbUser;
                    bool m_dbUserHasBeenSet;

                    /**
                     * 数据库编码
                     */
                    std::string m_charset;
                    bool m_charsetHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdUser;
                    bool m_createdUserHasBeenSet;

                    /**
                     * catalog值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * 连接类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_connectType;
                    bool m_connectTypeHasBeenSet;

                    /**
                     * 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 数据源描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 数据源状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 来源平台
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourcePlat;
                    bool m_sourcePlatHasBeenSet;

                    /**
                     * 扩展参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extraParam;
                    bool m_extraParamHasBeenSet;

                    /**
                     * 额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_addInfo;
                    bool m_addInfoHasBeenSet;

                    /**
                     * 项目名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 引擎类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * 数据源负责人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_manager;
                    bool m_managerHasBeenSet;

                    /**
                     * 特定操作人员白名单
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operatorWhitelist;
                    bool m_operatorWhitelistHasBeenSet;

                    /**
                     * 数据源的vpc信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 数据源的uniqVpc信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 数据源的地域信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 操作属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaseStateAction m_stateAction;
                    bool m_stateActionHasBeenSet;

                    /**
                     * 更新人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedUser;
                    bool m_updatedUserHasBeenSet;

                    /**
                     * 权限列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PermissionGroup> m_permissionList;
                    bool m_permissionListHasBeenSet;

                    /**
                     * 权限值列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_authList;
                    bool m_authListHasBeenSet;

                    /**
                     * 第三方数据源标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataOrigin;
                    bool m_dataOriginHasBeenSet;

                    /**
                     * 第三方项目id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataOriginProjectId;
                    bool m_dataOriginProjectIdHasBeenSet;

                    /**
                     * 第三方数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataOriginDatasourceId;
                    bool m_dataOriginDatasourceIdHasBeenSet;

                    /**
                     * 集群id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dbTypeName;
                    bool m_dbTypeNameHasBeenSet;

                    /**
                     * 开启vpc
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_useVPC;
                    bool m_useVPCHasBeenSet;

                    /**
                     * 所属人ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 所属人名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerName;
                    bool m_ownerNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_DATASOURCEINFO_H_
