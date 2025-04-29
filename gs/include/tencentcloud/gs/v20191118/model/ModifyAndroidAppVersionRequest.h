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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_MODIFYANDROIDAPPVERSIONREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_MODIFYANDROIDAPPVERSIONREQUEST_H_

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
                * ModifyAndroidAppVersion请求参数结构体
                */
                class ModifyAndroidAppVersionRequest : public AbstractModel
                {
                public:
                    ModifyAndroidAppVersionRequest();
                    ~ModifyAndroidAppVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取安卓应用 Id
                     * @return AndroidAppId 安卓应用 Id
                     * 
                     */
                    std::string GetAndroidAppId() const;

                    /**
                     * 设置安卓应用 Id
                     * @param _androidAppId 安卓应用 Id
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
                     * 获取安卓应用版本 Id
                     * @return AndroidAppVersion 安卓应用版本 Id
                     * 
                     */
                    std::string GetAndroidAppVersion() const;

                    /**
                     * 设置安卓应用版本 Id
                     * @param _androidAppVersion 安卓应用版本 Id
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
                     * 获取安卓应用版本名称
                     * @return AndroidAppVersionName 安卓应用版本名称
                     * 
                     */
                    std::string GetAndroidAppVersionName() const;

                    /**
                     * 设置安卓应用版本名称
                     * @param _androidAppVersionName 安卓应用版本名称
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

                private:

                    /**
                     * 安卓应用 Id
                     */
                    std::string m_androidAppId;
                    bool m_androidAppIdHasBeenSet;

                    /**
                     * 安卓应用版本 Id
                     */
                    std::string m_androidAppVersion;
                    bool m_androidAppVersionHasBeenSet;

                    /**
                     * 安卓应用版本名称
                     */
                    std::string m_androidAppVersionName;
                    bool m_androidAppVersionNameHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_MODIFYANDROIDAPPVERSIONREQUEST_H_
