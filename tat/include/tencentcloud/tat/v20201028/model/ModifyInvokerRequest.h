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

可通过 [DescribeInvokers(查询执行器)](https://cloud.tencent.com/document/api/1340/61759) 接口获取。
                     * @return InvokerId 待修改的执行器ID。

可通过 [DescribeInvokers(查询执行器)](https://cloud.tencent.com/document/api/1340/61759) 接口获取。
                     * 
                     */
                    std::string GetInvokerId() const;

                    /**
                     * 设置待修改的执行器ID。

可通过 [DescribeInvokers(查询执行器)](https://cloud.tencent.com/document/api/1340/61759) 接口获取。
                     * @param _invokerId 待修改的执行器ID。

可通过 [DescribeInvokers(查询执行器)](https://cloud.tencent.com/document/api/1340/61759) 接口获取。
                     * 
                     */
                    void SetInvokerId(const std::string& _invokerId);

                    /**
                     * 判断参数 InvokerId 是否已赋值
                     * @return InvokerId 是否已赋值
                     * 
                     */
                    bool InvokerIdHasBeenSet() const;

                    /**
                     * 获取待修改的执行器名称。长度不超过 120 字符。
                     * @return Name 待修改的执行器名称。长度不超过 120 字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置待修改的执行器名称。长度不超过 120 字符。
                     * @param _name 待修改的执行器名称。长度不超过 120 字符。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取待修改的执行器类型。

可选取值（当前仅支持一种）：

- `SCHEDULE`：周期类型执行器。
                     * @return Type 待修改的执行器类型。

可选取值（当前仅支持一种）：

- `SCHEDULE`：周期类型执行器。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置待修改的执行器类型。

可选取值（当前仅支持一种）：

- `SCHEDULE`：周期类型执行器。
                     * @param _type 待修改的执行器类型。

可选取值（当前仅支持一种）：

- `SCHEDULE`：周期类型执行器。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取待修改的命令ID。

可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取。
                     * @return CommandId 待修改的命令ID。

可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取。
                     * 
                     */
                    std::string GetCommandId() const;

                    /**
                     * 设置待修改的命令ID。

可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取。
                     * @param _commandId 待修改的命令ID。

可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取。
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
                     * 获取待修改的用户名。长度不超过 256 字符。
                     * @return Username 待修改的用户名。长度不超过 256 字符。
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置待修改的用户名。长度不超过 256 字符。
                     * @param _username 待修改的用户名。长度不超过 256 字符。
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
                     * 获取待修改的自定义参数。字段类型为 JSON encode string。

仅在 CommandId 所指命令的 EnableParameter 为 true 时，才允许设置此参数。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取命令的 EnableParameter 设置。
                     * @return Parameters 待修改的自定义参数。字段类型为 JSON encode string。

仅在 CommandId 所指命令的 EnableParameter 为 true 时，才允许设置此参数。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取命令的 EnableParameter 设置。
                     * 
                     */
                    std::string GetParameters() const;

                    /**
                     * 设置待修改的自定义参数。字段类型为 JSON encode string。

仅在 CommandId 所指命令的 EnableParameter 为 true 时，才允许设置此参数。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取命令的 EnableParameter 设置。
                     * @param _parameters 待修改的自定义参数。字段类型为 JSON encode string。

仅在 CommandId 所指命令的 EnableParameter 为 true 时，才允许设置此参数。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取命令的 EnableParameter 设置。
                     * 
                     */
                    void SetParameters(const std::string& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     * 
                     */
                    bool ParametersHasBeenSet() const;

                    /**
                     * 获取待修改的实例ID列表。列表长度上限100。

可通过对应云产品的查询实例接口获取实例 ID。目前支持实例类型：CVM、Lighthouse、TAT 托管实例。

实例需要安装 TAT 客户端, 且客户端为 Online 状态。可通过 [DescribeAutomationAgentStatus(查询客户端状态)](https://cloud.tencent.com/document/api/1340/52682) 接口查询客户端状态。
                     * @return InstanceIds 待修改的实例ID列表。列表长度上限100。

可通过对应云产品的查询实例接口获取实例 ID。目前支持实例类型：CVM、Lighthouse、TAT 托管实例。

实例需要安装 TAT 客户端, 且客户端为 Online 状态。可通过 [DescribeAutomationAgentStatus(查询客户端状态)](https://cloud.tencent.com/document/api/1340/52682) 接口查询客户端状态。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置待修改的实例ID列表。列表长度上限100。

可通过对应云产品的查询实例接口获取实例 ID。目前支持实例类型：CVM、Lighthouse、TAT 托管实例。

实例需要安装 TAT 客户端, 且客户端为 Online 状态。可通过 [DescribeAutomationAgentStatus(查询客户端状态)](https://cloud.tencent.com/document/api/1340/52682) 接口查询客户端状态。
                     * @param _instanceIds 待修改的实例ID列表。列表长度上限100。

可通过对应云产品的查询实例接口获取实例 ID。目前支持实例类型：CVM、Lighthouse、TAT 托管实例。

实例需要安装 TAT 客户端, 且客户端为 Online 状态。可通过 [DescribeAutomationAgentStatus(查询客户端状态)](https://cloud.tencent.com/document/api/1340/52682) 接口查询客户端状态。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取待修改的周期执行器设置。

要将执行器类型修改为 `SCHEDULE` 时，必须指定此参数。
                     * @return ScheduleSettings 待修改的周期执行器设置。

要将执行器类型修改为 `SCHEDULE` 时，必须指定此参数。
                     * 
                     */
                    ScheduleSettings GetScheduleSettings() const;

                    /**
                     * 设置待修改的周期执行器设置。

要将执行器类型修改为 `SCHEDULE` 时，必须指定此参数。
                     * @param _scheduleSettings 待修改的周期执行器设置。

要将执行器类型修改为 `SCHEDULE` 时，必须指定此参数。
                     * 
                     */
                    void SetScheduleSettings(const ScheduleSettings& _scheduleSettings);

                    /**
                     * 判断参数 ScheduleSettings 是否已赋值
                     * @return ScheduleSettings 是否已赋值
                     * 
                     */
                    bool ScheduleSettingsHasBeenSet() const;

                private:

                    /**
                     * 待修改的执行器ID。

可通过 [DescribeInvokers(查询执行器)](https://cloud.tencent.com/document/api/1340/61759) 接口获取。
                     */
                    std::string m_invokerId;
                    bool m_invokerIdHasBeenSet;

                    /**
                     * 待修改的执行器名称。长度不超过 120 字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 待修改的执行器类型。

可选取值（当前仅支持一种）：

- `SCHEDULE`：周期类型执行器。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 待修改的命令ID。

可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取。
                     */
                    std::string m_commandId;
                    bool m_commandIdHasBeenSet;

                    /**
                     * 待修改的用户名。长度不超过 256 字符。
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 待修改的自定义参数。字段类型为 JSON encode string。

仅在 CommandId 所指命令的 EnableParameter 为 true 时，才允许设置此参数。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取命令的 EnableParameter 设置。
                     */
                    std::string m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * 待修改的实例ID列表。列表长度上限100。

可通过对应云产品的查询实例接口获取实例 ID。目前支持实例类型：CVM、Lighthouse、TAT 托管实例。

实例需要安装 TAT 客户端, 且客户端为 Online 状态。可通过 [DescribeAutomationAgentStatus(查询客户端状态)](https://cloud.tencent.com/document/api/1340/52682) 接口查询客户端状态。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 待修改的周期执行器设置。

要将执行器类型修改为 `SCHEDULE` 时，必须指定此参数。
                     */
                    ScheduleSettings m_scheduleSettings;
                    bool m_scheduleSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_MODIFYINVOKERREQUEST_H_
