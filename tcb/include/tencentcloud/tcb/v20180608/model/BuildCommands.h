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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_BUILDCOMMANDS_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_BUILDCOMMANDS_H_

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
                * 构建命令
                */
                class BuildCommands : public AbstractModel
                {
                public:
                    BuildCommands();
                    ~BuildCommands() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>平台生成默认 install step 时执行</p>
                     * @return InstallCmd <p>平台生成默认 install step 时执行</p>
                     * 
                     */
                    std::string GetInstallCmd() const;

                    /**
                     * 设置<p>平台生成默认 install step 时执行</p>
                     * @param _installCmd <p>平台生成默认 install step 时执行</p>
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
                     * 获取<p>平台生成默认build step 时执行</p>
                     * @return BuildCmd <p>平台生成默认build step 时执行</p>
                     * 
                     */
                    std::string GetBuildCmd() const;

                    /**
                     * 设置<p>平台生成默认build step 时执行</p>
                     * @param _buildCmd <p>平台生成默认build step 时执行</p>
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
                     * 获取<p>平台生成默认deploy step 时执行</p>
                     * @return DeployCmd <p>平台生成默认deploy step 时执行</p>
                     * 
                     */
                    std::string GetDeployCmd() const;

                    /**
                     * 设置<p>平台生成默认deploy step 时执行</p>
                     * @param _deployCmd <p>平台生成默认deploy step 时执行</p>
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
                     * <p>平台生成默认 install step 时执行</p>
                     */
                    std::string m_installCmd;
                    bool m_installCmdHasBeenSet;

                    /**
                     * <p>平台生成默认build step 时执行</p>
                     */
                    std::string m_buildCmd;
                    bool m_buildCmdHasBeenSet;

                    /**
                     * <p>平台生成默认deploy step 时执行</p>
                     */
                    std::string m_deployCmd;
                    bool m_deployCmdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_BUILDCOMMANDS_H_
