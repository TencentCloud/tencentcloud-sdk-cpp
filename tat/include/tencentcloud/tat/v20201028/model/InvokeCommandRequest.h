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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_INVOKECOMMANDREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_INVOKECOMMANDREQUEST_H_

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
                * InvokeCommand请求参数结构体
                */
                class InvokeCommandRequest : public AbstractModel
                {
                public:
                    InvokeCommandRequest();
                    ~InvokeCommandRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待触发的命令ID。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取。
                     * @return CommandId 待触发的命令ID。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取。
                     * 
                     */
                    std::string GetCommandId() const;

                    /**
                     * 设置待触发的命令ID。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取。
                     * @param _commandId 待触发的命令ID。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取。
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
                     * 获取待执行命令的实例ID列表，上限200。

可通过对应云产品的查询实例接口获取实例 ID。目前支持实例类型：
- CVM
- Lighthouse
- TAT 托管实例
                     * @return InstanceIds 待执行命令的实例ID列表，上限200。

可通过对应云产品的查询实例接口获取实例 ID。目前支持实例类型：
- CVM
- Lighthouse
- TAT 托管实例
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置待执行命令的实例ID列表，上限200。

可通过对应云产品的查询实例接口获取实例 ID。目前支持实例类型：
- CVM
- Lighthouse
- TAT 托管实例
                     * @param _instanceIds 待执行命令的实例ID列表，上限200。

可通过对应云产品的查询实例接口获取实例 ID。目前支持实例类型：
- CVM
- Lighthouse
- TAT 托管实例
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
                     * 获取Command 的自定义参数。字段类型为json encoded string。如：{"varA": "222"}。
key为自定义参数名称，value为该参数的默认取值。kv均为字符串型。
仅在命令的 EnableParameter 为 true 时，才允许设置此参数。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取命令的 EnableParameter 设置。
如果未提供该参数取值，将使用 Command 的 DefaultParameters 或 DefaultParameterConfs 进行替换。
自定义参数最多20个。
自定义参数名称需符合以下规范：字符数目上限64，可选范围【a-zA-Z0-9-_】。
                     * @return Parameters Command 的自定义参数。字段类型为json encoded string。如：{"varA": "222"}。
key为自定义参数名称，value为该参数的默认取值。kv均为字符串型。
仅在命令的 EnableParameter 为 true 时，才允许设置此参数。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取命令的 EnableParameter 设置。
如果未提供该参数取值，将使用 Command 的 DefaultParameters 或 DefaultParameterConfs 进行替换。
自定义参数最多20个。
自定义参数名称需符合以下规范：字符数目上限64，可选范围【a-zA-Z0-9-_】。
                     * 
                     */
                    std::string GetParameters() const;

                    /**
                     * 设置Command 的自定义参数。字段类型为json encoded string。如：{"varA": "222"}。
key为自定义参数名称，value为该参数的默认取值。kv均为字符串型。
仅在命令的 EnableParameter 为 true 时，才允许设置此参数。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取命令的 EnableParameter 设置。
如果未提供该参数取值，将使用 Command 的 DefaultParameters 或 DefaultParameterConfs 进行替换。
自定义参数最多20个。
自定义参数名称需符合以下规范：字符数目上限64，可选范围【a-zA-Z0-9-_】。
                     * @param _parameters Command 的自定义参数。字段类型为json encoded string。如：{"varA": "222"}。
key为自定义参数名称，value为该参数的默认取值。kv均为字符串型。
仅在命令的 EnableParameter 为 true 时，才允许设置此参数。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取命令的 EnableParameter 设置。
如果未提供该参数取值，将使用 Command 的 DefaultParameters 或 DefaultParameterConfs 进行替换。
自定义参数最多20个。
自定义参数名称需符合以下规范：字符数目上限64，可选范围【a-zA-Z0-9-_】。
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
                     * 获取在 CVM 或 Lighthouse 实例中执行命令的用户名称。
使用最小权限执行命令是权限管理的最佳实践，建议您以普通用户身份执行云助手命令。若不填，默认以 Command 配置的 Username 执行。
                     * @return Username 在 CVM 或 Lighthouse 实例中执行命令的用户名称。
使用最小权限执行命令是权限管理的最佳实践，建议您以普通用户身份执行云助手命令。若不填，默认以 Command 配置的 Username 执行。
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置在 CVM 或 Lighthouse 实例中执行命令的用户名称。
使用最小权限执行命令是权限管理的最佳实践，建议您以普通用户身份执行云助手命令。若不填，默认以 Command 配置的 Username 执行。
                     * @param _username 在 CVM 或 Lighthouse 实例中执行命令的用户名称。
使用最小权限执行命令是权限管理的最佳实践，建议您以普通用户身份执行云助手命令。若不填，默认以 Command 配置的 Username 执行。
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
                     * 获取命令执行路径, 默认以Command配置的WorkingDirectory执行。
                     * @return WorkingDirectory 命令执行路径, 默认以Command配置的WorkingDirectory执行。
                     * 
                     */
                    std::string GetWorkingDirectory() const;

                    /**
                     * 设置命令执行路径, 默认以Command配置的WorkingDirectory执行。
                     * @param _workingDirectory 命令执行路径, 默认以Command配置的WorkingDirectory执行。
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
                     * 获取命令超时时间，取值范围[1, 86400]。默认以Command配置的Timeout执行。
                     * @return Timeout 命令超时时间，取值范围[1, 86400]。默认以Command配置的Timeout执行。
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置命令超时时间，取值范围[1, 86400]。默认以Command配置的Timeout执行。
                     * @param _timeout 命令超时时间，取值范围[1, 86400]。默认以Command配置的Timeout执行。
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
3. 不允许连续 / ；不允许以 / 开头；不允许以..作为文件夹名称。
                     * @return OutputCOSKeyPrefix 指定日志在cos bucket中的目录，目录命名有如下规则：
1. 可用数字、中英文和可见字符的组合，长度最多为60。
2. 用 / 分割路径，可快速创建子目录。
3. 不允许连续 / ；不允许以 / 开头；不允许以..作为文件夹名称。
                     * 
                     */
                    std::string GetOutputCOSKeyPrefix() const;

                    /**
                     * 设置指定日志在cos bucket中的目录，目录命名有如下规则：
1. 可用数字、中英文和可见字符的组合，长度最多为60。
2. 用 / 分割路径，可快速创建子目录。
3. 不允许连续 / ；不允许以 / 开头；不允许以..作为文件夹名称。
                     * @param _outputCOSKeyPrefix 指定日志在cos bucket中的目录，目录命名有如下规则：
1. 可用数字、中英文和可见字符的组合，长度最多为60。
2. 用 / 分割路径，可快速创建子目录。
3. 不允许连续 / ；不允许以 / 开头；不允许以..作为文件夹名称。
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
                     * 待触发的命令ID。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取。
                     */
                    std::string m_commandId;
                    bool m_commandIdHasBeenSet;

                    /**
                     * 待执行命令的实例ID列表，上限200。

可通过对应云产品的查询实例接口获取实例 ID。目前支持实例类型：
- CVM
- Lighthouse
- TAT 托管实例
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Command 的自定义参数。字段类型为json encoded string。如：{"varA": "222"}。
key为自定义参数名称，value为该参数的默认取值。kv均为字符串型。
仅在命令的 EnableParameter 为 true 时，才允许设置此参数。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取命令的 EnableParameter 设置。
如果未提供该参数取值，将使用 Command 的 DefaultParameters 或 DefaultParameterConfs 进行替换。
自定义参数最多20个。
自定义参数名称需符合以下规范：字符数目上限64，可选范围【a-zA-Z0-9-_】。
                     */
                    std::string m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * 在 CVM 或 Lighthouse 实例中执行命令的用户名称。
使用最小权限执行命令是权限管理的最佳实践，建议您以普通用户身份执行云助手命令。若不填，默认以 Command 配置的 Username 执行。
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 命令执行路径, 默认以Command配置的WorkingDirectory执行。
                     */
                    std::string m_workingDirectory;
                    bool m_workingDirectoryHasBeenSet;

                    /**
                     * 命令超时时间，取值范围[1, 86400]。默认以Command配置的Timeout执行。
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 指定日志上传的cos bucket 地址，必须以https开头，如 https://BucketName-123454321.cos.ap-beijing.myqcloud.com。
                     */
                    std::string m_outputCOSBucketUrl;
                    bool m_outputCOSBucketUrlHasBeenSet;

                    /**
                     * 指定日志在cos bucket中的目录，目录命名有如下规则：
1. 可用数字、中英文和可见字符的组合，长度最多为60。
2. 用 / 分割路径，可快速创建子目录。
3. 不允许连续 / ；不允许以 / 开头；不允许以..作为文件夹名称。
                     */
                    std::string m_outputCOSKeyPrefix;
                    bool m_outputCOSKeyPrefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_INVOKECOMMANDREQUEST_H_
