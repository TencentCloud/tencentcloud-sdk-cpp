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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_CREATEANDROIDAPPVERSIONREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_CREATEANDROIDAPPVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateAndroidAppVersion请求参数结构体
                */
                class CreateAndroidAppVersionRequest : public AbstractModel
                {
                public:
                    CreateAndroidAppVersionRequest();
                    ~CreateAndroidAppVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return AndroidAppId 应用ID
                     * 
                     */
                    std::string GetAndroidAppId() const;

                    /**
                     * 设置应用ID
                     * @param _androidAppId 应用ID
                     * 
                     */
                    void SetAndroidAppId(const std::string& _androidAppId);

                    /**
                     * 判断参数 AndroidAppId 是否已赋值
                     * @return AndroidAppId 是否已赋值
                     * 
                     */
                    bool AndroidAppIdHasBeenSet() const;

                    /**
                     * 获取应用包下载地址
                     * @return DownloadUrl 应用包下载地址
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 设置应用包下载地址
                     * @param _downloadUrl 应用包下载地址
                     * 
                     */
                    void SetDownloadUrl(const std::string& _downloadUrl);

                    /**
                     * 判断参数 DownloadUrl 是否已赋值
                     * @return DownloadUrl 是否已赋值
                     * 
                     */
                    bool DownloadUrlHasBeenSet() const;

                    /**
                     * 获取应用 shell 安装命令（支持多条命令执行，通过 && 组合；只在应用 AppMode 为 ADVANCED 高级模式下 才会生效）
                     * @return Command 应用 shell 安装命令（支持多条命令执行，通过 && 组合；只在应用 AppMode 为 ADVANCED 高级模式下 才会生效）
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置应用 shell 安装命令（支持多条命令执行，通过 && 组合；只在应用 AppMode 为 ADVANCED 高级模式下 才会生效）
                     * @param _command 应用 shell 安装命令（支持多条命令执行，通过 && 组合；只在应用 AppMode 为 ADVANCED 高级模式下 才会生效）
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
                     * 获取应用 shell 卸载命令（支持多条命令执行，通过 && 组合；只在应用 AppMode 为 ADVANCED 高级模式下 才会生效）
                     * @return UninstallCommand 应用 shell 卸载命令（支持多条命令执行，通过 && 组合；只在应用 AppMode 为 ADVANCED 高级模式下 才会生效）
                     * 
                     */
                    std::string GetUninstallCommand() const;

                    /**
                     * 设置应用 shell 卸载命令（支持多条命令执行，通过 && 组合；只在应用 AppMode 为 ADVANCED 高级模式下 才会生效）
                     * @param _uninstallCommand 应用 shell 卸载命令（支持多条命令执行，通过 && 组合；只在应用 AppMode 为 ADVANCED 高级模式下 才会生效）
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

                private:

                    /**
                     * 应用ID
                     */
                    std::string m_androidAppId;
                    bool m_androidAppIdHasBeenSet;

                    /**
                     * 应用包下载地址
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * 应用 shell 安装命令（支持多条命令执行，通过 && 组合；只在应用 AppMode 为 ADVANCED 高级模式下 才会生效）
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * 应用 shell 卸载命令（支持多条命令执行，通过 && 组合；只在应用 AppMode 为 ADVANCED 高级模式下 才会生效）
                     */
                    std::string m_uninstallCommand;
                    bool m_uninstallCommandHasBeenSet;

                    /**
                     * 应用资源清理模式（实例安装应用所用资源），取值：CLEANUP_ON_UNINSTALL（默认值），卸载 App 时清理；CLEANUP_AFTER_INSTALL，安装 App 后立即清理。普通应用只有 CLEANUP_AFTER_INSTALL 模式。
                     */
                    std::string m_cleanupMode;
                    bool m_cleanupModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_CREATEANDROIDAPPVERSIONREQUEST_H_
