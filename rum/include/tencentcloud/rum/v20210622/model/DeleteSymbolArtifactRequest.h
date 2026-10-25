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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DELETESYMBOLARTIFACTREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DELETESYMBOLARTIFACTREQUEST_H_

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
                * DeleteSymbolArtifact请求参数结构体
                */
                class DeleteSymbolArtifactRequest : public AbstractModel
                {
                public:
                    DeleteSymbolArtifactRequest();
                    ~DeleteSymbolArtifactRequest() = default;
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
                     * 获取<p>制品 ID。</p>
                     * @return ArtifactId <p>制品 ID。</p>
                     * 
                     */
                    std::string GetArtifactId() const;

                    /**
                     * 设置<p>制品 ID。</p>
                     * @param _artifactId <p>制品 ID。</p>
                     * 
                     */
                    void SetArtifactId(const std::string& _artifactId);

                    /**
                     * 判断参数 ArtifactId 是否已赋值
                     * @return ArtifactId 是否已赋值
                     * 
                     */
                    bool ArtifactIdHasBeenSet() const;

                    /**
                     * 获取<p>应用 ID。删除应用级制品时必填，须与制品所属应用一致。</p>
                     * @return AppId <p>应用 ID。删除应用级制品时必填，须与制品所属应用一致。</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用 ID。删除应用级制品时必填，须与制品所属应用一致。</p>
                     * @param _appId <p>应用 ID。删除应用级制品时必填，须与制品所属应用一致。</p>
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
                     * 获取<p>兼容字段，请勿传入。</p>
                     * @return AppVersion <p>兼容字段，请勿传入。</p>
                     * 
                     */
                    std::string GetAppVersion() const;

                    /**
                     * 设置<p>兼容字段，请勿传入。</p>
                     * @param _appVersion <p>兼容字段，请勿传入。</p>
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
                     * 获取<p>兼容字段，请勿传入。</p>
                     * @return Platform <p>兼容字段，请勿传入。</p>
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置<p>兼容字段，请勿传入。</p>
                     * @param _platform <p>兼容字段，请勿传入。</p>
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
                     * 获取<p>系统名称。system_symbol 场景可用于归属校验。</p>
                     * @return OS <p>系统名称。system_symbol 场景可用于归属校验。</p>
                     * 
                     */
                    std::string GetOS() const;

                    /**
                     * 设置<p>系统名称。system_symbol 场景可用于归属校验。</p>
                     * @param _oS <p>系统名称。system_symbol 场景可用于归属校验。</p>
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
                     * 获取<p>系统版本。system_symbol 场景可用于归属校验。</p>
                     * @return OSVersion <p>系统版本。system_symbol 场景可用于归属校验。</p>
                     * 
                     */
                    std::string GetOSVersion() const;

                    /**
                     * 设置<p>系统版本。system_symbol 场景可用于归属校验。</p>
                     * @param _oSVersion <p>系统版本。system_symbol 场景可用于归属校验。</p>
                     * 
                     */
                    void SetOSVersion(const std::string& _oSVersion);

                    /**
                     * 判断参数 OSVersion 是否已赋值
                     * @return OSVersion 是否已赋值
                     * 
                     */
                    bool OSVersionHasBeenSet() const;

                private:

                    /**
                     * <p>制品类型。取值：js_sourcemap、ios_dsym、macos_dsym、windows_pdb、android_mapping、android_native、system_symbol。</p>
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * <p>制品 ID。</p>
                     */
                    std::string m_artifactId;
                    bool m_artifactIdHasBeenSet;

                    /**
                     * <p>应用 ID。删除应用级制品时必填，须与制品所属应用一致。</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>兼容别名，未传 AppId 时使用。</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>兼容字段，请勿传入。</p>
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                    /**
                     * <p>兼容字段，请勿传入。</p>
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * <p>系统名称。system_symbol 场景可用于归属校验。</p>
                     */
                    std::string m_oS;
                    bool m_oSHasBeenSet;

                    /**
                     * <p>系统版本。system_symbol 场景可用于归属校验。</p>
                     */
                    std::string m_oSVersion;
                    bool m_oSVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DELETESYMBOLARTIFACTREQUEST_H_
