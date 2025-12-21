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
                     * 获取沙箱工具唯一标识符
                     * @return ToolId 沙箱工具唯一标识符
                     * 
                     */
                    std::string GetToolId() const;

                    /**
                     * 设置沙箱工具唯一标识符
                     * @param _toolId 沙箱工具唯一标识符
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
                     * 获取沙箱工具名称，长度 1-50 字符，支持中英文、数字、下划线。同一 AppId 下沙箱工具名称必须唯一
                     * @return ToolName 沙箱工具名称，长度 1-50 字符，支持中英文、数字、下划线。同一 AppId 下沙箱工具名称必须唯一
                     * 
                     */
                    std::string GetToolName() const;

                    /**
                     * 设置沙箱工具名称，长度 1-50 字符，支持中英文、数字、下划线。同一 AppId 下沙箱工具名称必须唯一
                     * @param _toolName 沙箱工具名称，长度 1-50 字符，支持中英文、数字、下划线。同一 AppId 下沙箱工具名称必须唯一
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
                     * 获取沙箱工具类型，取值：browser（浏览器工具）、code-interpreter（代码解释器工具）、computer（计算机控制工具）、mobile（移动设备工具）
                     * @return ToolType 沙箱工具类型，取值：browser（浏览器工具）、code-interpreter（代码解释器工具）、computer（计算机控制工具）、mobile（移动设备工具）
                     * 
                     */
                    std::string GetToolType() const;

                    /**
                     * 设置沙箱工具类型，取值：browser（浏览器工具）、code-interpreter（代码解释器工具）、computer（计算机控制工具）、mobile（移动设备工具）
                     * @param _toolType 沙箱工具类型，取值：browser（浏览器工具）、code-interpreter（代码解释器工具）、computer（计算机控制工具）、mobile（移动设备工具）
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
                     * 获取沙箱工具状态，取值：CREATING（创建中）、ACTIVE（可用）、DELETING（删除中）、FAILED（失败）
                     * @return Status 沙箱工具状态，取值：CREATING（创建中）、ACTIVE（可用）、DELETING（删除中）、FAILED（失败）
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置沙箱工具状态，取值：CREATING（创建中）、ACTIVE（可用）、DELETING（删除中）、FAILED（失败）
                     * @param _status 沙箱工具状态，取值：CREATING（创建中）、ACTIVE（可用）、DELETING（删除中）、FAILED（失败）
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
                     * 获取沙箱工具描述信息，最大长度 200 字符
                     * @return Description 沙箱工具描述信息，最大长度 200 字符
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置沙箱工具描述信息，最大长度 200 字符
                     * @param _description 沙箱工具描述信息，最大长度 200 字符
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
                     * @return DefaultTimeoutSeconds 默认超时时间，支持格式：5m、300s、1h 等，不指定则使用系统默认值（5 分钟）。最大 24 小时
                     * 
                     */
                    uint64_t GetDefaultTimeoutSeconds() const;

                    /**
                     * 设置默认超时时间，支持格式：5m、300s、1h 等，不指定则使用系统默认值（5 分钟）。最大 24 小时
                     * @param _defaultTimeoutSeconds 默认超时时间，支持格式：5m、300s、1h 等，不指定则使用系统默认值（5 分钟）。最大 24 小时
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
                     * 获取标签规格，包含资源标签绑定关系。用于为沙箱工具绑定标签，支持多种资源类型的标签绑定
                     * @return Tags 标签规格，包含资源标签绑定关系。用于为沙箱工具绑定标签，支持多种资源类型的标签绑定
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签规格，包含资源标签绑定关系。用于为沙箱工具绑定标签，支持多种资源类型的标签绑定
                     * @param _tags 标签规格，包含资源标签绑定关系。用于为沙箱工具绑定标签，支持多种资源类型的标签绑定
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
                     * 获取沙箱工具创建时间，格式：ISO8601
                     * @return CreateTime 沙箱工具创建时间，格式：ISO8601
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置沙箱工具创建时间，格式：ISO8601
                     * @param _createTime 沙箱工具创建时间，格式：ISO8601
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
                     * 获取沙箱工具更新时间，格式：ISO8601
                     * @return UpdateTime 沙箱工具更新时间，格式：ISO8601
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置沙箱工具更新时间，格式：ISO8601
                     * @param _updateTime 沙箱工具更新时间，格式：ISO8601
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
                     * 获取沙箱工具绑定角色ARN
                     * @return RoleArn 沙箱工具绑定角色ARN
                     * 
                     */
                    std::string GetRoleArn() const;

                    /**
                     * 设置沙箱工具绑定角色ARN
                     * @param _roleArn 沙箱工具绑定角色ARN
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
                     * 获取沙箱工具中实例存储挂载配置
                     * @return StorageMounts 沙箱工具中实例存储挂载配置
                     * 
                     */
                    std::vector<StorageMount> GetStorageMounts() const;

                    /**
                     * 设置沙箱工具中实例存储挂载配置
                     * @param _storageMounts 沙箱工具中实例存储挂载配置
                     * 
                     */
                    void SetStorageMounts(const std::vector<StorageMount>& _storageMounts);

                    /**
                     * 判断参数 StorageMounts 是否已赋值
                     * @return StorageMounts 是否已赋值
                     * 
                     */
                    bool StorageMountsHasBeenSet() const;

                private:

                    /**
                     * 沙箱工具唯一标识符
                     */
                    std::string m_toolId;
                    bool m_toolIdHasBeenSet;

                    /**
                     * 沙箱工具名称，长度 1-50 字符，支持中英文、数字、下划线。同一 AppId 下沙箱工具名称必须唯一
                     */
                    std::string m_toolName;
                    bool m_toolNameHasBeenSet;

                    /**
                     * 沙箱工具类型，取值：browser（浏览器工具）、code-interpreter（代码解释器工具）、computer（计算机控制工具）、mobile（移动设备工具）
                     */
                    std::string m_toolType;
                    bool m_toolTypeHasBeenSet;

                    /**
                     * 沙箱工具状态，取值：CREATING（创建中）、ACTIVE（可用）、DELETING（删除中）、FAILED（失败）
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 沙箱工具描述信息，最大长度 200 字符
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 默认超时时间，支持格式：5m、300s、1h 等，不指定则使用系统默认值（5 分钟）。最大 24 小时
                     */
                    uint64_t m_defaultTimeoutSeconds;
                    bool m_defaultTimeoutSecondsHasBeenSet;

                    /**
                     * 网络配置
                     */
                    NetworkConfiguration m_networkConfiguration;
                    bool m_networkConfigurationHasBeenSet;

                    /**
                     * 标签规格，包含资源标签绑定关系。用于为沙箱工具绑定标签，支持多种资源类型的标签绑定
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 沙箱工具创建时间，格式：ISO8601
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 沙箱工具更新时间，格式：ISO8601
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 沙箱工具绑定角色ARN
                     */
                    std::string m_roleArn;
                    bool m_roleArnHasBeenSet;

                    /**
                     * 沙箱工具中实例存储挂载配置
                     */
                    std::vector<StorageMount> m_storageMounts;
                    bool m_storageMountsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_SANDBOXTOOL_H_
