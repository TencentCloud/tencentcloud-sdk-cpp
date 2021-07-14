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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_CREATECOMMANDREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_CREATECOMMANDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tat/v20201028/model/Tag.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * CreateCommand请求参数结构体
                */
                class CreateCommandRequest : public AbstractModel
                {
                public:
                    CreateCommandRequest();
                    ~CreateCommandRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取是否启用自定义参数功能。
一旦创建，此值不提供修改。
默认值：false。
                     * @return EnableParameter 是否启用自定义参数功能。
一旦创建，此值不提供修改。
默认值：false。
                     */
                    bool GetEnableParameter() const;

                    /**
                     * 设置是否启用自定义参数功能。
一旦创建，此值不提供修改。
默认值：false。
                     * @param EnableParameter 是否启用自定义参数功能。
一旦创建，此值不提供修改。
默认值：false。
                     */
                    void SetEnableParameter(const bool& _enableParameter);

                    /**
                     * 判断参数 EnableParameter 是否已赋值
                     * @return EnableParameter 是否已赋值
                     */
                    bool EnableParameterHasBeenSet() const;

                    /**
                     * 获取启用自定义参数功能时，自定义参数的默认取值。字段类型为json encoded string。如：{\"varA\": \"222\"}。
key为自定义参数名称，value为该参数的默认取值。kv均为字符串型。
如果InvokeCommand时未提供参数取值，将使用这里的默认值进行替换。
自定义参数最多20个。
自定义参数名称需符合以下规范：字符数目上限64，可选范围【a-zA-Z0-9-_】。
                     * @return DefaultParameters 启用自定义参数功能时，自定义参数的默认取值。字段类型为json encoded string。如：{\"varA\": \"222\"}。
key为自定义参数名称，value为该参数的默认取值。kv均为字符串型。
如果InvokeCommand时未提供参数取值，将使用这里的默认值进行替换。
自定义参数最多20个。
自定义参数名称需符合以下规范：字符数目上限64，可选范围【a-zA-Z0-9-_】。
                     */
                    std::string GetDefaultParameters() const;

                    /**
                     * 设置启用自定义参数功能时，自定义参数的默认取值。字段类型为json encoded string。如：{\"varA\": \"222\"}。
key为自定义参数名称，value为该参数的默认取值。kv均为字符串型。
如果InvokeCommand时未提供参数取值，将使用这里的默认值进行替换。
自定义参数最多20个。
自定义参数名称需符合以下规范：字符数目上限64，可选范围【a-zA-Z0-9-_】。
                     * @param DefaultParameters 启用自定义参数功能时，自定义参数的默认取值。字段类型为json encoded string。如：{\"varA\": \"222\"}。
key为自定义参数名称，value为该参数的默认取值。kv均为字符串型。
如果InvokeCommand时未提供参数取值，将使用这里的默认值进行替换。
自定义参数最多20个。
自定义参数名称需符合以下规范：字符数目上限64，可选范围【a-zA-Z0-9-_】。
                     */
                    void SetDefaultParameters(const std::string& _defaultParameters);

                    /**
                     * 判断参数 DefaultParameters 是否已赋值
                     * @return DefaultParameters 是否已赋值
                     */
                    bool DefaultParametersHasBeenSet() const;

                    /**
                     * 获取为命令关联的标签，列表长度不超过10。
                     * @return Tags 为命令关联的标签，列表长度不超过10。
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置为命令关联的标签，列表长度不超过10。
                     * @param Tags 为命令关联的标签，列表长度不超过10。
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取在 CVM 或 Lighthouse 实例中执行命令的用户名称。
使用最小权限执行命令是权限管理的最佳实践，建议您以普通用户身份执行云助手命令。默认情况下，在Linux实例中以root用户执行命令。
                     * @return Username 在 CVM 或 Lighthouse 实例中执行命令的用户名称。
使用最小权限执行命令是权限管理的最佳实践，建议您以普通用户身份执行云助手命令。默认情况下，在Linux实例中以root用户执行命令。
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置在 CVM 或 Lighthouse 实例中执行命令的用户名称。
使用最小权限执行命令是权限管理的最佳实践，建议您以普通用户身份执行云助手命令。默认情况下，在Linux实例中以root用户执行命令。
                     * @param Username 在 CVM 或 Lighthouse 实例中执行命令的用户名称。
使用最小权限执行命令是权限管理的最佳实践，建议您以普通用户身份执行云助手命令。默认情况下，在Linux实例中以root用户执行命令。
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     */
                    bool UsernameHasBeenSet() const;

                private:

                    /**
                     * 命令名称。名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点，最大长度不能超60个字节。
                     */
                    std::string m_commandName;
                    bool m_commandNameHasBeenSet;

                    /**
                     * Base64编码后的命令内容，长度不可超过64KB。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

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
                     * 是否启用自定义参数功能。
一旦创建，此值不提供修改。
默认值：false。
                     */
                    bool m_enableParameter;
                    bool m_enableParameterHasBeenSet;

                    /**
                     * 启用自定义参数功能时，自定义参数的默认取值。字段类型为json encoded string。如：{\"varA\": \"222\"}。
key为自定义参数名称，value为该参数的默认取值。kv均为字符串型。
如果InvokeCommand时未提供参数取值，将使用这里的默认值进行替换。
自定义参数最多20个。
自定义参数名称需符合以下规范：字符数目上限64，可选范围【a-zA-Z0-9-_】。
                     */
                    std::string m_defaultParameters;
                    bool m_defaultParametersHasBeenSet;

                    /**
                     * 为命令关联的标签，列表长度不超过10。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 在 CVM 或 Lighthouse 实例中执行命令的用户名称。
使用最小权限执行命令是权限管理的最佳实践，建议您以普通用户身份执行云助手命令。默认情况下，在Linux实例中以root用户执行命令。
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_CREATECOMMANDREQUEST_H_
