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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_BACKUPGROUP_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_BACKUPGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/ApplyDisk.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 备份组详情
                */
                class BackupGroup : public AbstractModel
                {
                public:
                    BackupGroup();
                    ~BackupGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>备份组ID。</p>
                     * @return BackupGroupId <p>备份组ID。</p>
                     * 
                     */
                    std::string GetBackupGroupId() const;

                    /**
                     * 设置<p>备份组ID。</p>
                     * @param _backupGroupId <p>备份组ID。</p>
                     * 
                     */
                    void SetBackupGroupId(const std::string& _backupGroupId);

                    /**
                     * 判断参数 BackupGroupId 是否已赋值
                     * @return BackupGroupId 是否已赋值
                     * 
                     */
                    bool BackupGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>备份组创建进度。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Percent <p>备份组创建进度。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPercent() const;

                    /**
                     * 设置<p>备份组创建进度。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _percent <p>备份组创建进度。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPercent(const uint64_t& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取<p>备份和云盘绑定关系</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupBindDisk <p>备份和云盘绑定关系</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ApplyDisk> GetBackupBindDisk() const;

                    /**
                     * 设置<p>备份和云盘绑定关系</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backupBindDisk <p>备份和云盘绑定关系</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBackupBindDisk(const std::vector<ApplyDisk>& _backupBindDisk);

                    /**
                     * 判断参数 BackupBindDisk 是否已赋值
                     * @return BackupBindDisk 是否已赋值
                     * 
                     */
                    bool BackupBindDiskHasBeenSet() const;

                    /**
                     * 获取<p>备份组名称。</p>
                     * @return BackupGroupName <p>备份组名称。</p>
                     * 
                     */
                    std::string GetBackupGroupName() const;

                    /**
                     * 设置<p>备份组名称。</p>
                     * @param _backupGroupName <p>备份组名称。</p>
                     * 
                     */
                    void SetBackupGroupName(const std::string& _backupGroupName);

                    /**
                     * 判断参数 BackupGroupName 是否已赋值
                     * @return BackupGroupName 是否已赋值
                     * 
                     */
                    bool BackupGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>备份组状态。NORMAL: 正常；CREATING: 创建中；ROLLBACKING: 回滚中</p>
                     * @return BackupGroupState <p>备份组状态。NORMAL: 正常；CREATING: 创建中；ROLLBACKING: 回滚中</p>
                     * 
                     */
                    std::string GetBackupGroupState() const;

                    /**
                     * 设置<p>备份组状态。NORMAL: 正常；CREATING: 创建中；ROLLBACKING: 回滚中</p>
                     * @param _backupGroupState <p>备份组状态。NORMAL: 正常；CREATING: 创建中；ROLLBACKING: 回滚中</p>
                     * 
                     */
                    void SetBackupGroupState(const std::string& _backupGroupState);

                    /**
                     * 判断参数 BackupGroupState 是否已赋值
                     * @return BackupGroupState 是否已赋值
                     * 
                     */
                    bool BackupGroupStateHasBeenSet() const;

                    /**
                     * 获取<p>修改时间</p>
                     * @return ModifyTime <p>修改时间</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>修改时间</p>
                     * @param _modifyTime <p>修改时间</p>
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>用户AppId。</p>
                     * @return AppId <p>用户AppId。</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>用户AppId。</p>
                     * @param _appId <p>用户AppId。</p>
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>是否为永久备份组。</p>
                     * @return IsPermanent <p>是否为永久备份组。</p>
                     * 
                     */
                    bool GetIsPermanent() const;

                    /**
                     * 设置<p>是否为永久备份组。</p>
                     * @param _isPermanent <p>是否为永久备份组。</p>
                     * 
                     */
                    void SetIsPermanent(const bool& _isPermanent);

                    /**
                     * 判断参数 IsPermanent 是否已赋值
                     * @return IsPermanent 是否已赋值
                     * 
                     */
                    bool IsPermanentHasBeenSet() const;

                    /**
                     * 获取<p>备份组的到期时间。如果为永久备份组，则取值为null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeadlineTime <p>备份组的到期时间。如果为永久备份组，则取值为null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeadlineTime() const;

                    /**
                     * 设置<p>备份组的到期时间。如果为永久备份组，则取值为null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deadlineTime <p>备份组的到期时间。如果为永久备份组，则取值为null。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>创建备份组的实例ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId <p>创建备份组的实例ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>创建备份组的实例ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId <p>创建备份组的实例ID。</p>
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
                     * 获取<p>创建备份组时刻实例的详情。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceDetails <p>创建备份组时刻实例的详情。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceDetails() const;

                    /**
                     * 设置<p>创建备份组时刻实例的详情。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceDetails <p>创建备份组时刻实例的详情。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceDetails(const std::string& _instanceDetails);

                    /**
                     * 判断参数 InstanceDetails 是否已赋值
                     * @return InstanceDetails 是否已赋值
                     * 
                     */
                    bool InstanceDetailsHasBeenSet() const;

                    /**
                     * 获取<p>创建人名称。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountName <p>创建人名称。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置<p>创建人名称。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountName <p>创建人名称。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取<p>主账号uin。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountUin <p>主账号uin。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountUin() const;

                    /**
                     * 设置<p>主账号uin。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountUin <p>主账号uin。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountUin(const std::string& _accountUin);

                    /**
                     * 判断参数 AccountUin 是否已赋值
                     * @return AccountUin 是否已赋值
                     * 
                     */
                    bool AccountUinHasBeenSet() const;

                    /**
                     * 获取<p>创建备份的子账号uin。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubAccountUin <p>创建备份的子账号uin。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置<p>创建备份的子账号uin。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subAccountUin <p>创建备份的子账号uin。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>创建当前备份的定期备份策略ID，为null则为手动创建的备份。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoBackupPolicyId <p>创建当前备份的定期备份策略ID，为null则为手动创建的备份。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAutoBackupPolicyId() const;

                    /**
                     * 设置<p>创建当前备份的定期备份策略ID，为null则为手动创建的备份。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoBackupPolicyId <p>创建当前备份的定期备份策略ID，为null则为手动创建的备份。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoBackupPolicyId(const std::string& _autoBackupPolicyId);

                    /**
                     * 判断参数 AutoBackupPolicyId 是否已赋值
                     * @return AutoBackupPolicyId 是否已赋值
                     * 
                     */
                    bool AutoBackupPolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime <p>开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime <p>开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime <p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime <p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * <p>备份组ID。</p>
                     */
                    std::string m_backupGroupId;
                    bool m_backupGroupIdHasBeenSet;

                    /**
                     * <p>备份组创建进度。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * <p>备份和云盘绑定关系</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ApplyDisk> m_backupBindDisk;
                    bool m_backupBindDiskHasBeenSet;

                    /**
                     * <p>备份组名称。</p>
                     */
                    std::string m_backupGroupName;
                    bool m_backupGroupNameHasBeenSet;

                    /**
                     * <p>备份组状态。NORMAL: 正常；CREATING: 创建中；ROLLBACKING: 回滚中</p>
                     */
                    std::string m_backupGroupState;
                    bool m_backupGroupStateHasBeenSet;

                    /**
                     * <p>修改时间</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>用户AppId。</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>是否为永久备份组。</p>
                     */
                    bool m_isPermanent;
                    bool m_isPermanentHasBeenSet;

                    /**
                     * <p>备份组的到期时间。如果为永久备份组，则取值为null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deadlineTime;
                    bool m_deadlineTimeHasBeenSet;

                    /**
                     * <p>创建备份组的实例ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>创建备份组时刻实例的详情。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceDetails;
                    bool m_instanceDetailsHasBeenSet;

                    /**
                     * <p>创建人名称。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * <p>主账号uin。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountUin;
                    bool m_accountUinHasBeenSet;

                    /**
                     * <p>创建备份的子账号uin。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * <p>创建当前备份的定期备份策略ID，为null则为手动创建的备份。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_autoBackupPolicyId;
                    bool m_autoBackupPolicyIdHasBeenSet;

                    /**
                     * <p>开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_BACKUPGROUP_H_
