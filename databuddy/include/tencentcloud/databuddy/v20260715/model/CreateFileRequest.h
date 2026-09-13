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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATEFILEREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATEFILEREQUEST_H_

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
                * CreateFile请求参数结构体
                */
                class CreateFileRequest : public AbstractModel
                {
                public:
                    CreateFileRequest();
                    ~CreateFileRequest() = default;
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
                     * 获取<p>文件名，含后缀，最长 255 字节。不能以 . 或 .. 开头/结尾，不能含空格与控制字符</p>
                     * @return FileName <p>文件名，含后缀，最长 255 字节。不能以 . 或 .. 开头/结尾，不能含空格与控制字符</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>文件名，含后缀，最长 255 字节。不能以 . 或 .. 开头/结尾，不能含空格与控制字符</p>
                     * @param _fileName <p>文件名，含后缀，最长 255 字节。不能以 . 或 .. 开头/结尾，不能含空格与控制字符</p>
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
                     * 获取<p>父文件夹路径，以 / 开头、末尾不带 /，根目录传 /。来源：ListFiles 接口返回的 Path</p>
                     * @return ParentFolderPath <p>父文件夹路径，以 / 开头、末尾不带 /，根目录传 /。来源：ListFiles 接口返回的 Path</p>
                     * 
                     */
                    std::string GetParentFolderPath() const;

                    /**
                     * 设置<p>父文件夹路径，以 / 开头、末尾不带 /，根目录传 /。来源：ListFiles 接口返回的 Path</p>
                     * @param _parentFolderPath <p>父文件夹路径，以 / 开头、末尾不带 /，根目录传 /。来源：ListFiles 接口返回的 Path</p>
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
                     * 获取<p>文件初始内容。不传则按FileType 生成默认内容</p>
                     * @return Storage <p>文件初始内容。不传则按FileType 生成默认内容</p>
                     * 
                     */
                    FileStorage GetStorage() const;

                    /**
                     * 设置<p>文件初始内容。不传则按FileType 生成默认内容</p>
                     * @param _storage <p>文件初始内容。不传则按FileType 生成默认内容</p>
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
                     * 获取是否将 Storage 中的 ZIP 文件异步解压创建，默认 false。true 时异步作业由 Workspace 负责全生命周期，响应仅通过 AsyncOperation 返回作业信息（FileId 为空）；作业进度查询由基础平台 WS 接口实现，不在本协议中定义。
                     * @return ExtractArchive 是否将 Storage 中的 ZIP 文件异步解压创建，默认 false。true 时异步作业由 Workspace 负责全生命周期，响应仅通过 AsyncOperation 返回作业信息（FileId 为空）；作业进度查询由基础平台 WS 接口实现，不在本协议中定义。
                     * 
                     */
                    bool GetExtractArchive() const;

                    /**
                     * 设置是否将 Storage 中的 ZIP 文件异步解压创建，默认 false。true 时异步作业由 Workspace 负责全生命周期，响应仅通过 AsyncOperation 返回作业信息（FileId 为空）；作业进度查询由基础平台 WS 接口实现，不在本协议中定义。
                     * @param _extractArchive 是否将 Storage 中的 ZIP 文件异步解压创建，默认 false。true 时异步作业由 Workspace 负责全生命周期，响应仅通过 AsyncOperation 返回作业信息（FileId 为空）；作业进度查询由基础平台 WS 接口实现，不在本协议中定义。
                     * 
                     */
                    void SetExtractArchive(const bool& _extractArchive);

                    /**
                     * 判断参数 ExtractArchive 是否已赋值
                     * @return ExtractArchive 是否已赋值
                     * 
                     */
                    bool ExtractArchiveHasBeenSet() const;

                private:

                    /**
                     * <p>工作空间 ID。来源：ListWorkspaces 接口返回的 WorkspaceId</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>文件名，含后缀，最长 255 字节。不能以 . 或 .. 开头/结尾，不能含空格与控制字符</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>父文件夹路径，以 / 开头、末尾不带 /，根目录传 /。来源：ListFiles 接口返回的 Path</p>
                     */
                    std::string m_parentFolderPath;
                    bool m_parentFolderPathHasBeenSet;

                    /**
                     * <p>文件类型。取值：FILE（普通文件/脚本）、NOTEBOOK_FILE（Notebook）、SQL_FILE（SQL文件）。对应 common/domain/entity.proto EntityType</p>
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * <p>文件运行配置</p>
                     */
                    FileConfig m_fileConfig;
                    bool m_fileConfigHasBeenSet;

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
                     * <p>文件初始内容。不传则按FileType 生成默认内容</p>
                     */
                    FileStorage m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 是否将 Storage 中的 ZIP 文件异步解压创建，默认 false。true 时异步作业由 Workspace 负责全生命周期，响应仅通过 AsyncOperation 返回作业信息（FileId 为空）；作业进度查询由基础平台 WS 接口实现，不在本协议中定义。
                     */
                    bool m_extractArchive;
                    bool m_extractArchiveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATEFILEREQUEST_H_
