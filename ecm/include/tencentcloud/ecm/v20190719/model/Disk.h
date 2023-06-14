/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DISK_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Tag.h>
#include <tencentcloud/ecm/v20190719/model/Placement.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 描述了云硬盘的详细信息
                */
                class Disk : public AbstractModel
                {
                public:
                    Disk();
                    ~Disk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云盘是否与挂载的实例一起销毁。<br><li>true:销毁实例时会同时销毁云盘，只支持按小时后付费云盘。<br><li>false：销毁实例时不销毁云盘。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeleteWithInstance 云盘是否与挂载的实例一起销毁。<br><li>true:销毁实例时会同时销毁云盘，只支持按小时后付费云盘。<br><li>false：销毁实例时不销毁云盘。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetDeleteWithInstance() const;

                    /**
                     * 设置云盘是否与挂载的实例一起销毁。<br><li>true:销毁实例时会同时销毁云盘，只支持按小时后付费云盘。<br><li>false：销毁实例时不销毁云盘。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deleteWithInstance 云盘是否与挂载的实例一起销毁。<br><li>true:销毁实例时会同时销毁云盘，只支持按小时后付费云盘。<br><li>false：销毁实例时不销毁云盘。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeleteWithInstance(const bool& _deleteWithInstance);

                    /**
                     * 判断参数 DeleteWithInstance 是否已赋值
                     * @return DeleteWithInstance 是否已赋值
                     * 
                     */
                    bool DeleteWithInstanceHasBeenSet() const;

                    /**
                     * 获取自动续费标识。取值范围：<br><li>NOTIFY_AND_AUTO_RENEW：通知过期且自动续费<br><li>NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费<br><li>DISABLE_NOTIFY_AND_MANUAL_RENEW：不通知过期不自动续费。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RenewFlag 自动续费标识。取值范围：<br><li>NOTIFY_AND_AUTO_RENEW：通知过期且自动续费<br><li>NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费<br><li>DISABLE_NOTIFY_AND_MANUAL_RENEW：不通知过期不自动续费。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置自动续费标识。取值范围：<br><li>NOTIFY_AND_AUTO_RENEW：通知过期且自动续费<br><li>NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费<br><li>DISABLE_NOTIFY_AND_MANUAL_RENEW：不通知过期不自动续费。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _renewFlag 自动续费标识。取值范围：<br><li>NOTIFY_AND_AUTO_RENEW：通知过期且自动续费<br><li>NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费<br><li>DISABLE_NOTIFY_AND_MANUAL_RENEW：不通知过期不自动续费。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取硬盘介质类型。取值范围：<br><li>CLOUD_BASIC：表示普通云硬盘<br><li>CLOUD_PREMIUM：表示高性能云硬盘<br><li>CLOUD_SSD：表示SSD云硬盘<br><li>CLOUD_HSSD：表示增强型SSD云硬盘<br><li>CLOUD_TSSD：表示极速型SSD云硬盘。
                     * @return DiskType 硬盘介质类型。取值范围：<br><li>CLOUD_BASIC：表示普通云硬盘<br><li>CLOUD_PREMIUM：表示高性能云硬盘<br><li>CLOUD_SSD：表示SSD云硬盘<br><li>CLOUD_HSSD：表示增强型SSD云硬盘<br><li>CLOUD_TSSD：表示极速型SSD云硬盘。
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置硬盘介质类型。取值范围：<br><li>CLOUD_BASIC：表示普通云硬盘<br><li>CLOUD_PREMIUM：表示高性能云硬盘<br><li>CLOUD_SSD：表示SSD云硬盘<br><li>CLOUD_HSSD：表示增强型SSD云硬盘<br><li>CLOUD_TSSD：表示极速型SSD云硬盘。
                     * @param _diskType 硬盘介质类型。取值范围：<br><li>CLOUD_BASIC：表示普通云硬盘<br><li>CLOUD_PREMIUM：表示高性能云硬盘<br><li>CLOUD_SSD：表示SSD云硬盘<br><li>CLOUD_HSSD：表示增强型SSD云硬盘<br><li>CLOUD_TSSD：表示极速型SSD云硬盘。
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取云盘状态。取值范围：<br><li>UNATTACHED：未挂载<br><li>ATTACHING：挂载中<br><li>ATTACHED：已挂载<br><li>DETACHING：解挂中<br><li>EXPANDING：扩容中<br><li>ROLLBACKING：回滚中<br><li>TORECYCLE：待回收<br><li>DUMPING：拷贝硬盘中。
                     * @return DiskState 云盘状态。取值范围：<br><li>UNATTACHED：未挂载<br><li>ATTACHING：挂载中<br><li>ATTACHED：已挂载<br><li>DETACHING：解挂中<br><li>EXPANDING：扩容中<br><li>ROLLBACKING：回滚中<br><li>TORECYCLE：待回收<br><li>DUMPING：拷贝硬盘中。
                     * 
                     */
                    std::string GetDiskState() const;

                    /**
                     * 设置云盘状态。取值范围：<br><li>UNATTACHED：未挂载<br><li>ATTACHING：挂载中<br><li>ATTACHED：已挂载<br><li>DETACHING：解挂中<br><li>EXPANDING：扩容中<br><li>ROLLBACKING：回滚中<br><li>TORECYCLE：待回收<br><li>DUMPING：拷贝硬盘中。
                     * @param _diskState 云盘状态。取值范围：<br><li>UNATTACHED：未挂载<br><li>ATTACHING：挂载中<br><li>ATTACHED：已挂载<br><li>DETACHING：解挂中<br><li>EXPANDING：扩容中<br><li>ROLLBACKING：回滚中<br><li>TORECYCLE：待回收<br><li>DUMPING：拷贝硬盘中。
                     * 
                     */
                    void SetDiskState(const std::string& _diskState);

                    /**
                     * 判断参数 DiskState 是否已赋值
                     * @return DiskState 是否已赋值
                     * 
                     */
                    bool DiskStateHasBeenSet() const;

                    /**
                     * 获取云盘拥有的快照总数。
                     * @return SnapshotCount 云盘拥有的快照总数。
                     * 
                     */
                    int64_t GetSnapshotCount() const;

                    /**
                     * 设置云盘拥有的快照总数。
                     * @param _snapshotCount 云盘拥有的快照总数。
                     * 
                     */
                    void SetSnapshotCount(const int64_t& _snapshotCount);

                    /**
                     * 判断参数 SnapshotCount 是否已赋值
                     * @return SnapshotCount 是否已赋值
                     * 
                     */
                    bool SnapshotCountHasBeenSet() const;

                    /**
                     * 获取云盘已挂载到子机，且子机与云盘都是包年包月。<br><li>true：子机设置了自动续费标识，但云盘未设置<br><li>false：云盘自动续费标识正常。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoRenewFlagError 云盘已挂载到子机，且子机与云盘都是包年包月。<br><li>true：子机设置了自动续费标识，但云盘未设置<br><li>false：云盘自动续费标识正常。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAutoRenewFlagError() const;

                    /**
                     * 设置云盘已挂载到子机，且子机与云盘都是包年包月。<br><li>true：子机设置了自动续费标识，但云盘未设置<br><li>false：云盘自动续费标识正常。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoRenewFlagError 云盘已挂载到子机，且子机与云盘都是包年包月。<br><li>true：子机设置了自动续费标识，但云盘未设置<br><li>false：云盘自动续费标识正常。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoRenewFlagError(const bool& _autoRenewFlagError);

                    /**
                     * 判断参数 AutoRenewFlagError 是否已赋值
                     * @return AutoRenewFlagError 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagErrorHasBeenSet() const;

                    /**
                     * 获取云盘是否处于快照回滚状态。取值范围：<br><li>false:表示不处于快照回滚状态<br><li>true:表示处于快照回滚状态。
                     * @return Rollbacking 云盘是否处于快照回滚状态。取值范围：<br><li>false:表示不处于快照回滚状态<br><li>true:表示处于快照回滚状态。
                     * 
                     */
                    bool GetRollbacking() const;

                    /**
                     * 设置云盘是否处于快照回滚状态。取值范围：<br><li>false:表示不处于快照回滚状态<br><li>true:表示处于快照回滚状态。
                     * @param _rollbacking 云盘是否处于快照回滚状态。取值范围：<br><li>false:表示不处于快照回滚状态<br><li>true:表示处于快照回滚状态。
                     * 
                     */
                    void SetRollbacking(const bool& _rollbacking);

                    /**
                     * 判断参数 Rollbacking 是否已赋值
                     * @return Rollbacking 是否已赋值
                     * 
                     */
                    bool RollbackingHasBeenSet() const;

                    /**
                     * 获取对于非共享型云盘，该参数为空数组。对于共享型云盘，则表示该云盘当前被挂载到的CVM实例InstanceId
                     * @return InstanceIdList 对于非共享型云盘，该参数为空数组。对于共享型云盘，则表示该云盘当前被挂载到的CVM实例InstanceId
                     * 
                     */
                    std::vector<std::string> GetInstanceIdList() const;

                    /**
                     * 设置对于非共享型云盘，该参数为空数组。对于共享型云盘，则表示该云盘当前被挂载到的CVM实例InstanceId
                     * @param _instanceIdList 对于非共享型云盘，该参数为空数组。对于共享型云盘，则表示该云盘当前被挂载到的CVM实例InstanceId
                     * 
                     */
                    void SetInstanceIdList(const std::vector<std::string>& _instanceIdList);

                    /**
                     * 判断参数 InstanceIdList 是否已赋值
                     * @return InstanceIdList 是否已赋值
                     * 
                     */
                    bool InstanceIdListHasBeenSet() const;

                    /**
                     * 获取云盘是否为加密盘。取值范围：<br><li>false:表示非加密盘<br><li>true:表示加密盘。
                     * @return Encrypt 云盘是否为加密盘。取值范围：<br><li>false:表示非加密盘<br><li>true:表示加密盘。
                     * 
                     */
                    bool GetEncrypt() const;

                    /**
                     * 设置云盘是否为加密盘。取值范围：<br><li>false:表示非加密盘<br><li>true:表示加密盘。
                     * @param _encrypt 云盘是否为加密盘。取值范围：<br><li>false:表示非加密盘<br><li>true:表示加密盘。
                     * 
                     */
                    void SetEncrypt(const bool& _encrypt);

                    /**
                     * 判断参数 Encrypt 是否已赋值
                     * @return Encrypt 是否已赋值
                     * 
                     */
                    bool EncryptHasBeenSet() const;

                    /**
                     * 获取云硬盘名称。
                     * @return DiskName 云硬盘名称。
                     * 
                     */
                    std::string GetDiskName() const;

                    /**
                     * 设置云硬盘名称。
                     * @param _diskName 云硬盘名称。
                     * 
                     */
                    void SetDiskName(const std::string& _diskName);

                    /**
                     * 判断参数 DiskName 是否已赋值
                     * @return DiskName 是否已赋值
                     * 
                     */
                    bool DiskNameHasBeenSet() const;

                    /**
                     * 获取云硬盘因欠费销毁或者到期销毁时， 是否使用快照备份数据的标识。true表示销毁时创建快照进行数据备份。false表示直接销毁，不进行数据备份。
                     * @return BackupDisk 云硬盘因欠费销毁或者到期销毁时， 是否使用快照备份数据的标识。true表示销毁时创建快照进行数据备份。false表示直接销毁，不进行数据备份。
                     * 
                     */
                    bool GetBackupDisk() const;

                    /**
                     * 设置云硬盘因欠费销毁或者到期销毁时， 是否使用快照备份数据的标识。true表示销毁时创建快照进行数据备份。false表示直接销毁，不进行数据备份。
                     * @param _backupDisk 云硬盘因欠费销毁或者到期销毁时， 是否使用快照备份数据的标识。true表示销毁时创建快照进行数据备份。false表示直接销毁，不进行数据备份。
                     * 
                     */
                    void SetBackupDisk(const bool& _backupDisk);

                    /**
                     * 判断参数 BackupDisk 是否已赋值
                     * @return BackupDisk 是否已赋值
                     * 
                     */
                    bool BackupDiskHasBeenSet() const;

                    /**
                     * 获取与云盘绑定的标签，云盘未绑定标签则取值为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 与云盘绑定的标签，云盘未绑定标签则取值为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置与云盘绑定的标签，云盘未绑定标签则取值为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 与云盘绑定的标签，云盘未绑定标签则取值为空。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取云硬盘挂载的云主机ID。
                     * @return InstanceId 云硬盘挂载的云主机ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置云硬盘挂载的云主机ID。
                     * @param _instanceId 云硬盘挂载的云主机ID。
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
                     * 获取云盘关联的定期快照ID。只有在调用DescribeDisks接口时，入参ReturnBindAutoSnapshotPolicy取值为TRUE才会返回该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoSnapshotPolicyIds 云盘关联的定期快照ID。只有在调用DescribeDisks接口时，入参ReturnBindAutoSnapshotPolicy取值为TRUE才会返回该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAutoSnapshotPolicyIds() const;

                    /**
                     * 设置云盘关联的定期快照ID。只有在调用DescribeDisks接口时，入参ReturnBindAutoSnapshotPolicy取值为TRUE才会返回该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoSnapshotPolicyIds 云盘关联的定期快照ID。只有在调用DescribeDisks接口时，入参ReturnBindAutoSnapshotPolicy取值为TRUE才会返回该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoSnapshotPolicyIds(const std::vector<std::string>& _autoSnapshotPolicyIds);

                    /**
                     * 判断参数 AutoSnapshotPolicyIds 是否已赋值
                     * @return AutoSnapshotPolicyIds 是否已赋值
                     * 
                     */
                    bool AutoSnapshotPolicyIdsHasBeenSet() const;

                    /**
                     * 获取云硬盘额外性能值，单位MB/s。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ThroughputPerformance 云硬盘额外性能值，单位MB/s。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetThroughputPerformance() const;

                    /**
                     * 设置云硬盘额外性能值，单位MB/s。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _throughputPerformance 云硬盘额外性能值，单位MB/s。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetThroughputPerformance(const uint64_t& _throughputPerformance);

                    /**
                     * 判断参数 ThroughputPerformance 是否已赋值
                     * @return ThroughputPerformance 是否已赋值
                     * 
                     */
                    bool ThroughputPerformanceHasBeenSet() const;

                    /**
                     * 获取云盘是否处于类型变更中。取值范围：<br><li>false:表示云盘不处于类型变更中<br><li>true:表示云盘已发起类型变更，正处于迁移中。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Migrating 云盘是否处于类型变更中。取值范围：<br><li>false:表示云盘不处于类型变更中<br><li>true:表示云盘已发起类型变更，正处于迁移中。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetMigrating() const;

                    /**
                     * 设置云盘是否处于类型变更中。取值范围：<br><li>false:表示云盘不处于类型变更中<br><li>true:表示云盘已发起类型变更，正处于迁移中。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _migrating 云盘是否处于类型变更中。取值范围：<br><li>false:表示云盘不处于类型变更中<br><li>true:表示云盘已发起类型变更，正处于迁移中。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMigrating(const bool& _migrating);

                    /**
                     * 判断参数 Migrating 是否已赋值
                     * @return Migrating 是否已赋值
                     * 
                     */
                    bool MigratingHasBeenSet() const;

                    /**
                     * 获取云硬盘ID。
                     * @return DiskId 云硬盘ID。
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置云硬盘ID。
                     * @param _diskId 云硬盘ID。
                     * 
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     * 
                     */
                    bool DiskIdHasBeenSet() const;

                    /**
                     * 获取云盘拥有的快照总容量，单位为MB。
                     * @return SnapshotSize 云盘拥有的快照总容量，单位为MB。
                     * 
                     */
                    uint64_t GetSnapshotSize() const;

                    /**
                     * 设置云盘拥有的快照总容量，单位为MB。
                     * @param _snapshotSize 云盘拥有的快照总容量，单位为MB。
                     * 
                     */
                    void SetSnapshotSize(const uint64_t& _snapshotSize);

                    /**
                     * 判断参数 SnapshotSize 是否已赋值
                     * @return SnapshotSize 是否已赋值
                     * 
                     */
                    bool SnapshotSizeHasBeenSet() const;

                    /**
                     * 获取云硬盘所在的位置。
                     * @return Placement 云硬盘所在的位置。
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置云硬盘所在的位置。
                     * @param _placement 云硬盘所在的位置。
                     * 
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     * 
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取判断预付费的云盘是否支持主动退还。<br><li>true:支持主动退还<br><li>false:不支持主动退还。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsReturnable 判断预付费的云盘是否支持主动退还。<br><li>true:支持主动退还<br><li>false:不支持主动退还。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsReturnable() const;

                    /**
                     * 设置判断预付费的云盘是否支持主动退还。<br><li>true:支持主动退还<br><li>false:不支持主动退还。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isReturnable 判断预付费的云盘是否支持主动退还。<br><li>true:支持主动退还<br><li>false:不支持主动退还。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsReturnable(const bool& _isReturnable);

                    /**
                     * 判断参数 IsReturnable 是否已赋值
                     * @return IsReturnable 是否已赋值
                     * 
                     */
                    bool IsReturnableHasBeenSet() const;

                    /**
                     * 获取云盘是否挂载到云主机上。取值范围：<br><li>false:表示未挂载<br><li>true:表示已挂载。
                     * @return Attached 云盘是否挂载到云主机上。取值范围：<br><li>false:表示未挂载<br><li>true:表示已挂载。
                     * 
                     */
                    bool GetAttached() const;

                    /**
                     * 设置云盘是否挂载到云主机上。取值范围：<br><li>false:表示未挂载<br><li>true:表示已挂载。
                     * @param _attached 云盘是否挂载到云主机上。取值范围：<br><li>false:表示未挂载<br><li>true:表示已挂载。
                     * 
                     */
                    void SetAttached(const bool& _attached);

                    /**
                     * 判断参数 Attached 是否已赋值
                     * @return Attached 是否已赋值
                     * 
                     */
                    bool AttachedHasBeenSet() const;

                    /**
                     * 获取云硬盘大小，单位GB。
                     * @return DiskSize 云硬盘大小，单位GB。
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置云硬盘大小，单位GB。
                     * @param _diskSize 云硬盘大小，单位GB。
                     * 
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取云盘类型变更的迁移进度，取值0到100。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MigratePercent 云盘类型变更的迁移进度，取值0到100。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMigratePercent() const;

                    /**
                     * 设置云盘类型变更的迁移进度，取值0到100。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _migratePercent 云盘类型变更的迁移进度，取值0到100。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMigratePercent(const uint64_t& _migratePercent);

                    /**
                     * 判断参数 MigratePercent 是否已赋值
                     * @return MigratePercent 是否已赋值
                     * 
                     */
                    bool MigratePercentHasBeenSet() const;

                    /**
                     * 获取云硬盘类型。取值范围：<br><li>SYSTEM_DISK：系统盘<br><li>DATA_DISK：数据盘。
                     * @return DiskUsage 云硬盘类型。取值范围：<br><li>SYSTEM_DISK：系统盘<br><li>DATA_DISK：数据盘。
                     * 
                     */
                    std::string GetDiskUsage() const;

                    /**
                     * 设置云硬盘类型。取值范围：<br><li>SYSTEM_DISK：系统盘<br><li>DATA_DISK：数据盘。
                     * @param _diskUsage 云硬盘类型。取值范围：<br><li>SYSTEM_DISK：系统盘<br><li>DATA_DISK：数据盘。
                     * 
                     */
                    void SetDiskUsage(const std::string& _diskUsage);

                    /**
                     * 判断参数 DiskUsage 是否已赋值
                     * @return DiskUsage 是否已赋值
                     * 
                     */
                    bool DiskUsageHasBeenSet() const;

                    /**
                     * 获取付费模式。取值范围：<br><li>PREPAID：预付费，即包年包月<br><li>POSTPAID_BY_HOUR：后付费，即按量计费。
                     * @return DiskChargeType 付费模式。取值范围：<br><li>PREPAID：预付费，即包年包月<br><li>POSTPAID_BY_HOUR：后付费，即按量计费。
                     * 
                     */
                    std::string GetDiskChargeType() const;

                    /**
                     * 设置付费模式。取值范围：<br><li>PREPAID：预付费，即包年包月<br><li>POSTPAID_BY_HOUR：后付费，即按量计费。
                     * @param _diskChargeType 付费模式。取值范围：<br><li>PREPAID：预付费，即包年包月<br><li>POSTPAID_BY_HOUR：后付费，即按量计费。
                     * 
                     */
                    void SetDiskChargeType(const std::string& _diskChargeType);

                    /**
                     * 判断参数 DiskChargeType 是否已赋值
                     * @return DiskChargeType 是否已赋值
                     * 
                     */
                    bool DiskChargeTypeHasBeenSet() const;

                    /**
                     * 获取是否为弹性云盘，false表示非弹性云盘，true表示弹性云盘。
                     * @return Portable 是否为弹性云盘，false表示非弹性云盘，true表示弹性云盘。
                     * 
                     */
                    bool GetPortable() const;

                    /**
                     * 设置是否为弹性云盘，false表示非弹性云盘，true表示弹性云盘。
                     * @param _portable 是否为弹性云盘，false表示非弹性云盘，true表示弹性云盘。
                     * 
                     */
                    void SetPortable(const bool& _portable);

                    /**
                     * 判断参数 Portable 是否已赋值
                     * @return Portable 是否已赋值
                     * 
                     */
                    bool PortableHasBeenSet() const;

                    /**
                     * 获取云盘是否具备创建快照的能力。取值范围：<br><li>false表示不具备<br><li>true表示具备。
                     * @return SnapshotAbility 云盘是否具备创建快照的能力。取值范围：<br><li>false表示不具备<br><li>true表示具备。
                     * 
                     */
                    bool GetSnapshotAbility() const;

                    /**
                     * 设置云盘是否具备创建快照的能力。取值范围：<br><li>false表示不具备<br><li>true表示具备。
                     * @param _snapshotAbility 云盘是否具备创建快照的能力。取值范围：<br><li>false表示不具备<br><li>true表示具备。
                     * 
                     */
                    void SetSnapshotAbility(const bool& _snapshotAbility);

                    /**
                     * 判断参数 SnapshotAbility 是否已赋值
                     * @return SnapshotAbility 是否已赋值
                     * 
                     */
                    bool SnapshotAbilityHasBeenSet() const;

                    /**
                     * 获取在云盘已挂载到实例，且实例与云盘都是包年包月的条件下，此字段才有意义。<br><li>true:云盘到期时间早于实例。<br><li>false：云盘到期时间晚于实例。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeadlineError 在云盘已挂载到实例，且实例与云盘都是包年包月的条件下，此字段才有意义。<br><li>true:云盘到期时间早于实例。<br><li>false：云盘到期时间晚于实例。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetDeadlineError() const;

                    /**
                     * 设置在云盘已挂载到实例，且实例与云盘都是包年包月的条件下，此字段才有意义。<br><li>true:云盘到期时间早于实例。<br><li>false：云盘到期时间晚于实例。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deadlineError 在云盘已挂载到实例，且实例与云盘都是包年包月的条件下，此字段才有意义。<br><li>true:云盘到期时间早于实例。<br><li>false：云盘到期时间晚于实例。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeadlineError(const bool& _deadlineError);

                    /**
                     * 判断参数 DeadlineError 是否已赋值
                     * @return DeadlineError 是否已赋值
                     * 
                     */
                    bool DeadlineErrorHasBeenSet() const;

                    /**
                     * 获取云盘快照回滚的进度。
                     * @return RollbackPercent 云盘快照回滚的进度。
                     * 
                     */
                    uint64_t GetRollbackPercent() const;

                    /**
                     * 设置云盘快照回滚的进度。
                     * @param _rollbackPercent 云盘快照回滚的进度。
                     * 
                     */
                    void SetRollbackPercent(const uint64_t& _rollbackPercent);

                    /**
                     * 判断参数 RollbackPercent 是否已赋值
                     * @return RollbackPercent 是否已赋值
                     * 
                     */
                    bool RollbackPercentHasBeenSet() const;

                    /**
                     * 获取当前时间距离盘到期的天数（仅对预付费盘有意义）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DifferDaysOfDeadline 当前时间距离盘到期的天数（仅对预付费盘有意义）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDifferDaysOfDeadline() const;

                    /**
                     * 设置当前时间距离盘到期的天数（仅对预付费盘有意义）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _differDaysOfDeadline 当前时间距离盘到期的天数（仅对预付费盘有意义）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDifferDaysOfDeadline(const int64_t& _differDaysOfDeadline);

                    /**
                     * 判断参数 DifferDaysOfDeadline 是否已赋值
                     * @return DifferDaysOfDeadline 是否已赋值
                     * 
                     */
                    bool DifferDaysOfDeadlineHasBeenSet() const;

                    /**
                     * 获取预付费云盘在不支持主动退还的情况下，该参数表明不支持主动退还的具体原因。取值范围：<br><li>1：云硬盘已经退还<br><li>2：云硬盘已过期<br><li>3：云盘不支持退还<br><li>8：超过可退还数量的限制。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReturnFailCode 预付费云盘在不支持主动退还的情况下，该参数表明不支持主动退还的具体原因。取值范围：<br><li>1：云硬盘已经退还<br><li>2：云硬盘已过期<br><li>3：云盘不支持退还<br><li>8：超过可退还数量的限制。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetReturnFailCode() const;

                    /**
                     * 设置预付费云盘在不支持主动退还的情况下，该参数表明不支持主动退还的具体原因。取值范围：<br><li>1：云硬盘已经退还<br><li>2：云硬盘已过期<br><li>3：云盘不支持退还<br><li>8：超过可退还数量的限制。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _returnFailCode 预付费云盘在不支持主动退还的情况下，该参数表明不支持主动退还的具体原因。取值范围：<br><li>1：云硬盘已经退还<br><li>2：云硬盘已过期<br><li>3：云盘不支持退还<br><li>8：超过可退还数量的限制。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReturnFailCode(const int64_t& _returnFailCode);

                    /**
                     * 判断参数 ReturnFailCode 是否已赋值
                     * @return ReturnFailCode 是否已赋值
                     * 
                     */
                    bool ReturnFailCodeHasBeenSet() const;

                    /**
                     * 获取云盘是否为共享型云盘。
                     * @return Shareable 云盘是否为共享型云盘。
                     * 
                     */
                    bool GetShareable() const;

                    /**
                     * 设置云盘是否为共享型云盘。
                     * @param _shareable 云盘是否为共享型云盘。
                     * 
                     */
                    void SetShareable(const bool& _shareable);

                    /**
                     * 判断参数 Shareable 是否已赋值
                     * @return Shareable 是否已赋值
                     * 
                     */
                    bool ShareableHasBeenSet() const;

                    /**
                     * 获取云硬盘的创建时间。
                     * @return CreateTime 云硬盘的创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置云硬盘的创建时间。
                     * @param _createTime 云硬盘的创建时间。
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
                     * 获取云硬盘的到期时间。
                     * @return DeadlineTime 云硬盘的到期时间。
                     * 
                     */
                    std::string GetDeadlineTime() const;

                    /**
                     * 设置云硬盘的到期时间。
                     * @param _deadlineTime 云硬盘的到期时间。
                     * 
                     */
                    void SetDeadlineTime(const std::string& _deadlineTime);

                    /**
                     * 判断参数 DeadlineTime 是否已赋值
                     * @return DeadlineTime 是否已赋值
                     * 
                     */
                    bool DeadlineTimeHasBeenSet() const;

                    /**
                     * 获取云盘的挂载类型。取值范围：<br><li>PF: PF挂载<br><li>VF: VF挂载
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttachMode 云盘的挂载类型。取值范围：<br><li>PF: PF挂载<br><li>VF: VF挂载
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAttachMode() const;

                    /**
                     * 设置云盘的挂载类型。取值范围：<br><li>PF: PF挂载<br><li>VF: VF挂载
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attachMode 云盘的挂载类型。取值范围：<br><li>PF: PF挂载<br><li>VF: VF挂载
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttachMode(const std::string& _attachMode);

                    /**
                     * 判断参数 AttachMode 是否已赋值
                     * @return AttachMode 是否已赋值
                     * 
                     */
                    bool AttachModeHasBeenSet() const;

                private:

                    /**
                     * 云盘是否与挂载的实例一起销毁。<br><li>true:销毁实例时会同时销毁云盘，只支持按小时后付费云盘。<br><li>false：销毁实例时不销毁云盘。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_deleteWithInstance;
                    bool m_deleteWithInstanceHasBeenSet;

                    /**
                     * 自动续费标识。取值范围：<br><li>NOTIFY_AND_AUTO_RENEW：通知过期且自动续费<br><li>NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费<br><li>DISABLE_NOTIFY_AND_MANUAL_RENEW：不通知过期不自动续费。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 硬盘介质类型。取值范围：<br><li>CLOUD_BASIC：表示普通云硬盘<br><li>CLOUD_PREMIUM：表示高性能云硬盘<br><li>CLOUD_SSD：表示SSD云硬盘<br><li>CLOUD_HSSD：表示增强型SSD云硬盘<br><li>CLOUD_TSSD：表示极速型SSD云硬盘。
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 云盘状态。取值范围：<br><li>UNATTACHED：未挂载<br><li>ATTACHING：挂载中<br><li>ATTACHED：已挂载<br><li>DETACHING：解挂中<br><li>EXPANDING：扩容中<br><li>ROLLBACKING：回滚中<br><li>TORECYCLE：待回收<br><li>DUMPING：拷贝硬盘中。
                     */
                    std::string m_diskState;
                    bool m_diskStateHasBeenSet;

                    /**
                     * 云盘拥有的快照总数。
                     */
                    int64_t m_snapshotCount;
                    bool m_snapshotCountHasBeenSet;

                    /**
                     * 云盘已挂载到子机，且子机与云盘都是包年包月。<br><li>true：子机设置了自动续费标识，但云盘未设置<br><li>false：云盘自动续费标识正常。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_autoRenewFlagError;
                    bool m_autoRenewFlagErrorHasBeenSet;

                    /**
                     * 云盘是否处于快照回滚状态。取值范围：<br><li>false:表示不处于快照回滚状态<br><li>true:表示处于快照回滚状态。
                     */
                    bool m_rollbacking;
                    bool m_rollbackingHasBeenSet;

                    /**
                     * 对于非共享型云盘，该参数为空数组。对于共享型云盘，则表示该云盘当前被挂载到的CVM实例InstanceId
                     */
                    std::vector<std::string> m_instanceIdList;
                    bool m_instanceIdListHasBeenSet;

                    /**
                     * 云盘是否为加密盘。取值范围：<br><li>false:表示非加密盘<br><li>true:表示加密盘。
                     */
                    bool m_encrypt;
                    bool m_encryptHasBeenSet;

                    /**
                     * 云硬盘名称。
                     */
                    std::string m_diskName;
                    bool m_diskNameHasBeenSet;

                    /**
                     * 云硬盘因欠费销毁或者到期销毁时， 是否使用快照备份数据的标识。true表示销毁时创建快照进行数据备份。false表示直接销毁，不进行数据备份。
                     */
                    bool m_backupDisk;
                    bool m_backupDiskHasBeenSet;

                    /**
                     * 与云盘绑定的标签，云盘未绑定标签则取值为空。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 云硬盘挂载的云主机ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 云盘关联的定期快照ID。只有在调用DescribeDisks接口时，入参ReturnBindAutoSnapshotPolicy取值为TRUE才会返回该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_autoSnapshotPolicyIds;
                    bool m_autoSnapshotPolicyIdsHasBeenSet;

                    /**
                     * 云硬盘额外性能值，单位MB/s。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_throughputPerformance;
                    bool m_throughputPerformanceHasBeenSet;

                    /**
                     * 云盘是否处于类型变更中。取值范围：<br><li>false:表示云盘不处于类型变更中<br><li>true:表示云盘已发起类型变更，正处于迁移中。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_migrating;
                    bool m_migratingHasBeenSet;

                    /**
                     * 云硬盘ID。
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * 云盘拥有的快照总容量，单位为MB。
                     */
                    uint64_t m_snapshotSize;
                    bool m_snapshotSizeHasBeenSet;

                    /**
                     * 云硬盘所在的位置。
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * 判断预付费的云盘是否支持主动退还。<br><li>true:支持主动退还<br><li>false:不支持主动退还。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isReturnable;
                    bool m_isReturnableHasBeenSet;

                    /**
                     * 云盘是否挂载到云主机上。取值范围：<br><li>false:表示未挂载<br><li>true:表示已挂载。
                     */
                    bool m_attached;
                    bool m_attachedHasBeenSet;

                    /**
                     * 云硬盘大小，单位GB。
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 云盘类型变更的迁移进度，取值0到100。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_migratePercent;
                    bool m_migratePercentHasBeenSet;

                    /**
                     * 云硬盘类型。取值范围：<br><li>SYSTEM_DISK：系统盘<br><li>DATA_DISK：数据盘。
                     */
                    std::string m_diskUsage;
                    bool m_diskUsageHasBeenSet;

                    /**
                     * 付费模式。取值范围：<br><li>PREPAID：预付费，即包年包月<br><li>POSTPAID_BY_HOUR：后付费，即按量计费。
                     */
                    std::string m_diskChargeType;
                    bool m_diskChargeTypeHasBeenSet;

                    /**
                     * 是否为弹性云盘，false表示非弹性云盘，true表示弹性云盘。
                     */
                    bool m_portable;
                    bool m_portableHasBeenSet;

                    /**
                     * 云盘是否具备创建快照的能力。取值范围：<br><li>false表示不具备<br><li>true表示具备。
                     */
                    bool m_snapshotAbility;
                    bool m_snapshotAbilityHasBeenSet;

                    /**
                     * 在云盘已挂载到实例，且实例与云盘都是包年包月的条件下，此字段才有意义。<br><li>true:云盘到期时间早于实例。<br><li>false：云盘到期时间晚于实例。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_deadlineError;
                    bool m_deadlineErrorHasBeenSet;

                    /**
                     * 云盘快照回滚的进度。
                     */
                    uint64_t m_rollbackPercent;
                    bool m_rollbackPercentHasBeenSet;

                    /**
                     * 当前时间距离盘到期的天数（仅对预付费盘有意义）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_differDaysOfDeadline;
                    bool m_differDaysOfDeadlineHasBeenSet;

                    /**
                     * 预付费云盘在不支持主动退还的情况下，该参数表明不支持主动退还的具体原因。取值范围：<br><li>1：云硬盘已经退还<br><li>2：云硬盘已过期<br><li>3：云盘不支持退还<br><li>8：超过可退还数量的限制。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_returnFailCode;
                    bool m_returnFailCodeHasBeenSet;

                    /**
                     * 云盘是否为共享型云盘。
                     */
                    bool m_shareable;
                    bool m_shareableHasBeenSet;

                    /**
                     * 云硬盘的创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 云硬盘的到期时间。
                     */
                    std::string m_deadlineTime;
                    bool m_deadlineTimeHasBeenSet;

                    /**
                     * 云盘的挂载类型。取值范围：<br><li>PF: PF挂载<br><li>VF: VF挂载
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attachMode;
                    bool m_attachModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DISK_H_
