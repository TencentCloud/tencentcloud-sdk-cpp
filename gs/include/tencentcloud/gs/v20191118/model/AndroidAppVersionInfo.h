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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_ANDROIDAPPVERSIONINFO_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_ANDROIDAPPVERSIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * 安卓应用版本信息
                */
                class AndroidAppVersionInfo : public AbstractModel
                {
                public:
                    AndroidAppVersionInfo();
                    ~AndroidAppVersionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取安卓应用版本
                     * @return AndroidAppVersion 安卓应用版本
                     * 
                     */
                    std::string GetAndroidAppVersion() const;

                    /**
                     * 设置安卓应用版本
                     * @param _androidAppVersion 安卓应用版本
                     * 
                     */
                    void SetAndroidAppVersion(const std::string& _androidAppVersion);

                    /**
                     * 判断参数 AndroidAppVersion 是否已赋值
                     * @return AndroidAppVersion 是否已赋值
                     * 
                     */
                    bool AndroidAppVersionHasBeenSet() const;

                    /**
                     * 获取安卓应用版本创建状态，取值：NORMAL：无（默认）、UPLOADING：上传中、CREATING： 创建中、CREATE_FAIL：创建失败、PACKAGE_NAME_MISMATCH：包名不匹配、VERSION_ALREADY_EXISTS：版本已存在、APP_PARSE_FAIL： app 解析失败、APP_EXISTS_SECURITY_RISK：app 存在安全风险、CREATE_SUCCESS：创建成功
                     * @return State 安卓应用版本创建状态，取值：NORMAL：无（默认）、UPLOADING：上传中、CREATING： 创建中、CREATE_FAIL：创建失败、PACKAGE_NAME_MISMATCH：包名不匹配、VERSION_ALREADY_EXISTS：版本已存在、APP_PARSE_FAIL： app 解析失败、APP_EXISTS_SECURITY_RISK：app 存在安全风险、CREATE_SUCCESS：创建成功
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置安卓应用版本创建状态，取值：NORMAL：无（默认）、UPLOADING：上传中、CREATING： 创建中、CREATE_FAIL：创建失败、PACKAGE_NAME_MISMATCH：包名不匹配、VERSION_ALREADY_EXISTS：版本已存在、APP_PARSE_FAIL： app 解析失败、APP_EXISTS_SECURITY_RISK：app 存在安全风险、CREATE_SUCCESS：创建成功
                     * @param _state 安卓应用版本创建状态，取值：NORMAL：无（默认）、UPLOADING：上传中、CREATING： 创建中、CREATE_FAIL：创建失败、PACKAGE_NAME_MISMATCH：包名不匹配、VERSION_ALREADY_EXISTS：版本已存在、APP_PARSE_FAIL： app 解析失败、APP_EXISTS_SECURITY_RISK：app 存在安全风险、CREATE_SUCCESS：创建成功
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取安卓应用版本创建时间
                     * @return CreateTime 安卓应用版本创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置安卓应用版本创建时间
                     * @param _createTime 安卓应用版本创建时间
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
                     * 获取shell 安装命令（支持多条命令执行，通过 && 组合；只在应用 AppMode 为 ADVANCED 高级模式下 才会生效）
                     * @return Command shell 安装命令（支持多条命令执行，通过 && 组合；只在应用 AppMode 为 ADVANCED 高级模式下 才会生效）
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置shell 安装命令（支持多条命令执行，通过 && 组合；只在应用 AppMode 为 ADVANCED 高级模式下 才会生效）
                     * @param _command shell 安装命令（支持多条命令执行，通过 && 组合；只在应用 AppMode 为 ADVANCED 高级模式下 才会生效）
                     * 
                     */
                    void SetCommand(const std::string& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     * 
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取shell 卸载命令（支持多条命令执行，通过 && 组合；只在应用 AppMode 为 ADVANCED 高级模式下 才会生效）
                     * @return UninstallCommand shell 卸载命令（支持多条命令执行，通过 && 组合；只在应用 AppMode 为 ADVANCED 高级模式下 才会生效）
                     * 
                     */
                    std::string GetUninstallCommand() const;

                    /**
                     * 设置shell 卸载命令（支持多条命令执行，通过 && 组合；只在应用 AppMode 为 ADVANCED 高级模式下 才会生效）
                     * @param _uninstallCommand shell 卸载命令（支持多条命令执行，通过 && 组合；只在应用 AppMode 为 ADVANCED 高级模式下 才会生效）
                     * 
                     */
                    void SetUninstallCommand(const std::string& _uninstallCommand);

                    /**
                     * 判断参数 UninstallCommand 是否已赋值
                     * @return UninstallCommand 是否已赋值
                     * 
                     */
                    bool UninstallCommandHasBeenSet() const;

                    /**
                     * 获取应用资源清理模式（实例安装应用所用资源），取值：CLEANUP_ON_UNINSTALL（默认值），卸载 App 时清理；CLEANUP_AFTER_INSTALL，安装 App 后立即清理。普通应用只有 CLEANUP_AFTER_INSTALL 模式。
                     * @return CleanupMode 应用资源清理模式（实例安装应用所用资源），取值：CLEANUP_ON_UNINSTALL（默认值），卸载 App 时清理；CLEANUP_AFTER_INSTALL，安装 App 后立即清理。普通应用只有 CLEANUP_AFTER_INSTALL 模式。
                     * 
                     */
                    std::string GetCleanupMode() const;

                    /**
                     * 设置应用资源清理模式（实例安装应用所用资源），取值：CLEANUP_ON_UNINSTALL（默认值），卸载 App 时清理；CLEANUP_AFTER_INSTALL，安装 App 后立即清理。普通应用只有 CLEANUP_AFTER_INSTALL 模式。
                     * @param _cleanupMode 应用资源清理模式（实例安装应用所用资源），取值：CLEANUP_ON_UNINSTALL（默认值），卸载 App 时清理；CLEANUP_AFTER_INSTALL，安装 App 后立即清理。普通应用只有 CLEANUP_AFTER_INSTALL 模式。
                     * 
                     */
                    void SetCleanupMode(const std::string& _cleanupMode);

                    /**
                     * 判断参数 CleanupMode 是否已赋值
                     * @return CleanupMode 是否已赋值
                     * 
                     */
                    bool CleanupModeHasBeenSet() const;

                    /**
                     * 获取安卓应用版本名称（版本描述、备注）
                     * @return AndroidAppVersionName 安卓应用版本名称（版本描述、备注）
                     * 
                     */
                    std::string GetAndroidAppVersionName() const;

                    /**
                     * 设置安卓应用版本名称（版本描述、备注）
                     * @param _androidAppVersionName 安卓应用版本名称（版本描述、备注）
                     * 
                     */
                    void SetAndroidAppVersionName(const std::string& _androidAppVersionName);

                    /**
                     * 判断参数 AndroidAppVersionName 是否已赋值
                     * @return AndroidAppVersionName 是否已赋值
                     * 
                     */
                    bool AndroidAppVersionNameHasBeenSet() const;

                    /**
                     * 获取安卓应用启动页
                     * @return Activity 安卓应用启动页
                     * 
                     */
                    std::string GetActivity() const;

                    /**
                     * 设置安卓应用启动页
                     * @param _activity 安卓应用启动页
                     * 
                     */
                    void SetActivity(const std::string& _activity);

                    /**
                     * 判断参数 Activity 是否已赋值
                     * @return Activity 是否已赋值
                     * 
                     */
                    bool ActivityHasBeenSet() const;

                    /**
                     * 获取应用版本号（Version Name）
                     * @return VersionName 应用版本号（Version Name）
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置应用版本号（Version Name）
                     * @param _versionName 应用版本号（Version Name）
                     * 
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取应用包 MD5
                     * @return MD5 应用包 MD5
                     * 
                     */
                    std::string GetMD5() const;

                    /**
                     * 设置应用包 MD5
                     * @param _mD5 应用包 MD5
                     * 
                     */
                    void SetMD5(const std::string& _mD5);

                    /**
                     * 判断参数 MD5 是否已赋值
                     * @return MD5 是否已赋值
                     * 
                     */
                    bool MD5HasBeenSet() const;

                    /**
                     * 获取应用包文件大小（字节）
                     * @return FileSize 应用包文件大小（字节）
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置应用包文件大小（字节）
                     * @param _fileSize 应用包文件大小（字节）
                     * 
                     */
                    void SetFileSize(const int64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取安卓应用包名
                     * @return PackageName 安卓应用包名
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置安卓应用包名
                     * @param _packageName 安卓应用包名
                     * 
                     */
                    void SetPackageName(const std::string& _packageName);

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     * 
                     */
                    bool PackageNameHasBeenSet() const;

                private:

                    /**
                     * 安卓应用版本
                     */
                    std::string m_androidAppVersion;
                    bool m_androidAppVersionHasBeenSet;

                    /**
                     * 安卓应用版本创建状态，取值：NORMAL：无（默认）、UPLOADING：上传中、CREATING： 创建中、CREATE_FAIL：创建失败、PACKAGE_NAME_MISMATCH：包名不匹配、VERSION_ALREADY_EXISTS：版本已存在、APP_PARSE_FAIL： app 解析失败、APP_EXISTS_SECURITY_RISK：app 存在安全风险、CREATE_SUCCESS：创建成功
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 安卓应用版本创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * shell 安装命令（支持多条命令执行，通过 && 组合；只在应用 AppMode 为 ADVANCED 高级模式下 才会生效）
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * shell 卸载命令（支持多条命令执行，通过 && 组合；只在应用 AppMode 为 ADVANCED 高级模式下 才会生效）
                     */
                    std::string m_uninstallCommand;
                    bool m_uninstallCommandHasBeenSet;

                    /**
                     * 应用资源清理模式（实例安装应用所用资源），取值：CLEANUP_ON_UNINSTALL（默认值），卸载 App 时清理；CLEANUP_AFTER_INSTALL，安装 App 后立即清理。普通应用只有 CLEANUP_AFTER_INSTALL 模式。
                     */
                    std::string m_cleanupMode;
                    bool m_cleanupModeHasBeenSet;

                    /**
                     * 安卓应用版本名称（版本描述、备注）
                     */
                    std::string m_androidAppVersionName;
                    bool m_androidAppVersionNameHasBeenSet;

                    /**
                     * 安卓应用启动页
                     */
                    std::string m_activity;
                    bool m_activityHasBeenSet;

                    /**
                     * 应用版本号（Version Name）
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * 应用包 MD5
                     */
                    std::string m_mD5;
                    bool m_mD5HasBeenSet;

                    /**
                     * 应用包文件大小（字节）
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 安卓应用包名
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_ANDROIDAPPVERSIONINFO_H_
