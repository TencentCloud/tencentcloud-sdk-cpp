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
#include <tencentcloud/ags/v20250920/model/MetadataVar.h>


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
                     * 获取<p>沙箱工具 ID，与 ToolName 至少有一个要填</p>
                     * @return ToolId <p>沙箱工具 ID，与 ToolName 至少有一个要填</p>
                     * 
                     */
                    std::string GetToolId() const;

                    /**
                     * 设置<p>沙箱工具 ID，与 ToolName 至少有一个要填</p>
                     * @param _toolId <p>沙箱工具 ID，与 ToolName 至少有一个要填</p>
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
                     * 获取<p>沙箱工具名称，与 ToolId 至少有一个要填</p>
                     * @return ToolName <p>沙箱工具名称，与 ToolId 至少有一个要填</p>
                     * 
                     */
                    std::string GetToolName() const;

                    /**
                     * 设置<p>沙箱工具名称，与 ToolId 至少有一个要填</p>
                     * @param _toolName <p>沙箱工具名称，与 ToolId 至少有一个要填</p>
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
                     * 获取<p>超时时间，超过这个时间就自动回收实例。支持格式：5m、300s、1h 等，默认 5m。最小 30s，最大 24h</p>
                     * @return Timeout <p>超时时间，超过这个时间就自动回收实例。支持格式：5m、300s、1h 等，默认 5m。最小 30s，最大 24h</p>
                     * 
                     */
                    std::string GetTimeout() const;

                    /**
                     * 设置<p>超时时间，超过这个时间就自动回收实例。支持格式：5m、300s、1h 等，默认 5m。最小 30s，最大 24h</p>
                     * @param _timeout <p>超时时间，超过这个时间就自动回收实例。支持格式：5m、300s、1h 等，默认 5m。最小 30s，最大 24h</p>
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
                     * 获取<p>幂等性 Token，长度不超过 64 字符</p>
                     * @return ClientToken <p>幂等性 Token，长度不超过 64 字符</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>幂等性 Token，长度不超过 64 字符</p>
                     * @param _clientToken <p>幂等性 Token，长度不超过 64 字符</p>
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
                     * 获取<p>沙箱实例存储挂载配置</p>
                     * @return MountOptions <p>沙箱实例存储挂载配置</p>
                     * 
                     */
                    std::vector<MountOption> GetMountOptions() const;

                    /**
                     * 设置<p>沙箱实例存储挂载配置</p>
                     * @param _mountOptions <p>沙箱实例存储挂载配置</p>
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
                     * 获取<p>沙箱实例自定义配置</p>
                     * @return CustomConfiguration <p>沙箱实例自定义配置</p>
                     * 
                     */
                    CustomConfiguration GetCustomConfiguration() const;

                    /**
                     * 设置<p>沙箱实例自定义配置</p>
                     * @param _customConfiguration <p>沙箱实例自定义配置</p>
                     * 
                     */
                    void SetCustomConfiguration(const CustomConfiguration& _customConfiguration);

                    /**
                     * 判断参数 CustomConfiguration 是否已赋值
                     * @return CustomConfiguration 是否已赋值
                     * 
                     */
                    bool CustomConfigurationHasBeenSet() const;

                    /**
                     * 获取<p>沙箱访问认证模式</p><p>枚举值：</p><ul><li>DEFAULT： 跟随系统策略</li><li>TOKEN： Token认证</li><li>NONE： 免认证 </li></ul><p>默认值：DEFAULT</p>
                     * @return AuthMode <p>沙箱访问认证模式</p><p>枚举值：</p><ul><li>DEFAULT： 跟随系统策略</li><li>TOKEN： Token认证</li><li>NONE： 免认证 </li></ul><p>默认值：DEFAULT</p>
                     * 
                     */
                    std::string GetAuthMode() const;

                    /**
                     * 设置<p>沙箱访问认证模式</p><p>枚举值：</p><ul><li>DEFAULT： 跟随系统策略</li><li>TOKEN： Token认证</li><li>NONE： 免认证 </li></ul><p>默认值：DEFAULT</p>
                     * @param _authMode <p>沙箱访问认证模式</p><p>枚举值：</p><ul><li>DEFAULT： 跟随系统策略</li><li>TOKEN： Token认证</li><li>NONE： 免认证 </li></ul><p>默认值：DEFAULT</p>
                     * 
                     */
                    void SetAuthMode(const std::string& _authMode);

                    /**
                     * 判断参数 AuthMode 是否已赋值
                     * @return AuthMode 是否已赋值
                     * 
                     */
                    bool AuthModeHasBeenSet() const;

                    /**
                     * 获取<p>沙箱元数据</p>
                     * @return Metadata <p>沙箱元数据</p>
                     * 
                     */
                    std::vector<MetadataVar> GetMetadata() const;

                    /**
                     * 设置<p>沙箱元数据</p>
                     * @param _metadata <p>沙箱元数据</p>
                     * 
                     */
                    void SetMetadata(const std::vector<MetadataVar>& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                private:

                    /**
                     * <p>沙箱工具 ID，与 ToolName 至少有一个要填</p>
                     */
                    std::string m_toolId;
                    bool m_toolIdHasBeenSet;

                    /**
                     * <p>沙箱工具名称，与 ToolId 至少有一个要填</p>
                     */
                    std::string m_toolName;
                    bool m_toolNameHasBeenSet;

                    /**
                     * <p>超时时间，超过这个时间就自动回收实例。支持格式：5m、300s、1h 等，默认 5m。最小 30s，最大 24h</p>
                     */
                    std::string m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>幂等性 Token，长度不超过 64 字符</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * <p>沙箱实例存储挂载配置</p>
                     */
                    std::vector<MountOption> m_mountOptions;
                    bool m_mountOptionsHasBeenSet;

                    /**
                     * <p>沙箱实例自定义配置</p>
                     */
                    CustomConfiguration m_customConfiguration;
                    bool m_customConfigurationHasBeenSet;

                    /**
                     * <p>沙箱访问认证模式</p><p>枚举值：</p><ul><li>DEFAULT： 跟随系统策略</li><li>TOKEN： Token认证</li><li>NONE： 免认证 </li></ul><p>默认值：DEFAULT</p>
                     */
                    std::string m_authMode;
                    bool m_authModeHasBeenSet;

                    /**
                     * <p>沙箱元数据</p>
                     */
                    std::vector<MetadataVar> m_metadata;
                    bool m_metadataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_STARTSANDBOXINSTANCEREQUEST_H_
