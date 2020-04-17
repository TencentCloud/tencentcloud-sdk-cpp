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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_MODIFYTEAMMEMBERREQUEST_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_MODIFYTEAMMEMBERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * ModifyTeamMember请求参数结构体
                */
                class ModifyTeamMemberRequest : public AbstractModel
                {
                public:
                    ModifyTeamMemberRequest();
                    ~ModifyTeamMemberRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取平台名称，指定访问的平台。
                     * @return Platform 平台名称，指定访问的平台。
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台名称，指定访问的平台。
                     * @param Platform 平台名称，指定访问的平台。
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取团队 ID。
                     * @return TeamId 团队 ID。
                     */
                    std::string GetTeamId() const;

                    /**
                     * 设置团队 ID。
                     * @param TeamId 团队 ID。
                     */
                    void SetTeamId(const std::string& _teamId);

                    /**
                     * 判断参数 TeamId 是否已赋值
                     * @return TeamId 是否已赋值
                     */
                    bool TeamIdHasBeenSet() const;

                    /**
                     * 获取团队成员 ID。
                     * @return MemberId 团队成员 ID。
                     */
                    std::string GetMemberId() const;

                    /**
                     * 设置团队成员 ID。
                     * @param MemberId 团队成员 ID。
                     */
                    void SetMemberId(const std::string& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取成员备注，允许设置备注为空，不为空时长度不能超过15个字符。
                     * @return Remark 成员备注，允许设置备注为空，不为空时长度不能超过15个字符。
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置成员备注，允许设置备注为空，不为空时长度不能超过15个字符。
                     * @param Remark 成员备注，允许设置备注为空，不为空时长度不能超过15个字符。
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取成员角色，取值：
<li>Admin：团队管理员；</li>
<li>Member：普通成员。</li>
                     * @return Role 成员角色，取值：
<li>Admin：团队管理员；</li>
<li>Member：普通成员。</li>
                     */
                    std::string GetRole() const;

                    /**
                     * 设置成员角色，取值：
<li>Admin：团队管理员；</li>
<li>Member：普通成员。</li>
                     * @param Role 成员角色，取值：
<li>Admin：团队管理员；</li>
<li>Member：普通成员。</li>
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取操作者。填写用户的 Id，用于标识调用者及校验操作权限。
                     * @return Operator 操作者。填写用户的 Id，用于标识调用者及校验操作权限。
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者。填写用户的 Id，用于标识调用者及校验操作权限。
                     * @param Operator 操作者。填写用户的 Id，用于标识调用者及校验操作权限。
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 平台名称，指定访问的平台。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 团队 ID。
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * 团队成员 ID。
                     */
                    std::string m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * 成员备注，允许设置备注为空，不为空时长度不能超过15个字符。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 成员角色，取值：
<li>Admin：团队管理员；</li>
<li>Member：普通成员。</li>
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 操作者。填写用户的 Id，用于标识调用者及校验操作权限。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_MODIFYTEAMMEMBERREQUEST_H_
