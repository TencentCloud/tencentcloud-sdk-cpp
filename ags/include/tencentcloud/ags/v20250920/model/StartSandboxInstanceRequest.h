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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_STARTSANDBOXINSTANCEREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_STARTSANDBOXINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/MountOption.h>
#include <tencentcloud/ags/v20250920/model/CustomConfiguration.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * StartSandboxInstance请求参数结构体
                */
                class StartSandboxInstanceRequest : public AbstractModel
                {
                public:
                    StartSandboxInstanceRequest();
                    ~StartSandboxInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取沙箱工具 ID，与 ToolName 至少有一个要填
                     * @return ToolId 沙箱工具 ID，与 ToolName 至少有一个要填
                     * 
                     */
                    std::string GetToolId() const;

                    /**
                     * 设置沙箱工具 ID，与 ToolName 至少有一个要填
                     * @param _toolId 沙箱工具 ID，与 ToolName 至少有一个要填
                     * 
                     */
                    void SetToolId(const std::string& _toolId);

                    /**
                     * 判断参数 ToolId 是否已赋值
                     * @return ToolId 是否已赋值
                     * 
                     */
                    bool ToolIdHasBeenSet() const;

                    /**
                     * 获取沙箱工具名称，与 ToolId 至少有一个要填
                     * @return ToolName 沙箱工具名称，与 ToolId 至少有一个要填
                     * 
                     */
                    std::string GetToolName() const;

                    /**
                     * 设置沙箱工具名称，与 ToolId 至少有一个要填
                     * @param _toolName 沙箱工具名称，与 ToolId 至少有一个要填
                     * 
                     */
                    void SetToolName(const std::string& _toolName);

                    /**
                     * 判断参数 ToolName 是否已赋值
                     * @return ToolName 是否已赋值
                     * 
                     */
                    bool ToolNameHasBeenSet() const;

                    /**
                     * 获取超时时间，超过这个时间就自动回收实例。支持格式：5m、300s、1h 等，默认 5m。最小 30s，最大 24h
                     * @return Timeout 超时时间，超过这个时间就自动回收实例。支持格式：5m、300s、1h 等，默认 5m。最小 30s，最大 24h
                     * 
                     */
                    std::string GetTimeout() const;

                    /**
                     * 设置超时时间，超过这个时间就自动回收实例。支持格式：5m、300s、1h 等，默认 5m。最小 30s，最大 24h
                     * @param _timeout 超时时间，超过这个时间就自动回收实例。支持格式：5m、300s、1h 等，默认 5m。最小 30s，最大 24h
                     * 
                     */
                    void SetTimeout(const std::string& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取幂等性 Token，长度不超过 64 字符
                     * @return ClientToken 幂等性 Token，长度不超过 64 字符
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置幂等性 Token，长度不超过 64 字符
                     * @param _clientToken 幂等性 Token，长度不超过 64 字符
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取沙箱实例存储挂载配置
                     * @return MountOptions 沙箱实例存储挂载配置
                     * 
                     */
                    std::vector<MountOption> GetMountOptions() const;

                    /**
                     * 设置沙箱实例存储挂载配置
                     * @param _mountOptions 沙箱实例存储挂载配置
                     * 
                     */
                    void SetMountOptions(const std::vector<MountOption>& _mountOptions);

                    /**
                     * 判断参数 MountOptions 是否已赋值
                     * @return MountOptions 是否已赋值
                     * 
                     */
                    bool MountOptionsHasBeenSet() const;

                    /**
                     * 获取沙箱实例自定义配置
                     * @return CustomConfiguration 沙箱实例自定义配置
                     * 
                     */
                    CustomConfiguration GetCustomConfiguration() const;

                    /**
                     * 设置沙箱实例自定义配置
                     * @param _customConfiguration 沙箱实例自定义配置
                     * 
                     */
                    void SetCustomConfiguration(const CustomConfiguration& _customConfiguration);

                    /**
                     * 判断参数 CustomConfiguration 是否已赋值
                     * @return CustomConfiguration 是否已赋值
                     * 
                     */
                    bool CustomConfigurationHasBeenSet() const;

                private:

                    /**
                     * 沙箱工具 ID，与 ToolName 至少有一个要填
                     */
                    std::string m_toolId;
                    bool m_toolIdHasBeenSet;

                    /**
                     * 沙箱工具名称，与 ToolId 至少有一个要填
                     */
                    std::string m_toolName;
                    bool m_toolNameHasBeenSet;

                    /**
                     * 超时时间，超过这个时间就自动回收实例。支持格式：5m、300s、1h 等，默认 5m。最小 30s，最大 24h
                     */
                    std::string m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 幂等性 Token，长度不超过 64 字符
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * 沙箱实例存储挂载配置
                     */
                    std::vector<MountOption> m_mountOptions;
                    bool m_mountOptionsHasBeenSet;

                    /**
                     * 沙箱实例自定义配置
                     */
                    CustomConfiguration m_customConfiguration;
                    bool m_customConfigurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_STARTSANDBOXINSTANCEREQUEST_H_
