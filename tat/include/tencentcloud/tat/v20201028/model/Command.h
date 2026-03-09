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
                     * 获取<p>命令ID。</p>
                     * @return CommandId <p>命令ID。</p>
                     * 
                     */
                    std::string GetCommandId() const;

                    /**
                     * 设置<p>命令ID。</p>
                     * @param _commandId <p>命令ID。</p>
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
                     * 获取<p>命令名称。</p>
                     * @return CommandName <p>命令名称。</p>
                     * 
                     */
                    std::string GetCommandName() const;

                    /**
                     * 设置<p>命令名称。</p>
                     * @param _commandName <p>命令名称。</p>
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
                     * 获取<p>命令描述。</p>
                     * @return Description <p>命令描述。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>命令描述。</p>
                     * @param _description <p>命令描述。</p>
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
                     * 获取<p>Base64编码后的命令内容。</p>
                     * @return Content <p>Base64编码后的命令内容。</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>Base64编码后的命令内容。</p>
                     * @param _content <p>Base64编码后的命令内容。</p>
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
                     * 获取<p>命令类型。取值为 SHELL、POWERSHELL、BAT 之一。</p>
                     * @return CommandType <p>命令类型。取值为 SHELL、POWERSHELL、BAT 之一。</p>
                     * 
                     */
                    std::string GetCommandType() const;

                    /**
                     * 设置<p>命令类型。取值为 SHELL、POWERSHELL、BAT 之一。</p>
                     * @param _commandType <p>命令类型。取值为 SHELL、POWERSHELL、BAT 之一。</p>
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
                     * 获取<p>命令执行路径。</p>
                     * @return WorkingDirectory <p>命令执行路径。</p>
                     * 
                     */
                    std::string GetWorkingDirectory() const;

                    /**
                     * 设置<p>命令执行路径。</p>
                     * @param _workingDirectory <p>命令执行路径。</p>
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
                     * 获取<p>命令超时时间。</p><p>单位：秒</p><p>指定 OutputCOSBucketUrl 参数时，超时时间将包含命令输出上传 COS 的耗时</p>
                     * @return Timeout <p>命令超时时间。</p><p>单位：秒</p><p>指定 OutputCOSBucketUrl 参数时，超时时间将包含命令输出上传 COS 的耗时</p>
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置<p>命令超时时间。</p><p>单位：秒</p><p>指定 OutputCOSBucketUrl 参数时，超时时间将包含命令输出上传 COS 的耗时</p>
                     * @param _timeout <p>命令超时时间。</p><p>单位：秒</p><p>指定 OutputCOSBucketUrl 参数时，超时时间将包含命令输出上传 COS 的耗时</p>
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
                     * 获取<p>命令创建时间。格式为：YYYY-MM-DDThh:mm:ssZ</p>
                     * @return CreatedTime <p>命令创建时间。格式为：YYYY-MM-DDThh:mm:ssZ</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>命令创建时间。格式为：YYYY-MM-DDThh:mm:ssZ</p>
                     * @param _createdTime <p>命令创建时间。格式为：YYYY-MM-DDThh:mm:ssZ</p>
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
                     * 获取<p>命令更新时间。格式为：YYYY-MM-DDThh:mm:ssZ</p>
                     * @return UpdatedTime <p>命令更新时间。格式为：YYYY-MM-DDThh:mm:ssZ</p>
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置<p>命令更新时间。格式为：YYYY-MM-DDThh:mm:ssZ</p>
                     * @param _updatedTime <p>命令更新时间。格式为：YYYY-MM-DDThh:mm:ssZ</p>
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
                     * 获取<p>是否启用自定义参数功能。</p>
                     * @return EnableParameter <p>是否启用自定义参数功能。</p>
                     * 
                     */
                    bool GetEnableParameter() const;

                    /**
                     * 设置<p>是否启用自定义参数功能。</p>
                     * @param _enableParameter <p>是否启用自定义参数功能。</p>
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
                     * 获取<p>自定义参数的默认取值。</p>
                     * @return DefaultParameters <p>自定义参数的默认取值。</p>
                     * 
                     */
                    std::string GetDefaultParameters() const;

                    /**
                     * 设置<p>自定义参数的默认取值。</p>
                     * @param _defaultParameters <p>自定义参数的默认取值。</p>
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
                     * 获取<p>自定义参数的默认取值。</p>
                     * @return DefaultParameterConfs <p>自定义参数的默认取值。</p>
                     * 
                     */
                    std::vector<DefaultParameterConf> GetDefaultParameterConfs() const;

                    /**
                     * 设置<p>自定义参数的默认取值。</p>
                     * @param _defaultParameterConfs <p>自定义参数的默认取值。</p>
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
                     * 获取<p>命令关联的场景</p>
                     * @return Scenes <p>命令关联的场景</p>
                     * 
                     */
                    std::vector<std::string> GetScenes() const;

                    /**
                     * 设置<p>命令关联的场景</p>
                     * @param _scenes <p>命令关联的场景</p>
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
                     * 获取<p>命令的结构化描述。公共命令有值，用户命令为空字符串。</p>
                     * @return FormattedDescription <p>命令的结构化描述。公共命令有值，用户命令为空字符串。</p>
                     * 
                     */
                    std::string GetFormattedDescription() const;

                    /**
                     * 设置<p>命令的结构化描述。公共命令有值，用户命令为空字符串。</p>
                     * @param _formattedDescription <p>命令的结构化描述。公共命令有值，用户命令为空字符串。</p>
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
                     * 获取<p>命令创建者。</p><p>枚举值：</p><ul><li>TAT： 公共命令</li><li>USER： 个人创建的命令</li></ul>
                     * @return CreatedBy <p>命令创建者。</p><p>枚举值：</p><ul><li>TAT： 公共命令</li><li>USER： 个人创建的命令</li></ul>
                     * 
                     */
                    std::string GetCreatedBy() const;

                    /**
                     * 设置<p>命令创建者。</p><p>枚举值：</p><ul><li>TAT： 公共命令</li><li>USER： 个人创建的命令</li></ul>
                     * @param _createdBy <p>命令创建者。</p><p>枚举值：</p><ul><li>TAT： 公共命令</li><li>USER： 个人创建的命令</li></ul>
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
                     * 获取<p>命令关联的标签列表。</p>
                     * @return Tags <p>命令关联的标签列表。</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>命令关联的标签列表。</p>
                     * @param _tags <p>命令关联的标签列表。</p>
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
                     * 获取<p>在实例上执行命令的用户名。</p>
                     * @return Username <p>在实例上执行命令的用户名。</p>
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置<p>在实例上执行命令的用户名。</p>
                     * @param _username <p>在实例上执行命令的用户名。</p>
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
                     * 获取<p>日志上传的cos bucket 地址。</p>
                     * @return OutputCOSBucketUrl <p>日志上传的cos bucket 地址。</p>
                     * 
                     */
                    std::string GetOutputCOSBucketUrl() const;

                    /**
                     * 设置<p>日志上传的cos bucket 地址。</p>
                     * @param _outputCOSBucketUrl <p>日志上传的cos bucket 地址。</p>
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
                     * 获取<p>日志在cos bucket中的目录。</p>
                     * @return OutputCOSKeyPrefix <p>日志在cos bucket中的目录。</p>
                     * 
                     */
                    std::string GetOutputCOSKeyPrefix() const;

                    /**
                     * 设置<p>日志在cos bucket中的目录。</p>
                     * @param _outputCOSKeyPrefix <p>日志在cos bucket中的目录。</p>
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
                     * <p>命令ID。</p>
                     */
                    std::string m_commandId;
                    bool m_commandIdHasBeenSet;

                    /**
                     * <p>命令名称。</p>
                     */
                    std::string m_commandName;
                    bool m_commandNameHasBeenSet;

                    /**
                     * <p>命令描述。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Base64编码后的命令内容。</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>命令类型。取值为 SHELL、POWERSHELL、BAT 之一。</p>
                     */
                    std::string m_commandType;
                    bool m_commandTypeHasBeenSet;

                    /**
                     * <p>命令执行路径。</p>
                     */
                    std::string m_workingDirectory;
                    bool m_workingDirectoryHasBeenSet;

                    /**
                     * <p>命令超时时间。</p><p>单位：秒</p><p>指定 OutputCOSBucketUrl 参数时，超时时间将包含命令输出上传 COS 的耗时</p>
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>命令创建时间。格式为：YYYY-MM-DDThh:mm:ssZ</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>命令更新时间。格式为：YYYY-MM-DDThh:mm:ssZ</p>
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * <p>是否启用自定义参数功能。</p>
                     */
                    bool m_enableParameter;
                    bool m_enableParameterHasBeenSet;

                    /**
                     * <p>自定义参数的默认取值。</p>
                     */
                    std::string m_defaultParameters;
                    bool m_defaultParametersHasBeenSet;

                    /**
                     * <p>自定义参数的默认取值。</p>
                     */
                    std::vector<DefaultParameterConf> m_defaultParameterConfs;
                    bool m_defaultParameterConfsHasBeenSet;

                    /**
                     * <p>命令关联的场景</p>
                     */
                    std::vector<std::string> m_scenes;
                    bool m_scenesHasBeenSet;

                    /**
                     * <p>命令的结构化描述。公共命令有值，用户命令为空字符串。</p>
                     */
                    std::string m_formattedDescription;
                    bool m_formattedDescriptionHasBeenSet;

                    /**
                     * <p>命令创建者。</p><p>枚举值：</p><ul><li>TAT： 公共命令</li><li>USER： 个人创建的命令</li></ul>
                     */
                    std::string m_createdBy;
                    bool m_createdByHasBeenSet;

                    /**
                     * <p>命令关联的标签列表。</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>在实例上执行命令的用户名。</p>
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * <p>日志上传的cos bucket 地址。</p>
                     */
                    std::string m_outputCOSBucketUrl;
                    bool m_outputCOSBucketUrlHasBeenSet;

                    /**
                     * <p>日志在cos bucket中的目录。</p>
                     */
                    std::string m_outputCOSKeyPrefix;
                    bool m_outputCOSKeyPrefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_COMMAND_H_
