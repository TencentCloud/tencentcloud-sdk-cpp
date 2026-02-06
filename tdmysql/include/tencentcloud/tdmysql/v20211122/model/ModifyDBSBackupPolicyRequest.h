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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYDBSBACKUPPOLICYREQUEST_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYDBSBACKUPPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmysql/v20211122/model/BackupPolicyModelInput.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * ModifyDBSBackupPolicy请求参数结构体
                */
                class ModifyDBSBackupPolicyRequest : public AbstractModel
                {
                public:
                    ModifyDBSBackupPolicyRequest();
                    ~ModifyDBSBackupPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取备份策略
                     * @return BackupPolicy 备份策略
                     * 
                     */
                    BackupPolicyModelInput GetBackupPolicy() const;

                    /**
                     * 设置备份策略
                     * @param _backupPolicy 备份策略
                     * 
                     */
                    void SetBackupPolicy(const BackupPolicyModelInput& _backupPolicy);

                    /**
                     * 判断参数 BackupPolicy 是否已赋值
                     * @return BackupPolicy 是否已赋值
                     * 
                     */
                    bool BackupPolicyHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 备份策略
                     */
                    BackupPolicyModelInput m_backupPolicy;
                    bool m_backupPolicyHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYDBSBACKUPPOLICYREQUEST_H_
