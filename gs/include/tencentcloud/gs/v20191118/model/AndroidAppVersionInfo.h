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
                     * 获取<p>安卓应用版本</p>
                     * @return AndroidAppVersion <p>安卓应用版本</p>
                     * 
                     */
                    std::string GetAndroidAppVersion() const;

                    /**
                     * 设置<p>安卓应用版本</p>
                     * @param _androidAppVersion <p>安卓应用版本</p>
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
                     * 获取<p>安卓应用版本创建状态，取值：NORMAL：无（默认）、UPLOADING：上传中、CREATING： 创建中、CREATE_FAIL：创建失败、PACKAGE_NAME_MISMATCH：包名不匹配、VERSION_ALREADY_EXISTS：版本已存在、APP_PARSE_FAIL： app 解析失败、APP_EXISTS_SECURITY_RISK：app 存在安全风险、CREATE_SUCCESS：创建成功</p>
                     * @return State <p>安卓应用版本创建状态，取值：NORMAL：无（默认）、UPLOADING：上传中、CREATING： 创建中、CREATE_FAIL：创建失败、PACKAGE_NAME_MISMATCH：包名不匹配、VERSION_ALREADY_EXISTS：版本已存在、APP_PARSE_FAIL： app 解析失败、APP_EXISTS_SECURITY_RISK：app 存在安全风险、CREATE_SUCCESS：创建成功</p>
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置<p>安卓应用版本创建状态，取值：NORMAL：无（默认）、UPLOADING：上传中、CREATING： 创建中、CREATE_FAIL：创建失败、PACKAGE_NAME_MISMATCH：包名不匹配、VERSION_ALREADY_EXISTS：版本已存在、APP_PARSE_FAIL： app 解析失败、APP_EXISTS_SECURITY_RISK：app 存在安全风险、CREATE_SUCCESS：创建成功</p>
                     * @param _state <p>安卓应用版本创建状态，取值：NORMAL：无（默认）、UPLOADING：上传中、CREATING： 创建中、CREATE_FAIL：创建失败、PACKAGE_NAME_MISMATCH：包名不匹配、VERSION_ALREADY_EXISTS：版本已存在、APP_PARSE_FAIL： app 解析失败、APP_EXISTS_SECURITY_RISK：app 存在安全风险、CREATE_SUCCESS：创建成功</p>
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
                     * 获取<p>安卓应用版本创建时间</p>
                     * @return CreateTime <p>安卓应用版本创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>安卓应用版本创建时间</p>
                     * @param _createTime <p>安卓应用版本创建时间</p>
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
                     * 获取<p>shell 安装命令（支持多条命令执行，通过 &amp;&amp; 组合；只在应用 AppMode 为 ADVANCED 高级模式下 才会生效）</p>
                     * @return Command <p>shell 安装命令（支持多条命令执行，通过 &amp;&amp; 组合；只在应用 AppMode 为 ADVANCED 高级模式下 才会生效）</p>
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置<p>shell 安装命令（支持多条命令执行，通过 &amp;&amp; 组合；只在应用 AppMode 为 ADVANCED 高级模式下 才会生效）</p>
                     * @param _command <p>shell 安装命令（支持多条命令执行，通过 &amp;&amp; 组合；只在应用 AppMode 为 ADVANCED 高级模式下 才会生效）</p>
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
                     * 获取<p>shell 卸载命令（支持多条命令执行，通过 &amp;&amp; 组合；只在应用 AppMode 为 ADVANCED 高级模式下 才会生效）</p>
                     * @return UninstallCommand <p>shell 卸载命令（支持多条命令执行，通过 &amp;&amp; 组合；只在应用 AppMode 为 ADVANCED 高级模式下 才会生效）</p>
                     * 
                     */
                    std::string GetUninstallCommand() const;

                    /**
                     * 设置<p>shell 卸载命令（支持多条命令执行，通过 &amp;&amp; 组合；只在应用 AppMode 为 ADVANCED 高级模式下 才会生效）</p>
                     * @param _uninstallCommand <p>shell 卸载命令（支持多条命令执行，通过 &amp;&amp; 组合；只在应用 AppMode 为 ADVANCED 高级模式下 才会生效）</p>
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
                     * 获取<p>应用资源清理模式（实例安装应用所用资源），取值：CLEANUP_ON_UNINSTALL（默认值），卸载 App 时清理；CLEANUP_AFTER_INSTALL，安装 App 后立即清理。普通应用只有 CLEANUP_AFTER_INSTALL 模式。</p>
                     * @return CleanupMode <p>应用资源清理模式（实例安装应用所用资源），取值：CLEANUP_ON_UNINSTALL（默认值），卸载 App 时清理；CLEANUP_AFTER_INSTALL，安装 App 后立即清理。普通应用只有 CLEANUP_AFTER_INSTALL 模式。</p>
                     * 
                     */
                    std::string GetCleanupMode() const;

                    /**
                     * 设置<p>应用资源清理模式（实例安装应用所用资源），取值：CLEANUP_ON_UNINSTALL（默认值），卸载 App 时清理；CLEANUP_AFTER_INSTALL，安装 App 后立即清理。普通应用只有 CLEANUP_AFTER_INSTALL 模式。</p>
                     * @param _cleanupMode <p>应用资源清理模式（实例安装应用所用资源），取值：CLEANUP_ON_UNINSTALL（默认值），卸载 App 时清理；CLEANUP_AFTER_INSTALL，安装 App 后立即清理。普通应用只有 CLEANUP_AFTER_INSTALL 模式。</p>
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
                     * 获取<p>安卓应用版本名称（版本描述、备注）</p>
                     * @return AndroidAppVersionName <p>安卓应用版本名称（版本描述、备注）</p>
                     * 
                     */
                    std::string GetAndroidAppVersionName() const;

                    /**
                     * 设置<p>安卓应用版本名称（版本描述、备注）</p>
                     * @param _androidAppVersionName <p>安卓应用版本名称（版本描述、备注）</p>
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
                     * 获取<p>安卓应用启动页</p>
                     * @return Activity <p>安卓应用启动页</p>
                     * 
                     */
                    std::string GetActivity() const;

                    /**
                     * 设置<p>安卓应用启动页</p>
                     * @param _activity <p>安卓应用启动页</p>
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
                     * 获取<p>应用版本号（Version Name）</p>
                     * @return VersionName <p>应用版本号（Version Name）</p>
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置<p>应用版本号（Version Name）</p>
                     * @param _versionName <p>应用版本号（Version Name）</p>
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
                     * 获取<p>应用包 MD5</p>
                     * @return MD5 <p>应用包 MD5</p>
                     * 
                     */
                    std::string GetMD5() const;

                    /**
                     * 设置<p>应用包 MD5</p>
                     * @param _mD5 <p>应用包 MD5</p>
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
                     * 获取<p>应用包文件大小（字节）</p>
                     * @return FileSize <p>应用包文件大小（字节）</p>
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置<p>应用包文件大小（字节）</p>
                     * @param _fileSize <p>应用包文件大小（字节）</p>
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
                     * 获取<p>安卓应用包名</p>
                     * @return PackageName <p>安卓应用包名</p>
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置<p>安卓应用包名</p>
                     * @param _packageName <p>安卓应用包名</p>
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
                     * <p>安卓应用版本</p>
                     */
                    std::string m_androidAppVersion;
                    bool m_androidAppVersionHasBeenSet;

                    /**
                     * <p>安卓应用版本创建状态，取值：NORMAL：无（默认）、UPLOADING：上传中、CREATING： 创建中、CREATE_FAIL：创建失败、PACKAGE_NAME_MISMATCH：包名不匹配、VERSION_ALREADY_EXISTS：版本已存在、APP_PARSE_FAIL： app 解析失败、APP_EXISTS_SECURITY_RISK：app 存在安全风险、CREATE_SUCCESS：创建成功</p>
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>安卓应用版本创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>shell 安装命令（支持多条命令执行，通过 &amp;&amp; 组合；只在应用 AppMode 为 ADVANCED 高级模式下 才会生效）</p>
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * <p>shell 卸载命令（支持多条命令执行，通过 &amp;&amp; 组合；只在应用 AppMode 为 ADVANCED 高级模式下 才会生效）</p>
                     */
                    std::string m_uninstallCommand;
                    bool m_uninstallCommandHasBeenSet;

                    /**
                     * <p>应用资源清理模式（实例安装应用所用资源），取值：CLEANUP_ON_UNINSTALL（默认值），卸载 App 时清理；CLEANUP_AFTER_INSTALL，安装 App 后立即清理。普通应用只有 CLEANUP_AFTER_INSTALL 模式。</p>
                     */
                    std::string m_cleanupMode;
                    bool m_cleanupModeHasBeenSet;

                    /**
                     * <p>安卓应用版本名称（版本描述、备注）</p>
                     */
                    std::string m_androidAppVersionName;
                    bool m_androidAppVersionNameHasBeenSet;

                    /**
                     * <p>安卓应用启动页</p>
                     */
                    std::string m_activity;
                    bool m_activityHasBeenSet;

                    /**
                     * <p>应用版本号（Version Name）</p>
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * <p>应用包 MD5</p>
                     */
                    std::string m_mD5;
                    bool m_mD5HasBeenSet;

                    /**
                     * <p>应用包文件大小（字节）</p>
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * <p>安卓应用包名</p>
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_ANDROIDAPPVERSIONINFO_H_
