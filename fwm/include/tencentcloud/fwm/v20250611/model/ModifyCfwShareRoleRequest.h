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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_MODIFYCFWSHAREROLEREQUEST_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_MODIFYCFWSHAREROLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * ModifyCfwShareRole请求参数结构体
                */
                class ModifyCfwShareRoleRequest : public AbstractModel
                {
                public:
                    ModifyCfwShareRoleRequest();
                    ~ModifyCfwShareRoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云防火墙共享角色，取值：sharer（共享者）、user（使用者）、none（无共享角色）。共享者→使用者禁止直接变更，需先设为 none
                     * @return CfwShareRole 云防火墙共享角色，取值：sharer（共享者）、user（使用者）、none（无共享角色）。共享者→使用者禁止直接变更，需先设为 none
                     * 
                     */
                    std::string GetCfwShareRole() const;

                    /**
                     * 设置云防火墙共享角色，取值：sharer（共享者）、user（使用者）、none（无共享角色）。共享者→使用者禁止直接变更，需先设为 none
                     * @param _cfwShareRole 云防火墙共享角色，取值：sharer（共享者）、user（使用者）、none（无共享角色）。共享者→使用者禁止直接变更，需先设为 none
                     * 
                     */
                    void SetCfwShareRole(const std::string& _cfwShareRole);

                    /**
                     * 判断参数 CfwShareRole 是否已赋值
                     * @return CfwShareRole 是否已赋值
                     * 
                     */
                    bool CfwShareRoleHasBeenSet() const;

                    /**
                     * 获取使用者Id
                     * @return UserMemberId 使用者Id
                     * 
                     */
                    std::string GetUserMemberId() const;

                    /**
                     * 设置使用者Id
                     * @param _userMemberId 使用者Id
                     * 
                     */
                    void SetUserMemberId(const std::string& _userMemberId);

                    /**
                     * 判断参数 UserMemberId 是否已赋值
                     * @return UserMemberId 是否已赋值
                     * 
                     */
                    bool UserMemberIdHasBeenSet() const;

                    /**
                     * 获取共享者账号ID，CfwShareRole 为 user 时必填
                     * @return SharerMemberId 共享者账号ID，CfwShareRole 为 user 时必填
                     * 
                     */
                    std::string GetSharerMemberId() const;

                    /**
                     * 设置共享者账号ID，CfwShareRole 为 user 时必填
                     * @param _sharerMemberId 共享者账号ID，CfwShareRole 为 user 时必填
                     * 
                     */
                    void SetSharerMemberId(const std::string& _sharerMemberId);

                    /**
                     * 判断参数 SharerMemberId 是否已赋值
                     * @return SharerMemberId 是否已赋值
                     * 
                     */
                    bool SharerMemberIdHasBeenSet() const;

                private:

                    /**
                     * 云防火墙共享角色，取值：sharer（共享者）、user（使用者）、none（无共享角色）。共享者→使用者禁止直接变更，需先设为 none
                     */
                    std::string m_cfwShareRole;
                    bool m_cfwShareRoleHasBeenSet;

                    /**
                     * 使用者Id
                     */
                    std::string m_userMemberId;
                    bool m_userMemberIdHasBeenSet;

                    /**
                     * 共享者账号ID，CfwShareRole 为 user 时必填
                     */
                    std::string m_sharerMemberId;
                    bool m_sharerMemberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_MODIFYCFWSHAREROLEREQUEST_H_
