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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_SNAPSHOTPOLICY_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_SNAPSHOTPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/BackupPolicy.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 快照策略
                */
                class SnapshotPolicy : public AbstractModel
                {
                public:
                    SnapshotPolicy();
                    ~SnapshotPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取快照策略名称。
                     * @return SnapshotPolicyName 快照策略名称。
                     * 
                     */
                    std::string GetSnapshotPolicyName() const;

                    /**
                     * 设置快照策略名称。
                     * @param _snapshotPolicyName 快照策略名称。
                     * 
                     */
                    void SetSnapshotPolicyName(const std::string& _snapshotPolicyName);

                    /**
                     * 判断参数 SnapshotPolicyName 是否已赋值
                     * @return SnapshotPolicyName 是否已赋值
                     * 
                     */
                    bool SnapshotPolicyNameHasBeenSet() const;

                    /**
                     * 获取备份策略类型，operate-操作备份，time-定时备份。
                     * @return BackupType 备份策略类型，operate-操作备份，time-定时备份。
                     * 
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置备份策略类型，operate-操作备份，time-定时备份。
                     * @param _backupType 备份策略类型，operate-操作备份，time-定时备份。
                     * 
                     */
                    void SetBackupType(const std::string& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     * 
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取保留时间，支持1～365天。
                     * @return KeepTime 保留时间，支持1～365天。
                     * 
                     */
                    uint64_t GetKeepTime() const;

                    /**
                     * 设置保留时间，支持1～365天。
                     * @param _keepTime 保留时间，支持1～365天。
                     * 
                     */
                    void SetKeepTime(const uint64_t& _keepTime);

                    /**
                     * 判断参数 KeepTime 是否已赋值
                     * @return KeepTime 是否已赋值
                     * 
                     */
                    bool KeepTimeHasBeenSet() const;

                    /**
                     * 获取是否创建新的cos桶，默认为False。
                     * @return CreateNewCos 是否创建新的cos桶，默认为False。
                     * 
                     */
                    bool GetCreateNewCos() const;

                    /**
                     * 设置是否创建新的cos桶，默认为False。
                     * @param _createNewCos 是否创建新的cos桶，默认为False。
                     * 
                     */
                    void SetCreateNewCos(const bool& _createNewCos);

                    /**
                     * 判断参数 CreateNewCos 是否已赋值
                     * @return CreateNewCos 是否已赋值
                     * 
                     */
                    bool CreateNewCosHasBeenSet() const;

                    /**
                     * 获取cos桶所在地域。
                     * @return CosRegion cos桶所在地域。
                     * 
                     */
                    std::string GetCosRegion() const;

                    /**
                     * 设置cos桶所在地域。
                     * @param _cosRegion cos桶所在地域。
                     * 
                     */
                    void SetCosRegion(const std::string& _cosRegion);

                    /**
                     * 判断参数 CosRegion 是否已赋值
                     * @return CosRegion 是否已赋值
                     * 
                     */
                    bool CosRegionHasBeenSet() const;

                    /**
                     * 获取cos桶。
                     * @return CosBucket cos桶。
                     * 
                     */
                    std::string GetCosBucket() const;

                    /**
                     * 设置cos桶。
                     * @param _cosBucket cos桶。
                     * 
                     */
                    void SetCosBucket(const std::string& _cosBucket);

                    /**
                     * 判断参数 CosBucket 是否已赋值
                     * @return CosBucket 是否已赋值
                     * 
                     */
                    bool CosBucketHasBeenSet() const;

                    /**
                     * 获取快照策略Id。
                     * @return SnapshotPolicyId 快照策略Id。
                     * 
                     */
                    std::string GetSnapshotPolicyId() const;

                    /**
                     * 设置快照策略Id。
                     * @param _snapshotPolicyId 快照策略Id。
                     * 
                     */
                    void SetSnapshotPolicyId(const std::string& _snapshotPolicyId);

                    /**
                     * 判断参数 SnapshotPolicyId 是否已赋值
                     * @return SnapshotPolicyId 是否已赋值
                     * 
                     */
                    bool SnapshotPolicyIdHasBeenSet() const;

                    /**
                     * 获取时间备份策略。
                     * @return BackupPolicies 时间备份策略。
                     * 
                     */
                    std::vector<BackupPolicy> GetBackupPolicies() const;

                    /**
                     * 设置时间备份策略。
                     * @param _backupPolicies 时间备份策略。
                     * 
                     */
                    void SetBackupPolicies(const std::vector<BackupPolicy>& _backupPolicies);

                    /**
                     * 判断参数 BackupPolicies 是否已赋值
                     * @return BackupPolicies 是否已赋值
                     * 
                     */
                    bool BackupPoliciesHasBeenSet() const;

                    /**
                     * 获取启用状态，True-启用，False-停用，默认为True。
                     * @return Enable 启用状态，True-启用，False-停用，默认为True。
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置启用状态，True-启用，False-停用，默认为True。
                     * @param _enable 启用状态，True-启用，False-停用，默认为True。
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
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
                     * 获取标签键值对。	
                     * @return TagSet 标签键值对。	
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置标签键值对。	
                     * @param _tagSet 标签键值对。	
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                private:

                    /**
                     * 快照策略名称。
                     */
                    std::string m_snapshotPolicyName;
                    bool m_snapshotPolicyNameHasBeenSet;

                    /**
                     * 备份策略类型，operate-操作备份，time-定时备份。
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * 保留时间，支持1～365天。
                     */
                    uint64_t m_keepTime;
                    bool m_keepTimeHasBeenSet;

                    /**
                     * 是否创建新的cos桶，默认为False。
                     */
                    bool m_createNewCos;
                    bool m_createNewCosHasBeenSet;

                    /**
                     * cos桶所在地域。
                     */
                    std::string m_cosRegion;
                    bool m_cosRegionHasBeenSet;

                    /**
                     * cos桶。
                     */
                    std::string m_cosBucket;
                    bool m_cosBucketHasBeenSet;

                    /**
                     * 快照策略Id。
                     */
                    std::string m_snapshotPolicyId;
                    bool m_snapshotPolicyIdHasBeenSet;

                    /**
                     * 时间备份策略。
                     */
                    std::vector<BackupPolicy> m_backupPolicies;
                    bool m_backupPoliciesHasBeenSet;

                    /**
                     * 启用状态，True-启用，False-停用，默认为True。
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 标签键值对。	
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_SNAPSHOTPOLICY_H_
