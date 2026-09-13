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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FILEINFO_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/FileConfig.h>
#include <tencentcloud/databuddy/v20260715/model/FileStorage.h>
#include <tencentcloud/databuddy/v20260715/model/AsyncOperation.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 文件详情
                */
                class FileInfo : public AbstractModel
                {
                public:
                    FileInfo();
                    ~FileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>主账号 AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId <p>主账号 AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>主账号 AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId <p>主账号 AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>工作空间 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkspaceId <p>工作空间 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>工作空间 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workspaceId <p>工作空间 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取<p>文件 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileId <p>文件 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>文件 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileId <p>文件 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取<p>文件名，含后缀</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileName <p>文件名，含后缀</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>文件名，含后缀</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileName <p>文件名，含后缀</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取<p>文件类型。取值：FILE（普通文件/脚本）、NOTEBOOK_FILE（Notebook）、SQL_FILE（SQL文件）。对应 common/domain/entity.proto EntityType</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileType <p>文件类型。取值：FILE（普通文件/脚本）、NOTEBOOK_FILE（Notebook）、SQL_FILE（SQL文件）。对应 common/domain/entity.proto EntityType</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置<p>文件类型。取值：FILE（普通文件/脚本）、NOTEBOOK_FILE（Notebook）、SQL_FILE（SQL文件）。对应 common/domain/entity.proto EntityType</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileType <p>文件类型。取值：FILE（普通文件/脚本）、NOTEBOOK_FILE（Notebook）、SQL_FILE（SQL文件）。对应 common/domain/entity.proto EntityType</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取<p>文件在工作空间中的完整路径，以 / 开头，如 /etl/daily/demo.ipynb</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Path <p>文件在工作空间中的完整路径，以 / 开头，如 /etl/daily/demo.ipynb</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>文件在工作空间中的完整路径，以 / 开头，如 /etl/daily/demo.ipynb</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _path <p>文件在工作空间中的完整路径，以 / 开头，如 /etl/daily/demo.ipynb</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>文件运行配置</p>
                     * @return FileConfig <p>文件运行配置</p>
                     * 
                     */
                    FileConfig GetFileConfig() const;

                    /**
                     * 设置<p>文件运行配置</p>
                     * @param _fileConfig <p>文件运行配置</p>
                     * 
                     */
                    void SetFileConfig(const FileConfig& _fileConfig);

                    /**
                     * 判断参数 FileConfig 是否已赋值
                     * @return FileConfig 是否已赋值
                     * 
                     */
                    bool FileConfigHasBeenSet() const;

                    /**
                     * 获取<p>绑定的 BundleId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BundleId <p>绑定的 BundleId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置<p>绑定的 BundleId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bundleId <p>绑定的 BundleId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBundleId(const std::string& _bundleId);

                    /**
                     * 判断参数 BundleId 是否已赋值
                     * @return BundleId 是否已赋值
                     * 
                     */
                    bool BundleIdHasBeenSet() const;

                    /**
                     * 获取<p>绑定的 BundleInfo，JSON 字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BundleInfo <p>绑定的 BundleInfo，JSON 字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBundleInfo() const;

                    /**
                     * 设置<p>绑定的 BundleInfo，JSON 字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bundleInfo <p>绑定的 BundleInfo，JSON 字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBundleInfo(const std::string& _bundleInfo);

                    /**
                     * 判断参数 BundleInfo 是否已赋值
                     * @return BundleInfo 是否已赋值
                     * 
                     */
                    bool BundleInfoHasBeenSet() const;

                    /**
                     * 获取<p>文件状态。active=正常，deleted=已删除</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>文件状态。active=正常，deleted=已删除</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>文件状态。active=正常，deleted=已删除</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>文件状态。active=正常，deleted=已删除</p>
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
                     * 获取<p>文件负责人用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUserName <p>文件负责人用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerUserName() const;

                    /**
                     * 设置<p>文件负责人用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUserName <p>文件负责人用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerUserName(const std::string& _ownerUserName);

                    /**
                     * 判断参数 OwnerUserName 是否已赋值
                     * @return OwnerUserName 是否已赋值
                     * 
                     */
                    bool OwnerUserNameHasBeenSet() const;

                    /**
                     * 获取<p>创建人子账号 Uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateUserUin <p>创建人子账号 Uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置<p>创建人子账号 Uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createUserUin <p>创建人子账号 Uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateUserUin(const std::string& _createUserUin);

                    /**
                     * 判断参数 CreateUserUin 是否已赋值
                     * @return CreateUserUin 是否已赋值
                     * 
                     */
                    bool CreateUserUinHasBeenSet() const;

                    /**
                     * 获取<p>最近更新人子账号 Uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateUserUin <p>最近更新人子账号 Uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateUserUin() const;

                    /**
                     * 设置<p>最近更新人子账号 Uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateUserUin <p>最近更新人子账号 Uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateUserUin(const std::string& _updateUserUin);

                    /**
                     * 判断参数 UpdateUserUin 是否已赋值
                     * @return UpdateUserUin 是否已赋值
                     * 
                     */
                    bool UpdateUserUinHasBeenSet() const;

                    /**
                     * 获取<p>创建时间，毫秒级时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间，毫秒级时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间，毫秒级时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创建时间，毫秒级时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>最近更新时间，毫秒级时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime <p>最近更新时间，毫秒级时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>最近更新时间，毫秒级时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime <p>最近更新时间，毫秒级时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>文件存储信息。仅当请求 IncludeContent=true 时返回内容</p>
                     * @return Storage <p>文件存储信息。仅当请求 IncludeContent=true 时返回内容</p>
                     * 
                     */
                    FileStorage GetStorage() const;

                    /**
                     * 设置<p>文件存储信息。仅当请求 IncludeContent=true 时返回内容</p>
                     * @param _storage <p>文件存储信息。仅当请求 IncludeContent=true 时返回内容</p>
                     * 
                     */
                    void SetStorage(const FileStorage& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取<p>当前调用方对该文件的权限点列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Permissions <p>当前调用方对该文件的权限点列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPermissions() const;

                    /**
                     * 设置<p>当前调用方对该文件的权限点列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _permissions <p>当前调用方对该文件的权限点列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPermissions(const std::string& _permissions);

                    /**
                     * 判断参数 Permissions 是否已赋值
                     * @return Permissions 是否已赋值
                     * 
                     */
                    bool PermissionsHasBeenSet() const;

                    /**
                     * 获取<p>是否已发布</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReleaseStatus <p>是否已发布</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetReleaseStatus() const;

                    /**
                     * 设置<p>是否已发布</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _releaseStatus <p>是否已发布</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReleaseStatus(const bool& _releaseStatus);

                    /**
                     * 判断参数 ReleaseStatus 是否已赋值
                     * @return ReleaseStatus 是否已赋值
                     * 
                     */
                    bool ReleaseStatusHasBeenSet() const;

                    /**
                     * 获取<p>资源模式。1=分布式，2=单节点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceMode <p>资源模式。1=分布式，2=单节点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetResourceMode() const;

                    /**
                     * 设置<p>资源模式。1=分布式，2=单节点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceMode <p>资源模式。1=分布式，2=单节点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceMode(const int64_t& _resourceMode);

                    /**
                     * 判断参数 ResourceMode 是否已赋值
                     * @return ResourceMode 是否已赋值
                     * 
                     */
                    bool ResourceModeHasBeenSet() const;

                    /**
                     * 获取ZIP 异步创建时透传 Workspace 作业信息；普通同步创建或其他复用该返回结构的接口不设置该字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AsyncOperation ZIP 异步创建时透传 Workspace 作业信息；普通同步创建或其他复用该返回结构的接口不设置该字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AsyncOperation GetAsyncOperation() const;

                    /**
                     * 设置ZIP 异步创建时透传 Workspace 作业信息；普通同步创建或其他复用该返回结构的接口不设置该字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _asyncOperation ZIP 异步创建时透传 Workspace 作业信息；普通同步创建或其他复用该返回结构的接口不设置该字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAsyncOperation(const AsyncOperation& _asyncOperation);

                    /**
                     * 判断参数 AsyncOperation 是否已赋值
                     * @return AsyncOperation 是否已赋值
                     * 
                     */
                    bool AsyncOperationHasBeenSet() const;

                private:

                    /**
                     * <p>主账号 AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>工作空间 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>文件 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>文件名，含后缀</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>文件类型。取值：FILE（普通文件/脚本）、NOTEBOOK_FILE（Notebook）、SQL_FILE（SQL文件）。对应 common/domain/entity.proto EntityType</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * <p>文件在工作空间中的完整路径，以 / 开头，如 /etl/daily/demo.ipynb</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>文件运行配置</p>
                     */
                    FileConfig m_fileConfig;
                    bool m_fileConfigHasBeenSet;

                    /**
                     * <p>绑定的 BundleId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * <p>绑定的 BundleInfo，JSON 字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bundleInfo;
                    bool m_bundleInfoHasBeenSet;

                    /**
                     * <p>文件状态。active=正常，deleted=已删除</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>文件负责人用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerUserName;
                    bool m_ownerUserNameHasBeenSet;

                    /**
                     * <p>创建人子账号 Uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * <p>最近更新人子账号 Uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateUserUin;
                    bool m_updateUserUinHasBeenSet;

                    /**
                     * <p>创建时间，毫秒级时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>最近更新时间，毫秒级时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>文件存储信息。仅当请求 IncludeContent=true 时返回内容</p>
                     */
                    FileStorage m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * <p>当前调用方对该文件的权限点列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_permissions;
                    bool m_permissionsHasBeenSet;

                    /**
                     * <p>是否已发布</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_releaseStatus;
                    bool m_releaseStatusHasBeenSet;

                    /**
                     * <p>资源模式。1=分布式，2=单节点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_resourceMode;
                    bool m_resourceModeHasBeenSet;

                    /**
                     * ZIP 异步创建时透传 Workspace 作业信息；普通同步创建或其他复用该返回结构的接口不设置该字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AsyncOperation m_asyncOperation;
                    bool m_asyncOperationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FILEINFO_H_
