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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBESYMBOLARTIFACTUPLOADCREDENTIALREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBESYMBOLARTIFACTUPLOADCREDENTIALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeSymbolArtifactUploadCredential请求参数结构体
                */
                class DescribeSymbolArtifactUploadCredentialRequest : public AbstractModel
                {
                public:
                    DescribeSymbolArtifactUploadCredentialRequest();
                    ~DescribeSymbolArtifactUploadCredentialRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>制品类型。取值：js_sourcemap、ios_dsym、macos_dsym、windows_pdb、android_mapping、android_native、system_symbol。</p>
                     * @return Kind <p>制品类型。取值：js_sourcemap、ios_dsym、macos_dsym、windows_pdb、android_mapping、android_native、system_symbol。</p>
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置<p>制品类型。取值：js_sourcemap、ios_dsym、macos_dsym、windows_pdb、android_mapping、android_native、system_symbol。</p>
                     * @param _kind <p>制品类型。取值：js_sourcemap、ios_dsym、macos_dsym、windows_pdb、android_mapping、android_native、system_symbol。</p>
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取<p>上传文件名。</p>
                     * @return FileName <p>上传文件名。</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>上传文件名。</p>
                     * @param _fileName <p>上传文件名。</p>
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
                     * 获取<p>应用 ID。应用级制品必填；system_symbol 不传。</p>
                     * @return AppId <p>应用 ID。应用级制品必填；system_symbol 不传。</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用 ID。应用级制品必填；system_symbol 不传。</p>
                     * @param _appId <p>应用 ID。应用级制品必填；system_symbol 不传。</p>
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
                     * 获取<p>兼容别名，未传 AppId 时使用。</p>
                     * @return ProjectId <p>兼容别名，未传 AppId 时使用。</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>兼容别名，未传 AppId 时使用。</p>
                     * @param _projectId <p>兼容别名，未传 AppId 时使用。</p>
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
                     * 获取<p>保留字段，请勿传入。</p>
                     * @return Release <p>保留字段，请勿传入。</p>
                     * 
                     */
                    std::string GetRelease() const;

                    /**
                     * 设置<p>保留字段，请勿传入。</p>
                     * @param _release <p>保留字段，请勿传入。</p>
                     * 
                     */
                    void SetRelease(const std::string& _release);

                    /**
                     * 判断参数 Release 是否已赋值
                     * @return Release 是否已赋值
                     * 
                     */
                    bool ReleaseHasBeenSet() const;

                    /**
                     * 获取<p>保留字段，请勿传入。</p>
                     * @return Dist <p>保留字段，请勿传入。</p>
                     * 
                     */
                    std::string GetDist() const;

                    /**
                     * 设置<p>保留字段，请勿传入。</p>
                     * @param _dist <p>保留字段，请勿传入。</p>
                     * 
                     */
                    void SetDist(const std::string& _dist);

                    /**
                     * 判断参数 Dist 是否已赋值
                     * @return Dist 是否已赋值
                     * 
                     */
                    bool DistHasBeenSet() const;

                    /**
                     * 获取<p>保留字段，请勿传入。</p>
                     * @return MinifiedUrl <p>保留字段，请勿传入。</p>
                     * 
                     */
                    std::string GetMinifiedUrl() const;

                    /**
                     * 设置<p>保留字段，请勿传入。</p>
                     * @param _minifiedUrl <p>保留字段，请勿传入。</p>
                     * 
                     */
                    void SetMinifiedUrl(const std::string& _minifiedUrl);

                    /**
                     * 判断参数 MinifiedUrl 是否已赋值
                     * @return MinifiedUrl 是否已赋值
                     * 
                     */
                    bool MinifiedUrlHasBeenSet() const;

                    /**
                     * 获取<p>保留字段，请勿传入。</p>
                     * @return FileType <p>保留字段，请勿传入。</p>
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置<p>保留字段，请勿传入。</p>
                     * @param _fileType <p>保留字段，请勿传入。</p>
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
                     * 获取<p>保留字段，请勿传入。</p>
                     * @return DebugId <p>保留字段，请勿传入。</p>
                     * 
                     */
                    std::string GetDebugId() const;

                    /**
                     * 设置<p>保留字段，请勿传入。</p>
                     * @param _debugId <p>保留字段，请勿传入。</p>
                     * 
                     */
                    void SetDebugId(const std::string& _debugId);

                    /**
                     * 判断参数 DebugId 是否已赋值
                     * @return DebugId 是否已赋值
                     * 
                     */
                    bool DebugIdHasBeenSet() const;

                    /**
                     * 获取<p>保留字段，请勿传入。</p>
                     * @return BuildId <p>保留字段，请勿传入。</p>
                     * 
                     */
                    std::string GetBuildId() const;

                    /**
                     * 设置<p>保留字段，请勿传入。</p>
                     * @param _buildId <p>保留字段，请勿传入。</p>
                     * 
                     */
                    void SetBuildId(const std::string& _buildId);

                    /**
                     * 判断参数 BuildId 是否已赋值
                     * @return BuildId 是否已赋值
                     * 
                     */
                    bool BuildIdHasBeenSet() const;

                    /**
                     * 获取<p>保留字段，请勿传入。</p>
                     * @return AppVersion <p>保留字段，请勿传入。</p>
                     * 
                     */
                    std::string GetAppVersion() const;

                    /**
                     * 设置<p>保留字段，请勿传入。</p>
                     * @param _appVersion <p>保留字段，请勿传入。</p>
                     * 
                     */
                    void SetAppVersion(const std::string& _appVersion);

                    /**
                     * 判断参数 AppVersion 是否已赋值
                     * @return AppVersion 是否已赋值
                     * 
                     */
                    bool AppVersionHasBeenSet() const;

                    /**
                     * 获取<p>保留字段，请勿传入。</p>
                     * @return Platform <p>保留字段，请勿传入。</p>
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置<p>保留字段，请勿传入。</p>
                     * @param _platform <p>保留字段，请勿传入。</p>
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取<p>系统名称。</p>
                     * @return OS <p>系统名称。</p>
                     * 
                     */
                    std::string GetOS() const;

                    /**
                     * 设置<p>系统名称。</p>
                     * @param _oS <p>系统名称。</p>
                     * 
                     */
                    void SetOS(const std::string& _oS);

                    /**
                     * 判断参数 OS 是否已赋值
                     * @return OS 是否已赋值
                     * 
                     */
                    bool OSHasBeenSet() const;

                    /**
                     * 获取<p>系统版本。</p>
                     * @return OSVersion <p>系统版本。</p>
                     * 
                     */
                    std::string GetOSVersion() const;

                    /**
                     * 设置<p>系统版本。</p>
                     * @param _oSVersion <p>系统版本。</p>
                     * 
                     */
                    void SetOSVersion(const std::string& _oSVersion);

                    /**
                     * 判断参数 OSVersion 是否已赋值
                     * @return OSVersion 是否已赋值
                     * 
                     */
                    bool OSVersionHasBeenSet() const;

                    /**
                     * 获取<p>保留字段，请勿传入。</p>
                     * @return StorePath <p>保留字段，请勿传入。</p>
                     * 
                     */
                    std::string GetStorePath() const;

                    /**
                     * 设置<p>保留字段，请勿传入。</p>
                     * @param _storePath <p>保留字段，请勿传入。</p>
                     * 
                     */
                    void SetStorePath(const std::string& _storePath);

                    /**
                     * 判断参数 StorePath 是否已赋值
                     * @return StorePath 是否已赋值
                     * 
                     */
                    bool StorePathHasBeenSet() const;

                    /**
                     * 获取<p>文件内容类型，如 application/json。</p>
                     * @return ContentType <p>文件内容类型，如 application/json。</p>
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置<p>文件内容类型，如 application/json。</p>
                     * @param _contentType <p>文件内容类型，如 application/json。</p>
                     * 
                     */
                    void SetContentType(const std::string& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                private:

                    /**
                     * <p>制品类型。取值：js_sourcemap、ios_dsym、macos_dsym、windows_pdb、android_mapping、android_native、system_symbol。</p>
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * <p>上传文件名。</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>应用 ID。应用级制品必填；system_symbol 不传。</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>兼容别名，未传 AppId 时使用。</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>保留字段，请勿传入。</p>
                     */
                    std::string m_release;
                    bool m_releaseHasBeenSet;

                    /**
                     * <p>保留字段，请勿传入。</p>
                     */
                    std::string m_dist;
                    bool m_distHasBeenSet;

                    /**
                     * <p>保留字段，请勿传入。</p>
                     */
                    std::string m_minifiedUrl;
                    bool m_minifiedUrlHasBeenSet;

                    /**
                     * <p>保留字段，请勿传入。</p>
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * <p>保留字段，请勿传入。</p>
                     */
                    std::string m_debugId;
                    bool m_debugIdHasBeenSet;

                    /**
                     * <p>保留字段，请勿传入。</p>
                     */
                    std::string m_buildId;
                    bool m_buildIdHasBeenSet;

                    /**
                     * <p>保留字段，请勿传入。</p>
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                    /**
                     * <p>保留字段，请勿传入。</p>
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * <p>系统名称。</p>
                     */
                    std::string m_oS;
                    bool m_oSHasBeenSet;

                    /**
                     * <p>系统版本。</p>
                     */
                    std::string m_oSVersion;
                    bool m_oSVersionHasBeenSet;

                    /**
                     * <p>保留字段，请勿传入。</p>
                     */
                    std::string m_storePath;
                    bool m_storePathHasBeenSet;

                    /**
                     * <p>文件内容类型，如 application/json。</p>
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBESYMBOLARTIFACTUPLOADCREDENTIALREQUEST_H_
