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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONRESPONSE_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/OrgPermission.h>


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
                     * 获取企业组织ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrgId 企业组织ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetOrgId() const;

                    /**
                     * 判断参数 OrgId 是否已赋值
                     * @return OrgId 是否已赋值
                     */
                    bool OrgIdHasBeenSet() const;

                    /**
                     * 获取创建者UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostUin 创建者UIN
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetHostUin() const;

                    /**
                     * 判断参数 HostUin 是否已赋值
                     * @return HostUin 是否已赋值
                     */
                    bool HostUinHasBeenSet() const;

                    /**
                     * 获取创建者昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NickName 创建者昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNickName() const;

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取企业组织类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrgType 企业组织类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetOrgType() const;

                    /**
                     * 判断参数 OrgType 是否已赋值
                     * @return OrgType 是否已赋值
                     */
                    bool OrgTypeHasBeenSet() const;

                    /**
                     * 获取组织管理员：true，组织成员：false
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsManager 组织管理员：true，组织成员：false
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetIsManager() const;

                    /**
                     * 判断参数 IsManager 是否已赋值
                     * @return IsManager 是否已赋值
                     */
                    bool IsManagerHasBeenSet() const;

                    /**
                     * 获取策略类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrgPolicyType 策略类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOrgPolicyType() const;

                    /**
                     * 判断参数 OrgPolicyType 是否已赋值
                     * @return OrgPolicyType 是否已赋值
                     */
                    bool OrgPolicyTypeHasBeenSet() const;

                    /**
                     * 获取策略名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrgPolicyName 策略名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOrgPolicyName() const;

                    /**
                     * 判断参数 OrgPolicyName 是否已赋值
                     * @return OrgPolicyName 是否已赋值
                     */
                    bool OrgPolicyNameHasBeenSet() const;

                    /**
                     * 获取策略权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrgPermission 策略权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OrgPermission> GetOrgPermission() const;

                    /**
                     * 判断参数 OrgPermission 是否已赋值
                     * @return OrgPermission 是否已赋值
                     */
                    bool OrgPermissionHasBeenSet() const;

                    /**
                     * 获取根节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RootNodeId 根节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRootNodeId() const;

                    /**
                     * 判断参数 RootNodeId 是否已赋值
                     * @return RootNodeId 是否已赋值
                     */
                    bool RootNodeIdHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取成员加入时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JoinTime 成员加入时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetJoinTime() const;

                    /**
                     * 判断参数 JoinTime 是否已赋值
                     * @return JoinTime 是否已赋值
                     */
                    bool JoinTimeHasBeenSet() const;

                    /**
                     * 获取是否允许退出。允许：Allow，不允许：Denied。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsAllowQuit 是否允许退出。允许：Allow，不允许：Denied。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIsAllowQuit() const;

                    /**
                     * 判断参数 IsAllowQuit 是否已赋值
                     * @return IsAllowQuit 是否已赋值
                     */
                    bool IsAllowQuitHasBeenSet() const;

                    /**
                     * 获取代付者Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayUin 代付者Uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPayUin() const;

                    /**
                     * 判断参数 PayUin 是否已赋值
                     * @return PayUin 是否已赋值
                     */
                    bool PayUinHasBeenSet() const;

                    /**
                     * 获取代付者名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayName 代付者名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPayName() const;

                    /**
                     * 判断参数 PayName 是否已赋值
                     * @return PayName 是否已赋值
                     */
                    bool PayNameHasBeenSet() const;

                    /**
                     * 获取是否集团服务委派管理员 true-是、false-否
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsAssignManager 是否集团服务委派管理员 true-是、false-否
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetIsAssignManager() const;

                    /**
                     * 判断参数 IsAssignManager 是否已赋值
                     * @return IsAssignManager 是否已赋值
                     */
                    bool IsAssignManagerHasBeenSet() const;

                    /**
                     * 获取是否主体管理员 true-是、false-否
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsAuthManager 是否主体管理员 true-是、false-否
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetIsAuthManager() const;

                    /**
                     * 判断参数 IsAuthManager 是否已赋值
                     * @return IsAuthManager 是否已赋值
                     */
                    bool IsAuthManagerHasBeenSet() const;

                private:

                    /**
                     * 企业组织ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_orgId;
                    bool m_orgIdHasBeenSet;

                    /**
                     * 创建者UIN
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_hostUin;
                    bool m_hostUinHasBeenSet;

                    /**
                     * 创建者昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * 企业组织类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_orgType;
                    bool m_orgTypeHasBeenSet;

                    /**
                     * 组织管理员：true，组织成员：false
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isManager;
                    bool m_isManagerHasBeenSet;

                    /**
                     * 策略类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orgPolicyType;
                    bool m_orgPolicyTypeHasBeenSet;

                    /**
                     * 策略名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orgPolicyName;
                    bool m_orgPolicyNameHasBeenSet;

                    /**
                     * 策略权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OrgPermission> m_orgPermission;
                    bool m_orgPermissionHasBeenSet;

                    /**
                     * 根节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_rootNodeId;
                    bool m_rootNodeIdHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 成员加入时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_joinTime;
                    bool m_joinTimeHasBeenSet;

                    /**
                     * 是否允许退出。允许：Allow，不允许：Denied。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isAllowQuit;
                    bool m_isAllowQuitHasBeenSet;

                    /**
                     * 代付者Uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payUin;
                    bool m_payUinHasBeenSet;

                    /**
                     * 代付者名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payName;
                    bool m_payNameHasBeenSet;

                    /**
                     * 是否集团服务委派管理员 true-是、false-否
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isAssignManager;
                    bool m_isAssignManagerHasBeenSet;

                    /**
                     * 是否主体管理员 true-是、false-否
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isAuthManager;
                    bool m_isAuthManagerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONRESPONSE_H_
