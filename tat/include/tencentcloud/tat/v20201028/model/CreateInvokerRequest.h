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
                     * 获取执行器名称。长度不超过 120 字符。
                     * @return Name 执行器名称。长度不超过 120 字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置执行器名称。长度不超过 120 字符。
                     * @param _name 执行器名称。长度不超过 120 字符。
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
                     * 获取执行器类型。

可选取值（当前仅支持一种）：

- `SCHEDULE`：周期类型执行器。
                     * @return Type 执行器类型。

可选取值（当前仅支持一种）：

- `SCHEDULE`：周期类型执行器。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置执行器类型。

可选取值（当前仅支持一种）：

- `SCHEDULE`：周期类型执行器。
                     * @param _type 执行器类型。

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
                     * 获取远程命令ID。

可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取。
                     * @return CommandId 远程命令ID。

可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取。
                     * 
                     */
                    std::string GetCommandId() const;

                    /**
                     * 设置远程命令ID。

可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取。
                     * @param _commandId 远程命令ID。

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
                     * 获取触发器关联的实例ID。列表上限 100。

可通过对应云产品的查询实例接口获取实例 ID。目前支持实例类型：CVM、Lighthouse、TAT 托管实例。

实例需要安装 TAT 客户端, 且客户端为 Online 状态。可通过 [DescribeAutomationAgentStatus(查询客户端状态)](https://cloud.tencent.com/document/api/1340/52682) 接口查询客户端状态。
                     * @return InstanceIds 触发器关联的实例ID。列表上限 100。

可通过对应云产品的查询实例接口获取实例 ID。目前支持实例类型：CVM、Lighthouse、TAT 托管实例。

实例需要安装 TAT 客户端, 且客户端为 Online 状态。可通过 [DescribeAutomationAgentStatus(查询客户端状态)](https://cloud.tencent.com/document/api/1340/52682) 接口查询客户端状态。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置触发器关联的实例ID。列表上限 100。

可通过对应云产品的查询实例接口获取实例 ID。目前支持实例类型：CVM、Lighthouse、TAT 托管实例。

实例需要安装 TAT 客户端, 且客户端为 Online 状态。可通过 [DescribeAutomationAgentStatus(查询客户端状态)](https://cloud.tencent.com/document/api/1340/52682) 接口查询客户端状态。
                     * @param _instanceIds 触发器关联的实例ID。列表上限 100。

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
                     * 获取命令执行用户。长度不超过 256 字符。
                     * @return Username 命令执行用户。长度不超过 256 字符。
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置命令执行用户。长度不超过 256 字符。
                     * @param _username 命令执行用户。长度不超过 256 字符。
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
                     * 获取命令自定义参数。字段类型为 JSON encode string。

仅在 CommandId 所指命令的 EnableParameter 为 true 时，才允许设置此参数。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取命令的 EnableParameter 设置。
                     * @return Parameters 命令自定义参数。字段类型为 JSON encode string。

仅在 CommandId 所指命令的 EnableParameter 为 true 时，才允许设置此参数。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取命令的 EnableParameter 设置。
                     * 
                     */
                    std::string GetParameters() const;

                    /**
                     * 设置命令自定义参数。字段类型为 JSON encode string。

仅在 CommandId 所指命令的 EnableParameter 为 true 时，才允许设置此参数。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取命令的 EnableParameter 设置。
                     * @param _parameters 命令自定义参数。字段类型为 JSON encode string。

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
                     * 获取周期执行器设置。

当执行器类型为 `SCHEDULE` 时，必须指定此参数。
                     * @return ScheduleSettings 周期执行器设置。

当执行器类型为 `SCHEDULE` 时，必须指定此参数。
                     * 
                     */
                    ScheduleSettings GetScheduleSettings() const;

                    /**
                     * 设置周期执行器设置。

当执行器类型为 `SCHEDULE` 时，必须指定此参数。
                     * @param _scheduleSettings 周期执行器设置。

当执行器类型为 `SCHEDULE` 时，必须指定此参数。
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
                     * 执行器名称。长度不超过 120 字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 执行器类型。

可选取值（当前仅支持一种）：

- `SCHEDULE`：周期类型执行器。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 远程命令ID。

可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取。
                     */
                    std::string m_commandId;
                    bool m_commandIdHasBeenSet;

                    /**
                     * 触发器关联的实例ID。列表上限 100。

可通过对应云产品的查询实例接口获取实例 ID。目前支持实例类型：CVM、Lighthouse、TAT 托管实例。

实例需要安装 TAT 客户端, 且客户端为 Online 状态。可通过 [DescribeAutomationAgentStatus(查询客户端状态)](https://cloud.tencent.com/document/api/1340/52682) 接口查询客户端状态。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 命令执行用户。长度不超过 256 字符。
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 命令自定义参数。字段类型为 JSON encode string。

仅在 CommandId 所指命令的 EnableParameter 为 true 时，才允许设置此参数。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取命令的 EnableParameter 设置。
                     */
                    std::string m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * 周期执行器设置。

当执行器类型为 `SCHEDULE` 时，必须指定此参数。
                     */
                    ScheduleSettings m_scheduleSettings;
                    bool m_scheduleSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_CREATEINVOKERREQUEST_H_
