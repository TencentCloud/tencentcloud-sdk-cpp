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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_SMARTROUTERCOMPONENT_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_SMARTROUTERCOMPONENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ImageInfo.h>
#include <tencentcloud/tione/v20211111/model/SmartRouterResourceConfig.h>
#include <tencentcloud/tione/v20211111/model/SmartRouterResourceSpec.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 智能路由组件（运行时视图，对齐 ModelService.RoleSpec + ServiceInfo.Status）
                */
                class SmartRouterComponent : public AbstractModel
                {
                public:
                    SmartRouterComponent();
                    ~SmartRouterComponent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>组件名称：{ServiceGroupId}-gateway / {ServiceGroupId}-scheduler</p>
                     * @return Name <p>组件名称：{ServiceGroupId}-gateway / {ServiceGroupId}-scheduler</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>组件名称：{ServiceGroupId}-gateway / {ServiceGroupId}-scheduler</p>
                     * @param _name <p>组件名称：{ServiceGroupId}-gateway / {ServiceGroupId}-scheduler</p>
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
                     * 获取<p>组件类型：&quot;Gateway&quot; / &quot;Scheduler&quot;</p>
                     * @return Type <p>组件类型：&quot;Gateway&quot; / &quot;Scheduler&quot;</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>组件类型：&quot;Gateway&quot; / &quot;Scheduler&quot;</p>
                     * @param _type <p>组件类型：&quot;Gateway&quot; / &quot;Scheduler&quot;</p>
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
                     * 获取<p>组件镜像（从 K8s Deployment 实时查询）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageInfo <p>组件镜像（从 K8s Deployment 实时查询）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageInfo GetImageInfo() const;

                    /**
                     * 设置<p>组件镜像（从 K8s Deployment 实时查询）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageInfo <p>组件镜像（从 K8s Deployment 实时查询）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageInfo(const ImageInfo& _imageInfo);

                    /**
                     * 判断参数 ImageInfo 是否已赋值
                     * @return ImageInfo 是否已赋值
                     * 
                     */
                    bool ImageInfoHasBeenSet() const;

                    /**
                     * 获取<p>期望配置（Replicas/Cpu/Memory/Env）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceConfig <p>期望配置（Replicas/Cpu/Memory/Env）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SmartRouterResourceConfig GetResourceConfig() const;

                    /**
                     * 设置<p>期望配置（Replicas/Cpu/Memory/Env）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceConfig <p>期望配置（Replicas/Cpu/Memory/Env）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceConfig(const SmartRouterResourceConfig& _resourceConfig);

                    /**
                     * 判断参数 ResourceConfig 是否已赋值
                     * @return ResourceConfig 是否已赋值
                     * 
                     */
                    bool ResourceConfigHasBeenSet() const;

                    /**
                     * 获取<p>组件状态：CREATING 创建中 / CREATE_FAILED 创建失败 / Normal 正常运行中 / Stopped 已停止 / Stopping 停止中 / Abnormal 异常 / Pending 启动中 / Waiting 就绪中</p>
                     * @return Status <p>组件状态：CREATING 创建中 / CREATE_FAILED 创建失败 / Normal 正常运行中 / Stopped 已停止 / Stopping 停止中 / Abnormal 异常 / Pending 启动中 / Waiting 就绪中</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>组件状态：CREATING 创建中 / CREATE_FAILED 创建失败 / Normal 正常运行中 / Stopped 已停止 / Stopping 停止中 / Abnormal 异常 / Pending 启动中 / Waiting 就绪中</p>
                     * @param _status <p>组件状态：CREATING 创建中 / CREATE_FAILED 创建失败 / Normal 正常运行中 / Stopped 已停止 / Stopping 停止中 / Abnormal 异常 / Pending 启动中 / Waiting 就绪中</p>
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
                     * 获取<p>资源规格（查询时回显用户创建/修改时的资源选择）。公有云场景展示：ChargeType / Zone / ResourceSupplyAttribute；内网版场景展示：QueueId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceSpec <p>资源规格（查询时回显用户创建/修改时的资源选择）。公有云场景展示：ChargeType / Zone / ResourceSupplyAttribute；内网版场景展示：QueueId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SmartRouterResourceSpec GetResourceSpec() const;

                    /**
                     * 设置<p>资源规格（查询时回显用户创建/修改时的资源选择）。公有云场景展示：ChargeType / Zone / ResourceSupplyAttribute；内网版场景展示：QueueId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceSpec <p>资源规格（查询时回显用户创建/修改时的资源选择）。公有云场景展示：ChargeType / Zone / ResourceSupplyAttribute；内网版场景展示：QueueId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceSpec(const SmartRouterResourceSpec& _resourceSpec);

                    /**
                     * 判断参数 ResourceSpec 是否已赋值
                     * @return ResourceSpec 是否已赋值
                     * 
                     */
                    bool ResourceSpecHasBeenSet() const;

                    /**
                     * 获取<p>业务状态（组件级计费状态，Gateway/Scheduler 独立判定）：Billing 计费中 / Normal 正常（未计费或已停止计费）/ WhitelistUsing 白名单使用中（免计费）</p>
                     * @return BusinessStatus <p>业务状态（组件级计费状态，Gateway/Scheduler 独立判定）：Billing 计费中 / Normal 正常（未计费或已停止计费）/ WhitelistUsing 白名单使用中（免计费）</p>
                     * 
                     */
                    std::string GetBusinessStatus() const;

                    /**
                     * 设置<p>业务状态（组件级计费状态，Gateway/Scheduler 独立判定）：Billing 计费中 / Normal 正常（未计费或已停止计费）/ WhitelistUsing 白名单使用中（免计费）</p>
                     * @param _businessStatus <p>业务状态（组件级计费状态，Gateway/Scheduler 独立判定）：Billing 计费中 / Normal 正常（未计费或已停止计费）/ WhitelistUsing 白名单使用中（免计费）</p>
                     * 
                     */
                    void SetBusinessStatus(const std::string& _businessStatus);

                    /**
                     * 判断参数 BusinessStatus 是否已赋值
                     * @return BusinessStatus 是否已赋值
                     * 
                     */
                    bool BusinessStatusHasBeenSet() const;

                    /**
                     * 获取<p>费用信息（组件级计费明细 JSON 字符串，格式与 Service.BillingInfo 一致，前端可复用同一渲染逻辑）</p>
                     * @return BillingInfo <p>费用信息（组件级计费明细 JSON 字符串，格式与 Service.BillingInfo 一致，前端可复用同一渲染逻辑）</p>
                     * 
                     */
                    std::string GetBillingInfo() const;

                    /**
                     * 设置<p>费用信息（组件级计费明细 JSON 字符串，格式与 Service.BillingInfo 一致，前端可复用同一渲染逻辑）</p>
                     * @param _billingInfo <p>费用信息（组件级计费明细 JSON 字符串，格式与 Service.BillingInfo 一致，前端可复用同一渲染逻辑）</p>
                     * 
                     */
                    void SetBillingInfo(const std::string& _billingInfo);

                    /**
                     * 判断参数 BillingInfo 是否已赋值
                     * @return BillingInfo 是否已赋值
                     * 
                     */
                    bool BillingInfoHasBeenSet() const;

                private:

                    /**
                     * <p>组件名称：{ServiceGroupId}-gateway / {ServiceGroupId}-scheduler</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>组件类型：&quot;Gateway&quot; / &quot;Scheduler&quot;</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>组件镜像（从 K8s Deployment 实时查询）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageInfo m_imageInfo;
                    bool m_imageInfoHasBeenSet;

                    /**
                     * <p>期望配置（Replicas/Cpu/Memory/Env）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SmartRouterResourceConfig m_resourceConfig;
                    bool m_resourceConfigHasBeenSet;

                    /**
                     * <p>组件状态：CREATING 创建中 / CREATE_FAILED 创建失败 / Normal 正常运行中 / Stopped 已停止 / Stopping 停止中 / Abnormal 异常 / Pending 启动中 / Waiting 就绪中</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>资源规格（查询时回显用户创建/修改时的资源选择）。公有云场景展示：ChargeType / Zone / ResourceSupplyAttribute；内网版场景展示：QueueId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SmartRouterResourceSpec m_resourceSpec;
                    bool m_resourceSpecHasBeenSet;

                    /**
                     * <p>业务状态（组件级计费状态，Gateway/Scheduler 独立判定）：Billing 计费中 / Normal 正常（未计费或已停止计费）/ WhitelistUsing 白名单使用中（免计费）</p>
                     */
                    std::string m_businessStatus;
                    bool m_businessStatusHasBeenSet;

                    /**
                     * <p>费用信息（组件级计费明细 JSON 字符串，格式与 Service.BillingInfo 一致，前端可复用同一渲染逻辑）</p>
                     */
                    std::string m_billingInfo;
                    bool m_billingInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_SMARTROUTERCOMPONENT_H_
