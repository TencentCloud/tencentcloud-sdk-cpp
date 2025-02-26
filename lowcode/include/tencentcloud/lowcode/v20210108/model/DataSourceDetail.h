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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_DATASOURCEDETAIL_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_DATASOURCEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lowcode/v20210108/model/DataSourceLinkApp.h>
#include <tencentcloud/lowcode/v20210108/model/TicketAuthInfo.h>
#include <tencentcloud/lowcode/v20210108/model/RelationField.h>


namespace TencentCloud
{
    namespace Lowcode
    {
        namespace V20210108
        {
            namespace Model
            {
                /**
                * 数据源详情列表
                */
                class DataSourceDetail : public AbstractModel
                {
                public:
                    DataSourceDetail();
                    ~DataSourceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据源 ID
                     * @return Id 数据源 ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置数据源 ID
                     * @param _id 数据源 ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取数据源名称
                     * @return Title 数据源名称
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置数据源名称
                     * @param _title 数据源名称
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取数据源标识
                     * @return Name 数据源标识
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置数据源标识
                     * @param _name 数据源标识
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
                     * 获取数据源类型
                     * @return Type 数据源类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置数据源类型
                     * @param _type 数据源类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取数据源描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 数据源描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置数据源描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 数据源描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取数据源配置
                     * @return Schema 数据源配置
                     * 
                     */
                    std::string GetSchema() const;

                    /**
                     * 设置数据源配置
                     * @param _schema 数据源配置
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
                     * 获取cms 项目状态, 0: 重新获取详情信息，1： 不需要重新获取详情信息
                     * @return CmsProject cms 项目状态, 0: 重新获取详情信息，1： 不需要重新获取详情信息
                     * 
                     */
                    std::string GetCmsProject() const;

                    /**
                     * 设置cms 项目状态, 0: 重新获取详情信息，1： 不需要重新获取详情信息
                     * @param _cmsProject cms 项目状态, 0: 重新获取详情信息，1： 不需要重新获取详情信息
                     * 
                     */
                    void SetCmsProject(const std::string& _cmsProject);

                    /**
                     * 判断参数 CmsProject 是否已赋值
                     * @return CmsProject 是否已赋值
                     * 
                     */
                    bool CmsProjectHasBeenSet() const;

                    /**
                     * 获取当前为环境 id
                     * @return PkgId 当前为环境 id
                     * 
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置当前为环境 id
                     * @param _pkgId 当前为环境 id
                     * 
                     */
                    void SetPkgId(const std::string& _pkgId);

                    /**
                     * 判断参数 PkgId 是否已赋值
                     * @return PkgId 是否已赋值
                     * 
                     */
                    bool PkgIdHasBeenSet() const;

                    /**
                     * 获取schema 版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchemaVersion schema 版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchemaVersion() const;

                    /**
                     * 设置schema 版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schemaVersion schema 版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSchemaVersion(const std::string& _schemaVersion);

                    /**
                     * 判断参数 SchemaVersion 是否已赋值
                     * @return SchemaVersion 是否已赋值
                     * 
                     */
                    bool SchemaVersionHasBeenSet() const;

                    /**
                     * 获取创建者用户 ID
                     * @return CreatorId 创建者用户 ID
                     * 
                     */
                    std::string GetCreatorId() const;

                    /**
                     * 设置创建者用户 ID
                     * @param _creatorId 创建者用户 ID
                     * 
                     */
                    void SetCreatorId(const std::string& _creatorId);

                    /**
                     * 判断参数 CreatorId 是否已赋值
                     * @return CreatorId 是否已赋值
                     * 
                     */
                    bool CreatorIdHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedAt 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdAt 创建时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedAt 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedAt 更新时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取环境 id
                     * @return EnvId 环境 id
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境 id
                     * @param _envId 环境 id
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataSourceVersion 版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataSourceVersion() const;

                    /**
                     * 设置版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataSourceVersion 版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataSourceVersion(const std::string& _dataSourceVersion);

                    /**
                     * 判断参数 DataSourceVersion 是否已赋值
                     * @return DataSourceVersion 是否已赋值
                     * 
                     */
                    bool DataSourceVersionHasBeenSet() const;

                    /**
                     * 获取所属应用数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppUsageList 所属应用数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DataSourceLinkApp> GetAppUsageList() const;

                    /**
                     * 设置所属应用数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appUsageList 所属应用数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppUsageList(const std::vector<DataSourceLinkApp>& _appUsageList);

                    /**
                     * 判断参数 AppUsageList 是否已赋值
                     * @return AppUsageList 是否已赋值
                     * 
                     */
                    bool AppUsageListHasBeenSet() const;

                    /**
                     * 获取发布时间
                     * @return PublishedAt 发布时间
                     * 
                     */
                    std::string GetPublishedAt() const;

                    /**
                     * 设置发布时间
                     * @param _publishedAt 发布时间
                     * 
                     */
                    void SetPublishedAt(const std::string& _publishedAt);

                    /**
                     * 判断参数 PublishedAt 是否已赋值
                     * @return PublishedAt 是否已赋值
                     * 
                     */
                    bool PublishedAtHasBeenSet() const;

                    /**
                     * 获取子数据源ids
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChildDataSourceIds 子数据源ids
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetChildDataSourceIds() const;

                    /**
                     * 设置子数据源ids
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _childDataSourceIds 子数据源ids
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChildDataSourceIds(const std::vector<std::string>& _childDataSourceIds);

                    /**
                     * 判断参数 ChildDataSourceIds 是否已赋值
                     * @return ChildDataSourceIds 是否已赋值
                     * 
                     */
                    bool ChildDataSourceIdsHasBeenSet() const;

                    /**
                     * 获取数据源发布信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Fun 数据源发布信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFun() const;

                    /**
                     * 设置数据源发布信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fun 数据源发布信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFun(const std::string& _fun);

                    /**
                     * 判断参数 Fun 是否已赋值
                     * @return Fun 是否已赋值
                     * 
                     */
                    bool FunHasBeenSet() const;

                    /**
                     * 获取云函数状态 1 Active 2 Creating 3 Updating 4 Deleting  9 Deleted 11 CreatFailed  12 UpdateFailed 13 DeleteFailed 21 UpdateTimeOut
                     * @return ScfStatus 云函数状态 1 Active 2 Creating 3 Updating 4 Deleting  9 Deleted 11 CreatFailed  12 UpdateFailed 13 DeleteFailed 21 UpdateTimeOut
                     * 
                     */
                    uint64_t GetScfStatus() const;

                    /**
                     * 设置云函数状态 1 Active 2 Creating 3 Updating 4 Deleting  9 Deleted 11 CreatFailed  12 UpdateFailed 13 DeleteFailed 21 UpdateTimeOut
                     * @param _scfStatus 云函数状态 1 Active 2 Creating 3 Updating 4 Deleting  9 Deleted 11 CreatFailed  12 UpdateFailed 13 DeleteFailed 21 UpdateTimeOut
                     * 
                     */
                    void SetScfStatus(const uint64_t& _scfStatus);

                    /**
                     * 判断参数 ScfStatus 是否已赋值
                     * @return ScfStatus 是否已赋值
                     * 
                     */
                    bool ScfStatusHasBeenSet() const;

                    /**
                     * 获取自定义方法
                     * @return Methods 自定义方法
                     * 
                     */
                    std::string GetMethods() const;

                    /**
                     * 设置自定义方法
                     * @param _methods 自定义方法
                     * 
                     */
                    void SetMethods(const std::string& _methods);

                    /**
                     * 判断参数 Methods 是否已赋值
                     * @return Methods 是否已赋值
                     * 
                     */
                    bool MethodsHasBeenSet() const;

                    /**
                     * 获取子数据源名数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChildDataSourceNames 子数据源名数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetChildDataSourceNames() const;

                    /**
                     * 设置子数据源名数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _childDataSourceNames 子数据源名数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChildDataSourceNames(const std::vector<std::string>& _childDataSourceNames);

                    /**
                     * 判断参数 ChildDataSourceNames 是否已赋值
                     * @return ChildDataSourceNames 是否已赋值
                     * 
                     */
                    bool ChildDataSourceNamesHasBeenSet() const;

                    /**
                     * 获取是否旧数据源 1 新 0 旧
                     * @return IsNewDataSource 是否旧数据源 1 新 0 旧
                     * 
                     */
                    int64_t GetIsNewDataSource() const;

                    /**
                     * 设置是否旧数据源 1 新 0 旧
                     * @param _isNewDataSource 是否旧数据源 1 新 0 旧
                     * 
                     */
                    void SetIsNewDataSource(const int64_t& _isNewDataSource);

                    /**
                     * 判断参数 IsNewDataSource 是否已赋值
                     * @return IsNewDataSource 是否已赋值
                     * 
                     */
                    bool IsNewDataSourceHasBeenSet() const;

                    /**
                     * 获取数据源视图id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ViewId 数据源视图id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetViewId() const;

                    /**
                     * 设置数据源视图id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _viewId 数据源视图id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetViewId(const std::string& _viewId);

                    /**
                     * 判断参数 ViewId 是否已赋值
                     * @return ViewId 是否已赋值
                     * 
                     */
                    bool ViewIdHasBeenSet() const;

                    /**
                     * 获取数据源属性配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Configuration 数据源属性配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfiguration() const;

                    /**
                     * 设置数据源属性配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configuration 数据源属性配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfiguration(const std::string& _configuration);

                    /**
                     * 判断参数 Configuration 是否已赋值
                     * @return Configuration 是否已赋值
                     * 
                     */
                    bool ConfigurationHasBeenSet() const;

                    /**
                     * 获取外部数据源模板code
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateCode 外部数据源模板code
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTemplateCode() const;

                    /**
                     * 设置外部数据源模板code
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _templateCode 外部数据源模板code
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTemplateCode(const std::string& _templateCode);

                    /**
                     * 判断参数 TemplateCode 是否已赋值
                     * @return TemplateCode 是否已赋值
                     * 
                     */
                    bool TemplateCodeHasBeenSet() const;

                    /**
                     * 获取外部数据源模板来源 0 空模板 1 腾讯文档 2 腾讯会议 3 企业微信 4 微信电商
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Source 外部数据源模板来源 0 空模板 1 腾讯文档 2 腾讯会议 3 企业微信 4 微信电商
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置外部数据源模板来源 0 空模板 1 腾讯文档 2 腾讯会议 3 企业微信 4 微信电商
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _source 外部数据源模板来源 0 空模板 1 腾讯文档 2 腾讯会议 3 企业微信 4 微信电商
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSource(const int64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取发布版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublishVersion 发布版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetPublishVersion() const;

                    /**
                     * 设置发布版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publishVersion 发布版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetPublishVersion(const std::string& _publishVersion);

                    /**
                     * 判断参数 PublishVersion 是否已赋值
                     * @return PublishVersion 是否已赋值
                     * @deprecated
                     */
                    bool PublishVersionHasBeenSet() const;

                    /**
                     * 获取发布视图id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublishViewId 发布视图id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPublishViewId() const;

                    /**
                     * 设置发布视图id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publishViewId 发布视图id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublishViewId(const std::string& _publishViewId);

                    /**
                     * 判断参数 PublishViewId 是否已赋值
                     * @return PublishViewId 是否已赋值
                     * 
                     */
                    bool PublishViewIdHasBeenSet() const;

                    /**
                     * 获取数据源子类型   "database" 标准模型 "custom-database" 自定义模型 "system" 系统模型 "connector" 连接器 "custom-connector" 自定义连接器 "hidden" 隐藏数据源
                     * @return SubType 数据源子类型   "database" 标准模型 "custom-database" 自定义模型 "system" 系统模型 "connector" 连接器 "custom-connector" 自定义连接器 "hidden" 隐藏数据源
                     * 
                     */
                    std::string GetSubType() const;

                    /**
                     * 设置数据源子类型   "database" 标准模型 "custom-database" 自定义模型 "system" 系统模型 "connector" 连接器 "custom-connector" 自定义连接器 "hidden" 隐藏数据源
                     * @param _subType 数据源子类型   "database" 标准模型 "custom-database" 自定义模型 "system" 系统模型 "connector" 连接器 "custom-connector" 自定义连接器 "hidden" 隐藏数据源
                     * 
                     */
                    void SetSubType(const std::string& _subType);

                    /**
                     * 判断参数 SubType 是否已赋值
                     * @return SubType 是否已赋值
                     * 
                     */
                    bool SubTypeHasBeenSet() const;

                    /**
                     * 获取授权状态  0 授权无效 1 授权有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthStatus 授权状态  0 授权无效 1 授权有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAuthStatus() const;

                    /**
                     * 设置授权状态  0 授权无效 1 授权有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authStatus 授权状态  0 授权无效 1 授权有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuthStatus(const int64_t& _authStatus);

                    /**
                     * 判断参数 AuthStatus 是否已赋值
                     * @return AuthStatus 是否已赋值
                     * 
                     */
                    bool AuthStatusHasBeenSet() const;

                    /**
                     * 获取数据源授权信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthInfo 数据源授权信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TicketAuthInfo GetAuthInfo() const;

                    /**
                     * 设置数据源授权信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authInfo 数据源授权信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuthInfo(const TicketAuthInfo& _authInfo);

                    /**
                     * 判断参数 AuthInfo 是否已赋值
                     * @return AuthInfo 是否已赋值
                     * 
                     */
                    bool AuthInfoHasBeenSet() const;

                    /**
                     * 获取1发布0未发布
                     * @return PublishStatus 1发布0未发布
                     * 
                     */
                    int64_t GetPublishStatus() const;

                    /**
                     * 设置1发布0未发布
                     * @param _publishStatus 1发布0未发布
                     * 
                     */
                    void SetPublishStatus(const int64_t& _publishStatus);

                    /**
                     * 判断参数 PublishStatus 是否已赋值
                     * @return PublishStatus 是否已赋值
                     * 
                     */
                    bool PublishStatusHasBeenSet() const;

                    /**
                     * 获取更新版本
                     * @return UpdateVersion 更新版本
                     * 
                     */
                    int64_t GetUpdateVersion() const;

                    /**
                     * 设置更新版本
                     * @param _updateVersion 更新版本
                     * 
                     */
                    void SetUpdateVersion(const int64_t& _updateVersion);

                    /**
                     * 判断参数 UpdateVersion 是否已赋值
                     * @return UpdateVersion 是否已赋值
                     * 
                     */
                    bool UpdateVersionHasBeenSet() const;

                    /**
                     * 获取模型关联关系字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelationFieldList 模型关联关系字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RelationField> GetRelationFieldList() const;

                    /**
                     * 设置模型关联关系字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _relationFieldList 模型关联关系字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRelationFieldList(const std::vector<RelationField>& _relationFieldList);

                    /**
                     * 判断参数 RelationFieldList 是否已赋值
                     * @return RelationFieldList 是否已赋值
                     * 
                     */
                    bool RelationFieldListHasBeenSet() const;

                    /**
                     * 获取db实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbInstanceType db实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDbInstanceType() const;

                    /**
                     * 设置db实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dbInstanceType db实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDbInstanceType(const std::string& _dbInstanceType);

                    /**
                     * 判断参数 DbInstanceType 是否已赋值
                     * @return DbInstanceType 是否已赋值
                     * 
                     */
                    bool DbInstanceTypeHasBeenSet() const;

                    /**
                     * 获取体验环境db表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PreviewTableName 体验环境db表名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPreviewTableName() const;

                    /**
                     * 设置体验环境db表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _previewTableName 体验环境db表名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPreviewTableName(const std::string& _previewTableName);

                    /**
                     * 判断参数 PreviewTableName 是否已赋值
                     * @return PreviewTableName 是否已赋值
                     * 
                     */
                    bool PreviewTableNameHasBeenSet() const;

                    /**
                     * 获取正式环境db表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublishedTableName 正式环境db表名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPublishedTableName() const;

                    /**
                     * 设置正式环境db表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publishedTableName 正式环境db表名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublishedTableName(const std::string& _publishedTableName);

                    /**
                     * 判断参数 PublishedTableName 是否已赋值
                     * @return PublishedTableName 是否已赋值
                     * 
                     */
                    bool PublishedTableNameHasBeenSet() const;

                    /**
                     * 获取DB来源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbSourceType DB来源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDbSourceType() const;

                    /**
                     * 设置DB来源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dbSourceType DB来源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDbSourceType(const std::string& _dbSourceType);

                    /**
                     * 判断参数 DbSourceType 是否已赋值
                     * @return DbSourceType 是否已赋值
                     * 
                     */
                    bool DbSourceTypeHasBeenSet() const;

                private:

                    /**
                     * 数据源 ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 数据源名称
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 数据源标识
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 数据源类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 数据源描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 数据源配置
                     */
                    std::string m_schema;
                    bool m_schemaHasBeenSet;

                    /**
                     * cms 项目状态, 0: 重新获取详情信息，1： 不需要重新获取详情信息
                     */
                    std::string m_cmsProject;
                    bool m_cmsProjectHasBeenSet;

                    /**
                     * 当前为环境 id
                     */
                    std::string m_pkgId;
                    bool m_pkgIdHasBeenSet;

                    /**
                     * schema 版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schemaVersion;
                    bool m_schemaVersionHasBeenSet;

                    /**
                     * 创建者用户 ID
                     */
                    std::string m_creatorId;
                    bool m_creatorIdHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * 环境 id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataSourceVersion;
                    bool m_dataSourceVersionHasBeenSet;

                    /**
                     * 所属应用数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DataSourceLinkApp> m_appUsageList;
                    bool m_appUsageListHasBeenSet;

                    /**
                     * 发布时间
                     */
                    std::string m_publishedAt;
                    bool m_publishedAtHasBeenSet;

                    /**
                     * 子数据源ids
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_childDataSourceIds;
                    bool m_childDataSourceIdsHasBeenSet;

                    /**
                     * 数据源发布信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fun;
                    bool m_funHasBeenSet;

                    /**
                     * 云函数状态 1 Active 2 Creating 3 Updating 4 Deleting  9 Deleted 11 CreatFailed  12 UpdateFailed 13 DeleteFailed 21 UpdateTimeOut
                     */
                    uint64_t m_scfStatus;
                    bool m_scfStatusHasBeenSet;

                    /**
                     * 自定义方法
                     */
                    std::string m_methods;
                    bool m_methodsHasBeenSet;

                    /**
                     * 子数据源名数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_childDataSourceNames;
                    bool m_childDataSourceNamesHasBeenSet;

                    /**
                     * 是否旧数据源 1 新 0 旧
                     */
                    int64_t m_isNewDataSource;
                    bool m_isNewDataSourceHasBeenSet;

                    /**
                     * 数据源视图id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_viewId;
                    bool m_viewIdHasBeenSet;

                    /**
                     * 数据源属性配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configuration;
                    bool m_configurationHasBeenSet;

                    /**
                     * 外部数据源模板code
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_templateCode;
                    bool m_templateCodeHasBeenSet;

                    /**
                     * 外部数据源模板来源 0 空模板 1 腾讯文档 2 腾讯会议 3 企业微信 4 微信电商
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 发布版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publishVersion;
                    bool m_publishVersionHasBeenSet;

                    /**
                     * 发布视图id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publishViewId;
                    bool m_publishViewIdHasBeenSet;

                    /**
                     * 数据源子类型   "database" 标准模型 "custom-database" 自定义模型 "system" 系统模型 "connector" 连接器 "custom-connector" 自定义连接器 "hidden" 隐藏数据源
                     */
                    std::string m_subType;
                    bool m_subTypeHasBeenSet;

                    /**
                     * 授权状态  0 授权无效 1 授权有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_authStatus;
                    bool m_authStatusHasBeenSet;

                    /**
                     * 数据源授权信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TicketAuthInfo m_authInfo;
                    bool m_authInfoHasBeenSet;

                    /**
                     * 1发布0未发布
                     */
                    int64_t m_publishStatus;
                    bool m_publishStatusHasBeenSet;

                    /**
                     * 更新版本
                     */
                    int64_t m_updateVersion;
                    bool m_updateVersionHasBeenSet;

                    /**
                     * 模型关联关系字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RelationField> m_relationFieldList;
                    bool m_relationFieldListHasBeenSet;

                    /**
                     * db实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dbInstanceType;
                    bool m_dbInstanceTypeHasBeenSet;

                    /**
                     * 体验环境db表名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_previewTableName;
                    bool m_previewTableNameHasBeenSet;

                    /**
                     * 正式环境db表名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publishedTableName;
                    bool m_publishedTableNameHasBeenSet;

                    /**
                     * DB来源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dbSourceType;
                    bool m_dbSourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_DATASOURCEDETAIL_H_
