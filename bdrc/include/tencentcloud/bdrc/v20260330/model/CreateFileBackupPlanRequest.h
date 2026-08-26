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
                     * 获取<p>备份策略ID</p>
                     * @return PolicyId <p>备份策略ID</p>
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置<p>备份策略ID</p>
                     * @param _policyId <p>备份策略ID</p>
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
                     * 获取<p>备份库ID</p>
                     * @return BackupStorageId <p>备份库ID</p>
                     * 
                     */
                    std::string GetBackupStorageId() const;

                    /**
                     * 设置<p>备份库ID</p>
                     * @param _backupStorageId <p>备份库ID</p>
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
                     * 获取<p>计划名称</p>
                     * @return PlanName <p>计划名称</p>
                     * 
                     */
                    std::string GetPlanName() const;

                    /**
                     * 设置<p>计划名称</p>
                     * @param _planName <p>计划名称</p>
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
                     * 获取<p>实例配置列表，[1,20]</p>
                     * @return Resources <p>实例配置列表，[1,20]</p>
                     * 
                     */
                    std::vector<ResourcePlan> GetResources() const;

                    /**
                     * 设置<p>实例配置列表，[1,20]</p>
                     * @param _resources <p>实例配置列表，[1,20]</p>
                     * 
                     */
                    void SetResources(const std::vector<ResourcePlan>& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取<p>资源类型</p><p>枚举值：</p><ul><li>CVM_AGENT： CVM文件备份</li><li>CFS_AGENT： 文件系统备份</li><li>COS_AGENT： COS备份</li></ul><p>默认值：CVM_AGENT</p>
                     * @return ResourceType <p>资源类型</p><p>枚举值：</p><ul><li>CVM_AGENT： CVM文件备份</li><li>CFS_AGENT： 文件系统备份</li><li>COS_AGENT： COS备份</li></ul><p>默认值：CVM_AGENT</p>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>资源类型</p><p>枚举值：</p><ul><li>CVM_AGENT： CVM文件备份</li><li>CFS_AGENT： 文件系统备份</li><li>COS_AGENT： COS备份</li></ul><p>默认值：CVM_AGENT</p>
                     * @param _resourceType <p>资源类型</p><p>枚举值：</p><ul><li>CVM_AGENT： CVM文件备份</li><li>CFS_AGENT： 文件系统备份</li><li>COS_AGENT： COS备份</li></ul><p>默认值：CVM_AGENT</p>
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                private:

                    /**
                     * <p>备份策略ID</p>
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * <p>备份库ID</p>
                     */
                    std::string m_backupStorageId;
                    bool m_backupStorageIdHasBeenSet;

                    /**
                     * <p>计划名称</p>
                     */
                    std::string m_planName;
                    bool m_planNameHasBeenSet;

                    /**
                     * <p>实例配置列表，[1,20]</p>
                     */
                    std::vector<ResourcePlan> m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * <p>资源类型</p><p>枚举值：</p><ul><li>CVM_AGENT： CVM文件备份</li><li>CFS_AGENT： 文件系统备份</li><li>COS_AGENT： COS备份</li></ul><p>默认值：CVM_AGENT</p>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEFILEBACKUPPLANREQUEST_H_
