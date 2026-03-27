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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEINFO_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/InstanceTagInfo.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * 实例信息
                */
                class InstanceInfo : public AbstractModel
                {
                public:
                    InstanceInfo();
                    ~InstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceName <p>实例名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceName <p>实例名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId <p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId <p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>实例状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>实例状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>实例状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>实例状态</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>流程中的实例返回的子状态。</p><p>枚举值：</p><ul><li>0： 磁盘只读，</li></ul>
                     * @return SubStatus <p>流程中的实例返回的子状态。</p><p>枚举值：</p><ul><li>0： 磁盘只读，</li></ul>
                     * 
                     */
                    int64_t GetSubStatus() const;

                    /**
                     * 设置<p>流程中的实例返回的子状态。</p><p>枚举值：</p><ul><li>0： 磁盘只读，</li></ul>
                     * @param _subStatus <p>流程中的实例返回的子状态。</p><p>枚举值：</p><ul><li>0： 磁盘只读，</li></ul>
                     * 
                     */
                    void SetSubStatus(const int64_t& _subStatus);

                    /**
                     * 判断参数 SubStatus 是否已赋值
                     * @return SubStatus 是否已赋值
                     * 
                     */
                    bool SubStatusHasBeenSet() const;

                    /**
                     * 获取<p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Zone <p>区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zone <p>区</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>降级策略，单位：毫秒，实例P99达到降级策略后，审计数据自动丢弃，优先保障业务的可用性,默认值：500毫秒，范围值：300-1000毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DegradeStrategy <p>降级策略，单位：毫秒，实例P99达到降级策略后，审计数据自动丢弃，优先保障业务的可用性,默认值：500毫秒，范围值：300-1000毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDegradeStrategy() const;

                    /**
                     * 设置<p>降级策略，单位：毫秒，实例P99达到降级策略后，审计数据自动丢弃，优先保障业务的可用性,默认值：500毫秒，范围值：300-1000毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _degradeStrategy <p>降级策略，单位：毫秒，实例P99达到降级策略后，审计数据自动丢弃，优先保障业务的可用性,默认值：500毫秒，范围值：300-1000毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDegradeStrategy(const int64_t& _degradeStrategy);

                    /**
                     * 判断参数 DegradeStrategy 是否已赋值
                     * @return DegradeStrategy 是否已赋值
                     * 
                     */
                    bool DegradeStrategyHasBeenSet() const;

                    /**
                     * 获取<p>标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceTags <p>标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InstanceTagInfo> GetInstanceTags() const;

                    /**
                     * 设置<p>标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceTags <p>标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceTags(const std::vector<InstanceTagInfo>& _instanceTags);

                    /**
                     * 判断参数 InstanceTags 是否已赋值
                     * @return InstanceTags 是否已赋值
                     * 
                     */
                    bool InstanceTagsHasBeenSet() const;

                    /**
                     * 获取<p>架构版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type <p>架构版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>架构版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type <p>架构版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * <p>实例名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>实例状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>流程中的实例返回的子状态。</p><p>枚举值：</p><ul><li>0： 磁盘只读，</li></ul>
                     */
                    int64_t m_subStatus;
                    bool m_subStatusHasBeenSet;

                    /**
                     * <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>降级策略，单位：毫秒，实例P99达到降级策略后，审计数据自动丢弃，优先保障业务的可用性,默认值：500毫秒，范围值：300-1000毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_degradeStrategy;
                    bool m_degradeStrategyHasBeenSet;

                    /**
                     * <p>标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InstanceTagInfo> m_instanceTags;
                    bool m_instanceTagsHasBeenSet;

                    /**
                     * <p>架构版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEINFO_H_
