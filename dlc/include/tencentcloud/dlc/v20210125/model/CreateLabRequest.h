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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATELABREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATELABREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Tag.h>
#include <tencentcloud/dlc/v20210125/model/PersistentWorkDir.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateLab请求参数结构体
                */
                class CreateLabRequest : public AbstractModel
                {
                public:
                    CreateLabRequest();
                    ~CreateLabRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>数据实验室名称</p>
                     * @return Name <p>数据实验室名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>数据实验室名称</p>
                     * @param _name <p>数据实验室名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Lab 镜像地址（必填，用于开发工具如 Jupyter/VSCode/WebShell）。前端在&quot;内置 / 自定义&quot;两态中选择此值；当 Image 字段未显式传入时，后端会基于该字段按 R1（镜像表命中）/R2（同值 fallback）派生 Ray 集群镜像。</p>
                     * @return LabImage <p>Lab 镜像地址（必填，用于开发工具如 Jupyter/VSCode/WebShell）。前端在&quot;内置 / 自定义&quot;两态中选择此值；当 Image 字段未显式传入时，后端会基于该字段按 R1（镜像表命中）/R2（同值 fallback）派生 Ray 集群镜像。</p>
                     * 
                     */
                    std::string GetLabImage() const;

                    /**
                     * 设置<p>Lab 镜像地址（必填，用于开发工具如 Jupyter/VSCode/WebShell）。前端在&quot;内置 / 自定义&quot;两态中选择此值；当 Image 字段未显式传入时，后端会基于该字段按 R1（镜像表命中）/R2（同值 fallback）派生 Ray 集群镜像。</p>
                     * @param _labImage <p>Lab 镜像地址（必填，用于开发工具如 Jupyter/VSCode/WebShell）。前端在&quot;内置 / 自定义&quot;两态中选择此值；当 Image 字段未显式传入时，后端会基于该字段按 R1（镜像表命中）/R2（同值 fallback）派生 Ray 集群镜像。</p>
                     * 
                     */
                    void SetLabImage(const std::string& _labImage);

                    /**
                     * 判断参数 LabImage 是否已赋值
                     * @return LabImage 是否已赋值
                     * 
                     */
                    bool LabImageHasBeenSet() const;

                    /**
                     * 获取<p>资源分区ID</p>
                     * @return ResourcePartitionId <p>资源分区ID</p>
                     * 
                     */
                    std::string GetResourcePartitionId() const;

                    /**
                     * 设置<p>资源分区ID</p>
                     * @param _resourcePartitionId <p>资源分区ID</p>
                     * 
                     */
                    void SetResourcePartitionId(const std::string& _resourcePartitionId);

                    /**
                     * 判断参数 ResourcePartitionId 是否已赋值
                     * @return ResourcePartitionId 是否已赋值
                     * 
                     */
                    bool ResourcePartitionIdHasBeenSet() const;

                    /**
                     * 获取<p>队列名称</p>
                     * @return Queue <p>队列名称</p>
                     * 
                     */
                    std::string GetQueue() const;

                    /**
                     * 设置<p>队列名称</p>
                     * @param _queue <p>队列名称</p>
                     * 
                     */
                    void SetQueue(const std::string& _queue);

                    /**
                     * 判断参数 Queue 是否已赋值
                     * @return Queue 是否已赋值
                     * 
                     */
                    bool QueueHasBeenSet() const;

                    /**
                     * 获取<p>数据实验室描述</p>
                     * @return Description <p>数据实验室描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>数据实验室描述</p>
                     * @param _description <p>数据实验室描述</p>
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
                     * 获取<p>Ray 集群镜像地址（可选，OpenAPI/SDK 高级控制入口）。前端不再传递此字段；为空时后端按 R1（镜像表查询命中）→ R2（同值 fallback）顺序自动派生。非空时直接作为 Ray 集群镜像，跳过派生（EXPLICIT），且后端不校验其与 LabImage 的兼容性。</p>
                     * @return Image <p>Ray 集群镜像地址（可选，OpenAPI/SDK 高级控制入口）。前端不再传递此字段；为空时后端按 R1（镜像表查询命中）→ R2（同值 fallback）顺序自动派生。非空时直接作为 Ray 集群镜像，跳过派生（EXPLICIT），且后端不校验其与 LabImage 的兼容性。</p>
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置<p>Ray 集群镜像地址（可选，OpenAPI/SDK 高级控制入口）。前端不再传递此字段；为空时后端按 R1（镜像表查询命中）→ R2（同值 fallback）顺序自动派生。非空时直接作为 Ray 集群镜像，跳过派生（EXPLICIT），且后端不校验其与 LabImage 的兼容性。</p>
                     * @param _image <p>Ray 集群镜像地址（可选，OpenAPI/SDK 高级控制入口）。前端不再传递此字段；为空时后端按 R1（镜像表查询命中）→ R2（同值 fallback）顺序自动派生。非空时直接作为 Ray 集群镜像，跳过派生（EXPLICIT），且后端不校验其与 LabImage 的兼容性。</p>
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取<p>镜像拉取策略（Always, IfNotPresent, Never）</p>
                     * @return ImagePullPolicy <p>镜像拉取策略（Always, IfNotPresent, Never）</p>
                     * 
                     */
                    std::string GetImagePullPolicy() const;

                    /**
                     * 设置<p>镜像拉取策略（Always, IfNotPresent, Never）</p>
                     * @param _imagePullPolicy <p>镜像拉取策略（Always, IfNotPresent, Never）</p>
                     * 
                     */
                    void SetImagePullPolicy(const std::string& _imagePullPolicy);

                    /**
                     * 判断参数 ImagePullPolicy 是否已赋值
                     * @return ImagePullPolicy 是否已赋值
                     * 
                     */
                    bool ImagePullPolicyHasBeenSet() const;

                    /**
                     * 获取<p>资源配置</p>
                     * @return ResourceConfig <p>资源配置</p>
                     * 
                     */
                    std::string GetResourceConfig() const;

                    /**
                     * 设置<p>资源配置</p>
                     * @param _resourceConfig <p>资源配置</p>
                     * 
                     */
                    void SetResourceConfig(const std::string& _resourceConfig);

                    /**
                     * 判断参数 ResourceConfig 是否已赋值
                     * @return ResourceConfig 是否已赋值
                     * 
                     */
                    bool ResourceConfigHasBeenSet() const;

                    /**
                     * 获取<p>资源配置ID</p>
                     * @return ResourceConfigId <p>资源配置ID</p>
                     * 
                     */
                    std::string GetResourceConfigId() const;

                    /**
                     * 设置<p>资源配置ID</p>
                     * @param _resourceConfigId <p>资源配置ID</p>
                     * 
                     */
                    void SetResourceConfigId(const std::string& _resourceConfigId);

                    /**
                     * 判断参数 ResourceConfigId 是否已赋值
                     * @return ResourceConfigId 是否已赋值
                     * 
                     */
                    bool ResourceConfigIdHasBeenSet() const;

                    /**
                     * 获取<p>存储卷和挂载卷配置</p>
                     * @return Catalog <p>存储卷和挂载卷配置</p>
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置<p>存储卷和挂载卷配置</p>
                     * @param _catalog <p>存储卷和挂载卷配置</p>
                     * 
                     */
                    void SetCatalog(const std::string& _catalog);

                    /**
                     * 判断参数 Catalog 是否已赋值
                     * @return Catalog 是否已赋值
                     * 
                     */
                    bool CatalogHasBeenSet() const;

                    /**
                     * 获取<p>计算组 ID</p>
                     * @return GroupId <p>计算组 ID</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>计算组 ID</p>
                     * @param _groupId <p>计算组 ID</p>
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>服务类型列表(VSCODE, JUPYTER, WEBSHELL)，不填则使用默认配置</p>
                     * @return ServiceTypes <p>服务类型列表(VSCODE, JUPYTER, WEBSHELL)，不填则使用默认配置</p>
                     * 
                     */
                    std::vector<std::string> GetServiceTypes() const;

                    /**
                     * 设置<p>服务类型列表(VSCODE, JUPYTER, WEBSHELL)，不填则使用默认配置</p>
                     * @param _serviceTypes <p>服务类型列表(VSCODE, JUPYTER, WEBSHELL)，不填则使用默认配置</p>
                     * 
                     */
                    void SetServiceTypes(const std::vector<std::string>& _serviceTypes);

                    /**
                     * 判断参数 ServiceTypes 是否已赋值
                     * @return ServiceTypes 是否已赋值
                     * 
                     */
                    bool ServiceTypesHasBeenSet() const;

                    /**
                     * 获取<p>案例ID，当 startMode=EXAMPLE 时必填</p>
                     * @return ExampleId <p>案例ID，当 startMode=EXAMPLE 时必填</p>
                     * 
                     */
                    std::string GetExampleId() const;

                    /**
                     * 设置<p>案例ID，当 startMode=EXAMPLE 时必填</p>
                     * @param _exampleId <p>案例ID，当 startMode=EXAMPLE 时必填</p>
                     * 
                     */
                    void SetExampleId(const std::string& _exampleId);

                    /**
                     * 判断参数 ExampleId 是否已赋值
                     * @return ExampleId 是否已赋值
                     * 
                     */
                    bool ExampleIdHasBeenSet() const;

                    /**
                     * 获取<p>案例代码包地址，当 startMode=EXAMPLE 时填写</p>
                     * @return CodeArchiveUrl <p>案例代码包地址，当 startMode=EXAMPLE 时填写</p>
                     * 
                     */
                    std::string GetCodeArchiveUrl() const;

                    /**
                     * 设置<p>案例代码包地址，当 startMode=EXAMPLE 时填写</p>
                     * @param _codeArchiveUrl <p>案例代码包地址，当 startMode=EXAMPLE 时填写</p>
                     * 
                     */
                    void SetCodeArchiveUrl(const std::string& _codeArchiveUrl);

                    /**
                     * 判断参数 CodeArchiveUrl 是否已赋值
                     * @return CodeArchiveUrl 是否已赋值
                     * 
                     */
                    bool CodeArchiveUrlHasBeenSet() const;

                    /**
                     * 获取<p>Lab sidecar 镜像拉取策略（Always, IfNotPresent, Never）</p>
                     * @return LabImagePullPolicy <p>Lab sidecar 镜像拉取策略（Always, IfNotPresent, Never）</p>
                     * 
                     */
                    std::string GetLabImagePullPolicy() const;

                    /**
                     * 设置<p>Lab sidecar 镜像拉取策略（Always, IfNotPresent, Never）</p>
                     * @param _labImagePullPolicy <p>Lab sidecar 镜像拉取策略（Always, IfNotPresent, Never）</p>
                     * 
                     */
                    void SetLabImagePullPolicy(const std::string& _labImagePullPolicy);

                    /**
                     * 判断参数 LabImagePullPolicy 是否已赋值
                     * @return LabImagePullPolicy 是否已赋值
                     * 
                     */
                    bool LabImagePullPolicyHasBeenSet() const;

                    /**
                     * 获取<p>高级参数（扁平 Key-Value 的 JSON 字符串），Key 以 spec. 开头，按 RayCluster CRD 下钻；详见 ADVANCED_CLUSTER_OPTIONS_DESIGN.md</p>
                     * @return AdvancedOptions <p>高级参数（扁平 Key-Value 的 JSON 字符串），Key 以 spec. 开头，按 RayCluster CRD 下钻；详见 ADVANCED_CLUSTER_OPTIONS_DESIGN.md</p>
                     * 
                     */
                    std::string GetAdvancedOptions() const;

                    /**
                     * 设置<p>高级参数（扁平 Key-Value 的 JSON 字符串），Key 以 spec. 开头，按 RayCluster CRD 下钻；详见 ADVANCED_CLUSTER_OPTIONS_DESIGN.md</p>
                     * @param _advancedOptions <p>高级参数（扁平 Key-Value 的 JSON 字符串），Key 以 spec. 开头，按 RayCluster CRD 下钻；详见 ADVANCED_CLUSTER_OPTIONS_DESIGN.md</p>
                     * 
                     */
                    void SetAdvancedOptions(const std::string& _advancedOptions);

                    /**
                     * 判断参数 AdvancedOptions 是否已赋值
                     * @return AdvancedOptions 是否已赋值
                     * 
                     */
                    bool AdvancedOptionsHasBeenSet() const;

                    /**
                     * 获取<p>优先级（1-9，数字越大优先级越高）</p>
                     * @return Priority <p>优先级（1-9，数字越大优先级越高）</p>
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置<p>优先级（1-9，数字越大优先级越高）</p>
                     * @param _priority <p>优先级（1-9，数字越大优先级越高）</p>
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取<p>标签列表（TagKey-TagValue），用于将资源与腾讯云标签系统中的标签绑定</p>
                     * @return Tags <p>标签列表（TagKey-TagValue），用于将资源与腾讯云标签系统中的标签绑定</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签列表（TagKey-TagValue），用于将资源与腾讯云标签系统中的标签绑定</p>
                     * @param _tags <p>标签列表（TagKey-TagValue），用于将资源与腾讯云标签系统中的标签绑定</p>
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
                     * 获取<p>持久化工作目录配置（可选）。启用后将 COS/CFS 指定路径挂载到容器内 /workspace 工作目录，与现有 Catalog 的卷配置互斥（不允许同时在 Catalog 中显式声明 MountPath=/workspace）。</p>
                     * @return PersistentWorkDir <p>持久化工作目录配置（可选）。启用后将 COS/CFS 指定路径挂载到容器内 /workspace 工作目录，与现有 Catalog 的卷配置互斥（不允许同时在 Catalog 中显式声明 MountPath=/workspace）。</p>
                     * 
                     */
                    PersistentWorkDir GetPersistentWorkDir() const;

                    /**
                     * 设置<p>持久化工作目录配置（可选）。启用后将 COS/CFS 指定路径挂载到容器内 /workspace 工作目录，与现有 Catalog 的卷配置互斥（不允许同时在 Catalog 中显式声明 MountPath=/workspace）。</p>
                     * @param _persistentWorkDir <p>持久化工作目录配置（可选）。启用后将 COS/CFS 指定路径挂载到容器内 /workspace 工作目录，与现有 Catalog 的卷配置互斥（不允许同时在 Catalog 中显式声明 MountPath=/workspace）。</p>
                     * 
                     */
                    void SetPersistentWorkDir(const PersistentWorkDir& _persistentWorkDir);

                    /**
                     * 判断参数 PersistentWorkDir 是否已赋值
                     * @return PersistentWorkDir 是否已赋值
                     * 
                     */
                    bool PersistentWorkDirHasBeenSet() const;

                    /**
                     * 获取<p>是否开启token认证</p>
                     * @return EnableToken <p>是否开启token认证</p>
                     * 
                     */
                    bool GetEnableToken() const;

                    /**
                     * 设置<p>是否开启token认证</p>
                     * @param _enableToken <p>是否开启token认证</p>
                     * 
                     */
                    void SetEnableToken(const bool& _enableToken);

                    /**
                     * 判断参数 EnableToken 是否已赋值
                     * @return EnableToken 是否已赋值
                     * 
                     */
                    bool EnableTokenHasBeenSet() const;

                    /**
                     * 获取<p>镜像拉取类型（BuiltIn: 内置, Custom: 自定义-TCR, CustomCcr: 自定义-CCR）</p>
                     * @return ImagePullType <p>镜像拉取类型（BuiltIn: 内置, Custom: 自定义-TCR, CustomCcr: 自定义-CCR）</p>
                     * 
                     */
                    std::string GetImagePullType() const;

                    /**
                     * 设置<p>镜像拉取类型（BuiltIn: 内置, Custom: 自定义-TCR, CustomCcr: 自定义-CCR）</p>
                     * @param _imagePullType <p>镜像拉取类型（BuiltIn: 内置, Custom: 自定义-TCR, CustomCcr: 自定义-CCR）</p>
                     * 
                     */
                    void SetImagePullType(const std::string& _imagePullType);

                    /**
                     * 判断参数 ImagePullType 是否已赋值
                     * @return ImagePullType 是否已赋值
                     * 
                     */
                    bool ImagePullTypeHasBeenSet() const;

                    /**
                     * 获取<p>Lab sidecar 镜像拉取类型（BuiltIn: 内置, Custom: 自定义-TCR, CustomCcr: 自定义-CCR）</p>
                     * @return LabImagePullType <p>Lab sidecar 镜像拉取类型（BuiltIn: 内置, Custom: 自定义-TCR, CustomCcr: 自定义-CCR）</p>
                     * 
                     */
                    std::string GetLabImagePullType() const;

                    /**
                     * 设置<p>Lab sidecar 镜像拉取类型（BuiltIn: 内置, Custom: 自定义-TCR, CustomCcr: 自定义-CCR）</p>
                     * @param _labImagePullType <p>Lab sidecar 镜像拉取类型（BuiltIn: 内置, Custom: 自定义-TCR, CustomCcr: 自定义-CCR）</p>
                     * 
                     */
                    void SetLabImagePullType(const std::string& _labImagePullType);

                    /**
                     * 判断参数 LabImagePullType 是否已赋值
                     * @return LabImagePullType 是否已赋值
                     * 
                     */
                    bool LabImagePullTypeHasBeenSet() const;

                private:

                    /**
                     * <p>数据实验室名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Lab 镜像地址（必填，用于开发工具如 Jupyter/VSCode/WebShell）。前端在&quot;内置 / 自定义&quot;两态中选择此值；当 Image 字段未显式传入时，后端会基于该字段按 R1（镜像表命中）/R2（同值 fallback）派生 Ray 集群镜像。</p>
                     */
                    std::string m_labImage;
                    bool m_labImageHasBeenSet;

                    /**
                     * <p>资源分区ID</p>
                     */
                    std::string m_resourcePartitionId;
                    bool m_resourcePartitionIdHasBeenSet;

                    /**
                     * <p>队列名称</p>
                     */
                    std::string m_queue;
                    bool m_queueHasBeenSet;

                    /**
                     * <p>数据实验室描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Ray 集群镜像地址（可选，OpenAPI/SDK 高级控制入口）。前端不再传递此字段；为空时后端按 R1（镜像表查询命中）→ R2（同值 fallback）顺序自动派生。非空时直接作为 Ray 集群镜像，跳过派生（EXPLICIT），且后端不校验其与 LabImage 的兼容性。</p>
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>镜像拉取策略（Always, IfNotPresent, Never）</p>
                     */
                    std::string m_imagePullPolicy;
                    bool m_imagePullPolicyHasBeenSet;

                    /**
                     * <p>资源配置</p>
                     */
                    std::string m_resourceConfig;
                    bool m_resourceConfigHasBeenSet;

                    /**
                     * <p>资源配置ID</p>
                     */
                    std::string m_resourceConfigId;
                    bool m_resourceConfigIdHasBeenSet;

                    /**
                     * <p>存储卷和挂载卷配置</p>
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * <p>计算组 ID</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>服务类型列表(VSCODE, JUPYTER, WEBSHELL)，不填则使用默认配置</p>
                     */
                    std::vector<std::string> m_serviceTypes;
                    bool m_serviceTypesHasBeenSet;

                    /**
                     * <p>案例ID，当 startMode=EXAMPLE 时必填</p>
                     */
                    std::string m_exampleId;
                    bool m_exampleIdHasBeenSet;

                    /**
                     * <p>案例代码包地址，当 startMode=EXAMPLE 时填写</p>
                     */
                    std::string m_codeArchiveUrl;
                    bool m_codeArchiveUrlHasBeenSet;

                    /**
                     * <p>Lab sidecar 镜像拉取策略（Always, IfNotPresent, Never）</p>
                     */
                    std::string m_labImagePullPolicy;
                    bool m_labImagePullPolicyHasBeenSet;

                    /**
                     * <p>高级参数（扁平 Key-Value 的 JSON 字符串），Key 以 spec. 开头，按 RayCluster CRD 下钻；详见 ADVANCED_CLUSTER_OPTIONS_DESIGN.md</p>
                     */
                    std::string m_advancedOptions;
                    bool m_advancedOptionsHasBeenSet;

                    /**
                     * <p>优先级（1-9，数字越大优先级越高）</p>
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * <p>标签列表（TagKey-TagValue），用于将资源与腾讯云标签系统中的标签绑定</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>持久化工作目录配置（可选）。启用后将 COS/CFS 指定路径挂载到容器内 /workspace 工作目录，与现有 Catalog 的卷配置互斥（不允许同时在 Catalog 中显式声明 MountPath=/workspace）。</p>
                     */
                    PersistentWorkDir m_persistentWorkDir;
                    bool m_persistentWorkDirHasBeenSet;

                    /**
                     * <p>是否开启token认证</p>
                     */
                    bool m_enableToken;
                    bool m_enableTokenHasBeenSet;

                    /**
                     * <p>镜像拉取类型（BuiltIn: 内置, Custom: 自定义-TCR, CustomCcr: 自定义-CCR）</p>
                     */
                    std::string m_imagePullType;
                    bool m_imagePullTypeHasBeenSet;

                    /**
                     * <p>Lab sidecar 镜像拉取类型（BuiltIn: 内置, Custom: 自定义-TCR, CustomCcr: 自定义-CCR）</p>
                     */
                    std::string m_labImagePullType;
                    bool m_labImagePullTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATELABREQUEST_H_
