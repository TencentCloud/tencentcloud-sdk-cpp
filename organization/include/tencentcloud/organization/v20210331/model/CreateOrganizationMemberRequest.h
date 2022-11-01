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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEORGANIZATIONMEMBERREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEORGANIZATIONMEMBERREQUEST_H_

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
                * CreateOrganizationMember请求参数结构体
                */
                class CreateOrganizationMemberRequest : public AbstractModel
                {
                public:
                    CreateOrganizationMemberRequest();
                    ~CreateOrganizationMemberRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取名称
                     * @return Name 名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param Name 名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取关系策略  取值：Financial
                     * @return PolicyType 关系策略  取值：Financial
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置关系策略  取值：Financial
                     * @param PolicyType 关系策略  取值：Financial
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取关系权限 取值：1-查看账单、2-查看余额、3-资金划拨、4-合并出账、5-开票 ，1、2 默认必须
                     * @return PermissionIds 关系权限 取值：1-查看账单、2-查看余额、3-资金划拨、4-合并出账、5-开票 ，1、2 默认必须
                     */
                    std::vector<uint64_t> GetPermissionIds() const;

                    /**
                     * 设置关系权限 取值：1-查看账单、2-查看余额、3-资金划拨、4-合并出账、5-开票 ，1、2 默认必须
                     * @param PermissionIds 关系权限 取值：1-查看账单、2-查看余额、3-资金划拨、4-合并出账、5-开票 ，1、2 默认必须
                     */
                    void SetPermissionIds(const std::vector<uint64_t>& _permissionIds);

                    /**
                     * 判断参数 PermissionIds 是否已赋值
                     * @return PermissionIds 是否已赋值
                     */
                    bool PermissionIdsHasBeenSet() const;

                    /**
                     * 获取成员所属部门的节点ID
                     * @return NodeId 成员所属部门的节点ID
                     */
                    int64_t GetNodeId() const;

                    /**
                     * 设置成员所属部门的节点ID
                     * @param NodeId 成员所属部门的节点ID
                     */
                    void SetNodeId(const int64_t& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取账号名
                     * @return AccountName 账号名
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置账号名
                     * @param AccountName 账号名
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param Remark 备注
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取重试创建传记录ID
                     * @return RecordId 重试创建传记录ID
                     */
                    int64_t GetRecordId() const;

                    /**
                     * 设置重试创建传记录ID
                     * @param RecordId 重试创建传记录ID
                     */
                    void SetRecordId(const int64_t& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取代付者Uin
                     * @return PayUin 代付者Uin
                     */
                    std::string GetPayUin() const;

                    /**
                     * 设置代付者Uin
                     * @param PayUin 代付者Uin
                     */
                    void SetPayUin(const std::string& _payUin);

                    /**
                     * 判断参数 PayUin 是否已赋值
                     * @return PayUin 是否已赋值
                     */
                    bool PayUinHasBeenSet() const;

                    /**
                     * 获取管理身份
                     * @return IdentityRoleID 管理身份
                     */
                    std::vector<uint64_t> GetIdentityRoleID() const;

                    /**
                     * 设置管理身份
                     * @param IdentityRoleID 管理身份
                     */
                    void SetIdentityRoleID(const std::vector<uint64_t>& _identityRoleID);

                    /**
                     * 判断参数 IdentityRoleID 是否已赋值
                     * @return IdentityRoleID 是否已赋值
                     */
                    bool IdentityRoleIDHasBeenSet() const;

                    /**
                     * 获取主体关系ID
                     * @return AuthRelationId 主体关系ID
                     */
                    int64_t GetAuthRelationId() const;

                    /**
                     * 设置主体关系ID
                     * @param AuthRelationId 主体关系ID
                     */
                    void SetAuthRelationId(const int64_t& _authRelationId);

                    /**
                     * 判断参数 AuthRelationId 是否已赋值
                     * @return AuthRelationId 是否已赋值
                     */
                    bool AuthRelationIdHasBeenSet() const;

                private:

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 关系策略  取值：Financial
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * 关系权限 取值：1-查看账单、2-查看余额、3-资金划拨、4-合并出账、5-开票 ，1、2 默认必须
                     */
                    std::vector<uint64_t> m_permissionIds;
                    bool m_permissionIdsHasBeenSet;

                    /**
                     * 成员所属部门的节点ID
                     */
                    int64_t m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * 账号名
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 重试创建传记录ID
                     */
                    int64_t m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 代付者Uin
                     */
                    std::string m_payUin;
                    bool m_payUinHasBeenSet;

                    /**
                     * 管理身份
                     */
                    std::vector<uint64_t> m_identityRoleID;
                    bool m_identityRoleIDHasBeenSet;

                    /**
                     * 主体关系ID
                     */
                    int64_t m_authRelationId;
                    bool m_authRelationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEORGANIZATIONMEMBERREQUEST_H_
