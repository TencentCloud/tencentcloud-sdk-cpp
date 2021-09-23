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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_MODIFYINVOKERREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_MODIFYINVOKERREQUEST_H_

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
                * ModifyInvoker请求参数结构体
                */
                class ModifyInvokerRequest : public AbstractModel
                {
                public:
                    ModifyInvokerRequest();
                    ~ModifyInvokerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待修改的执行器ID。
                     * @return InvokerId 待修改的执行器ID。
                     */
                    std::string GetInvokerId() const;

                    /**
                     * 设置待修改的执行器ID。
                     * @param InvokerId 待修改的执行器ID。
                     */
                    void SetInvokerId(const std::string& _invokerId);

                    /**
                     * 判断参数 InvokerId 是否已赋值
                     * @return InvokerId 是否已赋值
                     */
                    bool InvokerIdHasBeenSet() const;

                    /**
                     * 获取待修改的执行器名称。
                     * @return Name 待修改的执行器名称。
                     */
                    std::string GetName() const;

                    /**
                     * 设置待修改的执行器名称。
                     * @param Name 待修改的执行器名称。
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
                     * 获取待修改的命令ID。
                     * @return CommandId 待修改的命令ID。
                     */
                    std::string GetCommandId() const;

                    /**
                     * 设置待修改的命令ID。
                     * @param CommandId 待修改的命令ID。
                     */
                    void SetCommandId(const std::string& _commandId);

                    /**
                     * 判断参数 CommandId 是否已赋值
                     * @return CommandId 是否已赋值
                     */
                    bool CommandIdHasBeenSet() const;

                    /**
                     * 获取待修改的用户名。
                     * @return Username 待修改的用户名。
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置待修改的用户名。
                     * @param Username 待修改的用户名。
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取待修改的自定义参数。
                     * @return Parameters 待修改的自定义参数。
                     */
                    std::string GetParameters() const;

                    /**
                     * 设置待修改的自定义参数。
                     * @param Parameters 待修改的自定义参数。
                     */
                    void SetParameters(const std::string& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     */
                    bool ParametersHasBeenSet() const;

                    /**
                     * 获取待修改的实例ID列表。列表长度上限100。
                     * @return InstanceIds 待修改的实例ID列表。列表长度上限100。
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置待修改的实例ID列表。列表长度上限100。
                     * @param InstanceIds 待修改的实例ID列表。列表长度上限100。
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取待修改的周期执行器设置。
                     * @return ScheduleSettings 待修改的周期执行器设置。
                     */
                    ScheduleSettings GetScheduleSettings() const;

                    /**
                     * 设置待修改的周期执行器设置。
                     * @param ScheduleSettings 待修改的周期执行器设置。
                     */
                    void SetScheduleSettings(const ScheduleSettings& _scheduleSettings);

                    /**
                     * 判断参数 ScheduleSettings 是否已赋值
                     * @return ScheduleSettings 是否已赋值
                     */
                    bool ScheduleSettingsHasBeenSet() const;

                private:

                    /**
                     * 待修改的执行器ID。
                     */
                    std::string m_invokerId;
                    bool m_invokerIdHasBeenSet;

                    /**
                     * 待修改的执行器名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 执行器类型，当前仅支持周期类型执行器，取值：`SCHEDULE` 。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 待修改的命令ID。
                     */
                    std::string m_commandId;
                    bool m_commandIdHasBeenSet;

                    /**
                     * 待修改的用户名。
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 待修改的自定义参数。
                     */
                    std::string m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * 待修改的实例ID列表。列表长度上限100。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 待修改的周期执行器设置。
                     */
                    ScheduleSettings m_scheduleSettings;
                    bool m_scheduleSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_MODIFYINVOKERREQUEST_H_
