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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONRESPONSE_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/OrgPermission.h>
#include <tencentcloud/organization/v20210331/model/MemberPermissionOption.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * DescribeOrganization返回参数结构体
                */
                class DescribeOrganizationResponse : public AbstractModel
                {
                public:
                    DescribeOrganizationResponse();
                    ~DescribeOrganizationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>企业组织ID。</p>
                     * @return OrgId <p>企业组织ID。</p>
                     * 
                     */
                    int64_t GetOrgId() const;

                    /**
                     * 判断参数 OrgId 是否已赋值
                     * @return OrgId 是否已赋值
                     * 
                     */
                    bool OrgIdHasBeenSet() const;

                    /**
                     * 获取<p>创建者UIN。</p>
                     * @return HostUin <p>创建者UIN。</p>
                     * 
                     */
                    int64_t GetHostUin() const;

                    /**
                     * 判断参数 HostUin 是否已赋值
                     * @return HostUin 是否已赋值
                     * 
                     */
                    bool HostUinHasBeenSet() const;

                    /**
                     * 获取<p>创建者昵称。</p>
                     * @return NickName <p>创建者昵称。</p>
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取<p>企业组织类型。</p>
                     * @return OrgType <p>企业组织类型。</p>
                     * 
                     */
                    int64_t GetOrgType() const;

                    /**
                     * 判断参数 OrgType 是否已赋值
                     * @return OrgType 是否已赋值
                     * 
                     */
                    bool OrgTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否组织管理员。是：true ，否：false</p>
                     * @return IsManager <p>是否组织管理员。是：true ，否：false</p>
                     * 
                     */
                    bool GetIsManager() const;

                    /**
                     * 判断参数 IsManager 是否已赋值
                     * @return IsManager 是否已赋值
                     * 
                     */
                    bool IsManagerHasBeenSet() const;

                    /**
                     * 获取<p>策略类型。财务管理：Financial</p>
                     * @return OrgPolicyType <p>策略类型。财务管理：Financial</p>
                     * 
                     */
                    std::string GetOrgPolicyType() const;

                    /**
                     * 判断参数 OrgPolicyType 是否已赋值
                     * @return OrgPolicyType 是否已赋值
                     * 
                     */
                    bool OrgPolicyTypeHasBeenSet() const;

                    /**
                     * 获取<p>策略名。</p>
                     * @return OrgPolicyName <p>策略名。</p>
                     * 
                     */
                    std::string GetOrgPolicyName() const;

                    /**
                     * 判断参数 OrgPolicyName 是否已赋值
                     * @return OrgPolicyName 是否已赋值
                     * 
                     */
                    bool OrgPolicyNameHasBeenSet() const;

                    /**
                     * 获取<p>成员财务权限列表。</p>
                     * @return OrgPermission <p>成员财务权限列表。</p>
                     * 
                     */
                    std::vector<OrgPermission> GetOrgPermission() const;

                    /**
                     * 判断参数 OrgPermission 是否已赋值
                     * @return OrgPermission 是否已赋值
                     * 
                     */
                    bool OrgPermissionHasBeenSet() const;

                    /**
                     * 获取<p>组织根节点ID。</p>
                     * @return RootNodeId <p>组织根节点ID。</p>
                     * 
                     */
                    int64_t GetRootNodeId() const;

                    /**
                     * 判断参数 RootNodeId 是否已赋值
                     * @return RootNodeId 是否已赋值
                     * 
                     */
                    bool RootNodeIdHasBeenSet() const;

                    /**
                     * 获取<p>组织创建时间。</p>
                     * @return CreateTime <p>组织创建时间。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>成员加入时间。</p>
                     * @return JoinTime <p>成员加入时间。</p>
                     * 
                     */
                    std::string GetJoinTime() const;

                    /**
                     * 判断参数 JoinTime 是否已赋值
                     * @return JoinTime 是否已赋值
                     * 
                     */
                    bool JoinTimeHasBeenSet() const;

                    /**
                     * 获取<p>成员是否允许退出。允许：Allow，不允许：Denied</p>
                     * @return IsAllowQuit <p>成员是否允许退出。允许：Allow，不允许：Denied</p>
                     * 
                     */
                    std::string GetIsAllowQuit() const;

                    /**
                     * 判断参数 IsAllowQuit 是否已赋值
                     * @return IsAllowQuit 是否已赋值
                     * 
                     */
                    bool IsAllowQuitHasBeenSet() const;

                    /**
                     * 获取<p>代付者Uin。</p>
                     * @return PayUin <p>代付者Uin。</p>
                     * 
                     */
                    std::string GetPayUin() const;

                    /**
                     * 判断参数 PayUin 是否已赋值
                     * @return PayUin 是否已赋值
                     * 
                     */
                    bool PayUinHasBeenSet() const;

                    /**
                     * 获取<p>代付者名称。</p>
                     * @return PayName <p>代付者名称。</p>
                     * 
                     */
                    std::string GetPayName() const;

                    /**
                     * 判断参数 PayName 是否已赋值
                     * @return PayName 是否已赋值
                     * 
                     */
                    bool PayNameHasBeenSet() const;

                    /**
                     * 获取<p>是否可信服务管理员。是：true，否：false</p>
                     * @return IsAssignManager <p>是否可信服务管理员。是：true，否：false</p>
                     * 
                     */
                    bool GetIsAssignManager() const;

                    /**
                     * 判断参数 IsAssignManager 是否已赋值
                     * @return IsAssignManager 是否已赋值
                     * 
                     */
                    bool IsAssignManagerHasBeenSet() const;

                    /**
                     * 获取<p>是否实名主体管理员。是：true，否：false</p>
                     * @return IsAuthManager <p>是否实名主体管理员。是：true，否：false</p>
                     * 
                     */
                    bool GetIsAuthManager() const;

                    /**
                     * 判断参数 IsAuthManager 是否已赋值
                     * @return IsAuthManager 是否已赋值
                     * 
                     */
                    bool IsAuthManagerHasBeenSet() const;

                    /**
                     * 获取<p>创建/邀请成员时可设置的财务权限列表</p>
                     * @return MemberPermissionOptions <p>创建/邀请成员时可设置的财务权限列表</p>
                     * 
                     */
                    std::vector<MemberPermissionOption> GetMemberPermissionOptions() const;

                    /**
                     * 判断参数 MemberPermissionOptions 是否已赋值
                     * @return MemberPermissionOptions 是否已赋值
                     * 
                     */
                    bool MemberPermissionOptionsHasBeenSet() const;

                    /**
                     * 获取<p>创建/邀请成员时的默认付费方式。</p><p>枚举值：</p><ul><li>SelfPay： 自付</li><li>BehalfPay： 代付</li></ul>
                     * @return DefaultPayType <p>创建/邀请成员时的默认付费方式。</p><p>枚举值：</p><ul><li>SelfPay： 自付</li><li>BehalfPay： 代付</li></ul>
                     * 
                     */
                    std::string GetDefaultPayType() const;

                    /**
                     * 判断参数 DefaultPayType 是否已赋值
                     * @return DefaultPayType 是否已赋值
                     * 
                     */
                    bool DefaultPayTypeHasBeenSet() const;

                private:

                    /**
                     * <p>企业组织ID。</p>
                     */
                    int64_t m_orgId;
                    bool m_orgIdHasBeenSet;

                    /**
                     * <p>创建者UIN。</p>
                     */
                    int64_t m_hostUin;
                    bool m_hostUinHasBeenSet;

                    /**
                     * <p>创建者昵称。</p>
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * <p>企业组织类型。</p>
                     */
                    int64_t m_orgType;
                    bool m_orgTypeHasBeenSet;

                    /**
                     * <p>是否组织管理员。是：true ，否：false</p>
                     */
                    bool m_isManager;
                    bool m_isManagerHasBeenSet;

                    /**
                     * <p>策略类型。财务管理：Financial</p>
                     */
                    std::string m_orgPolicyType;
                    bool m_orgPolicyTypeHasBeenSet;

                    /**
                     * <p>策略名。</p>
                     */
                    std::string m_orgPolicyName;
                    bool m_orgPolicyNameHasBeenSet;

                    /**
                     * <p>成员财务权限列表。</p>
                     */
                    std::vector<OrgPermission> m_orgPermission;
                    bool m_orgPermissionHasBeenSet;

                    /**
                     * <p>组织根节点ID。</p>
                     */
                    int64_t m_rootNodeId;
                    bool m_rootNodeIdHasBeenSet;

                    /**
                     * <p>组织创建时间。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>成员加入时间。</p>
                     */
                    std::string m_joinTime;
                    bool m_joinTimeHasBeenSet;

                    /**
                     * <p>成员是否允许退出。允许：Allow，不允许：Denied</p>
                     */
                    std::string m_isAllowQuit;
                    bool m_isAllowQuitHasBeenSet;

                    /**
                     * <p>代付者Uin。</p>
                     */
                    std::string m_payUin;
                    bool m_payUinHasBeenSet;

                    /**
                     * <p>代付者名称。</p>
                     */
                    std::string m_payName;
                    bool m_payNameHasBeenSet;

                    /**
                     * <p>是否可信服务管理员。是：true，否：false</p>
                     */
                    bool m_isAssignManager;
                    bool m_isAssignManagerHasBeenSet;

                    /**
                     * <p>是否实名主体管理员。是：true，否：false</p>
                     */
                    bool m_isAuthManager;
                    bool m_isAuthManagerHasBeenSet;

                    /**
                     * <p>创建/邀请成员时可设置的财务权限列表</p>
                     */
                    std::vector<MemberPermissionOption> m_memberPermissionOptions;
                    bool m_memberPermissionOptionsHasBeenSet;

                    /**
                     * <p>创建/邀请成员时的默认付费方式。</p><p>枚举值：</p><ul><li>SelfPay： 自付</li><li>BehalfPay： 代付</li></ul>
                     */
                    std::string m_defaultPayType;
                    bool m_defaultPayTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONRESPONSE_H_
