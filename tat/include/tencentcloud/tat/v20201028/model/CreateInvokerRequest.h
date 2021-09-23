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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_CREATEINVOKERREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_CREATEINVOKERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tat/v20201028/model/ScheduleSettings.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * CreateInvoker请求参数结构体
                */
                class CreateInvokerRequest : public AbstractModel
                {
                public:
                    CreateInvokerRequest();
                    ~CreateInvokerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执行器名称。
                     * @return Name 执行器名称。
                     */
                    std::string GetName() const;

                    /**
                     * 设置执行器名称。
                     * @param Name 执行器名称。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取执行器类型，当前仅支持周期类型执行器，取值：`SCHEDULE` 。
                     * @return Type 执行器类型，当前仅支持周期类型执行器，取值：`SCHEDULE` 。
                     */
                    std::string GetType() const;

                    /**
                     * 设置执行器类型，当前仅支持周期类型执行器，取值：`SCHEDULE` 。
                     * @param Type 执行器类型，当前仅支持周期类型执行器，取值：`SCHEDULE` 。
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取远程命令ID。
                     * @return CommandId 远程命令ID。
                     */
                    std::string GetCommandId() const;

                    /**
                     * 设置远程命令ID。
                     * @param CommandId 远程命令ID。
                     */
                    void SetCommandId(const std::string& _commandId);

                    /**
                     * 判断参数 CommandId 是否已赋值
                     * @return CommandId 是否已赋值
                     */
                    bool CommandIdHasBeenSet() const;

                    /**
                     * 获取触发器关联的实例ID。列表上限 100。
                     * @return InstanceIds 触发器关联的实例ID。列表上限 100。
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置触发器关联的实例ID。列表上限 100。
                     * @param InstanceIds 触发器关联的实例ID。列表上限 100。
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取命令执行用户。
                     * @return Username 命令执行用户。
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置命令执行用户。
                     * @param Username 命令执行用户。
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取命令自定义参数。
                     * @return Parameters 命令自定义参数。
                     */
                    std::string GetParameters() const;

                    /**
                     * 设置命令自定义参数。
                     * @param Parameters 命令自定义参数。
                     */
                    void SetParameters(const std::string& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     */
                    bool ParametersHasBeenSet() const;

                    /**
                     * 获取周期执行器设置，当创建周期执行器时，必须指定此参数。
                     * @return ScheduleSettings 周期执行器设置，当创建周期执行器时，必须指定此参数。
                     */
                    ScheduleSettings GetScheduleSettings() const;

                    /**
                     * 设置周期执行器设置，当创建周期执行器时，必须指定此参数。
                     * @param ScheduleSettings 周期执行器设置，当创建周期执行器时，必须指定此参数。
                     */
                    void SetScheduleSettings(const ScheduleSettings& _scheduleSettings);

                    /**
                     * 判断参数 ScheduleSettings 是否已赋值
                     * @return ScheduleSettings 是否已赋值
                     */
                    bool ScheduleSettingsHasBeenSet() const;

                private:

                    /**
                     * 执行器名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 执行器类型，当前仅支持周期类型执行器，取值：`SCHEDULE` 。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 远程命令ID。
                     */
                    std::string m_commandId;
                    bool m_commandIdHasBeenSet;

                    /**
                     * 触发器关联的实例ID。列表上限 100。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 命令执行用户。
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 命令自定义参数。
                     */
                    std::string m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * 周期执行器设置，当创建周期执行器时，必须指定此参数。
                     */
                    ScheduleSettings m_scheduleSettings;
                    bool m_scheduleSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_CREATEINVOKERREQUEST_H_
