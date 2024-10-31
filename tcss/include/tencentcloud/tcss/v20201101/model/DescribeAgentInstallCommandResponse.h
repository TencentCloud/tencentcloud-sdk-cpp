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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEAGENTINSTALLCOMMANDRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEAGENTINSTALLCOMMANDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeAgentInstallCommand返回参数结构体
                */
                class DescribeAgentInstallCommandResponse : public AbstractModel
                {
                public:
                    DescribeAgentInstallCommandResponse();
                    ~DescribeAgentInstallCommandResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取linux系统安装命令
                     * @return LinuxCommand linux系统安装命令
                     * 
                     */
                    std::string GetLinuxCommand() const;

                    /**
                     * 判断参数 LinuxCommand 是否已赋值
                     * @return LinuxCommand 是否已赋值
                     * 
                     */
                    bool LinuxCommandHasBeenSet() const;

                    /**
                     * 获取windows系统安装命令（windows2008及以上）
                     * @return WindowsCommand windows系统安装命令（windows2008及以上）
                     * 
                     */
                    std::string GetWindowsCommand() const;

                    /**
                     * 判断参数 WindowsCommand 是否已赋值
                     * @return WindowsCommand 是否已赋值
                     * 
                     */
                    bool WindowsCommandHasBeenSet() const;

                    /**
                     * 获取windows系统安装命令第一步（windows2003）
                     * @return WindowsStepOne windows系统安装命令第一步（windows2003）
                     * 
                     */
                    std::string GetWindowsStepOne() const;

                    /**
                     * 判断参数 WindowsStepOne 是否已赋值
                     * @return WindowsStepOne 是否已赋值
                     * 
                     */
                    bool WindowsStepOneHasBeenSet() const;

                    /**
                     * 获取windows系统安装命令第二步（windows2003）
                     * @return WindowsStepTwo windows系统安装命令第二步（windows2003）
                     * 
                     */
                    std::string GetWindowsStepTwo() const;

                    /**
                     * 判断参数 WindowsStepTwo 是否已赋值
                     * @return WindowsStepTwo 是否已赋值
                     * 
                     */
                    bool WindowsStepTwoHasBeenSet() const;

                    /**
                     * 获取windows版agent下载链接
                     * @return WindowsDownloadUrl windows版agent下载链接
                     * 
                     */
                    std::string GetWindowsDownloadUrl() const;

                    /**
                     * 判断参数 WindowsDownloadUrl 是否已赋值
                     * @return WindowsDownloadUrl 是否已赋值
                     * 
                     */
                    bool WindowsDownloadUrlHasBeenSet() const;

                    /**
                     * 获取arm架构系统安装命令
                     * @return ARMCommand arm架构系统安装命令
                     * 
                     */
                    std::string GetARMCommand() const;

                    /**
                     * 判断参数 ARMCommand 是否已赋值
                     * @return ARMCommand 是否已赋值
                     * 
                     */
                    bool ARMCommandHasBeenSet() const;

                private:

                    /**
                     * linux系统安装命令
                     */
                    std::string m_linuxCommand;
                    bool m_linuxCommandHasBeenSet;

                    /**
                     * windows系统安装命令（windows2008及以上）
                     */
                    std::string m_windowsCommand;
                    bool m_windowsCommandHasBeenSet;

                    /**
                     * windows系统安装命令第一步（windows2003）
                     */
                    std::string m_windowsStepOne;
                    bool m_windowsStepOneHasBeenSet;

                    /**
                     * windows系统安装命令第二步（windows2003）
                     */
                    std::string m_windowsStepTwo;
                    bool m_windowsStepTwoHasBeenSet;

                    /**
                     * windows版agent下载链接
                     */
                    std::string m_windowsDownloadUrl;
                    bool m_windowsDownloadUrlHasBeenSet;

                    /**
                     * arm架构系统安装命令
                     */
                    std::string m_aRMCommand;
                    bool m_aRMCommandHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEAGENTINSTALLCOMMANDRESPONSE_H_
