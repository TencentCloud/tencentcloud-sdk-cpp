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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_CREATECOMMANDTASKREQUEST_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_CREATECOMMANDTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * CreateCommandTask请求参数结构体
                */
                class CreateCommandTaskRequest : public AbstractModel
                {
                public:
                    CreateCommandTaskRequest();
                    ~CreateCommandTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取脚本任务，需要 Base64 编码
                     * @return Command 脚本任务，需要 Base64 编码
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置脚本任务，需要 Base64 编码
                     * @param _command 脚本任务，需要 Base64 编码
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
                     * 获取脚本任务类型：windows 桌面可选有：    PowerShellScript — powershell脚本    BatScript — Bat 脚本
                     * @return Type 脚本任务类型：windows 桌面可选有：    PowerShellScript — powershell脚本    BatScript — Bat 脚本
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置脚本任务类型：windows 桌面可选有：    PowerShellScript — powershell脚本    BatScript — Bat 脚本
                     * @param _type 脚本任务类型：windows 桌面可选有：    PowerShellScript — powershell脚本    BatScript — Bat 脚本
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取执行脚本任务的实例列表
                     * @return InstanceIds 执行脚本任务的实例列表
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置执行脚本任务的实例列表
                     * @param _instanceIds 执行脚本任务的实例列表
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取是否以绑定用户身份执行，默认 System身份运行false： System身份运行，默认行为true：以绑定用户身份执行
                     * @return RunAsBoundUser 是否以绑定用户身份执行，默认 System身份运行false： System身份运行，默认行为true：以绑定用户身份执行
                     * 
                     */
                    bool GetRunAsBoundUser() const;

                    /**
                     * 设置是否以绑定用户身份执行，默认 System身份运行false： System身份运行，默认行为true：以绑定用户身份执行
                     * @param _runAsBoundUser 是否以绑定用户身份执行，默认 System身份运行false： System身份运行，默认行为true：以绑定用户身份执行
                     * 
                     */
                    void SetRunAsBoundUser(const bool& _runAsBoundUser);

                    /**
                     * 判断参数 RunAsBoundUser 是否已赋值
                     * @return RunAsBoundUser 是否已赋值
                     * 
                     */
                    bool RunAsBoundUserHasBeenSet() const;

                    /**
                     * 获取是否前台运行false：后台运行，默认行为true：前台运行
                     * @return RunForeground 是否前台运行false：后台运行，默认行为true：前台运行
                     * 
                     */
                    bool GetRunForeground() const;

                    /**
                     * 设置是否前台运行false：后台运行，默认行为true：前台运行
                     * @param _runForeground 是否前台运行false：后台运行，默认行为true：前台运行
                     * 
                     */
                    void SetRunForeground(const bool& _runForeground);

                    /**
                     * 判断参数 RunForeground 是否已赋值
                     * @return RunForeground 是否已赋值
                     * 
                     */
                    bool RunForegroundHasBeenSet() const;

                private:

                    /**
                     * 脚本任务，需要 Base64 编码
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * 脚本任务类型：windows 桌面可选有：    PowerShellScript — powershell脚本    BatScript — Bat 脚本
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 执行脚本任务的实例列表
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 是否以绑定用户身份执行，默认 System身份运行false： System身份运行，默认行为true：以绑定用户身份执行
                     */
                    bool m_runAsBoundUser;
                    bool m_runAsBoundUserHasBeenSet;

                    /**
                     * 是否前台运行false：后台运行，默认行为true：前台运行
                     */
                    bool m_runForeground;
                    bool m_runForegroundHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_CREATECOMMANDTASKREQUEST_H_
