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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_LABRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_LABRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/TypeKVPair.h>
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
                * 数据实验室
                */
                class LabResponse : public AbstractModel
                {
                public:
                    LabResponse();
                    ~LabResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>案例模板ID（startMode=EXAMPLE 时使用）</p>
                     * @return ExampleId <p>案例模板ID（startMode=EXAMPLE 时使用）</p>
                     * 
                     */
                    std::string GetExampleId() const;

                    /**
                     * 设置<p>案例模板ID（startMode=EXAMPLE 时使用）</p>
                     * @param _exampleId <p>案例模板ID（startMode=EXAMPLE 时使用）</p>
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
                     * 获取<p>代码包/工程归档地址</p>
                     * @return CodeArchiveUrl <p>代码包/工程归档地址</p>
                     * 
                     */
                    std::string GetCodeArchiveUrl() const;

                    /**
                     * 设置<p>代码包/工程归档地址</p>
                     * @param _codeArchiveUrl <p>代码包/工程归档地址</p>
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
                     * 获取<p>数据实验室服务入口（服务类型 -&gt; 访问地址）</p>
                     * @return Services <p>数据实验室服务入口（服务类型 -&gt; 访问地址）</p>
                     * 
                     */
                    std::vector<TypeKVPair> GetServices() const;

                    /**
                     * 设置<p>数据实验室服务入口（服务类型 -&gt; 访问地址）</p>
                     * @param _services <p>数据实验室服务入口（服务类型 -&gt; 访问地址）</p>
                     * 
                     */
                    void SetServices(const std::vector<TypeKVPair>& _services);

                    /**
                     * 判断参数 Services 是否已赋值
                     * @return Services 是否已赋值
                     * 
                     */
                    bool ServicesHasBeenSet() const;

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

                    /**
                     * 获取<p>集群ID</p>
                     * @return Id <p>集群ID</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _id <p>集群ID</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>资源类型：CLUSTER-普通集群；WORKSPACE-数据实验室（开发入口）</p>
                     * @return Type <p>资源类型：CLUSTER-普通集群；WORKSPACE-数据实验室（开发入口）</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>资源类型：CLUSTER-普通集群；WORKSPACE-数据实验室（开发入口）</p>
                     * @param _type <p>资源类型：CLUSTER-普通集群；WORKSPACE-数据实验室（开发入口）</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>集群名称</p>
                     * @return Name <p>集群名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>集群名称</p>
                     * @param _name <p>集群名称</p>
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
                     * 获取<p>集群描述</p>
                     * @return Description <p>集群描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>集群描述</p>
                     * @param _description <p>集群描述</p>
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
                     * 获取<p>所属资源分区ID</p>
                     * @return ResourcePartitionId <p>所属资源分区ID</p>
                     * 
                     */
                    std::string GetResourcePartitionId() const;

                    /**
                     * 设置<p>所属资源分区ID</p>
                     * @param _resourcePartitionId <p>所属资源分区ID</p>
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
                     * 获取<p>默认资源分区名称</p>
                     * @return ResourcePartitionName <p>默认资源分区名称</p>
                     * 
                     */
                    std::string GetResourcePartitionName() const;

                    /**
                     * 设置<p>默认资源分区名称</p>
                     * @param _resourcePartitionName <p>默认资源分区名称</p>
                     * 
                     */
                    void SetResourcePartitionName(const std::string& _resourcePartitionName);

                    /**
                     * 判断参数 ResourcePartitionName 是否已赋值
                     * @return ResourcePartitionName 是否已赋值
                     * 
                     */
                    bool ResourcePartitionNameHasBeenSet() const;

                    /**
                     * 获取<p>所属队列名称</p>
                     * @return Queue <p>所属队列名称</p>
                     * 
                     */
                    std::string GetQueue() const;

                    /**
                     * 设置<p>所属队列名称</p>
                     * @param _queue <p>所属队列名称</p>
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
                     * 获取<p>应用ID</p>
                     * @return AppId <p>应用ID</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>应用ID</p>
                     * @param _appId <p>应用ID</p>
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>用户UIN</p>
                     * @return Uin <p>用户UIN</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>用户UIN</p>
                     * @param _uin <p>用户UIN</p>
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>子用户UIN</p>
                     * @return SubAccountUin <p>子用户UIN</p>
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置<p>子用户UIN</p>
                     * @param _subAccountUin <p>子用户UIN</p>
                     * 
                     */
                    void SetSubAccountUin(const std::string& _subAccountUin);

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                    /**
                     * 获取<p>子用户名称（由聚合层通过 CAM 接口回填）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubAccountName <p>子用户名称（由聚合层通过 CAM 接口回填）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubAccountName() const;

                    /**
                     * 设置<p>子用户名称（由聚合层通过 CAM 接口回填）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subAccountName <p>子用户名称（由聚合层通过 CAM 接口回填）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubAccountName(const std::string& _subAccountName);

                    /**
                     * 判断参数 SubAccountName 是否已赋值
                     * @return SubAccountName 是否已赋值
                     * 
                     */
                    bool SubAccountNameHasBeenSet() const;

                    /**
                     * 获取<p>集群状态</p>
                     * @return Status <p>集群状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>集群状态</p>
                     * @param _status <p>集群状态</p>
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
                     * 获取<p>状态详情/错误信息</p>
                     * @return StatusMessage <p>状态详情/错误信息</p>
                     * 
                     */
                    std::string GetStatusMessage() const;

                    /**
                     * 设置<p>状态详情/错误信息</p>
                     * @param _statusMessage <p>状态详情/错误信息</p>
                     * 
                     */
                    void SetStatusMessage(const std::string& _statusMessage);

                    /**
                     * 判断参数 StatusMessage 是否已赋值
                     * @return StatusMessage 是否已赋值
                     * 
                     */
                    bool StatusMessageHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>所属集群组名称</p>
                     * @return GroupName <p>所属集群组名称</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>所属集群组名称</p>
                     * @param _groupName <p>所属集群组名称</p>
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

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
                     * 获取<p>资源配置(JSON)</p>
                     * @return ResourceConfig <p>资源配置(JSON)</p>
                     * 
                     */
                    std::string GetResourceConfig() const;

                    /**
                     * 设置<p>资源配置(JSON)</p>
                     * @param _resourceConfig <p>资源配置(JSON)</p>
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
                     * 获取<p>运行时环境配置(JSON)</p>
                     * @return RuntimeEnv <p>运行时环境配置(JSON)</p>
                     * 
                     */
                    std::string GetRuntimeEnv() const;

                    /**
                     * 设置<p>运行时环境配置(JSON)</p>
                     * @param _runtimeEnv <p>运行时环境配置(JSON)</p>
                     * 
                     */
                    void SetRuntimeEnv(const std::string& _runtimeEnv);

                    /**
                     * 判断参数 RuntimeEnv 是否已赋值
                     * @return RuntimeEnv 是否已赋值
                     * 
                     */
                    bool RuntimeEnvHasBeenSet() const;

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
                     * 获取<p>存储卷和挂载卷配置(JSON)</p>
                     * @return Catalog <p>存储卷和挂载卷配置(JSON)</p>
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置<p>存储卷和挂载卷配置(JSON)</p>
                     * @param _catalog <p>存储卷和挂载卷配置(JSON)</p>
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
                     * 获取<p>Dashboard URL / 历史记录链接</p>
                     * @return HistoryUrl <p>Dashboard URL / 历史记录链接</p>
                     * 
                     */
                    std::string GetHistoryUrl() const;

                    /**
                     * 设置<p>Dashboard URL / 历史记录链接</p>
                     * @param _historyUrl <p>Dashboard URL / 历史记录链接</p>
                     * 
                     */
                    void SetHistoryUrl(const std::string& _historyUrl);

                    /**
                     * 判断参数 HistoryUrl 是否已赋值
                     * @return HistoryUrl 是否已赋值
                     * 
                     */
                    bool HistoryUrlHasBeenSet() const;

                    /**
                     * 获取<p>镜像拉取策略</p>
                     * @return ImagePullPolicy <p>镜像拉取策略</p>
                     * 
                     */
                    std::string GetImagePullPolicy() const;

                    /**
                     * 设置<p>镜像拉取策略</p>
                     * @param _imagePullPolicy <p>镜像拉取策略</p>
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
                     * 获取<p>启动时间（最近一次启动）</p>
                     * @return StartTime <p>启动时间（最近一次启动）</p>
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置<p>启动时间（最近一次启动）</p>
                     * @param _startTime <p>启动时间（最近一次启动）</p>
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>停止时间（最近一次停止/休眠）</p>
                     * @return StopTime <p>停止时间（最近一次停止/休眠）</p>
                     * 
                     */
                    uint64_t GetStopTime() const;

                    /**
                     * 设置<p>停止时间（最近一次停止/休眠）</p>
                     * @param _stopTime <p>停止时间（最近一次停止/休眠）</p>
                     * 
                     */
                    void SetStopTime(const uint64_t& _stopTime);

                    /**
                     * 判断参数 StopTime 是否已赋值
                     * @return StopTime 是否已赋值
                     * 
                     */
                    bool StopTimeHasBeenSet() const;

                    /**
                     * 获取<p>删除时间</p>
                     * @return DeleteTime <p>删除时间</p>
                     * 
                     */
                    uint64_t GetDeleteTime() const;

                    /**
                     * 设置<p>删除时间</p>
                     * @param _deleteTime <p>删除时间</p>
                     * 
                     */
                    void SetDeleteTime(const uint64_t& _deleteTime);

                    /**
                     * 判断参数 DeleteTime 是否已赋值
                     * @return DeleteTime 是否已赋值
                     * 
                     */
                    bool DeleteTimeHasBeenSet() const;

                    /**
                     * 获取<p>标签列表（TagKey-TagValue）</p>
                     * @return Tags <p>标签列表（TagKey-TagValue）</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签列表（TagKey-TagValue）</p>
                     * @param _tags <p>标签列表（TagKey-TagValue）</p>
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
                     * 获取<p>Token 认证密钥（开启 token 认证时由系统生成）</p>
                     * @return Token <p>Token 认证密钥（开启 token 认证时由系统生成）</p>
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置<p>Token 认证密钥（开启 token 认证时由系统生成）</p>
                     * @param _token <p>Token 认证密钥（开启 token 认证时由系统生成）</p>
                     * 
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                private:

                    /**
                     * <p>案例模板ID（startMode=EXAMPLE 时使用）</p>
                     */
                    std::string m_exampleId;
                    bool m_exampleIdHasBeenSet;

                    /**
                     * <p>代码包/工程归档地址</p>
                     */
                    std::string m_codeArchiveUrl;
                    bool m_codeArchiveUrlHasBeenSet;

                    /**
                     * <p>数据实验室服务入口（服务类型 -&gt; 访问地址）</p>
                     */
                    std::vector<TypeKVPair> m_services;
                    bool m_servicesHasBeenSet;

                    /**
                     * <p>Lab 镜像地址（必填，用于开发工具如 Jupyter/VSCode/WebShell）。前端在&quot;内置 / 自定义&quot;两态中选择此值；当 Image 字段未显式传入时，后端会基于该字段按 R1（镜像表命中）/R2（同值 fallback）派生 Ray 集群镜像。</p>
                     */
                    std::string m_labImage;
                    bool m_labImageHasBeenSet;

                    /**
                     * <p>Lab sidecar 镜像拉取策略（Always, IfNotPresent, Never）</p>
                     */
                    std::string m_labImagePullPolicy;
                    bool m_labImagePullPolicyHasBeenSet;

                    /**
                     * <p>Lab sidecar 镜像拉取类型（BuiltIn: 内置, Custom: 自定义-TCR, CustomCcr: 自定义-CCR）</p>
                     */
                    std::string m_labImagePullType;
                    bool m_labImagePullTypeHasBeenSet;

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>资源类型：CLUSTER-普通集群；WORKSPACE-数据实验室（开发入口）</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>集群名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>集群描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>所属资源分区ID</p>
                     */
                    std::string m_resourcePartitionId;
                    bool m_resourcePartitionIdHasBeenSet;

                    /**
                     * <p>默认资源分区名称</p>
                     */
                    std::string m_resourcePartitionName;
                    bool m_resourcePartitionNameHasBeenSet;

                    /**
                     * <p>所属队列名称</p>
                     */
                    std::string m_queue;
                    bool m_queueHasBeenSet;

                    /**
                     * <p>应用ID</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>用户UIN</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>子用户UIN</p>
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * <p>子用户名称（由聚合层通过 CAM 接口回填）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subAccountName;
                    bool m_subAccountNameHasBeenSet;

                    /**
                     * <p>集群状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>状态详情/错误信息</p>
                     */
                    std::string m_statusMessage;
                    bool m_statusMessageHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>所属集群组名称</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>计算组 ID</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>资源配置(JSON)</p>
                     */
                    std::string m_resourceConfig;
                    bool m_resourceConfigHasBeenSet;

                    /**
                     * <p>资源配置ID</p>
                     */
                    std::string m_resourceConfigId;
                    bool m_resourceConfigIdHasBeenSet;

                    /**
                     * <p>运行时环境配置(JSON)</p>
                     */
                    std::string m_runtimeEnv;
                    bool m_runtimeEnvHasBeenSet;

                    /**
                     * <p>Ray 集群镜像地址（可选，OpenAPI/SDK 高级控制入口）。前端不再传递此字段；为空时后端按 R1（镜像表查询命中）→ R2（同值 fallback）顺序自动派生。非空时直接作为 Ray 集群镜像，跳过派生（EXPLICIT），且后端不校验其与 LabImage 的兼容性。</p>
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>存储卷和挂载卷配置(JSON)</p>
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * <p>Dashboard URL / 历史记录链接</p>
                     */
                    std::string m_historyUrl;
                    bool m_historyUrlHasBeenSet;

                    /**
                     * <p>镜像拉取策略</p>
                     */
                    std::string m_imagePullPolicy;
                    bool m_imagePullPolicyHasBeenSet;

                    /**
                     * <p>镜像拉取类型（BuiltIn: 内置, Custom: 自定义-TCR, CustomCcr: 自定义-CCR）</p>
                     */
                    std::string m_imagePullType;
                    bool m_imagePullTypeHasBeenSet;

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
                     * <p>启动时间（最近一次启动）</p>
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>停止时间（最近一次停止/休眠）</p>
                     */
                    uint64_t m_stopTime;
                    bool m_stopTimeHasBeenSet;

                    /**
                     * <p>删除时间</p>
                     */
                    uint64_t m_deleteTime;
                    bool m_deleteTimeHasBeenSet;

                    /**
                     * <p>标签列表（TagKey-TagValue）</p>
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
                     * <p>Token 认证密钥（开启 token 认证时由系统生成）</p>
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_LABRESPONSE_H_
