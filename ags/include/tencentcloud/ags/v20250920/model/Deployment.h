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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_DEPLOYMENT_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_DEPLOYMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/ScalingConfiguration.h>
#include <tencentcloud/ags/v20250920/model/LifecycleConfiguration.h>
#include <tencentcloud/ags/v20250920/model/AffinityConfiguration.h>
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
                * Deployment 稳定访问入口定义
                */
                class Deployment : public AbstractModel
                {
                public:
                    Deployment();
                    ~Deployment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Deployment 稳定 ID，格式为 dpl- 加 8 位小写 base36 字符。</p>
                     * @return DeploymentId <p>Deployment 稳定 ID，格式为 dpl- 加 8 位小写 base36 字符。</p>
                     * 
                     */
                    std::string GetDeploymentId() const;

                    /**
                     * 设置<p>Deployment 稳定 ID，格式为 dpl- 加 8 位小写 base36 字符。</p>
                     * @param _deploymentId <p>Deployment 稳定 ID，格式为 dpl- 加 8 位小写 base36 字符。</p>
                     * 
                     */
                    void SetDeploymentId(const std::string& _deploymentId);

                    /**
                     * 判断参数 DeploymentId 是否已赋值
                     * @return DeploymentId 是否已赋值
                     * 
                     */
                    bool DeploymentIdHasBeenSet() const;

                    /**
                     * 获取<p>唯一且创建后不可修改的名称，必须符合 DNS-1123 命名规范。</p>
                     * @return DeploymentName <p>唯一且创建后不可修改的名称，必须符合 DNS-1123 命名规范。</p>
                     * 
                     */
                    std::string GetDeploymentName() const;

                    /**
                     * 设置<p>唯一且创建后不可修改的名称，必须符合 DNS-1123 命名规范。</p>
                     * @param _deploymentName <p>唯一且创建后不可修改的名称，必须符合 DNS-1123 命名规范。</p>
                     * 
                     */
                    void SetDeploymentName(const std::string& _deploymentName);

                    /**
                     * 判断参数 DeploymentName 是否已赋值
                     * @return DeploymentName 是否已赋值
                     * 
                     */
                    bool DeploymentNameHasBeenSet() const;

                    /**
                     * 获取<p>用于关联 Sandbox Tool 的标识，格式为 sdt- 加 8 位小写 base36 字符。</p>
                     * @return ToolId <p>用于关联 Sandbox Tool 的标识，格式为 sdt- 加 8 位小写 base36 字符。</p>
                     * 
                     */
                    std::string GetToolId() const;

                    /**
                     * 设置<p>用于关联 Sandbox Tool 的标识，格式为 sdt- 加 8 位小写 base36 字符。</p>
                     * @param _toolId <p>用于关联 Sandbox Tool 的标识，格式为 sdt- 加 8 位小写 base36 字符。</p>
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
                     * 获取<p>完整的活跃容量配置。</p>
                     * @return ScalingConfiguration <p>完整的活跃容量配置。</p>
                     * 
                     */
                    ScalingConfiguration GetScalingConfiguration() const;

                    /**
                     * 设置<p>完整的活跃容量配置。</p>
                     * @param _scalingConfiguration <p>完整的活跃容量配置。</p>
                     * 
                     */
                    void SetScalingConfiguration(const ScalingConfiguration& _scalingConfiguration);

                    /**
                     * 判断参数 ScalingConfiguration 是否已赋值
                     * @return ScalingConfiguration 是否已赋值
                     * 
                     */
                    bool ScalingConfigurationHasBeenSet() const;

                    /**
                     * 获取<p>完整的空闲生命周期配置。</p>
                     * @return LifecycleConfiguration <p>完整的空闲生命周期配置。</p>
                     * 
                     */
                    LifecycleConfiguration GetLifecycleConfiguration() const;

                    /**
                     * 设置<p>完整的空闲生命周期配置。</p>
                     * @param _lifecycleConfiguration <p>完整的空闲生命周期配置。</p>
                     * 
                     */
                    void SetLifecycleConfiguration(const LifecycleConfiguration& _lifecycleConfiguration);

                    /**
                     * 判断参数 LifecycleConfiguration 是否已赋值
                     * @return LifecycleConfiguration 是否已赋值
                     * 
                     */
                    bool LifecycleConfigurationHasBeenSet() const;

                    /**
                     * 获取<p>可选 Affinity 配置；未启用时省略。</p>
                     * @return AffinityConfiguration <p>可选 Affinity 配置；未启用时省略。</p>
                     * 
                     */
                    AffinityConfiguration GetAffinityConfiguration() const;

                    /**
                     * 设置<p>可选 Affinity 配置；未启用时省略。</p>
                     * @param _affinityConfiguration <p>可选 Affinity 配置；未启用时省略。</p>
                     * 
                     */
                    void SetAffinityConfiguration(const AffinityConfiguration& _affinityConfiguration);

                    /**
                     * 判断参数 AffinityConfiguration 是否已赋值
                     * @return AffinityConfiguration 是否已赋值
                     * 
                     */
                    bool AffinityConfigurationHasBeenSet() const;

                    /**
                     * 获取<p>Deployment 控制面状态。</p><p>枚举值：</p><ul><li>ACTIVE：入口可用。</li><li>DELETING：入口已关闭并正在异步删除。</li><li>DELETE_FAILED：最近一次异步删除失败，可再次调用 DeleteDeployment。</li></ul>
                     * @return Status <p>Deployment 控制面状态。</p><p>枚举值：</p><ul><li>ACTIVE：入口可用。</li><li>DELETING：入口已关闭并正在异步删除。</li><li>DELETE_FAILED：最近一次异步删除失败，可再次调用 DeleteDeployment。</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Deployment 控制面状态。</p><p>枚举值：</p><ul><li>ACTIVE：入口可用。</li><li>DELETING：入口已关闭并正在异步删除。</li><li>DELETE_FAILED：最近一次异步删除失败，可再次调用 DeleteDeployment。</li></ul>
                     * @param _status <p>Deployment 控制面状态。</p><p>枚举值：</p><ul><li>ACTIVE：入口可用。</li><li>DELETING：入口已关闭并正在异步删除。</li><li>DELETE_FAILED：最近一次异步删除失败，可再次调用 DeleteDeployment。</li></ul>
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
                     * 获取<p>DELETE_FAILED 状态下 1..1024 个 UTF-8 字节的安全失败摘要，格式为 {Code}[.{SubCode}]: {Message}；其他状态省略。</p>
                     * @return StatusReason <p>DELETE_FAILED 状态下 1..1024 个 UTF-8 字节的安全失败摘要，格式为 {Code}[.{SubCode}]: {Message}；其他状态省略。</p>
                     * 
                     */
                    std::string GetStatusReason() const;

                    /**
                     * 设置<p>DELETE_FAILED 状态下 1..1024 个 UTF-8 字节的安全失败摘要，格式为 {Code}[.{SubCode}]: {Message}；其他状态省略。</p>
                     * @param _statusReason <p>DELETE_FAILED 状态下 1..1024 个 UTF-8 字节的安全失败摘要，格式为 {Code}[.{SubCode}]: {Message}；其他状态省略。</p>
                     * 
                     */
                    void SetStatusReason(const std::string& _statusReason);

                    /**
                     * 判断参数 StatusReason 是否已赋值
                     * @return StatusReason 是否已赋值
                     * 
                     */
                    bool StatusReasonHasBeenSet() const;

                    /**
                     * 获取<p>创建时间，UTC、秒精度 RFC3339 格式。</p>
                     * @return CreatedTime <p>创建时间，UTC、秒精度 RFC3339 格式。</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间，UTC、秒精度 RFC3339 格式。</p>
                     * @param _createdTime <p>创建时间，UTC、秒精度 RFC3339 格式。</p>
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>最近一次成功公共配置写入或 Deployment 状态迁移时间，UTC、秒精度 RFC3339 格式。</p>
                     * @return UpdatedTime <p>最近一次成功公共配置写入或 Deployment 状态迁移时间，UTC、秒精度 RFC3339 格式。</p>
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置<p>最近一次成功公共配置写入或 Deployment 状态迁移时间，UTC、秒精度 RFC3339 格式。</p>
                     * @param _updatedTime <p>最近一次成功公共配置写入或 Deployment 状态迁移时间，UTC、秒精度 RFC3339 格式。</p>
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>标签</p>
                     * @return Tags <p>标签</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _tags <p>标签</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>Deployment 稳定 ID，格式为 dpl- 加 8 位小写 base36 字符。</p>
                     */
                    std::string m_deploymentId;
                    bool m_deploymentIdHasBeenSet;

                    /**
                     * <p>唯一且创建后不可修改的名称，必须符合 DNS-1123 命名规范。</p>
                     */
                    std::string m_deploymentName;
                    bool m_deploymentNameHasBeenSet;

                    /**
                     * <p>用于关联 Sandbox Tool 的标识，格式为 sdt- 加 8 位小写 base36 字符。</p>
                     */
                    std::string m_toolId;
                    bool m_toolIdHasBeenSet;

                    /**
                     * <p>完整的活跃容量配置。</p>
                     */
                    ScalingConfiguration m_scalingConfiguration;
                    bool m_scalingConfigurationHasBeenSet;

                    /**
                     * <p>完整的空闲生命周期配置。</p>
                     */
                    LifecycleConfiguration m_lifecycleConfiguration;
                    bool m_lifecycleConfigurationHasBeenSet;

                    /**
                     * <p>可选 Affinity 配置；未启用时省略。</p>
                     */
                    AffinityConfiguration m_affinityConfiguration;
                    bool m_affinityConfigurationHasBeenSet;

                    /**
                     * <p>Deployment 控制面状态。</p><p>枚举值：</p><ul><li>ACTIVE：入口可用。</li><li>DELETING：入口已关闭并正在异步删除。</li><li>DELETE_FAILED：最近一次异步删除失败，可再次调用 DeleteDeployment。</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>DELETE_FAILED 状态下 1..1024 个 UTF-8 字节的安全失败摘要，格式为 {Code}[.{SubCode}]: {Message}；其他状态省略。</p>
                     */
                    std::string m_statusReason;
                    bool m_statusReasonHasBeenSet;

                    /**
                     * <p>创建时间，UTC、秒精度 RFC3339 格式。</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>最近一次成功公共配置写入或 Deployment 状态迁移时间，UTC、秒精度 RFC3339 格式。</p>
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_DEPLOYMENT_H_
