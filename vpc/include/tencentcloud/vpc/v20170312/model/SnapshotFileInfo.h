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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_SNAPSHOTFILEINFO_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_SNAPSHOTFILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 快照文件信息
                */
                class SnapshotFileInfo : public AbstractModel
                {
                public:
                    SnapshotFileInfo();
                    ~SnapshotFileInfo() = default;
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
                     * 获取实例Id。
                     * @return InstanceId 实例Id。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id。
                     * @param _instanceId 实例Id。
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
                     * 获取快照文件Id。
                     * @return SnapshotFileId 快照文件Id。
                     * 
                     */
                    std::string GetSnapshotFileId() const;

                    /**
                     * 设置快照文件Id。
                     * @param _snapshotFileId 快照文件Id。
                     * 
                     */
                    void SetSnapshotFileId(const std::string& _snapshotFileId);

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
                     * 设置备份时间。
                     * @param _backupTime 备份时间。
                     * 
                     */
                    void SetBackupTime(const std::string& _backupTime);

                    /**
                     * 判断参数 BackupTime 是否已赋值
                     * @return BackupTime 是否已赋值
                     * 
                     */
                    bool BackupTimeHasBeenSet() const;

                    /**
                     * 获取操作者Uin。
                     * @return Operator 操作者Uin。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者Uin。
                     * @param _operator 操作者Uin。
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 快照策略Id。
                     */
                    std::string m_snapshotPolicyId;
                    bool m_snapshotPolicyIdHasBeenSet;

                    /**
                     * 实例Id。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

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
                     * 操作者Uin。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_SNAPSHOTFILEINFO_H_
