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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_CREATESANDBOXTOOLREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_CREATESANDBOXTOOLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/NetworkConfiguration.h>
#include <tencentcloud/ags/v20250920/model/Tag.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * CreateSandboxTool请求参数结构体
                */
                class CreateSandboxToolRequest : public AbstractModel
                {
                public:
                    CreateSandboxToolRequest();
                    ~CreateSandboxToolRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取沙箱工具名称，长度 1-50 字符，支持英文、数字、下划线和连接线。同一 AppId 下沙箱工具名称必须唯一
                     * @return ToolName 沙箱工具名称，长度 1-50 字符，支持英文、数字、下划线和连接线。同一 AppId 下沙箱工具名称必须唯一
                     * 
                     */
                    std::string GetToolName() const;

                    /**
                     * 设置沙箱工具名称，长度 1-50 字符，支持英文、数字、下划线和连接线。同一 AppId 下沙箱工具名称必须唯一
                     * @param _toolName 沙箱工具名称，长度 1-50 字符，支持英文、数字、下划线和连接线。同一 AppId 下沙箱工具名称必须唯一
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
                     * 获取沙箱工具类型，目前支持：browser、code-interpreter
                     * @return ToolType 沙箱工具类型，目前支持：browser、code-interpreter
                     * 
                     */
                    std::string GetToolType() const;

                    /**
                     * 设置沙箱工具类型，目前支持：browser、code-interpreter
                     * @param _toolType 沙箱工具类型，目前支持：browser、code-interpreter
                     * 
                     */
                    void SetToolType(const std::string& _toolType);

                    /**
                     * 判断参数 ToolType 是否已赋值
                     * @return ToolType 是否已赋值
                     * 
                     */
                    bool ToolTypeHasBeenSet() const;

                    /**
                     * 获取网络配置
                     * @return NetworkConfiguration 网络配置
                     * 
                     */
                    NetworkConfiguration GetNetworkConfiguration() const;

                    /**
                     * 设置网络配置
                     * @param _networkConfiguration 网络配置
                     * 
                     */
                    void SetNetworkConfiguration(const NetworkConfiguration& _networkConfiguration);

                    /**
                     * 判断参数 NetworkConfiguration 是否已赋值
                     * @return NetworkConfiguration 是否已赋值
                     * 
                     */
                    bool NetworkConfigurationHasBeenSet() const;

                    /**
                     * 获取沙箱工具描述，最大长度 200 字符
                     * @return Description 沙箱工具描述，最大长度 200 字符
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置沙箱工具描述，最大长度 200 字符
                     * @param _description 沙箱工具描述，最大长度 200 字符
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
                     * 获取默认超时时间，支持格式：5m、300s、1h 等，不指定则使用系统默认值（5 分钟）。最大 24 小时
                     * @return DefaultTimeout 默认超时时间，支持格式：5m、300s、1h 等，不指定则使用系统默认值（5 分钟）。最大 24 小时
                     * 
                     */
                    std::string GetDefaultTimeout() const;

                    /**
                     * 设置默认超时时间，支持格式：5m、300s、1h 等，不指定则使用系统默认值（5 分钟）。最大 24 小时
                     * @param _defaultTimeout 默认超时时间，支持格式：5m、300s、1h 等，不指定则使用系统默认值（5 分钟）。最大 24 小时
                     * 
                     */
                    void SetDefaultTimeout(const std::string& _defaultTimeout);

                    /**
                     * 判断参数 DefaultTimeout 是否已赋值
                     * @return DefaultTimeout 是否已赋值
                     * 
                     */
                    bool DefaultTimeoutHasBeenSet() const;

                    /**
                     * 获取标签规格，为沙箱工具绑定标签，支持多种资源类型的标签绑定
                     * @return Tags 标签规格，为沙箱工具绑定标签，支持多种资源类型的标签绑定
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签规格，为沙箱工具绑定标签，支持多种资源类型的标签绑定
                     * @param _tags 标签规格，为沙箱工具绑定标签，支持多种资源类型的标签绑定
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

                private:

                    /**
                     * 沙箱工具名称，长度 1-50 字符，支持英文、数字、下划线和连接线。同一 AppId 下沙箱工具名称必须唯一
                     */
                    std::string m_toolName;
                    bool m_toolNameHasBeenSet;

                    /**
                     * 沙箱工具类型，目前支持：browser、code-interpreter
                     */
                    std::string m_toolType;
                    bool m_toolTypeHasBeenSet;

                    /**
                     * 网络配置
                     */
                    NetworkConfiguration m_networkConfiguration;
                    bool m_networkConfigurationHasBeenSet;

                    /**
                     * 沙箱工具描述，最大长度 200 字符
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 默认超时时间，支持格式：5m、300s、1h 等，不指定则使用系统默认值（5 分钟）。最大 24 小时
                     */
                    std::string m_defaultTimeout;
                    bool m_defaultTimeoutHasBeenSet;

                    /**
                     * 标签规格，为沙箱工具绑定标签，支持多种资源类型的标签绑定
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 幂等性 Token，长度不超过 64 字符
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_CREATESANDBOXTOOLREQUEST_H_
