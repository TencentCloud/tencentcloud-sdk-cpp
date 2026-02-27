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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_SANDBOXTOOL_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_SANDBOXTOOL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/NetworkConfiguration.h>
#include <tencentcloud/ags/v20250920/model/Tag.h>
#include <tencentcloud/ags/v20250920/model/StorageMount.h>
#include <tencentcloud/ags/v20250920/model/CustomConfigurationDetail.h>
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
                * 沙箱工具结构体
                */
                class SandboxTool : public AbstractModel
                {
                public:
                    SandboxTool();
                    ~SandboxTool() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>沙箱工具唯一标识符</p>
                     * @return ToolId <p>沙箱工具唯一标识符</p>
                     * 
                     */
                    std::string GetToolId() const;

                    /**
                     * 设置<p>沙箱工具唯一标识符</p>
                     * @param _toolId <p>沙箱工具唯一标识符</p>
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
                     * 获取<p>沙箱工具名称，长度 1-50 字符，支持中英文、数字、下划线。同一 AppId 下沙箱工具名称必须唯一</p>
                     * @return ToolName <p>沙箱工具名称，长度 1-50 字符，支持中英文、数字、下划线。同一 AppId 下沙箱工具名称必须唯一</p>
                     * 
                     */
                    std::string GetToolName() const;

                    /**
                     * 设置<p>沙箱工具名称，长度 1-50 字符，支持中英文、数字、下划线。同一 AppId 下沙箱工具名称必须唯一</p>
                     * @param _toolName <p>沙箱工具名称，长度 1-50 字符，支持中英文、数字、下划线。同一 AppId 下沙箱工具名称必须唯一</p>
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
                     * 获取<p>沙箱工具类型，取值：browser（浏览器工具）、code-interpreter（代码解释器工具）、computer（计算机控制工具）、mobile（移动设备工具）</p>
                     * @return ToolType <p>沙箱工具类型，取值：browser（浏览器工具）、code-interpreter（代码解释器工具）、computer（计算机控制工具）、mobile（移动设备工具）</p>
                     * 
                     */
                    std::string GetToolType() const;

                    /**
                     * 设置<p>沙箱工具类型，取值：browser（浏览器工具）、code-interpreter（代码解释器工具）、computer（计算机控制工具）、mobile（移动设备工具）</p>
                     * @param _toolType <p>沙箱工具类型，取值：browser（浏览器工具）、code-interpreter（代码解释器工具）、computer（计算机控制工具）、mobile（移动设备工具）</p>
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
                     * 获取<p>沙箱工具状态，取值：CREATING（创建中）、ACTIVE（可用）、DELETING（删除中）、FAILED（失败）</p>
                     * @return Status <p>沙箱工具状态，取值：CREATING（创建中）、ACTIVE（可用）、DELETING（删除中）、FAILED（失败）</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>沙箱工具状态，取值：CREATING（创建中）、ACTIVE（可用）、DELETING（删除中）、FAILED（失败）</p>
                     * @param _status <p>沙箱工具状态，取值：CREATING（创建中）、ACTIVE（可用）、DELETING（删除中）、FAILED（失败）</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>沙箱工具描述信息，最大长度 200 字符</p>
                     * @return Description <p>沙箱工具描述信息，最大长度 200 字符</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>沙箱工具描述信息，最大长度 200 字符</p>
                     * @param _description <p>沙箱工具描述信息，最大长度 200 字符</p>
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
                     * @return DefaultTimeoutSeconds <p>默认超时时间，支持格式：5m、300s、1h 等，不指定则使用系统默认值（5 分钟）。最大 24 小时</p>
                     * 
                     */
                    uint64_t GetDefaultTimeoutSeconds() const;

                    /**
                     * 设置<p>默认超时时间，支持格式：5m、300s、1h 等，不指定则使用系统默认值（5 分钟）。最大 24 小时</p>
                     * @param _defaultTimeoutSeconds <p>默认超时时间，支持格式：5m、300s、1h 等，不指定则使用系统默认值（5 分钟）。最大 24 小时</p>
                     * 
                     */
                    void SetDefaultTimeoutSeconds(const uint64_t& _defaultTimeoutSeconds);

                    /**
                     * 判断参数 DefaultTimeoutSeconds 是否已赋值
                     * @return DefaultTimeoutSeconds 是否已赋值
                     * 
                     */
                    bool DefaultTimeoutSecondsHasBeenSet() const;

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
                     * 获取<p>标签规格，包含资源标签绑定关系。用于为沙箱工具绑定标签，支持多种资源类型的标签绑定</p>
                     * @return Tags <p>标签规格，包含资源标签绑定关系。用于为沙箱工具绑定标签，支持多种资源类型的标签绑定</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签规格，包含资源标签绑定关系。用于为沙箱工具绑定标签，支持多种资源类型的标签绑定</p>
                     * @param _tags <p>标签规格，包含资源标签绑定关系。用于为沙箱工具绑定标签，支持多种资源类型的标签绑定</p>
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
                     * 获取<p>沙箱工具创建时间，格式：ISO8601</p>
                     * @return CreateTime <p>沙箱工具创建时间，格式：ISO8601</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>沙箱工具创建时间，格式：ISO8601</p>
                     * @param _createTime <p>沙箱工具创建时间，格式：ISO8601</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>沙箱工具更新时间，格式：ISO8601</p>
                     * @return UpdateTime <p>沙箱工具更新时间，格式：ISO8601</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>沙箱工具更新时间，格式：ISO8601</p>
                     * @param _updateTime <p>沙箱工具更新时间，格式：ISO8601</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>沙箱工具绑定角色ARN</p>
                     * @return RoleArn <p>沙箱工具绑定角色ARN</p>
                     * 
                     */
                    std::string GetRoleArn() const;

                    /**
                     * 设置<p>沙箱工具绑定角色ARN</p>
                     * @param _roleArn <p>沙箱工具绑定角色ARN</p>
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
                     * 获取<p>沙箱工具中实例存储挂载配置</p>
                     * @return StorageMounts <p>沙箱工具中实例存储挂载配置</p>
                     * 
                     */
                    std::vector<StorageMount> GetStorageMounts() const;

                    /**
                     * 设置<p>沙箱工具中实例存储挂载配置</p>
                     * @param _storageMounts <p>沙箱工具中实例存储挂载配置</p>
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
                    CustomConfigurationDetail GetCustomConfiguration() const;

                    /**
                     * 设置<p>沙箱工具自定义配置</p>
                     * @param _customConfiguration <p>沙箱工具自定义配置</p>
                     * 
                     */
                    void SetCustomConfiguration(const CustomConfigurationDetail& _customConfiguration);

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

                    /**
                     * 获取<p>用于说明沙箱工具处于该状态的原因</p>
                     * @return StatusReason <p>用于说明沙箱工具处于该状态的原因</p>
                     * 
                     */
                    std::string GetStatusReason() const;

                    /**
                     * 设置<p>用于说明沙箱工具处于该状态的原因</p>
                     * @param _statusReason <p>用于说明沙箱工具处于该状态的原因</p>
                     * 
                     */
                    void SetStatusReason(const std::string& _statusReason);

                    /**
                     * 判断参数 StatusReason 是否已赋值
                     * @return StatusReason 是否已赋值
                     * 
                     */
                    bool StatusReasonHasBeenSet() const;

                private:

                    /**
                     * <p>沙箱工具唯一标识符</p>
                     */
                    std::string m_toolId;
                    bool m_toolIdHasBeenSet;

                    /**
                     * <p>沙箱工具名称，长度 1-50 字符，支持中英文、数字、下划线。同一 AppId 下沙箱工具名称必须唯一</p>
                     */
                    std::string m_toolName;
                    bool m_toolNameHasBeenSet;

                    /**
                     * <p>沙箱工具类型，取值：browser（浏览器工具）、code-interpreter（代码解释器工具）、computer（计算机控制工具）、mobile（移动设备工具）</p>
                     */
                    std::string m_toolType;
                    bool m_toolTypeHasBeenSet;

                    /**
                     * <p>沙箱工具状态，取值：CREATING（创建中）、ACTIVE（可用）、DELETING（删除中）、FAILED（失败）</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>沙箱工具描述信息，最大长度 200 字符</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>默认超时时间，支持格式：5m、300s、1h 等，不指定则使用系统默认值（5 分钟）。最大 24 小时</p>
                     */
                    uint64_t m_defaultTimeoutSeconds;
                    bool m_defaultTimeoutSecondsHasBeenSet;

                    /**
                     * <p>网络配置</p>
                     */
                    NetworkConfiguration m_networkConfiguration;
                    bool m_networkConfigurationHasBeenSet;

                    /**
                     * <p>标签规格，包含资源标签绑定关系。用于为沙箱工具绑定标签，支持多种资源类型的标签绑定</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>沙箱工具创建时间，格式：ISO8601</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>沙箱工具更新时间，格式：ISO8601</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>沙箱工具绑定角色ARN</p>
                     */
                    std::string m_roleArn;
                    bool m_roleArnHasBeenSet;

                    /**
                     * <p>沙箱工具中实例存储挂载配置</p>
                     */
                    std::vector<StorageMount> m_storageMounts;
                    bool m_storageMountsHasBeenSet;

                    /**
                     * <p>沙箱工具自定义配置</p>
                     */
                    CustomConfigurationDetail m_customConfiguration;
                    bool m_customConfigurationHasBeenSet;

                    /**
                     * <p>沙箱工具日志推送相关配置</p>
                     */
                    LogConfiguration m_logConfiguration;
                    bool m_logConfigurationHasBeenSet;

                    /**
                     * <p>用于说明沙箱工具处于该状态的原因</p>
                     */
                    std::string m_statusReason;
                    bool m_statusReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_SANDBOXTOOL_H_
