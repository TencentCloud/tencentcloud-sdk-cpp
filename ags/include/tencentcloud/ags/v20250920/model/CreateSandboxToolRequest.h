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
#include <tencentcloud/ags/v20250920/model/StorageMount.h>
#include <tencentcloud/ags/v20250920/model/CustomConfiguration.h>
#include <tencentcloud/ags/v20250920/model/LogConfiguration.h>


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
                     * 获取<p>沙箱工具名称，长度 1-50 字符，支持英文、数字、下划线和连接线。同一 AppId 下沙箱工具名称必须唯一</p>
                     * @return ToolName <p>沙箱工具名称，长度 1-50 字符，支持英文、数字、下划线和连接线。同一 AppId 下沙箱工具名称必须唯一</p>
                     * 
                     */
                    std::string GetToolName() const;

                    /**
                     * 设置<p>沙箱工具名称，长度 1-50 字符，支持英文、数字、下划线和连接线。同一 AppId 下沙箱工具名称必须唯一</p>
                     * @param _toolName <p>沙箱工具名称，长度 1-50 字符，支持英文、数字、下划线和连接线。同一 AppId 下沙箱工具名称必须唯一</p>
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
                     * 获取<p>沙箱工具类型，目前支持：browser、code-interpreter、custom</p>
                     * @return ToolType <p>沙箱工具类型，目前支持：browser、code-interpreter、custom</p>
                     * 
                     */
                    std::string GetToolType() const;

                    /**
                     * 设置<p>沙箱工具类型，目前支持：browser、code-interpreter、custom</p>
                     * @param _toolType <p>沙箱工具类型，目前支持：browser、code-interpreter、custom</p>
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
                     * 获取<p>网络配置</p>
                     * @return NetworkConfiguration <p>网络配置</p>
                     * 
                     */
                    NetworkConfiguration GetNetworkConfiguration() const;

                    /**
                     * 设置<p>网络配置</p>
                     * @param _networkConfiguration <p>网络配置</p>
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
                     * 获取<p>沙箱工具描述，最大长度 200 字符</p>
                     * @return Description <p>沙箱工具描述，最大长度 200 字符</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>沙箱工具描述，最大长度 200 字符</p>
                     * @param _description <p>沙箱工具描述，最大长度 200 字符</p>
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
                     * 获取<p>默认超时时间，支持格式：5m、300s、1h 等，不指定则使用系统默认值（5 分钟）。最大 24 小时</p>
                     * @return DefaultTimeout <p>默认超时时间，支持格式：5m、300s、1h 等，不指定则使用系统默认值（5 分钟）。最大 24 小时</p>
                     * 
                     */
                    std::string GetDefaultTimeout() const;

                    /**
                     * 设置<p>默认超时时间，支持格式：5m、300s、1h 等，不指定则使用系统默认值（5 分钟）。最大 24 小时</p>
                     * @param _defaultTimeout <p>默认超时时间，支持格式：5m、300s、1h 等，不指定则使用系统默认值（5 分钟）。最大 24 小时</p>
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
                     * 获取<p>标签规格，为沙箱工具绑定标签，支持多种资源类型的标签绑定</p>
                     * @return Tags <p>标签规格，为沙箱工具绑定标签，支持多种资源类型的标签绑定</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签规格，为沙箱工具绑定标签，支持多种资源类型的标签绑定</p>
                     * @param _tags <p>标签规格，为沙箱工具绑定标签，支持多种资源类型的标签绑定</p>
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
                     * 获取<p>角色ARN</p>
                     * @return RoleArn <p>角色ARN</p>
                     * 
                     */
                    std::string GetRoleArn() const;

                    /**
                     * 设置<p>角色ARN</p>
                     * @param _roleArn <p>角色ARN</p>
                     * 
                     */
                    void SetRoleArn(const std::string& _roleArn);

                    /**
                     * 判断参数 RoleArn 是否已赋值
                     * @return RoleArn 是否已赋值
                     * 
                     */
                    bool RoleArnHasBeenSet() const;

                    /**
                     * 获取<p>沙箱工具存储配置</p>
                     * @return StorageMounts <p>沙箱工具存储配置</p>
                     * 
                     */
                    std::vector<StorageMount> GetStorageMounts() const;

                    /**
                     * 设置<p>沙箱工具存储配置</p>
                     * @param _storageMounts <p>沙箱工具存储配置</p>
                     * 
                     */
                    void SetStorageMounts(const std::vector<StorageMount>& _storageMounts);

                    /**
                     * 判断参数 StorageMounts 是否已赋值
                     * @return StorageMounts 是否已赋值
                     * 
                     */
                    bool StorageMountsHasBeenSet() const;

                    /**
                     * 获取<p>沙箱工具自定义配置</p>
                     * @return CustomConfiguration <p>沙箱工具自定义配置</p>
                     * 
                     */
                    CustomConfiguration GetCustomConfiguration() const;

                    /**
                     * 设置<p>沙箱工具自定义配置</p>
                     * @param _customConfiguration <p>沙箱工具自定义配置</p>
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
                     * 获取<p>沙箱工具日志推送相关配置</p>
                     * @return LogConfiguration <p>沙箱工具日志推送相关配置</p>
                     * 
                     */
                    LogConfiguration GetLogConfiguration() const;

                    /**
                     * 设置<p>沙箱工具日志推送相关配置</p>
                     * @param _logConfiguration <p>沙箱工具日志推送相关配置</p>
                     * 
                     */
                    void SetLogConfiguration(const LogConfiguration& _logConfiguration);

                    /**
                     * 判断参数 LogConfiguration 是否已赋值
                     * @return LogConfiguration 是否已赋值
                     * 
                     */
                    bool LogConfigurationHasBeenSet() const;

                private:

                    /**
                     * <p>沙箱工具名称，长度 1-50 字符，支持英文、数字、下划线和连接线。同一 AppId 下沙箱工具名称必须唯一</p>
                     */
                    std::string m_toolName;
                    bool m_toolNameHasBeenSet;

                    /**
                     * <p>沙箱工具类型，目前支持：browser、code-interpreter、custom</p>
                     */
                    std::string m_toolType;
                    bool m_toolTypeHasBeenSet;

                    /**
                     * <p>网络配置</p>
                     */
                    NetworkConfiguration m_networkConfiguration;
                    bool m_networkConfigurationHasBeenSet;

                    /**
                     * <p>沙箱工具描述，最大长度 200 字符</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>默认超时时间，支持格式：5m、300s、1h 等，不指定则使用系统默认值（5 分钟）。最大 24 小时</p>
                     */
                    std::string m_defaultTimeout;
                    bool m_defaultTimeoutHasBeenSet;

                    /**
                     * <p>标签规格，为沙箱工具绑定标签，支持多种资源类型的标签绑定</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>幂等性 Token，长度不超过 64 字符</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * <p>角色ARN</p>
                     */
                    std::string m_roleArn;
                    bool m_roleArnHasBeenSet;

                    /**
                     * <p>沙箱工具存储配置</p>
                     */
                    std::vector<StorageMount> m_storageMounts;
                    bool m_storageMountsHasBeenSet;

                    /**
                     * <p>沙箱工具自定义配置</p>
                     */
                    CustomConfiguration m_customConfiguration;
                    bool m_customConfigurationHasBeenSet;

                    /**
                     * <p>沙箱工具日志推送相关配置</p>
                     */
                    LogConfiguration m_logConfiguration;
                    bool m_logConfigurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_CREATESANDBOXTOOLREQUEST_H_
