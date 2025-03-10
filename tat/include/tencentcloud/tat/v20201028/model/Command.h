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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_COMMAND_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_COMMAND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 命令详情。
                */
                class Command : public AbstractModel
                {
                public:
                    Command();
                    ~Command() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命令ID。
                     * @return CommandId 命令ID。
                     * 
                     */
                    std::string GetCommandId() const;

                    /**
                     * 设置命令ID。
                     * @param _commandId 命令ID。
                     * 
                     */
                    void SetCommandId(const std::string& _commandId);

                    /**
                     * 判断参数 CommandId 是否已赋值
                     * @return CommandId 是否已赋值
                     * 
                     */
                    bool CommandIdHasBeenSet() const;

                    /**
                     * 获取命令名称。
                     * @return CommandName 命令名称。
                     * 
                     */
                    std::string GetCommandName() const;

                    /**
                     * 设置命令名称。
                     * @param _commandName 命令名称。
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
                     * 获取命令描述。
                     * @return Description 命令描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置命令描述。
                     * @param _description 命令描述。
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
                     * 获取Base64编码后的命令内容。
                     * @return Content Base64编码后的命令内容。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Base64编码后的命令内容。
                     * @param _content Base64编码后的命令内容。
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
                     * 获取命令类型。取值为 SHELL、POWERSHELL、BAT 之一。
                     * @return CommandType 命令类型。取值为 SHELL、POWERSHELL、BAT 之一。
                     * 
                     */
                    std::string GetCommandType() const;

                    /**
                     * 设置命令类型。取值为 SHELL、POWERSHELL、BAT 之一。
                     * @param _commandType 命令类型。取值为 SHELL、POWERSHELL、BAT 之一。
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
                     * 获取命令执行路径。
                     * @return WorkingDirectory 命令执行路径。
                     * 
                     */
                    std::string GetWorkingDirectory() const;

                    /**
                     * 设置命令执行路径。
                     * @param _workingDirectory 命令执行路径。
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
                     * 获取命令超时时间。
                     * @return Timeout 命令超时时间。
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置命令超时时间。
                     * @param _timeout 命令超时时间。
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
                     * 获取命令创建时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * @return CreatedTime 命令创建时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置命令创建时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * @param _createdTime 命令创建时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取命令更新时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * @return UpdatedTime 命令更新时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置命令更新时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * @param _updatedTime 命令更新时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取是否启用自定义参数功能。
                     * @return EnableParameter 是否启用自定义参数功能。
                     * 
                     */
                    bool GetEnableParameter() const;

                    /**
                     * 设置是否启用自定义参数功能。
                     * @param _enableParameter 是否启用自定义参数功能。
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
                     * 获取自定义参数的默认取值。
                     * @return DefaultParameters 自定义参数的默认取值。
                     * 
                     */
                    std::string GetDefaultParameters() const;

                    /**
                     * 设置自定义参数的默认取值。
                     * @param _defaultParameters 自定义参数的默认取值。
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
                     * 获取自定义参数的默认取值。
                     * @return DefaultParameterConfs 自定义参数的默认取值。
                     * 
                     */
                    std::vector<DefaultParameterConf> GetDefaultParameterConfs() const;

                    /**
                     * 设置自定义参数的默认取值。
                     * @param _defaultParameterConfs 自定义参数的默认取值。
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
                     * 获取命令关联的场景
                     * @return Scenes 命令关联的场景
                     * 
                     */
                    std::vector<std::string> GetScenes() const;

                    /**
                     * 设置命令关联的场景
                     * @param _scenes 命令关联的场景
                     * 
                     */
                    void SetScenes(const std::vector<std::string>& _scenes);

                    /**
                     * 判断参数 Scenes 是否已赋值
                     * @return Scenes 是否已赋值
                     * 
                     */
                    bool ScenesHasBeenSet() const;

                    /**
                     * 获取命令的结构化描述。公共命令有值，用户命令为空字符串。
                     * @return FormattedDescription 命令的结构化描述。公共命令有值，用户命令为空字符串。
                     * 
                     */
                    std::string GetFormattedDescription() const;

                    /**
                     * 设置命令的结构化描述。公共命令有值，用户命令为空字符串。
                     * @param _formattedDescription 命令的结构化描述。公共命令有值，用户命令为空字符串。
                     * 
                     */
                    void SetFormattedDescription(const std::string& _formattedDescription);

                    /**
                     * 判断参数 FormattedDescription 是否已赋值
                     * @return FormattedDescription 是否已赋值
                     * 
                     */
                    bool FormattedDescriptionHasBeenSet() const;

                    /**
                     * 获取命令创建者。TAT 代表公共命令，USER 代表个人命令。
                     * @return CreatedBy 命令创建者。TAT 代表公共命令，USER 代表个人命令。
                     * 
                     */
                    std::string GetCreatedBy() const;

                    /**
                     * 设置命令创建者。TAT 代表公共命令，USER 代表个人命令。
                     * @param _createdBy 命令创建者。TAT 代表公共命令，USER 代表个人命令。
                     * 
                     */
                    void SetCreatedBy(const std::string& _createdBy);

                    /**
                     * 判断参数 CreatedBy 是否已赋值
                     * @return CreatedBy 是否已赋值
                     * 
                     */
                    bool CreatedByHasBeenSet() const;

                    /**
                     * 获取命令关联的标签列表。
                     * @return Tags 命令关联的标签列表。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置命令关联的标签列表。
                     * @param _tags 命令关联的标签列表。
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
                     * 获取在实例上执行命令的用户名。
                     * @return Username 在实例上执行命令的用户名。
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置在实例上执行命令的用户名。
                     * @param _username 在实例上执行命令的用户名。
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
                     * 获取日志上传的cos bucket 地址。
                     * @return OutputCOSBucketUrl 日志上传的cos bucket 地址。
                     * 
                     */
                    std::string GetOutputCOSBucketUrl() const;

                    /**
                     * 设置日志上传的cos bucket 地址。
                     * @param _outputCOSBucketUrl 日志上传的cos bucket 地址。
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
                     * 获取日志在cos bucket中的目录。
                     * @return OutputCOSKeyPrefix 日志在cos bucket中的目录。
                     * 
                     */
                    std::string GetOutputCOSKeyPrefix() const;

                    /**
                     * 设置日志在cos bucket中的目录。
                     * @param _outputCOSKeyPrefix 日志在cos bucket中的目录。
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
                     * 命令ID。
                     */
                    std::string m_commandId;
                    bool m_commandIdHasBeenSet;

                    /**
                     * 命令名称。
                     */
                    std::string m_commandName;
                    bool m_commandNameHasBeenSet;

                    /**
                     * 命令描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Base64编码后的命令内容。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 命令类型。取值为 SHELL、POWERSHELL、BAT 之一。
                     */
                    std::string m_commandType;
                    bool m_commandTypeHasBeenSet;

                    /**
                     * 命令执行路径。
                     */
                    std::string m_workingDirectory;
                    bool m_workingDirectoryHasBeenSet;

                    /**
                     * 命令超时时间。
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 命令创建时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 命令更新时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * 是否启用自定义参数功能。
                     */
                    bool m_enableParameter;
                    bool m_enableParameterHasBeenSet;

                    /**
                     * 自定义参数的默认取值。
                     */
                    std::string m_defaultParameters;
                    bool m_defaultParametersHasBeenSet;

                    /**
                     * 自定义参数的默认取值。
                     */
                    std::vector<DefaultParameterConf> m_defaultParameterConfs;
                    bool m_defaultParameterConfsHasBeenSet;

                    /**
                     * 命令关联的场景
                     */
                    std::vector<std::string> m_scenes;
                    bool m_scenesHasBeenSet;

                    /**
                     * 命令的结构化描述。公共命令有值，用户命令为空字符串。
                     */
                    std::string m_formattedDescription;
                    bool m_formattedDescriptionHasBeenSet;

                    /**
                     * 命令创建者。TAT 代表公共命令，USER 代表个人命令。
                     */
                    std::string m_createdBy;
                    bool m_createdByHasBeenSet;

                    /**
                     * 命令关联的标签列表。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 在实例上执行命令的用户名。
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 日志上传的cos bucket 地址。
                     */
                    std::string m_outputCOSBucketUrl;
                    bool m_outputCOSBucketUrlHasBeenSet;

                    /**
                     * 日志在cos bucket中的目录。
                     */
                    std::string m_outputCOSKeyPrefix;
                    bool m_outputCOSKeyPrefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_COMMAND_H_
