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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_LISTPOLICIESGRANTINGSERVICEACCESSREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_LISTPOLICIESGRANTINGSERVICEACCESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * ListPoliciesGrantingServiceAccess请求参数结构体
                */
                class ListPoliciesGrantingServiceAccessRequest : public AbstractModel
                {
                public:
                    ListPoliciesGrantingServiceAccessRequest();
                    ~ListPoliciesGrantingServiceAccessRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取子账号uin，与RoleId、GroupId三选一必传
                     * @return TargetUin 子账号uin，与RoleId、GroupId三选一必传
                     * 
                     */
                    uint64_t GetTargetUin() const;

                    /**
                     * 设置子账号uin，与RoleId、GroupId三选一必传
                     * @param _targetUin 子账号uin，与RoleId、GroupId三选一必传
                     * 
                     */
                    void SetTargetUin(const uint64_t& _targetUin);

                    /**
                     * 判断参数 TargetUin 是否已赋值
                     * @return TargetUin 是否已赋值
                     * 
                     */
                    bool TargetUinHasBeenSet() const;

                    /**
                     * 获取角色ID，与TargetUin、GroupId三选一必传
                     * @return RoleId 角色ID，与TargetUin、GroupId三选一必传
                     * 
                     */
                    uint64_t GetRoleId() const;

                    /**
                     * 设置角色ID，与TargetUin、GroupId三选一必传
                     * @param _roleId 角色ID，与TargetUin、GroupId三选一必传
                     * 
                     */
                    void SetRoleId(const uint64_t& _roleId);

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     * 
                     */
                    bool RoleIdHasBeenSet() const;

                    /**
                     * 获取用户组ID，与TargetUin、RoleId三选一必传
                     * @return GroupId 用户组ID，与TargetUin、RoleId三选一必传
                     * 
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置用户组ID，与TargetUin、RoleId三选一必传
                     * @param _groupId 用户组ID，与TargetUin、RoleId三选一必传
                     * 
                     */
                    void SetGroupId(const uint64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取服务名，查看服务授权接口详情时需传该字段
                     * @return ServiceType 服务名，查看服务授权接口详情时需传该字段
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置服务名，查看服务授权接口详情时需传该字段
                     * @param _serviceType 服务名，查看服务授权接口详情时需传该字段
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                private:

                    /**
                     * 子账号uin，与RoleId、GroupId三选一必传
                     */
                    uint64_t m_targetUin;
                    bool m_targetUinHasBeenSet;

                    /**
                     * 角色ID，与TargetUin、GroupId三选一必传
                     */
                    uint64_t m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * 用户组ID，与TargetUin、RoleId三选一必传
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 服务名，查看服务授权接口详情时需传该字段
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_LISTPOLICIESGRANTINGSERVICEACCESSREQUEST_H_
