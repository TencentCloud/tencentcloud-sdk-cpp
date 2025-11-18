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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCEINFO_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/TagInfo.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * 实例信息详情
                */
                class InstanceInfo : public AbstractModel
                {
                public:
                    InstanceInfo();
                    ~InstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取审计日志保存时长。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuditLogExpireDay 审计日志保存时长。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAuditLogExpireDay() const;

                    /**
                     * 设置审计日志保存时长。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _auditLogExpireDay 审计日志保存时长。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuditLogExpireDay(const uint64_t& _auditLogExpireDay);

                    /**
                     * 判断参数 AuditLogExpireDay 是否已赋值
                     * @return AuditLogExpireDay 是否已赋值
                     * 
                     */
                    bool AuditLogExpireDayHasBeenSet() const;

                    /**
                     * 获取审计状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuditStatus 审计状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAuditStatus() const;

                    /**
                     * 设置审计状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _auditStatus 审计状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuditStatus(const std::string& _auditStatus);

                    /**
                     * 判断参数 AuditStatus 是否已赋值
                     * @return AuditStatus 是否已赋值
                     * 
                     */
                    bool AuditStatusHasBeenSet() const;

                    /**
                     * 获取实例 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 实例 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 实例 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceName 实例名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceName 实例名。
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
                     * 获取实例角色。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceRole 实例角色。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceRole() const;

                    /**
                     * 设置实例角色。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceRole 实例角色。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceRole(const std::string& _instanceRole);

                    /**
                     * 判断参数 InstanceRole 是否已赋值
                     * @return InstanceRole 是否已赋值
                     * 
                     */
                    bool InstanceRoleHasBeenSet() const;

                    /**
                     * 获取实例类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceType 实例类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceType 实例类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取数据库版本。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MongodbVersion 数据库版本。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMongodbVersion() const;

                    /**
                     * 设置数据库版本。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mongodbVersion 数据库版本。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMongodbVersion(const std::string& _mongodbVersion);

                    /**
                     * 判断参数 MongodbVersion 是否已赋值
                     * @return MongodbVersion 是否已赋值
                     * 
                     */
                    bool MongodbVersionHasBeenSet() const;

                    /**
                     * 获取项目 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取地域。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 地域。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 地域。
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
                     * 获取实例状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 实例状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置实例状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 实例状态。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否支持审计。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SupportAudit 是否支持审计。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSupportAudit() const;

                    /**
                     * 设置是否支持审计。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _supportAudit 是否支持审计。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSupportAudit(const bool& _supportAudit);

                    /**
                     * 判断参数 SupportAudit 是否已赋值
                     * @return SupportAudit 是否已赋值
                     * 
                     */
                    bool SupportAuditHasBeenSet() const;

                    /**
                     * 获取可用区。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Zone 可用区。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zone 可用区。
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
                     * 获取标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagList 标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TagInfo> GetTagList() const;

                    /**
                     * 设置标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagList 标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagList(const std::vector<TagInfo>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                private:

                    /**
                     * 审计日志保存时长。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_auditLogExpireDay;
                    bool m_auditLogExpireDayHasBeenSet;

                    /**
                     * 审计状态。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_auditStatus;
                    bool m_auditStatusHasBeenSet;

                    /**
                     * 实例 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例角色。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceRole;
                    bool m_instanceRoleHasBeenSet;

                    /**
                     * 实例类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 数据库版本。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mongodbVersion;
                    bool m_mongodbVersionHasBeenSet;

                    /**
                     * 项目 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 地域。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 实例状态。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否支持审计。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_supportAudit;
                    bool m_supportAuditHasBeenSet;

                    /**
                     * 可用区。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagInfo> m_tagList;
                    bool m_tagListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCEINFO_H_
