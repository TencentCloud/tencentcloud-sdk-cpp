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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEFILEBACKUPPLANREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEFILEBACKUPPLANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/ResourcePlan.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * CreateFileBackupPlan请求参数结构体
                */
                class CreateFileBackupPlanRequest : public AbstractModel
                {
                public:
                    CreateFileBackupPlanRequest();
                    ~CreateFileBackupPlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取备份策略ID
                     * @return PolicyId 备份策略ID
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置备份策略ID
                     * @param _policyId 备份策略ID
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取备份库ID
                     * @return BackupStorageId 备份库ID
                     * 
                     */
                    std::string GetBackupStorageId() const;

                    /**
                     * 设置备份库ID
                     * @param _backupStorageId 备份库ID
                     * 
                     */
                    void SetBackupStorageId(const std::string& _backupStorageId);

                    /**
                     * 判断参数 BackupStorageId 是否已赋值
                     * @return BackupStorageId 是否已赋值
                     * 
                     */
                    bool BackupStorageIdHasBeenSet() const;

                    /**
                     * 获取计划名称
                     * @return PlanName 计划名称
                     * 
                     */
                    std::string GetPlanName() const;

                    /**
                     * 设置计划名称
                     * @param _planName 计划名称
                     * 
                     */
                    void SetPlanName(const std::string& _planName);

                    /**
                     * 判断参数 PlanName 是否已赋值
                     * @return PlanName 是否已赋值
                     * 
                     */
                    bool PlanNameHasBeenSet() const;

                    /**
                     * 获取实例配置列表，[1,20]
                     * @return Resources 实例配置列表，[1,20]
                     * 
                     */
                    std::vector<ResourcePlan> GetResources() const;

                    /**
                     * 设置实例配置列表，[1,20]
                     * @param _resources 实例配置列表，[1,20]
                     * 
                     */
                    void SetResources(const std::vector<ResourcePlan>& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                private:

                    /**
                     * 备份策略ID
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 备份库ID
                     */
                    std::string m_backupStorageId;
                    bool m_backupStorageIdHasBeenSet;

                    /**
                     * 计划名称
                     */
                    std::string m_planName;
                    bool m_planNameHasBeenSet;

                    /**
                     * 实例配置列表，[1,20]
                     */
                    std::vector<ResourcePlan> m_resources;
                    bool m_resourcesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEFILEBACKUPPLANREQUEST_H_
