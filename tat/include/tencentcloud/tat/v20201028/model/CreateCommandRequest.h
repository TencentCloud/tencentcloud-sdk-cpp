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
#include <tencentcloud/tat/v20201028/model/DefaultParameterConf.h>
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
                     * 
                     */
                    std::string GetCommandName() const;

                    /**
                     * 设置命令名称。名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点，最大长度不能超60个字节。
                     * @param _commandName 命令名称。名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点，最大长度不能超60个字节。
                     * 
                     */
                    void SetCommandName(const std::string& _commandName);

                    /**
                     * 判断参数 CommandName 是否已赋值
                     * @return CommandName 是否已赋值
                     * 
                     */
                    bool CommandNameHasBeenSet() const;

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
                     * 获取命令描述。不超过120字符。
                     * @return Description 命令描述。不超过120字符。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置命令描述。不超过120字符。
                     * @param _description 命令描述。不超过120字符。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取命令类型，目前支持取值：SHELL、POWERSHELL、BAT。默认：SHELL。
                     * @return CommandType 命令类型，目前支持取值：SHELL、POWERSHELL、BAT。默认：SHELL。
                     * 
                     */
                    std::string GetCommandType() const;

                    /**
                     * 设置命令类型，目前支持取值：SHELL、POWERSHELL、BAT。默认：SHELL。
                     * @param _commandType 命令类型，目前支持取值：SHELL、POWERSHELL、BAT。默认：SHELL。
                     * 
                     */
                    void SetCommandType(const std::string& _commandType);

                    /**
                     * 判断参数 CommandType 是否已赋值
                     * @return CommandType 是否已赋值
                     * 
                     */
                    bool CommandTypeHasBeenSet() const;

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
                     * 获取命令超时时间，默认60秒。取值范围[1, 86400]。
                     * @return Timeout 命令超时时间，默认60秒。取值范围[1, 86400]。
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置命令超时时间，默认60秒。取值范围[1, 86400]。
                     * @param _timeout 命令超时时间，默认60秒。取值范围[1, 86400]。
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取是否启用自定义参数功能。
一旦创建，此值不提供修改。
默认值：false。
                     * @return EnableParameter 是否启用自定义参数功能。
一旦创建，此值不提供修改。
默认值：false。
                     * 
                     */
                    bool GetEnableParameter() const;

                    /**
                     * 设置是否启用自定义参数功能。
一旦创建，此值不提供修改。
默认值：false。
                     * @param _enableParameter 是否启用自定义参数功能。
一旦创建，此值不提供修改。
默认值：false。
                     * 
                     */
                    void SetEnableParameter(const bool& _enableParameter);

                    /**
                     * 判断参数 EnableParameter 是否已赋值
                     * @return EnableParameter 是否已赋值
                     * 
                     */
                    bool EnableParameterHasBeenSet() const;

                    /**
                     * 获取启用自定义参数功能时，自定义参数的默认取值。字段类型为json encoded string。如：{"varA": "222"}。
key为自定义参数名称，value为该参数的默认取值。kv均为字符串型。
如果InvokeCommand时未提供参数取值，将使用这里的默认值进行替换。
参数不支持同时指定 `DefaultParameters` 和 `DefaultParameterConfs` 。
仅在 EnableParameter 参数为 true 时，才允许设置此参数。
自定义参数最多20个。
自定义参数名称需符合以下规范：字符数目上限64，可选范围【a-zA-Z0-9-_】。
                     * @return DefaultParameters 启用自定义参数功能时，自定义参数的默认取值。字段类型为json encoded string。如：{"varA": "222"}。
key为自定义参数名称，value为该参数的默认取值。kv均为字符串型。
如果InvokeCommand时未提供参数取值，将使用这里的默认值进行替换。
参数不支持同时指定 `DefaultParameters` 和 `DefaultParameterConfs` 。
仅在 EnableParameter 参数为 true 时，才允许设置此参数。
自定义参数最多20个。
自定义参数名称需符合以下规范：字符数目上限64，可选范围【a-zA-Z0-9-_】。
                     * 
                     */
                    std::string GetDefaultParameters() const;

                    /**
                     * 设置启用自定义参数功能时，自定义参数的默认取值。字段类型为json encoded string。如：{"varA": "222"}。
key为自定义参数名称，value为该参数的默认取值。kv均为字符串型。
如果InvokeCommand时未提供参数取值，将使用这里的默认值进行替换。
参数不支持同时指定 `DefaultParameters` 和 `DefaultParameterConfs` 。
仅在 EnableParameter 参数为 true 时，才允许设置此参数。
自定义参数最多20个。
自定义参数名称需符合以下规范：字符数目上限64，可选范围【a-zA-Z0-9-_】。
                     * @param _defaultParameters 启用自定义参数功能时，自定义参数的默认取值。字段类型为json encoded string。如：{"varA": "222"}。
key为自定义参数名称，value为该参数的默认取值。kv均为字符串型。
如果InvokeCommand时未提供参数取值，将使用这里的默认值进行替换。
参数不支持同时指定 `DefaultParameters` 和 `DefaultParameterConfs` 。
仅在 EnableParameter 参数为 true 时，才允许设置此参数。
自定义参数最多20个。
自定义参数名称需符合以下规范：字符数目上限64，可选范围【a-zA-Z0-9-_】。
                     * 
                     */
                    void SetDefaultParameters(const std::string& _defaultParameters);

                    /**
                     * 判断参数 DefaultParameters 是否已赋值
                     * @return DefaultParameters 是否已赋值
                     * 
                     */
                    bool DefaultParametersHasBeenSet() const;

                    /**
                     * 获取自定义参数数组。
如果InvokeCommand时未提供参数取值，将使用这里的默认值进行替换。
参数不支持同时指定 `DefaultParameters` 和 `DefaultParameterConfs` 。
仅在 EnableParameter 参数为 true 时，才允许设置此参数。
自定义参数最多20个。
                     * @return DefaultParameterConfs 自定义参数数组。
如果InvokeCommand时未提供参数取值，将使用这里的默认值进行替换。
参数不支持同时指定 `DefaultParameters` 和 `DefaultParameterConfs` 。
仅在 EnableParameter 参数为 true 时，才允许设置此参数。
自定义参数最多20个。
                     * 
                     */
                    std::vector<DefaultParameterConf> GetDefaultParameterConfs() const;

                    /**
                     * 设置自定义参数数组。
如果InvokeCommand时未提供参数取值，将使用这里的默认值进行替换。
参数不支持同时指定 `DefaultParameters` 和 `DefaultParameterConfs` 。
仅在 EnableParameter 参数为 true 时，才允许设置此参数。
自定义参数最多20个。
                     * @param _defaultParameterConfs 自定义参数数组。
如果InvokeCommand时未提供参数取值，将使用这里的默认值进行替换。
参数不支持同时指定 `DefaultParameters` 和 `DefaultParameterConfs` 。
仅在 EnableParameter 参数为 true 时，才允许设置此参数。
自定义参数最多20个。
                     * 
                     */
                    void SetDefaultParameterConfs(const std::vector<DefaultParameterConf>& _defaultParameterConfs);

                    /**
                     * 判断参数 DefaultParameterConfs 是否已赋值
                     * @return DefaultParameterConfs 是否已赋值
                     * 
                     */
                    bool DefaultParameterConfsHasBeenSet() const;

                    /**
                     * 获取为命令关联的标签，列表长度不超过10。
                     * @return Tags 为命令关联的标签，列表长度不超过10。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置为命令关联的标签，列表长度不超过10。
                     * @param _tags 为命令关联的标签，列表长度不超过10。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取在 CVM 或 Lighthouse 实例中执行命令的用户名称。
使用最小权限执行命令是权限管理的最佳实践，建议您以普通用户身份执行云助手命令。默认情况下，在 Linux 实例中以 root 用户执行命令；在Windows 实例中以 System 用户执行命令。
                     * @return Username 在 CVM 或 Lighthouse 实例中执行命令的用户名称。
使用最小权限执行命令是权限管理的最佳实践，建议您以普通用户身份执行云助手命令。默认情况下，在 Linux 实例中以 root 用户执行命令；在Windows 实例中以 System 用户执行命令。
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置在 CVM 或 Lighthouse 实例中执行命令的用户名称。
使用最小权限执行命令是权限管理的最佳实践，建议您以普通用户身份执行云助手命令。默认情况下，在 Linux 实例中以 root 用户执行命令；在Windows 实例中以 System 用户执行命令。
                     * @param _username 在 CVM 或 Lighthouse 实例中执行命令的用户名称。
使用最小权限执行命令是权限管理的最佳实践，建议您以普通用户身份执行云助手命令。默认情况下，在 Linux 实例中以 root 用户执行命令；在Windows 实例中以 System 用户执行命令。
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取指定日志上传的cos bucket 地址，必须以https开头，如 https://BucketName-123454321.cos.ap-beijing.myqcloud.com。
                     * @return OutputCOSBucketUrl 指定日志上传的cos bucket 地址，必须以https开头，如 https://BucketName-123454321.cos.ap-beijing.myqcloud.com。
                     * 
                     */
                    std::string GetOutputCOSBucketUrl() const;

                    /**
                     * 设置指定日志上传的cos bucket 地址，必须以https开头，如 https://BucketName-123454321.cos.ap-beijing.myqcloud.com。
                     * @param _outputCOSBucketUrl 指定日志上传的cos bucket 地址，必须以https开头，如 https://BucketName-123454321.cos.ap-beijing.myqcloud.com。
                     * 
                     */
                    void SetOutputCOSBucketUrl(const std::string& _outputCOSBucketUrl);

                    /**
                     * 判断参数 OutputCOSBucketUrl 是否已赋值
                     * @return OutputCOSBucketUrl 是否已赋值
                     * 
                     */
                    bool OutputCOSBucketUrlHasBeenSet() const;

                    /**
                     * 获取指定日志在cos bucket中的目录，目录命名有如下规则：
1. 可用数字、中英文和可见字符的组合，长度最多为60。
2. 用 / 分割路径，可快速创建子目录。
3. 不允许连续 / ；不允许以 / 开头；不允许以..作为文件夹名称
                     * @return OutputCOSKeyPrefix 指定日志在cos bucket中的目录，目录命名有如下规则：
1. 可用数字、中英文和可见字符的组合，长度最多为60。
2. 用 / 分割路径，可快速创建子目录。
3. 不允许连续 / ；不允许以 / 开头；不允许以..作为文件夹名称
                     * 
                     */
                    std::string GetOutputCOSKeyPrefix() const;

                    /**
                     * 设置指定日志在cos bucket中的目录，目录命名有如下规则：
1. 可用数字、中英文和可见字符的组合，长度最多为60。
2. 用 / 分割路径，可快速创建子目录。
3. 不允许连续 / ；不允许以 / 开头；不允许以..作为文件夹名称
                     * @param _outputCOSKeyPrefix 指定日志在cos bucket中的目录，目录命名有如下规则：
1. 可用数字、中英文和可见字符的组合，长度最多为60。
2. 用 / 分割路径，可快速创建子目录。
3. 不允许连续 / ；不允许以 / 开头；不允许以..作为文件夹名称
                     * 
                     */
                    void SetOutputCOSKeyPrefix(const std::string& _outputCOSKeyPrefix);

                    /**
                     * 判断参数 OutputCOSKeyPrefix 是否已赋值
                     * @return OutputCOSKeyPrefix 是否已赋值
                     * 
                     */
                    bool OutputCOSKeyPrefixHasBeenSet() const;

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
                     * 命令类型，目前支持取值：SHELL、POWERSHELL、BAT。默认：SHELL。
                     */
                    std::string m_commandType;
                    bool m_commandTypeHasBeenSet;

                    /**
                     * 命令执行路径，对于 SHELL 命令默认为 /root，对于 POWERSHELL 命令默认为 C:\Program Files\qcloud\tat_agent\workdir。
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
                     * 启用自定义参数功能时，自定义参数的默认取值。字段类型为json encoded string。如：{"varA": "222"}。
key为自定义参数名称，value为该参数的默认取值。kv均为字符串型。
如果InvokeCommand时未提供参数取值，将使用这里的默认值进行替换。
参数不支持同时指定 `DefaultParameters` 和 `DefaultParameterConfs` 。
仅在 EnableParameter 参数为 true 时，才允许设置此参数。
自定义参数最多20个。
自定义参数名称需符合以下规范：字符数目上限64，可选范围【a-zA-Z0-9-_】。
                     */
                    std::string m_defaultParameters;
                    bool m_defaultParametersHasBeenSet;

                    /**
                     * 自定义参数数组。
如果InvokeCommand时未提供参数取值，将使用这里的默认值进行替换。
参数不支持同时指定 `DefaultParameters` 和 `DefaultParameterConfs` 。
仅在 EnableParameter 参数为 true 时，才允许设置此参数。
自定义参数最多20个。
                     */
                    std::vector<DefaultParameterConf> m_defaultParameterConfs;
                    bool m_defaultParameterConfsHasBeenSet;

                    /**
                     * 为命令关联的标签，列表长度不超过10。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 在 CVM 或 Lighthouse 实例中执行命令的用户名称。
使用最小权限执行命令是权限管理的最佳实践，建议您以普通用户身份执行云助手命令。默认情况下，在 Linux 实例中以 root 用户执行命令；在Windows 实例中以 System 用户执行命令。
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 指定日志上传的cos bucket 地址，必须以https开头，如 https://BucketName-123454321.cos.ap-beijing.myqcloud.com。
                     */
                    std::string m_outputCOSBucketUrl;
                    bool m_outputCOSBucketUrlHasBeenSet;

                    /**
                     * 指定日志在cos bucket中的目录，目录命名有如下规则：
1. 可用数字、中英文和可见字符的组合，长度最多为60。
2. 用 / 分割路径，可快速创建子目录。
3. 不允许连续 / ；不允许以 / 开头；不允许以..作为文件夹名称
                     */
                    std::string m_outputCOSKeyPrefix;
                    bool m_outputCOSKeyPrefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_CREATECOMMANDREQUEST_H_
