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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_SMARTROUTERRESOURCESPEC_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_SMARTROUTERRESOURCESPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ResourceSupplyAttribute.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 智能路由资源规格（整个智能路由实例共享，Gateway/Scheduler 两个组件使用同一套资源池）。对应推理服务 CreateModelServiceRequest 顶层的 ChargeType/Zone/QueueId 等字段语义。
                */
                class SmartRouterResourceSpec : public AbstractModel
                {
                public:
                    SmartRouterResourceSpec();
                    ~SmartRouterResourceSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>付费模式：PREPAID（预付费）/ POSTPAID_BY_HOUR（后付费）。不传则默认 POSTPAID_BY_HOUR</p>
                     * @return ChargeType <p>付费模式：PREPAID（预付费）/ POSTPAID_BY_HOUR（后付费）。不传则默认 POSTPAID_BY_HOUR</p>
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置<p>付费模式：PREPAID（预付费）/ POSTPAID_BY_HOUR（后付费）。不传则默认 POSTPAID_BY_HOUR</p>
                     * @param _chargeType <p>付费模式：PREPAID（预付费）/ POSTPAID_BY_HOUR（后付费）。不传则默认 POSTPAID_BY_HOUR</p>
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>预付费资源组 ID（ChargeType=PREPAID 时必填）</p>
                     * @return ResourceGroupId <p>预付费资源组 ID（ChargeType=PREPAID 时必填）</p>
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置<p>预付费资源组 ID（ChargeType=PREPAID 时必填）</p>
                     * @param _resourceGroupId <p>预付费资源组 ID（ChargeType=PREPAID 时必填）</p>
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>预付费资源组名称（output only，ChargeType=PREPAID 时有值，查询时回显）</p>
                     * @return ResourceGroupName <p>预付费资源组名称（output only，ChargeType=PREPAID 时有值，查询时回显）</p>
                     * 
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置<p>预付费资源组名称（output only，ChargeType=PREPAID 时有值，查询时回显）</p>
                     * @param _resourceGroupName <p>预付费资源组名称（output only，ChargeType=PREPAID 时有值，查询时回显）</p>
                     * 
                     */
                    void SetResourceGroupName(const std::string& _resourceGroupName);

                    /**
                     * 判断参数 ResourceGroupName 是否已赋值
                     * @return ResourceGroupName 是否已赋值
                     * 
                     */
                    bool ResourceGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>可用区（如 ap-guangzhou-3），公有云场景用于指定机器来源</p>
                     * @return Zone <p>可用区（如 ap-guangzhou-3），公有云场景用于指定机器来源</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区（如 ap-guangzhou-3），公有云场景用于指定机器来源</p>
                     * @param _zone <p>可用区（如 ap-guangzhou-3），公有云场景用于指定机器来源</p>
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>资源队列 ID（内网版使用，标识任务所属的调度队列）</p>
                     * @return QueueId <p>资源队列 ID（内网版使用，标识任务所属的调度队列）</p>
                     * 
                     */
                    std::string GetQueueId() const;

                    /**
                     * 设置<p>资源队列 ID（内网版使用，标识任务所属的调度队列）</p>
                     * @param _queueId <p>资源队列 ID（内网版使用，标识任务所属的调度队列）</p>
                     * 
                     */
                    void SetQueueId(const std::string& _queueId);

                    /**
                     * 判断参数 QueueId 是否已赋值
                     * @return QueueId 是否已赋值
                     * 
                     */
                    bool QueueIdHasBeenSet() const;

                    /**
                     * 获取<p>服务的优先级，可选范围 [0,9]，默认 0（内网版/私有化使用）</p>
                     * @return Priority <p>服务的优先级，可选范围 [0,9]，默认 0（内网版/私有化使用）</p>
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置<p>服务的优先级，可选范围 [0,9]，默认 0（内网版/私有化使用）</p>
                     * @param _priority <p>服务的优先级，可选范围 [0,9]，默认 0（内网版/私有化使用）</p>
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
                     * 获取<p>资源供应属性（潮汐/竞价等供应模式），公有云场景用于指定机器来源类型。仅区分供应来源，计费/部署/伸缩仍按后付费处理（ChargeType 恒为 POSTPAID_BY_HOUR）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceSupplyAttribute <p>资源供应属性（潮汐/竞价等供应模式），公有云场景用于指定机器来源类型。仅区分供应来源，计费/部署/伸缩仍按后付费处理（ChargeType 恒为 POSTPAID_BY_HOUR）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ResourceSupplyAttribute GetResourceSupplyAttribute() const;

                    /**
                     * 设置<p>资源供应属性（潮汐/竞价等供应模式），公有云场景用于指定机器来源类型。仅区分供应来源，计费/部署/伸缩仍按后付费处理（ChargeType 恒为 POSTPAID_BY_HOUR）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceSupplyAttribute <p>资源供应属性（潮汐/竞价等供应模式），公有云场景用于指定机器来源类型。仅区分供应来源，计费/部署/伸缩仍按后付费处理（ChargeType 恒为 POSTPAID_BY_HOUR）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceSupplyAttribute(const ResourceSupplyAttribute& _resourceSupplyAttribute);

                    /**
                     * 判断参数 ResourceSupplyAttribute 是否已赋值
                     * @return ResourceSupplyAttribute 是否已赋值
                     * 
                     */
                    bool ResourceSupplyAttributeHasBeenSet() const;

                private:

                    /**
                     * <p>付费模式：PREPAID（预付费）/ POSTPAID_BY_HOUR（后付费）。不传则默认 POSTPAID_BY_HOUR</p>
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * <p>预付费资源组 ID（ChargeType=PREPAID 时必填）</p>
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * <p>预付费资源组名称（output only，ChargeType=PREPAID 时有值，查询时回显）</p>
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                    /**
                     * <p>可用区（如 ap-guangzhou-3），公有云场景用于指定机器来源</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>资源队列 ID（内网版使用，标识任务所属的调度队列）</p>
                     */
                    std::string m_queueId;
                    bool m_queueIdHasBeenSet;

                    /**
                     * <p>服务的优先级，可选范围 [0,9]，默认 0（内网版/私有化使用）</p>
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * <p>资源供应属性（潮汐/竞价等供应模式），公有云场景用于指定机器来源类型。仅区分供应来源，计费/部署/伸缩仍按后付费处理（ChargeType 恒为 POSTPAID_BY_HOUR）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResourceSupplyAttribute m_resourceSupplyAttribute;
                    bool m_resourceSupplyAttributeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_SMARTROUTERRESOURCESPEC_H_
