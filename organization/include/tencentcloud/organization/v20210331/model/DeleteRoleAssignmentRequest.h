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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DELETEROLEASSIGNMENTREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DELETEROLEASSIGNMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DeleteRoleAssignment请求参数结构体
                */
                class DeleteRoleAssignmentRequest : public AbstractModel
                {
                public:
                    DeleteRoleAssignmentRequest();
                    ~DeleteRoleAssignmentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取空间 ID。
                     * @return ZoneId 空间 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置空间 ID。
                     * @param _zoneId 空间 ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

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
                     * 获取CAM 用户同步的身份类型。取值： User：表示同步的身份是用户。 Group：表示同步的身份是用户组。
                     * @return PrincipalType CAM 用户同步的身份类型。取值： User：表示同步的身份是用户。 Group：表示同步的身份是用户组。
                     * 
                     */
                    std::string GetPrincipalType() const;

                    /**
                     * 设置CAM 用户同步的身份类型。取值： User：表示同步的身份是用户。 Group：表示同步的身份是用户组。
                     * @param _principalType CAM 用户同步的身份类型。取值： User：表示同步的身份是用户。 Group：表示同步的身份是用户组。
                     * 
                     */
                    void SetPrincipalType(const std::string& _principalType);

                    /**
                     * 判断参数 PrincipalType 是否已赋值
                     * @return PrincipalType 是否已赋值
                     * 
                     */
                    bool PrincipalTypeHasBeenSet() const;

                    /**
                     * 获取用户同步 ID。取值： 当PrincipalType取值为Group时，该值为用户组 ID（g-********）， 当PrincipalType取值为User时，该值为用户 ID（u-********）。 	
                     * @return PrincipalId 用户同步 ID。取值： 当PrincipalType取值为Group时，该值为用户组 ID（g-********）， 当PrincipalType取值为User时，该值为用户 ID（u-********）。 	
                     * 
                     */
                    std::string GetPrincipalId() const;

                    /**
                     * 设置用户同步 ID。取值： 当PrincipalType取值为Group时，该值为用户组 ID（g-********）， 当PrincipalType取值为User时，该值为用户 ID（u-********）。 	
                     * @param _principalId 用户同步 ID。取值： 当PrincipalType取值为Group时，该值为用户组 ID（g-********）， 当PrincipalType取值为User时，该值为用户 ID（u-********）。 	
                     * 
                     */
                    void SetPrincipalId(const std::string& _principalId);

                    /**
                     * 判断参数 PrincipalId 是否已赋值
                     * @return PrincipalId 是否已赋值
                     * 
                     */
                    bool PrincipalIdHasBeenSet() const;

                    /**
                     * 获取当您移除一个集团账号目标账号上使用某权限配置的最后一个授权时，是否同时解除权限配置部署。取值： DeprovisionForLastRoleAssignmentOnAccount：解除权限配置部署。 None（默认值）：不解除权限配置部署。
                     * @return DeprovisionStrategy 当您移除一个集团账号目标账号上使用某权限配置的最后一个授权时，是否同时解除权限配置部署。取值： DeprovisionForLastRoleAssignmentOnAccount：解除权限配置部署。 None（默认值）：不解除权限配置部署。
                     * 
                     */
                    std::string GetDeprovisionStrategy() const;

                    /**
                     * 设置当您移除一个集团账号目标账号上使用某权限配置的最后一个授权时，是否同时解除权限配置部署。取值： DeprovisionForLastRoleAssignmentOnAccount：解除权限配置部署。 None（默认值）：不解除权限配置部署。
                     * @param _deprovisionStrategy 当您移除一个集团账号目标账号上使用某权限配置的最后一个授权时，是否同时解除权限配置部署。取值： DeprovisionForLastRoleAssignmentOnAccount：解除权限配置部署。 None（默认值）：不解除权限配置部署。
                     * 
                     */
                    void SetDeprovisionStrategy(const std::string& _deprovisionStrategy);

                    /**
                     * 判断参数 DeprovisionStrategy 是否已赋值
                     * @return DeprovisionStrategy 是否已赋值
                     * 
                     */
                    bool DeprovisionStrategyHasBeenSet() const;

                private:

                    /**
                     * 空间 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 权限配置ID。
                     */
                    std::string m_roleConfigurationId;
                    bool m_roleConfigurationIdHasBeenSet;

                    /**
                     * 同步的集团账号目标账号的类型，ManagerUin管理账号;MemberUin成员账号
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * 集团账号目标账号的UIN
                     */
                    int64_t m_targetUin;
                    bool m_targetUinHasBeenSet;

                    /**
                     * CAM 用户同步的身份类型。取值： User：表示同步的身份是用户。 Group：表示同步的身份是用户组。
                     */
                    std::string m_principalType;
                    bool m_principalTypeHasBeenSet;

                    /**
                     * 用户同步 ID。取值： 当PrincipalType取值为Group时，该值为用户组 ID（g-********）， 当PrincipalType取值为User时，该值为用户 ID（u-********）。 	
                     */
                    std::string m_principalId;
                    bool m_principalIdHasBeenSet;

                    /**
                     * 当您移除一个集团账号目标账号上使用某权限配置的最后一个授权时，是否同时解除权限配置部署。取值： DeprovisionForLastRoleAssignmentOnAccount：解除权限配置部署。 None（默认值）：不解除权限配置部署。
                     */
                    std::string m_deprovisionStrategy;
                    bool m_deprovisionStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DELETEROLEASSIGNMENTREQUEST_H_
