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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_AUTOSNAPSHOTPOLICY_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_AUTOSNAPSHOTPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/Policy.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述了定期快照策略的详细信息
                */
                class AutoSnapshotPolicy : public AbstractModel
                {
                public:
                    AutoSnapshotPolicy();
                    ~AutoSnapshotPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取已绑定当前定期快照策略的云盘ID列表。
                     * @return DiskIdSet 已绑定当前定期快照策略的云盘ID列表。
                     */
                    std::vector<std::string> GetDiskIdSet() const;

                    /**
                     * 设置已绑定当前定期快照策略的云盘ID列表。
                     * @param DiskIdSet 已绑定当前定期快照策略的云盘ID列表。
                     */
                    void SetDiskIdSet(const std::vector<std::string>& _diskIdSet);

                    /**
                     * 判断参数 DiskIdSet 是否已赋值
                     * @return DiskIdSet 是否已赋值
                     */
                    bool DiskIdSetHasBeenSet() const;

                    /**
                     * 获取定期快照策略是否激活。
                     * @return IsActivated 定期快照策略是否激活。
                     */
                    bool GetIsActivated() const;

                    /**
                     * 设置定期快照策略是否激活。
                     * @param IsActivated 定期快照策略是否激活。
                     */
                    void SetIsActivated(const bool& _isActivated);

                    /**
                     * 判断参数 IsActivated 是否已赋值
                     * @return IsActivated 是否已赋值
                     */
                    bool IsActivatedHasBeenSet() const;

                    /**
                     * 获取定期快照策略的状态。取值范围：<br><li>NORMAL：正常<br><li>ISOLATED：已隔离。
                     * @return AutoSnapshotPolicyState 定期快照策略的状态。取值范围：<br><li>NORMAL：正常<br><li>ISOLATED：已隔离。
                     */
                    std::string GetAutoSnapshotPolicyState() const;

                    /**
                     * 设置定期快照策略的状态。取值范围：<br><li>NORMAL：正常<br><li>ISOLATED：已隔离。
                     * @param AutoSnapshotPolicyState 定期快照策略的状态。取值范围：<br><li>NORMAL：正常<br><li>ISOLATED：已隔离。
                     */
                    void SetAutoSnapshotPolicyState(const std::string& _autoSnapshotPolicyState);

                    /**
                     * 判断参数 AutoSnapshotPolicyState 是否已赋值
                     * @return AutoSnapshotPolicyState 是否已赋值
                     */
                    bool AutoSnapshotPolicyStateHasBeenSet() const;

                    /**
                     * 获取是否是跨账号复制快照快照, 1：是, 0: 不是
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsCopyToRemote 是否是跨账号复制快照快照, 1：是, 0: 不是
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetIsCopyToRemote() const;

                    /**
                     * 设置是否是跨账号复制快照快照, 1：是, 0: 不是
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsCopyToRemote 是否是跨账号复制快照快照, 1：是, 0: 不是
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsCopyToRemote(const uint64_t& _isCopyToRemote);

                    /**
                     * 判断参数 IsCopyToRemote 是否已赋值
                     * @return IsCopyToRemote 是否已赋值
                     */
                    bool IsCopyToRemoteHasBeenSet() const;

                    /**
                     * 获取使用该定期快照策略创建出来的快照是否永久保留。
                     * @return IsPermanent 使用该定期快照策略创建出来的快照是否永久保留。
                     */
                    bool GetIsPermanent() const;

                    /**
                     * 设置使用该定期快照策略创建出来的快照是否永久保留。
                     * @param IsPermanent 使用该定期快照策略创建出来的快照是否永久保留。
                     */
                    void SetIsPermanent(const bool& _isPermanent);

                    /**
                     * 判断参数 IsPermanent 是否已赋值
                     * @return IsPermanent 是否已赋值
                     */
                    bool IsPermanentHasBeenSet() const;

                    /**
                     * 获取定期快照下次触发的时间。
                     * @return NextTriggerTime 定期快照下次触发的时间。
                     */
                    std::string GetNextTriggerTime() const;

                    /**
                     * 设置定期快照下次触发的时间。
                     * @param NextTriggerTime 定期快照下次触发的时间。
                     */
                    void SetNextTriggerTime(const std::string& _nextTriggerTime);

                    /**
                     * 判断参数 NextTriggerTime 是否已赋值
                     * @return NextTriggerTime 是否已赋值
                     */
                    bool NextTriggerTimeHasBeenSet() const;

                    /**
                     * 获取定期快照策略名称。
                     * @return AutoSnapshotPolicyName 定期快照策略名称。
                     */
                    std::string GetAutoSnapshotPolicyName() const;

                    /**
                     * 设置定期快照策略名称。
                     * @param AutoSnapshotPolicyName 定期快照策略名称。
                     */
                    void SetAutoSnapshotPolicyName(const std::string& _autoSnapshotPolicyName);

                    /**
                     * 判断参数 AutoSnapshotPolicyName 是否已赋值
                     * @return AutoSnapshotPolicyName 是否已赋值
                     */
                    bool AutoSnapshotPolicyNameHasBeenSet() const;

                    /**
                     * 获取定期快照策略ID。
                     * @return AutoSnapshotPolicyId 定期快照策略ID。
                     */
                    std::string GetAutoSnapshotPolicyId() const;

                    /**
                     * 设置定期快照策略ID。
                     * @param AutoSnapshotPolicyId 定期快照策略ID。
                     */
                    void SetAutoSnapshotPolicyId(const std::string& _autoSnapshotPolicyId);

                    /**
                     * 判断参数 AutoSnapshotPolicyId 是否已赋值
                     * @return AutoSnapshotPolicyId 是否已赋值
                     */
                    bool AutoSnapshotPolicyIdHasBeenSet() const;

                    /**
                     * 获取定期快照的执行策略。
                     * @return Policy 定期快照的执行策略。
                     */
                    std::vector<Policy> GetPolicy() const;

                    /**
                     * 设置定期快照的执行策略。
                     * @param Policy 定期快照的执行策略。
                     */
                    void SetPolicy(const std::vector<Policy>& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取定期快照策略的创建时间。
                     * @return CreateTime 定期快照策略的创建时间。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置定期快照策略的创建时间。
                     * @param CreateTime 定期快照策略的创建时间。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取使用该定期快照策略创建出来的快照保留天数。
                     * @return RetentionDays 使用该定期快照策略创建出来的快照保留天数。
                     */
                    uint64_t GetRetentionDays() const;

                    /**
                     * 设置使用该定期快照策略创建出来的快照保留天数。
                     * @param RetentionDays 使用该定期快照策略创建出来的快照保留天数。
                     */
                    void SetRetentionDays(const uint64_t& _retentionDays);

                    /**
                     * 判断参数 RetentionDays 是否已赋值
                     * @return RetentionDays 是否已赋值
                     */
                    bool RetentionDaysHasBeenSet() const;

                    /**
                     * 获取复制的目标账户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CopyToAccountUin 复制的目标账户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCopyToAccountUin() const;

                    /**
                     * 设置复制的目标账户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CopyToAccountUin 复制的目标账户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCopyToAccountUin(const std::string& _copyToAccountUin);

                    /**
                     * 判断参数 CopyToAccountUin 是否已赋值
                     * @return CopyToAccountUin 是否已赋值
                     */
                    bool CopyToAccountUinHasBeenSet() const;

                    /**
                     * 获取已绑定当前定期快照策略的实例ID列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceIdSet 已绑定当前定期快照策略的实例ID列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 设置已绑定当前定期快照策略的实例ID列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceIdSet 已绑定当前定期快照策略的实例ID列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceIdSet(const std::vector<std::string>& _instanceIdSet);

                    /**
                     * 判断参数 InstanceIdSet 是否已赋值
                     * @return InstanceIdSet 是否已赋值
                     */
                    bool InstanceIdSetHasBeenSet() const;

                private:

                    /**
                     * 已绑定当前定期快照策略的云盘ID列表。
                     */
                    std::vector<std::string> m_diskIdSet;
                    bool m_diskIdSetHasBeenSet;

                    /**
                     * 定期快照策略是否激活。
                     */
                    bool m_isActivated;
                    bool m_isActivatedHasBeenSet;

                    /**
                     * 定期快照策略的状态。取值范围：<br><li>NORMAL：正常<br><li>ISOLATED：已隔离。
                     */
                    std::string m_autoSnapshotPolicyState;
                    bool m_autoSnapshotPolicyStateHasBeenSet;

                    /**
                     * 是否是跨账号复制快照快照, 1：是, 0: 不是
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isCopyToRemote;
                    bool m_isCopyToRemoteHasBeenSet;

                    /**
                     * 使用该定期快照策略创建出来的快照是否永久保留。
                     */
                    bool m_isPermanent;
                    bool m_isPermanentHasBeenSet;

                    /**
                     * 定期快照下次触发的时间。
                     */
                    std::string m_nextTriggerTime;
                    bool m_nextTriggerTimeHasBeenSet;

                    /**
                     * 定期快照策略名称。
                     */
                    std::string m_autoSnapshotPolicyName;
                    bool m_autoSnapshotPolicyNameHasBeenSet;

                    /**
                     * 定期快照策略ID。
                     */
                    std::string m_autoSnapshotPolicyId;
                    bool m_autoSnapshotPolicyIdHasBeenSet;

                    /**
                     * 定期快照的执行策略。
                     */
                    std::vector<Policy> m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * 定期快照策略的创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 使用该定期快照策略创建出来的快照保留天数。
                     */
                    uint64_t m_retentionDays;
                    bool m_retentionDaysHasBeenSet;

                    /**
                     * 复制的目标账户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_copyToAccountUin;
                    bool m_copyToAccountUinHasBeenSet;

                    /**
                     * 已绑定当前定期快照策略的实例ID列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_AUTOSNAPSHOTPOLICY_H_
