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
                     */
                    std::string GetCommandId() const;

                    /**
                     * 设置命令ID。
                     * @param CommandId 命令ID。
                     */
                    void SetCommandId(const std::string& _commandId);

                    /**
                     * 判断参数 CommandId 是否已赋值
                     * @return CommandId 是否已赋值
                     */
                    bool CommandIdHasBeenSet() const;

                    /**
                     * 获取命令名称。
                     * @return CommandName 命令名称。
                     */
                    std::string GetCommandName() const;

                    /**
                     * 设置命令名称。
                     * @param CommandName 命令名称。
                     */
                    void SetCommandName(const std::string& _commandName);

                    /**
                     * 判断参数 CommandName 是否已赋值
                     * @return CommandName 是否已赋值
                     */
                    bool CommandNameHasBeenSet() const;

                    /**
                     * 获取命令描述。
                     * @return Description 命令描述。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置命令描述。
                     * @param Description 命令描述。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Base64编码后的命令内容。
                     * @return Content Base64编码后的命令内容。
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Base64编码后的命令内容。
                     * @param Content Base64编码后的命令内容。
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取命令类型。
                     * @return CommandType 命令类型。
                     */
                    std::string GetCommandType() const;

                    /**
                     * 设置命令类型。
                     * @param CommandType 命令类型。
                     */
                    void SetCommandType(const std::string& _commandType);

                    /**
                     * 判断参数 CommandType 是否已赋值
                     * @return CommandType 是否已赋值
                     */
                    bool CommandTypeHasBeenSet() const;

                    /**
                     * 获取命令执行路径。
                     * @return WorkingDirectory 命令执行路径。
                     */
                    std::string GetWorkingDirectory() const;

                    /**
                     * 设置命令执行路径。
                     * @param WorkingDirectory 命令执行路径。
                     */
                    void SetWorkingDirectory(const std::string& _workingDirectory);

                    /**
                     * 判断参数 WorkingDirectory 是否已赋值
                     * @return WorkingDirectory 是否已赋值
                     */
                    bool WorkingDirectoryHasBeenSet() const;

                    /**
                     * 获取命令超时时间。
                     * @return Timeout 命令超时时间。
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置命令超时时间。
                     * @param Timeout 命令超时时间。
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取命令创建时间。
                     * @return CreatedTime 命令创建时间。
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置命令创建时间。
                     * @param CreatedTime 命令创建时间。
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取命令更新时间。
                     * @return UpdatedTime 命令更新时间。
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置命令更新时间。
                     * @param UpdatedTime 命令更新时间。
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取是否启用自定义参数功能。
                     * @return EnableParameter 是否启用自定义参数功能。
                     */
                    bool GetEnableParameter() const;

                    /**
                     * 设置是否启用自定义参数功能。
                     * @param EnableParameter 是否启用自定义参数功能。
                     */
                    void SetEnableParameter(const bool& _enableParameter);

                    /**
                     * 判断参数 EnableParameter 是否已赋值
                     * @return EnableParameter 是否已赋值
                     */
                    bool EnableParameterHasBeenSet() const;

                    /**
                     * 获取自定义参数的默认取值。
                     * @return DefaultParameters 自定义参数的默认取值。
                     */
                    std::string GetDefaultParameters() const;

                    /**
                     * 设置自定义参数的默认取值。
                     * @param DefaultParameters 自定义参数的默认取值。
                     */
                    void SetDefaultParameters(const std::string& _defaultParameters);

                    /**
                     * 判断参数 DefaultParameters 是否已赋值
                     * @return DefaultParameters 是否已赋值
                     */
                    bool DefaultParametersHasBeenSet() const;

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
                     * 命令类型。
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
                     * 命令创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 命令更新时间。
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_COMMAND_H_
