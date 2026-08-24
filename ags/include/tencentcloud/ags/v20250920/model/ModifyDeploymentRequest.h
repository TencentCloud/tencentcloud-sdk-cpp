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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_MODIFYDEPLOYMENTREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_MODIFYDEPLOYMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/ScalingConfiguration.h>
#include <tencentcloud/ags/v20250920/model/LifecycleConfiguration.h>
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
                * ModifyDeployment请求参数结构体
                */
                class ModifyDeploymentRequest : public AbstractModel
                {
                public:
                    ModifyDeploymentRequest();
                    ~ModifyDeploymentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>待修改的 Deployment ID。</p>
                     * @return DeploymentId <p>待修改的 Deployment ID。</p>
                     * 
                     */
                    std::string GetDeploymentId() const;

                    /**
                     * 设置<p>待修改的 Deployment ID。</p>
                     * @param _deploymentId <p>待修改的 Deployment ID。</p>
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
                     * 获取<p>完整替换伸缩配置；提供时必须包含全部三个成员。</p>
                     * @return ScalingConfiguration <p>完整替换伸缩配置；提供时必须包含全部三个成员。</p>
                     * 
                     */
                    ScalingConfiguration GetScalingConfiguration() const;

                    /**
                     * 设置<p>完整替换伸缩配置；提供时必须包含全部三个成员。</p>
                     * @param _scalingConfiguration <p>完整替换伸缩配置；提供时必须包含全部三个成员。</p>
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
                     * 获取<p>完整替换生命周期配置；提供时必须包含全部两个成员。</p>
                     * @return LifecycleConfiguration <p>完整替换生命周期配置；提供时必须包含全部两个成员。</p>
                     * 
                     */
                    LifecycleConfiguration GetLifecycleConfiguration() const;

                    /**
                     * 设置<p>完整替换生命周期配置；提供时必须包含全部两个成员。</p>
                     * @param _lifecycleConfiguration <p>完整替换生命周期配置；提供时必须包含全部两个成员。</p>
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
                     * <p>待修改的 Deployment ID。</p>
                     */
                    std::string m_deploymentId;
                    bool m_deploymentIdHasBeenSet;

                    /**
                     * <p>完整替换伸缩配置；提供时必须包含全部三个成员。</p>
                     */
                    ScalingConfiguration m_scalingConfiguration;
                    bool m_scalingConfigurationHasBeenSet;

                    /**
                     * <p>完整替换生命周期配置；提供时必须包含全部两个成员。</p>
                     */
                    LifecycleConfiguration m_lifecycleConfiguration;
                    bool m_lifecycleConfigurationHasBeenSet;

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

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_MODIFYDEPLOYMENTREQUEST_H_
