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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESGSNAPSHOTFILECONTENTRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESGSNAPSHOTFILECONTENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/SecurityGroupPolicy.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeSgSnapshotFileContent返回参数结构体
                */
                class DescribeSgSnapshotFileContentResponse : public AbstractModel
                {
                public:
                    DescribeSgSnapshotFileContentResponse();
                    ~DescribeSgSnapshotFileContentResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例Id，即安全组Id。
                     * @return InstanceId 实例Id，即安全组Id。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取快照策略Id。
                     * @return SnapshotPolicyId 快照策略Id。
                     * 
                     */
                    std::string GetSnapshotPolicyId() const;

                    /**
                     * 判断参数 SnapshotPolicyId 是否已赋值
                     * @return SnapshotPolicyId 是否已赋值
                     * 
                     */
                    bool SnapshotPolicyIdHasBeenSet() const;

                    /**
                     * 获取快照文件Id。
                     * @return SnapshotFileId 快照文件Id。
                     * 
                     */
                    std::string GetSnapshotFileId() const;

                    /**
                     * 判断参数 SnapshotFileId 是否已赋值
                     * @return SnapshotFileId 是否已赋值
                     * 
                     */
                    bool SnapshotFileIdHasBeenSet() const;

                    /**
                     * 获取备份时间。
                     * @return BackupTime 备份时间。
                     * 
                     */
                    std::string GetBackupTime() const;

                    /**
                     * 判断参数 BackupTime 是否已赋值
                     * @return BackupTime 是否已赋值
                     * 
                     */
                    bool BackupTimeHasBeenSet() const;

                    /**
                     * 获取操作者。
                     * @return Operator 操作者。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取原始数据。
                     * @return OriginalData 原始数据。
                     * 
                     */
                    std::vector<SecurityGroupPolicy> GetOriginalData() const;

                    /**
                     * 判断参数 OriginalData 是否已赋值
                     * @return OriginalData 是否已赋值
                     * 
                     */
                    bool OriginalDataHasBeenSet() const;

                    /**
                     * 获取备份数据。
                     * @return BackupData 备份数据。
                     * 
                     */
                    std::vector<SecurityGroupPolicy> GetBackupData() const;

                    /**
                     * 判断参数 BackupData 是否已赋值
                     * @return BackupData 是否已赋值
                     * 
                     */
                    bool BackupDataHasBeenSet() const;

                private:

                    /**
                     * 实例Id，即安全组Id。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 快照策略Id。
                     */
                    std::string m_snapshotPolicyId;
                    bool m_snapshotPolicyIdHasBeenSet;

                    /**
                     * 快照文件Id。
                     */
                    std::string m_snapshotFileId;
                    bool m_snapshotFileIdHasBeenSet;

                    /**
                     * 备份时间。
                     */
                    std::string m_backupTime;
                    bool m_backupTimeHasBeenSet;

                    /**
                     * 操作者。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 原始数据。
                     */
                    std::vector<SecurityGroupPolicy> m_originalData;
                    bool m_originalDataHasBeenSet;

                    /**
                     * 备份数据。
                     */
                    std::vector<SecurityGroupPolicy> m_backupData;
                    bool m_backupDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESGSNAPSHOTFILECONTENTRESPONSE_H_
