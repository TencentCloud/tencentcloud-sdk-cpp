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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_COMMAND_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_COMMAND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 用户执行TAT命令的数据结构。
                */
                class Command : public AbstractModel
                {
                public:
                    Command();
                    ~Command() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Base64编码后的命令内容，长度不可超过64KB。
                     * @return Content Base64编码后的命令内容，长度不可超过64KB。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Base64编码后的命令内容，长度不可超过64KB。
                     * @param _content Base64编码后的命令内容，长度不可超过64KB。
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取命令超时时间，默认60秒。取值范围[1, 86400]。
                     * @return Timeout 命令超时时间，默认60秒。取值范围[1, 86400]。
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置命令超时时间，默认60秒。取值范围[1, 86400]。
                     * @param _timeout 命令超时时间，默认60秒。取值范围[1, 86400]。
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取命令执行路径，对于 SHELL 命令默认为 /root，对于 POWERSHELL 命令默认为 C:\Program Files\qcloud\tat_agent\workdir。
                     * @return WorkingDirectory 命令执行路径，对于 SHELL 命令默认为 /root，对于 POWERSHELL 命令默认为 C:\Program Files\qcloud\tat_agent\workdir。
                     * 
                     */
                    std::string GetWorkingDirectory() const;

                    /**
                     * 设置命令执行路径，对于 SHELL 命令默认为 /root，对于 POWERSHELL 命令默认为 C:\Program Files\qcloud\tat_agent\workdir。
                     * @param _workingDirectory 命令执行路径，对于 SHELL 命令默认为 /root，对于 POWERSHELL 命令默认为 C:\Program Files\qcloud\tat_agent\workdir。
                     * 
                     */
                    void SetWorkingDirectory(const std::string& _workingDirectory);

                    /**
                     * 判断参数 WorkingDirectory 是否已赋值
                     * @return WorkingDirectory 是否已赋值
                     * 
                     */
                    bool WorkingDirectoryHasBeenSet() const;

                    /**
                     * 获取在 Lighthouse 实例中执行命令的用户名称。
默认情况下，在 Linux 实例中以 root 用户执行命令；在Windows 实例中以 System 用户执行命令。
                     * @return Username 在 Lighthouse 实例中执行命令的用户名称。
默认情况下，在 Linux 实例中以 root 用户执行命令；在Windows 实例中以 System 用户执行命令。
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置在 Lighthouse 实例中执行命令的用户名称。
默认情况下，在 Linux 实例中以 root 用户执行命令；在Windows 实例中以 System 用户执行命令。
                     * @param _username 在 Lighthouse 实例中执行命令的用户名称。
默认情况下，在 Linux 实例中以 root 用户执行命令；在Windows 实例中以 System 用户执行命令。
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                private:

                    /**
                     * Base64编码后的命令内容，长度不可超过64KB。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 命令超时时间，默认60秒。取值范围[1, 86400]。
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 命令执行路径，对于 SHELL 命令默认为 /root，对于 POWERSHELL 命令默认为 C:\Program Files\qcloud\tat_agent\workdir。
                     */
                    std::string m_workingDirectory;
                    bool m_workingDirectoryHasBeenSet;

                    /**
                     * 在 Lighthouse 实例中执行命令的用户名称。
默认情况下，在 Linux 实例中以 root 用户执行命令；在Windows 实例中以 System 用户执行命令。
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_COMMAND_H_
