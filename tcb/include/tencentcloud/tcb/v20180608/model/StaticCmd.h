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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_STATICCMD_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_STATICCMD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 静态托管的执行命令
                */
                class StaticCmd : public AbstractModel
                {
                public:
                    StaticCmd();
                    ~StaticCmd() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取构建命令
                     * @return BuildCmd 构建命令
                     * 
                     */
                    std::string GetBuildCmd() const;

                    /**
                     * 设置构建命令
                     * @param _buildCmd 构建命令
                     * 
                     */
                    void SetBuildCmd(const std::string& _buildCmd);

                    /**
                     * 判断参数 BuildCmd 是否已赋值
                     * @return BuildCmd 是否已赋值
                     * 
                     */
                    bool BuildCmdHasBeenSet() const;

                    /**
                     * 获取安装命令
                     * @return InstallCmd 安装命令
                     * 
                     */
                    std::string GetInstallCmd() const;

                    /**
                     * 设置安装命令
                     * @param _installCmd 安装命令
                     * 
                     */
                    void SetInstallCmd(const std::string& _installCmd);

                    /**
                     * 判断参数 InstallCmd 是否已赋值
                     * @return InstallCmd 是否已赋值
                     * 
                     */
                    bool InstallCmdHasBeenSet() const;

                    /**
                     * 获取部署命令
                     * @return DeployCmd 部署命令
                     * 
                     */
                    std::string GetDeployCmd() const;

                    /**
                     * 设置部署命令
                     * @param _deployCmd 部署命令
                     * 
                     */
                    void SetDeployCmd(const std::string& _deployCmd);

                    /**
                     * 判断参数 DeployCmd 是否已赋值
                     * @return DeployCmd 是否已赋值
                     * 
                     */
                    bool DeployCmdHasBeenSet() const;

                private:

                    /**
                     * 构建命令
                     */
                    std::string m_buildCmd;
                    bool m_buildCmdHasBeenSet;

                    /**
                     * 安装命令
                     */
                    std::string m_installCmd;
                    bool m_installCmdHasBeenSet;

                    /**
                     * 部署命令
                     */
                    std::string m_deployCmd;
                    bool m_deployCmdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_STATICCMD_H_
