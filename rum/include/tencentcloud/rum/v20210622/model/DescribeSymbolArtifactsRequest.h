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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBESYMBOLARTIFACTSREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBESYMBOLARTIFACTSREQUEST_H_

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
                * DescribeSymbolArtifacts请求参数结构体
                */
                class DescribeSymbolArtifactsRequest : public AbstractModel
                {
                public:
                    DescribeSymbolArtifactsRequest();
                    ~DescribeSymbolArtifactsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>制品类型。取值：js_sourcemap、ios_dsym、macos_dsym、windows_pdb、android_mapping、android_native、system_symbol。native_symbol 仅查询历史数据。</p>
                     * @return Kind <p>制品类型。取值：js_sourcemap、ios_dsym、macos_dsym、windows_pdb、android_mapping、android_native、system_symbol。native_symbol 仅查询历史数据。</p>
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置<p>制品类型。取值：js_sourcemap、ios_dsym、macos_dsym、windows_pdb、android_mapping、android_native、system_symbol。native_symbol 仅查询历史数据。</p>
                     * @param _kind <p>制品类型。取值：js_sourcemap、ios_dsym、macos_dsym、windows_pdb、android_mapping、android_native、system_symbol。native_symbol 仅查询历史数据。</p>
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
                     * 获取<p>应用 ID。js_sourcemap 必填，其他应用级制品用于过滤。</p>
                     * @return AppId <p>应用 ID。js_sourcemap 必填，其他应用级制品用于过滤。</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用 ID。js_sourcemap 必填，其他应用级制品用于过滤。</p>
                     * @param _appId <p>应用 ID。js_sourcemap 必填，其他应用级制品用于过滤。</p>
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
                     * 获取<p>JS 应用版本过滤条件。</p>
                     * @return Release <p>JS 应用版本过滤条件。</p>
                     * 
                     */
                    std::string GetRelease() const;

                    /**
                     * 设置<p>JS 应用版本过滤条件。</p>
                     * @param _release <p>JS 应用版本过滤条件。</p>
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
                     * 获取<p>JS 制品的历史 Dist 过滤条件。</p>
                     * @return Dist <p>JS 制品的历史 Dist 过滤条件。</p>
                     * 
                     */
                    std::string GetDist() const;

                    /**
                     * 设置<p>JS 制品的历史 Dist 过滤条件。</p>
                     * @param _dist <p>JS 制品的历史 Dist 过滤条件。</p>
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
                     * 获取<p>JS 制品文件类型过滤条件。</p>
                     * @return FileType <p>JS 制品文件类型过滤条件。</p>
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置<p>JS 制品文件类型过滤条件。</p>
                     * @param _fileType <p>JS 制品文件类型过滤条件。</p>
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
                     * 获取<p>应用版本过滤条件。</p>
                     * @return AppVersion <p>应用版本过滤条件。</p>
                     * 
                     */
                    std::string GetAppVersion() const;

                    /**
                     * 设置<p>应用版本过滤条件。</p>
                     * @param _appVersion <p>应用版本过滤条件。</p>
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
                     * 获取<p>历史 native_symbol 的平台过滤条件。</p>
                     * @return Platform <p>历史 native_symbol 的平台过滤条件。</p>
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置<p>历史 native_symbol 的平台过滤条件。</p>
                     * @param _platform <p>历史 native_symbol 的平台过滤条件。</p>
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
                     * 获取<p>系统名称。system_symbol 场景过滤条件。</p>
                     * @return OS <p>系统名称。system_symbol 场景过滤条件。</p>
                     * 
                     */
                    std::string GetOS() const;

                    /**
                     * 设置<p>系统名称。system_symbol 场景过滤条件。</p>
                     * @param _oS <p>系统名称。system_symbol 场景过滤条件。</p>
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
                     * 获取<p>系统版本。system_symbol 场景过滤条件。</p>
                     * @return OSVersion <p>系统版本。system_symbol 场景过滤条件。</p>
                     * 
                     */
                    std::string GetOSVersion() const;

                    /**
                     * 设置<p>系统版本。system_symbol 场景过滤条件。</p>
                     * @param _oSVersion <p>系统版本。system_symbol 场景过滤条件。</p>
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
                     * 获取<p>状态过滤。可按 active、superseded、deleted、invalid 过滤。</p>
                     * @return Status <p>状态过滤。可按 active、superseded、deleted、invalid 过滤。</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态过滤。可按 active、superseded、deleted、invalid 过滤。</p>
                     * @param _status <p>状态过滤。可按 active、superseded、deleted、invalid 过滤。</p>
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
                     * 获取<p>分页大小。默认 50。</p>
                     * @return Limit <p>分页大小。默认 50。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>分页大小。默认 50。</p>
                     * @param _limit <p>分页大小。默认 50。</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>分页游标。</p>
                     * @return Cursor <p>分页游标。</p>
                     * 
                     */
                    std::string GetCursor() const;

                    /**
                     * 设置<p>分页游标。</p>
                     * @param _cursor <p>分页游标。</p>
                     * 
                     */
                    void SetCursor(const std::string& _cursor);

                    /**
                     * 判断参数 Cursor 是否已赋值
                     * @return Cursor 是否已赋值
                     * 
                     */
                    bool CursorHasBeenSet() const;

                private:

                    /**
                     * <p>制品类型。取值：js_sourcemap、ios_dsym、macos_dsym、windows_pdb、android_mapping、android_native、system_symbol。native_symbol 仅查询历史数据。</p>
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * <p>应用 ID。js_sourcemap 必填，其他应用级制品用于过滤。</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>兼容别名，未传 AppId 时使用。</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>JS 应用版本过滤条件。</p>
                     */
                    std::string m_release;
                    bool m_releaseHasBeenSet;

                    /**
                     * <p>JS 制品的历史 Dist 过滤条件。</p>
                     */
                    std::string m_dist;
                    bool m_distHasBeenSet;

                    /**
                     * <p>JS 制品文件类型过滤条件。</p>
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * <p>应用版本过滤条件。</p>
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                    /**
                     * <p>历史 native_symbol 的平台过滤条件。</p>
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * <p>系统名称。system_symbol 场景过滤条件。</p>
                     */
                    std::string m_oS;
                    bool m_oSHasBeenSet;

                    /**
                     * <p>系统版本。system_symbol 场景过滤条件。</p>
                     */
                    std::string m_oSVersion;
                    bool m_oSVersionHasBeenSet;

                    /**
                     * <p>状态过滤。可按 active、superseded、deleted、invalid 过滤。</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>分页大小。默认 50。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页游标。</p>
                     */
                    std::string m_cursor;
                    bool m_cursorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBESYMBOLARTIFACTSREQUEST_H_
