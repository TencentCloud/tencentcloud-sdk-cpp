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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEFILEREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/FileConfig.h>
#include <tencentcloud/databuddy/v20260715/model/FileStorage.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * UpdateFile请求参数结构体
                */
                class UpdateFileRequest : public AbstractModel
                {
                public:
                    UpdateFileRequest();
                    ~UpdateFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>工作空间 ID。来源：ListWorkspaces 接口返回的 WorkspaceId</p>
                     * @return WorkspaceId <p>工作空间 ID。来源：ListWorkspaces 接口返回的 WorkspaceId</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>工作空间 ID。来源：ListWorkspaces 接口返回的 WorkspaceId</p>
                     * @param _workspaceId <p>工作空间 ID。来源：ListWorkspaces 接口返回的 WorkspaceId</p>
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
                     * 获取<p>文件 ID。来源：CreateFile / ListFiles / GetFile 接口返回的 FileId</p>
                     * @return FileId <p>文件 ID。来源：CreateFile / ListFiles / GetFile 接口返回的 FileId</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>文件 ID。来源：CreateFile / ListFiles / GetFile 接口返回的 FileId</p>
                     * @param _fileId <p>文件 ID。来源：CreateFile / ListFiles / GetFile 接口返回的 FileId</p>
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
                     * 获取<p>文件运行配置。不传则不更新配置</p>
                     * @return FileConfig <p>文件运行配置。不传则不更新配置</p>
                     * 
                     */
                    FileConfig GetFileConfig() const;

                    /**
                     * 设置<p>文件运行配置。不传则不更新配置</p>
                     * @param _fileConfig <p>文件运行配置。不传则不更新配置</p>
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
                     * 获取<p>文件类型。取值：FILE（普通文件/脚本）、NOTEBOOK_FILE（Notebook）、SQL_FILE（SQL文件）。对应 common/domain/entity.proto EntityType</p>
                     * @return FileType <p>文件类型。取值：FILE（普通文件/脚本）、NOTEBOOK_FILE（Notebook）、SQL_FILE（SQL文件）。对应 common/domain/entity.proto EntityType</p>
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置<p>文件类型。取值：FILE（普通文件/脚本）、NOTEBOOK_FILE（Notebook）、SQL_FILE（SQL文件）。对应 common/domain/entity.proto EntityType</p>
                     * @param _fileType <p>文件类型。取值：FILE（普通文件/脚本）、NOTEBOOK_FILE（Notebook）、SQL_FILE（SQL文件）。对应 common/domain/entity.proto EntityType</p>
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
                     * 获取<p>绑定的 BundleId。来源：ListBundles 接口返回的 BundleId</p>
                     * @return BundleId <p>绑定的 BundleId。来源：ListBundles 接口返回的 BundleId</p>
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置<p>绑定的 BundleId。来源：ListBundles 接口返回的 BundleId</p>
                     * @param _bundleId <p>绑定的 BundleId。来源：ListBundles 接口返回的 BundleId</p>
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
                     * @return BundleInfo <p>绑定的 BundleInfo，JSON 字符串</p>
                     * 
                     */
                    std::string GetBundleInfo() const;

                    /**
                     * 设置<p>绑定的 BundleInfo，JSON 字符串</p>
                     * @param _bundleInfo <p>绑定的 BundleInfo，JSON 字符串</p>
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
                     * 获取<p>文件内容。不传则不更新内容</p>
                     * @return Storage <p>文件内容。不传则不更新内容</p>
                     * 
                     */
                    FileStorage GetStorage() const;

                    /**
                     * 设置<p>文件内容。不传则不更新内容</p>
                     * @param _storage <p>文件内容。不传则不更新内容</p>
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
                     * 获取<p>目标文件名，非空且与当前文件名不同时执行 rename 动作。长度不超过 SCRIPT_NAME_MAX_LENGTH，禁止以 . 或 .. 开头/结尾，禁止空格、双点、控制字符及 Linux 保留名（参考 docs/linux_filename_rules.md）。与 ExtensionType 一起校验后缀合法性</p>
                     * @return FileName <p>目标文件名，非空且与当前文件名不同时执行 rename 动作。长度不超过 SCRIPT_NAME_MAX_LENGTH，禁止以 . 或 .. 开头/结尾，禁止空格、双点、控制字符及 Linux 保留名（参考 docs/linux_filename_rules.md）。与 ExtensionType 一起校验后缀合法性</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>目标文件名，非空且与当前文件名不同时执行 rename 动作。长度不超过 SCRIPT_NAME_MAX_LENGTH，禁止以 . 或 .. 开头/结尾，禁止空格、双点、控制字符及 Linux 保留名（参考 docs/linux_filename_rules.md）。与 ExtensionType 一起校验后缀合法性</p>
                     * @param _fileName <p>目标文件名，非空且与当前文件名不同时执行 rename 动作。长度不超过 SCRIPT_NAME_MAX_LENGTH，禁止以 . 或 .. 开头/结尾，禁止空格、双点、控制字符及 Linux 保留名（参考 docs/linux_filename_rules.md）。与 ExtensionType 一起校验后缀合法性</p>
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
                     * 获取<p>目标父目录路径，非空时执行 move 动作。根目录传 /；与 FileName 可同时出现，语义为「移动+重命名」。与 CreateFile 的 ParentFolderPath 保持一致</p>
                     * @return ParentFolderPath <p>目标父目录路径，非空时执行 move 动作。根目录传 /；与 FileName 可同时出现，语义为「移动+重命名」。与 CreateFile 的 ParentFolderPath 保持一致</p>
                     * 
                     */
                    std::string GetParentFolderPath() const;

                    /**
                     * 设置<p>目标父目录路径，非空时执行 move 动作。根目录传 /；与 FileName 可同时出现，语义为「移动+重命名」。与 CreateFile 的 ParentFolderPath 保持一致</p>
                     * @param _parentFolderPath <p>目标父目录路径，非空时执行 move 动作。根目录传 /；与 FileName 可同时出现，语义为「移动+重命名」。与 CreateFile 的 ParentFolderPath 保持一致</p>
                     * 
                     */
                    void SetParentFolderPath(const std::string& _parentFolderPath);

                    /**
                     * 判断参数 ParentFolderPath 是否已赋值
                     * @return ParentFolderPath 是否已赋值
                     * 
                     */
                    bool ParentFolderPathHasBeenSet() const;

                    /**
                     * 获取<p>目标父目录的 FileType。取值：FOLDER、GIT_FOLDER。仅当 ParentFolderPath 非空时使用；缺省时按解析出的父目录实际类型处理</p>
                     * @return TargetFileType <p>目标父目录的 FileType。取值：FOLDER、GIT_FOLDER。仅当 ParentFolderPath 非空时使用；缺省时按解析出的父目录实际类型处理</p>
                     * 
                     */
                    std::string GetTargetFileType() const;

                    /**
                     * 设置<p>目标父目录的 FileType。取值：FOLDER、GIT_FOLDER。仅当 ParentFolderPath 非空时使用；缺省时按解析出的父目录实际类型处理</p>
                     * @param _targetFileType <p>目标父目录的 FileType。取值：FOLDER、GIT_FOLDER。仅当 ParentFolderPath 非空时使用；缺省时按解析出的父目录实际类型处理</p>
                     * 
                     */
                    void SetTargetFileType(const std::string& _targetFileType);

                    /**
                     * 判断参数 TargetFileType 是否已赋值
                     * @return TargetFileType 是否已赋值
                     * 
                     */
                    bool TargetFileTypeHasBeenSet() const;

                    /**
                     * 获取<p>动作类型（必填，未来版本会强制校验）。取值：1 = UPDATE_CONTENT（仅更新 FileConfig / Storage / Bundle*，禁止传 FileName / ParentFolderPath / TargetFileType）；2 = RENAME（仅重命名，必须传 FileName，禁止传 ParentFolderPath / FileConfig / Storage / Bundle*）；3 = MOVE（仅移动，必须传 ParentFolderPath，禁止传 FileName / FileConfig / Storage / Bundle*）。参数互斥校验失败会返回 ParamIllegal 错误</p>
                     * @return UpdateAction <p>动作类型（必填，未来版本会强制校验）。取值：1 = UPDATE_CONTENT（仅更新 FileConfig / Storage / Bundle*，禁止传 FileName / ParentFolderPath / TargetFileType）；2 = RENAME（仅重命名，必须传 FileName，禁止传 ParentFolderPath / FileConfig / Storage / Bundle*）；3 = MOVE（仅移动，必须传 ParentFolderPath，禁止传 FileName / FileConfig / Storage / Bundle*）。参数互斥校验失败会返回 ParamIllegal 错误</p>
                     * 
                     */
                    int64_t GetUpdateAction() const;

                    /**
                     * 设置<p>动作类型（必填，未来版本会强制校验）。取值：1 = UPDATE_CONTENT（仅更新 FileConfig / Storage / Bundle*，禁止传 FileName / ParentFolderPath / TargetFileType）；2 = RENAME（仅重命名，必须传 FileName，禁止传 ParentFolderPath / FileConfig / Storage / Bundle*）；3 = MOVE（仅移动，必须传 ParentFolderPath，禁止传 FileName / FileConfig / Storage / Bundle*）。参数互斥校验失败会返回 ParamIllegal 错误</p>
                     * @param _updateAction <p>动作类型（必填，未来版本会强制校验）。取值：1 = UPDATE_CONTENT（仅更新 FileConfig / Storage / Bundle*，禁止传 FileName / ParentFolderPath / TargetFileType）；2 = RENAME（仅重命名，必须传 FileName，禁止传 ParentFolderPath / FileConfig / Storage / Bundle*）；3 = MOVE（仅移动，必须传 ParentFolderPath，禁止传 FileName / FileConfig / Storage / Bundle*）。参数互斥校验失败会返回 ParamIllegal 错误</p>
                     * 
                     */
                    void SetUpdateAction(const int64_t& _updateAction);

                    /**
                     * 判断参数 UpdateAction 是否已赋值
                     * @return UpdateAction 是否已赋值
                     * 
                     */
                    bool UpdateActionHasBeenSet() const;

                private:

                    /**
                     * <p>工作空间 ID。来源：ListWorkspaces 接口返回的 WorkspaceId</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>文件 ID。来源：CreateFile / ListFiles / GetFile 接口返回的 FileId</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>文件运行配置。不传则不更新配置</p>
                     */
                    FileConfig m_fileConfig;
                    bool m_fileConfigHasBeenSet;

                    /**
                     * <p>文件类型。取值：FILE（普通文件/脚本）、NOTEBOOK_FILE（Notebook）、SQL_FILE（SQL文件）。对应 common/domain/entity.proto EntityType</p>
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * <p>绑定的 BundleId。来源：ListBundles 接口返回的 BundleId</p>
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * <p>绑定的 BundleInfo，JSON 字符串</p>
                     */
                    std::string m_bundleInfo;
                    bool m_bundleInfoHasBeenSet;

                    /**
                     * <p>文件内容。不传则不更新内容</p>
                     */
                    FileStorage m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * <p>目标文件名，非空且与当前文件名不同时执行 rename 动作。长度不超过 SCRIPT_NAME_MAX_LENGTH，禁止以 . 或 .. 开头/结尾，禁止空格、双点、控制字符及 Linux 保留名（参考 docs/linux_filename_rules.md）。与 ExtensionType 一起校验后缀合法性</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>目标父目录路径，非空时执行 move 动作。根目录传 /；与 FileName 可同时出现，语义为「移动+重命名」。与 CreateFile 的 ParentFolderPath 保持一致</p>
                     */
                    std::string m_parentFolderPath;
                    bool m_parentFolderPathHasBeenSet;

                    /**
                     * <p>目标父目录的 FileType。取值：FOLDER、GIT_FOLDER。仅当 ParentFolderPath 非空时使用；缺省时按解析出的父目录实际类型处理</p>
                     */
                    std::string m_targetFileType;
                    bool m_targetFileTypeHasBeenSet;

                    /**
                     * <p>动作类型（必填，未来版本会强制校验）。取值：1 = UPDATE_CONTENT（仅更新 FileConfig / Storage / Bundle*，禁止传 FileName / ParentFolderPath / TargetFileType）；2 = RENAME（仅重命名，必须传 FileName，禁止传 ParentFolderPath / FileConfig / Storage / Bundle*）；3 = MOVE（仅移动，必须传 ParentFolderPath，禁止传 FileName / FileConfig / Storage / Bundle*）。参数互斥校验失败会返回 ParamIllegal 错误</p>
                     */
                    int64_t m_updateAction;
                    bool m_updateActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEFILEREQUEST_H_
