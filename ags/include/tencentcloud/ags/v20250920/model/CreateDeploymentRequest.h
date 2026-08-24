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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_CREATEDEPLOYMENTREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_CREATEDEPLOYMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateDeployment请求参数结构体
                */
                class CreateDeploymentRequest : public AbstractModel
                {
                public:
                    CreateDeploymentRequest();
                    ~CreateDeploymentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>唯一的 Deployment 名称，必须符合 DNS-1123 命名规范，创建后不可修改。</p>
                     * @return DeploymentName <p>唯一的 Deployment 名称，必须符合 DNS-1123 命名规范，创建后不可修改。</p>
                     * 
                     */
                    std::string GetDeploymentName() const;

                    /**
                     * 设置<p>唯一的 Deployment 名称，必须符合 DNS-1123 命名规范，创建后不可修改。</p>
                     * @param _deploymentName <p>唯一的 Deployment 名称，必须符合 DNS-1123 命名规范，创建后不可修改。</p>
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
                     * 获取<p>伸缩配置；省略的成员由服务端补全默认值。</p>
                     * @return ScalingConfiguration <p>伸缩配置；省略的成员由服务端补全默认值。</p>
                     * 
                     */
                    ScalingConfiguration GetScalingConfiguration() const;

                    /**
                     * 设置<p>伸缩配置；省略的成员由服务端补全默认值。</p>
                     * @param _scalingConfiguration <p>伸缩配置；省略的成员由服务端补全默认值。</p>
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
                     * 获取<p>空闲生命周期配置；省略的成员由服务端补全默认值。</p>
                     * @return LifecycleConfiguration <p>空闲生命周期配置；省略的成员由服务端补全默认值。</p>
                     * 
                     */
                    LifecycleConfiguration GetLifecycleConfiguration() const;

                    /**
                     * 设置<p>空闲生命周期配置；省略的成员由服务端补全默认值。</p>
                     * @param _lifecycleConfiguration <p>空闲生命周期配置；省略的成员由服务端补全默认值。</p>
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
                     * 获取<p>Affinity 配置；省略或空 Mode 表示不启用。</p>
                     * @return AffinityConfiguration <p>Affinity 配置；省略或空 Mode 表示不启用。</p>
                     * 
                     */
                    AffinityConfiguration GetAffinityConfiguration() const;

                    /**
                     * 设置<p>Affinity 配置；省略或空 Mode 表示不启用。</p>
                     * @param _affinityConfiguration <p>Affinity 配置；省略或空 Mode 表示不启用。</p>
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
                     * <p>唯一的 Deployment 名称，必须符合 DNS-1123 命名规范，创建后不可修改。</p>
                     */
                    std::string m_deploymentName;
                    bool m_deploymentNameHasBeenSet;

                    /**
                     * <p>用于关联 Sandbox Tool 的标识，格式为 sdt- 加 8 位小写 base36 字符。</p>
                     */
                    std::string m_toolId;
                    bool m_toolIdHasBeenSet;

                    /**
                     * <p>伸缩配置；省略的成员由服务端补全默认值。</p>
                     */
                    ScalingConfiguration m_scalingConfiguration;
                    bool m_scalingConfigurationHasBeenSet;

                    /**
                     * <p>空闲生命周期配置；省略的成员由服务端补全默认值。</p>
                     */
                    LifecycleConfiguration m_lifecycleConfiguration;
                    bool m_lifecycleConfigurationHasBeenSet;

                    /**
                     * <p>Affinity 配置；省略或空 Mode 表示不启用。</p>
                     */
                    AffinityConfiguration m_affinityConfiguration;
                    bool m_affinityConfigurationHasBeenSet;

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

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_CREATEDEPLOYMENTREQUEST_H_
