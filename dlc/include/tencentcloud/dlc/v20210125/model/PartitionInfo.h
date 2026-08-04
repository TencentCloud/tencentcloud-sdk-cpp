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
                     * <p>计费类型：1-包年包月，0-按量计费</p>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_PARTITIONINFO_H_
