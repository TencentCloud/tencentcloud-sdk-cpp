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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_QUEUEINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_QUEUEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/ResourceUsage.h>
#include <tencentcloud/dlc/v20210125/model/QueueResourceQuota.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 队列信息
                */
                class QueueInfo : public AbstractModel
                {
                public:
                    QueueInfo();
                    ~QueueInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>队列ID</p>
                     * @return Id <p>队列ID</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>队列ID</p>
                     * @param _id <p>队列ID</p>
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>不可变的Code</p>
                     * @return QueueName <p>不可变的Code</p>
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置<p>不可变的Code</p>
                     * @param _queueName <p>不可变的Code</p>
                     * 
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取<p>队列别名（用户可改显示名）；alias 为空时回落为 QueueName</p>
                     * @return Alias <p>队列别名（用户可改显示名）；alias 为空时回落为 QueueName</p>
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置<p>队列别名（用户可改显示名）；alias 为空时回落为 QueueName</p>
                     * @param _alias <p>队列别名（用户可改显示名）；alias 为空时回落为 QueueName</p>
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取<p>资源用量列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceUsage <p>资源用量列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ResourceUsage> GetResourceUsage() const;

                    /**
                     * 设置<p>资源用量列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceUsage <p>资源用量列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceUsage(const std::vector<ResourceUsage>& _resourceUsage);

                    /**
                     * 判断参数 ResourceUsage 是否已赋值
                     * @return ResourceUsage 是否已赋值
                     * 
                     */
                    bool ResourceUsageHasBeenSet() const;

                    /**
                     * 获取<p>队列各资源类型的实时余量（总量 / 已用量 / 可用量）。由 Kueue Prometheus 指标实时计算；监控关闭或查询失败时为 null，字段省略不返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceQuotas <p>队列各资源类型的实时余量（总量 / 已用量 / 可用量）。由 Kueue Prometheus 指标实时计算；监控关闭或查询失败时为 null，字段省略不返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<QueueResourceQuota> GetResourceQuotas() const;

                    /**
                     * 设置<p>队列各资源类型的实时余量（总量 / 已用量 / 可用量）。由 Kueue Prometheus 指标实时计算；监控关闭或查询失败时为 null，字段省略不返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceQuotas <p>队列各资源类型的实时余量（总量 / 已用量 / 可用量）。由 Kueue Prometheus 指标实时计算；监控关闭或查询失败时为 null，字段省略不返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceQuotas(const std::vector<QueueResourceQuota>& _resourceQuotas);

                    /**
                     * 判断参数 ResourceQuotas 是否已赋值
                     * @return ResourceQuotas 是否已赋值
                     * 
                     */
                    bool ResourceQuotasHasBeenSet() const;

                    /**
                     * 获取<p>队列描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>队列描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>队列描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>队列描述</p>
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
                     * 获取<p>是否为默认队列</p>
                     * @return IsDefault <p>是否为默认队列</p>
                     * 
                     */
                    int64_t GetIsDefault() const;

                    /**
                     * 设置<p>是否为默认队列</p>
                     * @param _isDefault <p>是否为默认队列</p>
                     * 
                     */
                    void SetIsDefault(const int64_t& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取<p>队列类型：1-独占型，2-共享型</p>
                     * @return QueueType <p>队列类型：1-独占型，2-共享型</p>
                     * 
                     */
                    int64_t GetQueueType() const;

                    /**
                     * 设置<p>队列类型：1-独占型，2-共享型</p>
                     * @param _queueType <p>队列类型：1-独占型，2-共享型</p>
                     * 
                     */
                    void SetQueueType(const int64_t& _queueType);

                    /**
                     * 判断参数 QueueType 是否已赋值
                     * @return QueueType 是否已赋值
                     * 
                     */
                    bool QueueTypeHasBeenSet() const;

                private:

                    /**
                     * <p>队列ID</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>不可变的Code</p>
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * <p>队列别名（用户可改显示名）；alias 为空时回落为 QueueName</p>
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * <p>资源用量列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ResourceUsage> m_resourceUsage;
                    bool m_resourceUsageHasBeenSet;

                    /**
                     * <p>队列各资源类型的实时余量（总量 / 已用量 / 可用量）。由 Kueue Prometheus 指标实时计算；监控关闭或查询失败时为 null，字段省略不返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<QueueResourceQuota> m_resourceQuotas;
                    bool m_resourceQuotasHasBeenSet;

                    /**
                     * <p>队列描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>是否为默认队列</p>
                     */
                    int64_t m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * <p>队列类型：1-独占型，2-共享型</p>
                     */
                    int64_t m_queueType;
                    bool m_queueTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_QUEUEINFO_H_
