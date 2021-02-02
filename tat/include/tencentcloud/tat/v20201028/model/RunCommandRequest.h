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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_RUNCOMMANDREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_RUNCOMMANDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * RunCommand请求参数结构体
                */
                class RunCommandRequest : public AbstractModel
                {
                public:
                    RunCommandRequest();
                    ~RunCommandRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Base64编码后的命令内容，长度不可超过64KB。
                     * @return Content Base64编码后的命令内容，长度不可超过64KB。
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Base64编码后的命令内容，长度不可超过64KB。
                     * @param Content Base64编码后的命令内容，长度不可超过64KB。
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取待执行命令的实例ID列表。 支持实例类型：
<li> CVM
<li> LIGHTHOUSE
                     * @return InstanceIds 待执行命令的实例ID列表。 支持实例类型：
<li> CVM
<li> LIGHTHOUSE
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置待执行命令的实例ID列表。 支持实例类型：
<li> CVM
<li> LIGHTHOUSE
                     * @param InstanceIds 待执行命令的实例ID列表。 支持实例类型：
<li> CVM
<li> LIGHTHOUSE
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取命令名称。名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点，最大长度不能超60个字节。
                     * @return CommandName 命令名称。名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点，最大长度不能超60个字节。
                     */
                    std::string GetCommandName() const;

                    /**
                     * 设置命令名称。名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点，最大长度不能超60个字节。
                     * @param CommandName 命令名称。名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点，最大长度不能超60个字节。
                     */
                    void SetCommandName(const std::string& _commandName);

                    /**
                     * 判断参数 CommandName 是否已赋值
                     * @return CommandName 是否已赋值
                     */
                    bool CommandNameHasBeenSet() const;

                    /**
                     * 获取命令描述。不超过120字符。
                     * @return Description 命令描述。不超过120字符。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置命令描述。不超过120字符。
                     * @param Description 命令描述。不超过120字符。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取命令类型，目前仅支持取值：SHELL。默认：SHELL。
                     * @return CommandType 命令类型，目前仅支持取值：SHELL。默认：SHELL。
                     */
                    std::string GetCommandType() const;

                    /**
                     * 设置命令类型，目前仅支持取值：SHELL。默认：SHELL。
                     * @param CommandType 命令类型，目前仅支持取值：SHELL。默认：SHELL。
                     */
                    void SetCommandType(const std::string& _commandType);

                    /**
                     * 判断参数 CommandType 是否已赋值
                     * @return CommandType 是否已赋值
                     */
                    bool CommandTypeHasBeenSet() const;

                    /**
                     * 获取命令执行路径，默认：/root。
                     * @return WorkingDirectory 命令执行路径，默认：/root。
                     */
                    std::string GetWorkingDirectory() const;

                    /**
                     * 设置命令执行路径，默认：/root。
                     * @param WorkingDirectory 命令执行路径，默认：/root。
                     */
                    void SetWorkingDirectory(const std::string& _workingDirectory);

                    /**
                     * 判断参数 WorkingDirectory 是否已赋值
                     * @return WorkingDirectory 是否已赋值
                     */
                    bool WorkingDirectoryHasBeenSet() const;

                    /**
                     * 获取命令超时时间，默认60秒。取值范围[1, 86400]。
                     * @return Timeout 命令超时时间，默认60秒。取值范围[1, 86400]。
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置命令超时时间，默认60秒。取值范围[1, 86400]。
                     * @param Timeout 命令超时时间，默认60秒。取值范围[1, 86400]。
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取是否保存命令，取值范围：
<li> True：保存
<li> False：不保存
默认为 False。
                     * @return SaveCommand 是否保存命令，取值范围：
<li> True：保存
<li> False：不保存
默认为 False。
                     */
                    bool GetSaveCommand() const;

                    /**
                     * 设置是否保存命令，取值范围：
<li> True：保存
<li> False：不保存
默认为 False。
                     * @param SaveCommand 是否保存命令，取值范围：
<li> True：保存
<li> False：不保存
默认为 False。
                     */
                    void SetSaveCommand(const bool& _saveCommand);

                    /**
                     * 判断参数 SaveCommand 是否已赋值
                     * @return SaveCommand 是否已赋值
                     */
                    bool SaveCommandHasBeenSet() const;

                private:

                    /**
                     * Base64编码后的命令内容，长度不可超过64KB。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 待执行命令的实例ID列表。 支持实例类型：
<li> CVM
<li> LIGHTHOUSE
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 命令名称。名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点，最大长度不能超60个字节。
                     */
                    std::string m_commandName;
                    bool m_commandNameHasBeenSet;

                    /**
                     * 命令描述。不超过120字符。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 命令类型，目前仅支持取值：SHELL。默认：SHELL。
                     */
                    std::string m_commandType;
                    bool m_commandTypeHasBeenSet;

                    /**
                     * 命令执行路径，默认：/root。
                     */
                    std::string m_workingDirectory;
                    bool m_workingDirectoryHasBeenSet;

                    /**
                     * 命令超时时间，默认60秒。取值范围[1, 86400]。
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 是否保存命令，取值范围：
<li> True：保存
<li> False：不保存
默认为 False。
                     */
                    bool m_saveCommand;
                    bool m_saveCommandHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_RUNCOMMANDREQUEST_H_
