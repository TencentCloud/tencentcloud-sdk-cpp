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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_UPDATESANDBOXTOOLREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_UPDATESANDBOXTOOLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/NetworkConfiguration.h>
#include <tencentcloud/ags/v20250920/model/Tag.h>
#include <tencentcloud/ags/v20250920/model/CustomConfiguration.h>
#include <tencentcloud/ags/v20250920/model/ComputerConfiguration.h>
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
                * UpdateSandboxTool请求参数结构体
                */
                class UpdateSandboxToolRequest : public AbstractModel
                {
                public:
                    UpdateSandboxToolRequest();
                    ~UpdateSandboxToolRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>沙箱工具ID</p>
                     * @return ToolId <p>沙箱工具ID</p>
                     * 
                     */
                    std::string GetToolId() const;

                    /**
                     * 设置<p>沙箱工具ID</p>
                     * @param _toolId <p>沙箱工具ID</p>
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
                     * 获取<p>沙箱工具描述，最大长度200字符</p>
                     * @return Description <p>沙箱工具描述，最大长度200字符</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>沙箱工具描述，最大长度200字符</p>
                     * @param _description <p>沙箱工具描述，最大长度200字符</p>
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
                     * 获取<p>桌面电脑环境类沙箱配置</p>
                     * @return ComputerConfiguration <p>桌面电脑环境类沙箱配置</p>
                     * 
                     */
                    ComputerConfiguration GetComputerConfiguration() const;

                    /**
                     * 设置<p>桌面电脑环境类沙箱配置</p>
                     * @param _computerConfiguration <p>桌面电脑环境类沙箱配置</p>
                     * 
                     */
                    void SetComputerConfiguration(const ComputerConfiguration& _computerConfiguration);

                    /**
                     * 判断参数 ComputerConfiguration 是否已赋值
                     * @return ComputerConfiguration 是否已赋值
                     * 
                     */
                    bool ComputerConfigurationHasBeenSet() const;

                    /**
                     * 获取<p>按挂载名称更新沙箱工具已有镜像卷的镜像来源和镜像内目录。</p><p>入参限制：每项须提供已有镜像卷的 Name，以及 StorageSource.Image 中的 Reference 和 ImageRegistryType。同一请求中的 Name 须唯一。Reference 须包含镜像标签或 SHA-256 摘要。</p><p>取值参考：[{&quot;Name&quot;:&quot;runtime&quot;,&quot;StorageSource&quot;:{&quot;Image&quot;:{&quot;Reference&quot;:&quot;ccr.ccs.tencentyun.com/example/runtime:v2&quot;,&quot;ImageRegistryType&quot;:&quot;personal&quot;,&quot;SubPath&quot;:&quot;assets&quot;}}}]</p><p>省略本参数或传空数组时保留原配置。SubPath 省略时保留原目录，传空字符串时使用镜像根目录，传非空路径时使用指定目录。工具沿用原有 MountPath 和 ReadOnly，镜像摘要由服务解析。</p>
                     * @return StorageMounts <p>按挂载名称更新沙箱工具已有镜像卷的镜像来源和镜像内目录。</p><p>入参限制：每项须提供已有镜像卷的 Name，以及 StorageSource.Image 中的 Reference 和 ImageRegistryType。同一请求中的 Name 须唯一。Reference 须包含镜像标签或 SHA-256 摘要。</p><p>取值参考：[{&quot;Name&quot;:&quot;runtime&quot;,&quot;StorageSource&quot;:{&quot;Image&quot;:{&quot;Reference&quot;:&quot;ccr.ccs.tencentyun.com/example/runtime:v2&quot;,&quot;ImageRegistryType&quot;:&quot;personal&quot;,&quot;SubPath&quot;:&quot;assets&quot;}}}]</p><p>省略本参数或传空数组时保留原配置。SubPath 省略时保留原目录，传空字符串时使用镜像根目录，传非空路径时使用指定目录。工具沿用原有 MountPath 和 ReadOnly，镜像摘要由服务解析。</p>
                     * 
                     */
                    std::vector<StorageMount> GetStorageMounts() const;

                    /**
                     * 设置<p>按挂载名称更新沙箱工具已有镜像卷的镜像来源和镜像内目录。</p><p>入参限制：每项须提供已有镜像卷的 Name，以及 StorageSource.Image 中的 Reference 和 ImageRegistryType。同一请求中的 Name 须唯一。Reference 须包含镜像标签或 SHA-256 摘要。</p><p>取值参考：[{&quot;Name&quot;:&quot;runtime&quot;,&quot;StorageSource&quot;:{&quot;Image&quot;:{&quot;Reference&quot;:&quot;ccr.ccs.tencentyun.com/example/runtime:v2&quot;,&quot;ImageRegistryType&quot;:&quot;personal&quot;,&quot;SubPath&quot;:&quot;assets&quot;}}}]</p><p>省略本参数或传空数组时保留原配置。SubPath 省略时保留原目录，传空字符串时使用镜像根目录，传非空路径时使用指定目录。工具沿用原有 MountPath 和 ReadOnly，镜像摘要由服务解析。</p>
                     * @param _storageMounts <p>按挂载名称更新沙箱工具已有镜像卷的镜像来源和镜像内目录。</p><p>入参限制：每项须提供已有镜像卷的 Name，以及 StorageSource.Image 中的 Reference 和 ImageRegistryType。同一请求中的 Name 须唯一。Reference 须包含镜像标签或 SHA-256 摘要。</p><p>取值参考：[{&quot;Name&quot;:&quot;runtime&quot;,&quot;StorageSource&quot;:{&quot;Image&quot;:{&quot;Reference&quot;:&quot;ccr.ccs.tencentyun.com/example/runtime:v2&quot;,&quot;ImageRegistryType&quot;:&quot;personal&quot;,&quot;SubPath&quot;:&quot;assets&quot;}}}]</p><p>省略本参数或传空数组时保留原配置。SubPath 省略时保留原目录，传空字符串时使用镜像根目录，传非空路径时使用指定目录。工具沿用原有 MountPath 和 ReadOnly，镜像摘要由服务解析。</p>
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
                     * <p>沙箱工具ID</p>
                     */
                    std::string m_toolId;
                    bool m_toolIdHasBeenSet;

                    /**
                     * <p>沙箱工具描述，最大长度200字符</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>网络配置</p>
                     */
                    NetworkConfiguration m_networkConfiguration;
                    bool m_networkConfigurationHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>沙箱工具自定义配置</p>
                     */
                    CustomConfiguration m_customConfiguration;
                    bool m_customConfigurationHasBeenSet;

                    /**
                     * <p>桌面电脑环境类沙箱配置</p>
                     */
                    ComputerConfiguration m_computerConfiguration;
                    bool m_computerConfigurationHasBeenSet;

                    /**
                     * <p>按挂载名称更新沙箱工具已有镜像卷的镜像来源和镜像内目录。</p><p>入参限制：每项须提供已有镜像卷的 Name，以及 StorageSource.Image 中的 Reference 和 ImageRegistryType。同一请求中的 Name 须唯一。Reference 须包含镜像标签或 SHA-256 摘要。</p><p>取值参考：[{&quot;Name&quot;:&quot;runtime&quot;,&quot;StorageSource&quot;:{&quot;Image&quot;:{&quot;Reference&quot;:&quot;ccr.ccs.tencentyun.com/example/runtime:v2&quot;,&quot;ImageRegistryType&quot;:&quot;personal&quot;,&quot;SubPath&quot;:&quot;assets&quot;}}}]</p><p>省略本参数或传空数组时保留原配置。SubPath 省略时保留原目录，传空字符串时使用镜像根目录，传非空路径时使用指定目录。工具沿用原有 MountPath 和 ReadOnly，镜像摘要由服务解析。</p>
                     */
                    std::vector<StorageMount> m_storageMounts;
                    bool m_storageMountsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_UPDATESANDBOXTOOLREQUEST_H_
