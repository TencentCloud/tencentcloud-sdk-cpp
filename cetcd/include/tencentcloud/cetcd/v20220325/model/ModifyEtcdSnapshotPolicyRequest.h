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

#ifndef TENCENTCLOUD_CETCD_V20220325_MODEL_MODIFYETCDSNAPSHOTPOLICYREQUEST_H_
#define TENCENTCLOUD_CETCD_V20220325_MODEL_MODIFYETCDSNAPSHOTPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cetcd/v20220325/model/EtcdBackupSettings.h>


namespace TencentCloud
{
    namespace Cetcd
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * ModifyEtcdSnapshotPolicy请求参数结构体
                */
                class ModifyEtcdSnapshotPolicyRequest : public AbstractModel
                {
                public:
                    ModifyEtcdSnapshotPolicyRequest();
                    ~ModifyEtcdSnapshotPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取etcd实例id
                     * @return InstanceId etcd实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置etcd实例id
                     * @param _instanceId etcd实例id
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
                     * 获取快照策略名称
                     * @return SnapshotPolicyName 快照策略名称
                     * 
                     */
                    std::string GetSnapshotPolicyName() const;

                    /**
                     * 设置快照策略名称
                     * @param _snapshotPolicyName 快照策略名称
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
                     * 获取备份参数设置
                     * @return BackupSettings 备份参数设置
                     * 
                     */
                    EtcdBackupSettings GetBackupSettings() const;

                    /**
                     * 设置备份参数设置
                     * @param _backupSettings 备份参数设置
                     * 
                     */
                    void SetBackupSettings(const EtcdBackupSettings& _backupSettings);

                    /**
                     * 判断参数 BackupSettings 是否已赋值
                     * @return BackupSettings 是否已赋值
                     * 
                     */
                    bool BackupSettingsHasBeenSet() const;

                private:

                    /**
                     * etcd实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 快照策略名称
                     */
                    std::string m_snapshotPolicyName;
                    bool m_snapshotPolicyNameHasBeenSet;

                    /**
                     * 备份参数设置
                     */
                    EtcdBackupSettings m_backupSettings;
                    bool m_backupSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CETCD_V20220325_MODEL_MODIFYETCDSNAPSHOTPOLICYREQUEST_H_
