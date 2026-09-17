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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_PARTITIONINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_PARTITIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/ResourceQuota.h>
#include <tencentcloud/dlc/v20210125/model/SchedulableLimit.h>
#include <tencentcloud/dlc/v20210125/model/CloudTag.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 资源分区信息
                */
                class PartitionInfo : public AbstractModel
                {
                public:
                    PartitionInfo();
                    ~PartitionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>分区名称</p>
                     * @return Name <p>分区名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>分区名称</p>
                     * @param _name <p>分区名称</p>
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
                     * 获取<p>分区编码</p>
                     * @return PartitionCode <p>分区编码</p>
                     * 
                     */
                    std::string GetPartitionCode() const;

                    /**
                     * 设置<p>分区编码</p>
                     * @param _partitionCode <p>分区编码</p>
                     * 
                     */
                    void SetPartitionCode(const std::string& _partitionCode);

                    /**
                     * 判断参数 PartitionCode 是否已赋值
                     * @return PartitionCode 是否已赋值
                     * 
                     */
                    bool PartitionCodeHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>状态：11-发货中，1-运行中，2-隔离中，3-已销毁</p>
                     * @return Status <p>状态：11-发货中，1-运行中，2-隔离中，3-已销毁</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>状态：11-发货中，1-运行中，2-隔离中，3-已销毁</p>
                     * @param _status <p>状态：11-发货中，1-运行中，2-隔离中，3-已销毁</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>队列数量</p>
                     * @return QueueCount <p>队列数量</p>
                     * 
                     */
                    int64_t GetQueueCount() const;

                    /**
                     * 设置<p>队列数量</p>
                     * @param _queueCount <p>队列数量</p>
                     * 
                     */
                    void SetQueueCount(const int64_t& _queueCount);

                    /**
                     * 判断参数 QueueCount 是否已赋值
                     * @return QueueCount 是否已赋值
                     * 
                     */
                    bool QueueCountHasBeenSet() const;

                    /**
                     * 获取<p>资源配置（配额）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceQuota <p>资源配置（配额）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ResourceQuota> GetResourceQuota() const;

                    /**
                     * 设置<p>资源配置（配额）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceQuota <p>资源配置（配额）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceQuota(const std::vector<ResourceQuota>& _resourceQuota);

                    /**
                     * 判断参数 ResourceQuota 是否已赋值
                     * @return ResourceQuota 是否已赋值
                     * 
                     */
                    bool ResourceQuotaHasBeenSet() const;

                    /**
                     * 获取<p>各计费项的单 worker/executor 最大可调度资源量列表，用于约束提交作业时可申请的规格上限；仅包含分区已有的非 GPU 计费项，无可返回项时为空数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchedulableLimitList <p>各计费项的单 worker/executor 最大可调度资源量列表，用于约束提交作业时可申请的规格上限；仅包含分区已有的非 GPU 计费项，无可返回项时为空数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SchedulableLimit> GetSchedulableLimitList() const;

                    /**
                     * 设置<p>各计费项的单 worker/executor 最大可调度资源量列表，用于约束提交作业时可申请的规格上限；仅包含分区已有的非 GPU 计费项，无可返回项时为空数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schedulableLimitList <p>各计费项的单 worker/executor 最大可调度资源量列表，用于约束提交作业时可申请的规格上限；仅包含分区已有的非 GPU 计费项，无可返回项时为空数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSchedulableLimitList(const std::vector<SchedulableLimit>& _schedulableLimitList);

                    /**
                     * 判断参数 SchedulableLimitList 是否已赋值
                     * @return SchedulableLimitList 是否已赋值
                     * 
                     */
                    bool SchedulableLimitListHasBeenSet() const;

                    /**
                     * 获取<p>计费类型：1-包年包月，0-按量计费</p>
                     * @return PayMode <p>计费类型：1-包年包月，0-按量计费</p>
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置<p>计费类型：1-包年包月，0-按量计费</p>
                     * @param _payMode <p>计费类型：1-包年包月，0-按量计费</p>
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>续费标志：0-默认，1-自动续费，2-不自动续费（仅预付费有效）；按量计费分区无该字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RenewFlag <p>续费标志：0-默认，1-自动续费，2-不自动续费（仅预付费有效）；按量计费分区无该字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置<p>续费标志：0-默认，1-自动续费，2-不自动续费（仅预付费有效）；按量计费分区无该字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _renewFlag <p>续费标志：0-默认，1-自动续费，2-不自动续费（仅预付费有效）；按量计费分区无该字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>过期时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime <p>过期时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>过期时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireTime <p>过期时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>资源池形态：SYSTEM（系统）/ USER（用户）/ EXTERNAL_TKE（纳管外部 TKE 集群）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourcePoolKind <p>资源池形态：SYSTEM（系统）/ USER（用户）/ EXTERNAL_TKE（纳管外部 TKE 集群）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourcePoolKind() const;

                    /**
                     * 设置<p>资源池形态：SYSTEM（系统）/ USER（用户）/ EXTERNAL_TKE（纳管外部 TKE 集群）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourcePoolKind <p>资源池形态：SYSTEM（系统）/ USER（用户）/ EXTERNAL_TKE（纳管外部 TKE 集群）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourcePoolKind(const std::string& _resourcePoolKind);

                    /**
                     * 判断参数 ResourcePoolKind 是否已赋值
                     * @return ResourcePoolKind 是否已赋值
                     * 
                     */
                    bool ResourcePoolKindHasBeenSet() const;

                    /**
                     * 获取<p>纳管外部集群的原始 ID（例如 EMR 实例 ID emr-xxx），仅 EXTERNAL_TKE 等纳管场景有值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalClusterId <p>纳管外部集群的原始 ID（例如 EMR 实例 ID emr-xxx），仅 EXTERNAL_TKE 等纳管场景有值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExternalClusterId() const;

                    /**
                     * 设置<p>纳管外部集群的原始 ID（例如 EMR 实例 ID emr-xxx），仅 EXTERNAL_TKE 等纳管场景有值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _externalClusterId <p>纳管外部集群的原始 ID（例如 EMR 实例 ID emr-xxx），仅 EXTERNAL_TKE 等纳管场景有值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExternalClusterId(const std::string& _externalClusterId);

                    /**
                     * 判断参数 ExternalClusterId 是否已赋值
                     * @return ExternalClusterId 是否已赋值
                     * 
                     */
                    bool ExternalClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>资源已绑定的标签列表，由标签平台 GetResources 接口实时查询得到；列表场景下仅对当前页分区加载，单分区标签查询失败时降级留空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>资源已绑定的标签列表，由标签平台 GetResources 接口实时查询得到；列表场景下仅对当前页分区加载，单分区标签查询失败时降级留空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CloudTag> GetTags() const;

                    /**
                     * 设置<p>资源已绑定的标签列表，由标签平台 GetResources 接口实时查询得到；列表场景下仅对当前页分区加载，单分区标签查询失败时降级留空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>资源已绑定的标签列表，由标签平台 GetResources 接口实时查询得到；列表场景下仅对当前页分区加载，单分区标签查询失败时降级留空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<CloudTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>分区名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>分区编码</p>
                     */
                    std::string m_partitionCode;
                    bool m_partitionCodeHasBeenSet;

                    /**
                     * <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>状态：11-发货中，1-运行中，2-隔离中，3-已销毁</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>队列数量</p>
                     */
                    int64_t m_queueCount;
                    bool m_queueCountHasBeenSet;

                    /**
                     * <p>资源配置（配额）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ResourceQuota> m_resourceQuota;
                    bool m_resourceQuotaHasBeenSet;

                    /**
                     * <p>各计费项的单 worker/executor 最大可调度资源量列表，用于约束提交作业时可申请的规格上限；仅包含分区已有的非 GPU 计费项，无可返回项时为空数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SchedulableLimit> m_schedulableLimitList;
                    bool m_schedulableLimitListHasBeenSet;

                    /**
                     * <p>计费类型：1-包年包月，0-按量计费</p>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>续费标志：0-默认，1-自动续费，2-不自动续费（仅预付费有效）；按量计费分区无该字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>过期时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>资源池形态：SYSTEM（系统）/ USER（用户）/ EXTERNAL_TKE（纳管外部 TKE 集群）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourcePoolKind;
                    bool m_resourcePoolKindHasBeenSet;

                    /**
                     * <p>纳管外部集群的原始 ID（例如 EMR 实例 ID emr-xxx），仅 EXTERNAL_TKE 等纳管场景有值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_externalClusterId;
                    bool m_externalClusterIdHasBeenSet;

                    /**
                     * <p>资源已绑定的标签列表，由标签平台 GetResources 接口实时查询得到；列表场景下仅对当前页分区加载，单分区标签查询失败时降级留空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CloudTag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_PARTITIONINFO_H_
