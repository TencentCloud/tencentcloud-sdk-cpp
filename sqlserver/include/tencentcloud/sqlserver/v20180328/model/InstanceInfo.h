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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INSTANCEINFO_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/TagList.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
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
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>实例标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagList <p>实例标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TagList> GetTagList() const;

                    /**
                     * 设置<p>实例标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagList <p>实例标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagList(const std::vector<TagList>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

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
                     * 获取<p>test</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Vip <p>test</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>test</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vip <p>test</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取<p>test</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Vport <p>test</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置<p>test</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vport <p>test</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取<p>test</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Architecture <p>test</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetArchitecture() const;

                    /**
                     * 设置<p>test</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _architecture <p>test</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetArchitecture(const std::string& _architecture);

                    /**
                     * 判断参数 Architecture 是否已赋值
                     * @return Architecture 是否已赋值
                     * 
                     */
                    bool ArchitectureHasBeenSet() const;

                    /**
                     * 获取<p>test</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ROFlag <p>test</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetROFlag() const;

                    /**
                     * 设置<p>test</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rOFlag <p>test</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetROFlag(const std::string& _rOFlag);

                    /**
                     * 判断参数 ROFlag 是否已赋值
                     * @return ROFlag 是否已赋值
                     * 
                     */
                    bool ROFlagHasBeenSet() const;

                    /**
                     * 获取<p>test</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HAFlag <p>test</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHAFlag() const;

                    /**
                     * 设置<p>test</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hAFlag <p>test</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHAFlag(const std::string& _hAFlag);

                    /**
                     * 判断参数 HAFlag 是否已赋值
                     * @return HAFlag 是否已赋值
                     * 
                     */
                    bool HAFlagHasBeenSet() const;

                    /**
                     * 获取<p>test</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceType <p>test</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>test</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceType <p>test</p>
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
                     * 获取<p>test</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type <p>test</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>test</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type <p>test</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>审计日志状态 ON, OFF, ERROR</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuditLogStatus <p>审计日志状态 ON, OFF, ERROR</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAuditLogStatus() const;

                    /**
                     * 设置<p>审计日志状态 ON, OFF, ERROR</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _auditLogStatus <p>审计日志状态 ON, OFF, ERROR</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuditLogStatus(const std::string& _auditLogStatus);

                    /**
                     * 判断参数 AuditLogStatus 是否已赋值
                     * @return AuditLogStatus 是否已赋值
                     * 
                     */
                    bool AuditLogStatusHasBeenSet() const;

                    /**
                     * 获取<p>审计日志上报地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuditLogHosts <p>审计日志上报地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAuditLogHosts() const;

                    /**
                     * 设置<p>审计日志上报地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _auditLogHosts <p>审计日志上报地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuditLogHosts(const std::vector<std::string>& _auditLogHosts);

                    /**
                     * 判断参数 AuditLogHosts 是否已赋值
                     * @return AuditLogHosts 是否已赋值
                     * 
                     */
                    bool AuditLogHostsHasBeenSet() const;

                    /**
                     * 获取<p>审计日志状态信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuditLogStatusMessage <p>审计日志状态信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAuditLogStatusMessage() const;

                    /**
                     * 设置<p>审计日志状态信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _auditLogStatusMessage <p>审计日志状态信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuditLogStatusMessage(const std::string& _auditLogStatusMessage);

                    /**
                     * 判断参数 AuditLogStatusMessage 是否已赋值
                     * @return AuditLogStatusMessage 是否已赋值
                     * 
                     */
                    bool AuditLogStatusMessageHasBeenSet() const;

                    /**
                     * 获取<p>版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version <p>版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version <p>版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>版本名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionName <p>版本名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置<p>版本名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionName <p>版本名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取<p>地域id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionId <p>地域id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置<p>地域id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regionId <p>地域id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取<p>区id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneId <p>区id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置<p>区id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zoneId <p>区id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

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

                private:

                    /**
                     * <p>实例名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>实例标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagList> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * <p>实例状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>test</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>test</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * <p>test</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_architecture;
                    bool m_architectureHasBeenSet;

                    /**
                     * <p>test</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rOFlag;
                    bool m_rOFlagHasBeenSet;

                    /**
                     * <p>test</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hAFlag;
                    bool m_hAFlagHasBeenSet;

                    /**
                     * <p>test</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>test</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>审计日志状态 ON, OFF, ERROR</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_auditLogStatus;
                    bool m_auditLogStatusHasBeenSet;

                    /**
                     * <p>审计日志上报地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_auditLogHosts;
                    bool m_auditLogHostsHasBeenSet;

                    /**
                     * <p>审计日志状态信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_auditLogStatusMessage;
                    bool m_auditLogStatusMessageHasBeenSet;

                    /**
                     * <p>版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>版本名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * <p>地域id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * <p>区id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INSTANCEINFO_H_
