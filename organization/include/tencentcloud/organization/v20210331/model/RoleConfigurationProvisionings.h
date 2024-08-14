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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ROLECONFIGURATIONPROVISIONINGS_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ROLECONFIGURATIONPROVISIONINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * 权限配置同步
                */
                class RoleConfigurationProvisionings : public AbstractModel
                {
                public:
                    RoleConfigurationProvisionings();
                    ~RoleConfigurationProvisionings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Deployed: 部署成功 DeployedRequired：需要重新部署 DeployFailed：部署失败
                     * @return DeploymentStatus Deployed: 部署成功 DeployedRequired：需要重新部署 DeployFailed：部署失败
                     * 
                     */
                    std::string GetDeploymentStatus() const;

                    /**
                     * 设置Deployed: 部署成功 DeployedRequired：需要重新部署 DeployFailed：部署失败
                     * @param _deploymentStatus Deployed: 部署成功 DeployedRequired：需要重新部署 DeployFailed：部署失败
                     * 
                     */
                    void SetDeploymentStatus(const std::string& _deploymentStatus);

                    /**
                     * 判断参数 DeploymentStatus 是否已赋值
                     * @return DeploymentStatus 是否已赋值
                     * 
                     */
                    bool DeploymentStatusHasBeenSet() const;

                    /**
                     * 获取权限配置ID。
                     * @return RoleConfigurationId 权限配置ID。
                     * 
                     */
                    std::string GetRoleConfigurationId() const;

                    /**
                     * 设置权限配置ID。
                     * @param _roleConfigurationId 权限配置ID。
                     * 
                     */
                    void SetRoleConfigurationId(const std::string& _roleConfigurationId);

                    /**
                     * 判断参数 RoleConfigurationId 是否已赋值
                     * @return RoleConfigurationId 是否已赋值
                     * 
                     */
                    bool RoleConfigurationIdHasBeenSet() const;

                    /**
                     * 获取权限配置名称。
                     * @return RoleConfigurationName 权限配置名称。
                     * 
                     */
                    std::string GetRoleConfigurationName() const;

                    /**
                     * 设置权限配置名称。
                     * @param _roleConfigurationName 权限配置名称。
                     * 
                     */
                    void SetRoleConfigurationName(const std::string& _roleConfigurationName);

                    /**
                     * 判断参数 RoleConfigurationName 是否已赋值
                     * @return RoleConfigurationName 是否已赋值
                     * 
                     */
                    bool RoleConfigurationNameHasBeenSet() const;

                    /**
                     * 获取集团账号目标账号的UIN
                     * @return TargetUin 集团账号目标账号的UIN
                     * 
                     */
                    int64_t GetTargetUin() const;

                    /**
                     * 设置集团账号目标账号的UIN
                     * @param _targetUin 集团账号目标账号的UIN
                     * 
                     */
                    void SetTargetUin(const int64_t& _targetUin);

                    /**
                     * 判断参数 TargetUin 是否已赋值
                     * @return TargetUin 是否已赋值
                     * 
                     */
                    bool TargetUinHasBeenSet() const;

                    /**
                     * 获取集团账号目标账号的名称。
                     * @return TargetName 集团账号目标账号的名称。
                     * 
                     */
                    std::string GetTargetName() const;

                    /**
                     * 设置集团账号目标账号的名称。
                     * @param _targetName 集团账号目标账号的名称。
                     * 
                     */
                    void SetTargetName(const std::string& _targetName);

                    /**
                     * 判断参数 TargetName 是否已赋值
                     * @return TargetName 是否已赋值
                     * 
                     */
                    bool TargetNameHasBeenSet() const;

                    /**
                     * 获取创建时间，
                     * @return CreateTime 创建时间，
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间，
                     * @param _createTime 创建时间，
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
                     * 获取修改时间，
                     * @return UpdateTime 修改时间，
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置修改时间，
                     * @param _updateTime 修改时间，
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取同步的集团账号目标账号的类型，ManagerUin管理账号;MemberUin成员账号
                     * @return TargetType 同步的集团账号目标账号的类型，ManagerUin管理账号;MemberUin成员账号
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置同步的集团账号目标账号的类型，ManagerUin管理账号;MemberUin成员账号
                     * @param _targetType 同步的集团账号目标账号的类型，ManagerUin管理账号;MemberUin成员账号
                     * 
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                private:

                    /**
                     * Deployed: 部署成功 DeployedRequired：需要重新部署 DeployFailed：部署失败
                     */
                    std::string m_deploymentStatus;
                    bool m_deploymentStatusHasBeenSet;

                    /**
                     * 权限配置ID。
                     */
                    std::string m_roleConfigurationId;
                    bool m_roleConfigurationIdHasBeenSet;

                    /**
                     * 权限配置名称。
                     */
                    std::string m_roleConfigurationName;
                    bool m_roleConfigurationNameHasBeenSet;

                    /**
                     * 集团账号目标账号的UIN
                     */
                    int64_t m_targetUin;
                    bool m_targetUinHasBeenSet;

                    /**
                     * 集团账号目标账号的名称。
                     */
                    std::string m_targetName;
                    bool m_targetNameHasBeenSet;

                    /**
                     * 创建时间，
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间，
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 同步的集团账号目标账号的类型，ManagerUin管理账号;MemberUin成员账号
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ROLECONFIGURATIONPROVISIONINGS_H_
