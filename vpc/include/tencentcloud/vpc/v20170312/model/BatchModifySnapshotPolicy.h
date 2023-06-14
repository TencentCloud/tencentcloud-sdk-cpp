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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_BATCHMODIFYSNAPSHOTPOLICY_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_BATCHMODIFYSNAPSHOTPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/BackupPolicy.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 批量修改快照策略信息
                */
                class BatchModifySnapshotPolicy : public AbstractModel
                {
                public:
                    BatchModifySnapshotPolicy();
                    ~BatchModifySnapshotPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取备份策略。
                     * @return BackupPolicies 备份策略。
                     * 
                     */
                    std::vector<BackupPolicy> GetBackupPolicies() const;

                    /**
                     * 设置备份策略。
                     * @param _backupPolicies 备份策略。
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
                     * 获取快照保留时间，支持1～365天。
                     * @return KeepTime 快照保留时间，支持1～365天。
                     * 
                     */
                    uint64_t GetKeepTime() const;

                    /**
                     * 设置快照保留时间，支持1～365天。
                     * @param _keepTime 快照保留时间，支持1～365天。
                     * 
                     */
                    void SetKeepTime(const uint64_t& _keepTime);

                    /**
                     * 判断参数 KeepTime 是否已赋值
                     * @return KeepTime 是否已赋值
                     * 
                     */
                    bool KeepTimeHasBeenSet() const;

                private:

                    /**
                     * 快照策略Id。
                     */
                    std::string m_snapshotPolicyId;
                    bool m_snapshotPolicyIdHasBeenSet;

                    /**
                     * 快照策略名称。
                     */
                    std::string m_snapshotPolicyName;
                    bool m_snapshotPolicyNameHasBeenSet;

                    /**
                     * 备份策略。
                     */
                    std::vector<BackupPolicy> m_backupPolicies;
                    bool m_backupPoliciesHasBeenSet;

                    /**
                     * 快照保留时间，支持1～365天。
                     */
                    uint64_t m_keepTime;
                    bool m_keepTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_BATCHMODIFYSNAPSHOTPOLICY_H_
