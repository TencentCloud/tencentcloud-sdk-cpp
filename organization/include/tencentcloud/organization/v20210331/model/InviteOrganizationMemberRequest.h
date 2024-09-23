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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_INVITEORGANIZATIONMEMBERREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_INVITEORGANIZATIONMEMBERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/AuthRelationFile.h>
#include <tencentcloud/organization/v20210331/model/Tag.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * InviteOrganizationMember请求参数结构体
                */
                class InviteOrganizationMemberRequest : public AbstractModel
                {
                public:
                    InviteOrganizationMemberRequest();
                    ~InviteOrganizationMemberRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取被邀请账号Uin。
                     * @return MemberUin 被邀请账号Uin。
                     * 
                     */
                    int64_t GetMemberUin() const;

                    /**
                     * 设置被邀请账号Uin。
                     * @param _memberUin 被邀请账号Uin。
                     * 
                     */
                    void SetMemberUin(const int64_t& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     * 
                     */
                    bool MemberUinHasBeenSet() const;

                    /**
                     * 获取成员名称。最大长度为25个字符，支持英文字母、数字、汉字、符号+@、&._[]-:,
                     * @return Name 成员名称。最大长度为25个字符，支持英文字母、数字、汉字、符号+@、&._[]-:,
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置成员名称。最大长度为25个字符，支持英文字母、数字、汉字、符号+@、&._[]-:,
                     * @param _name 成员名称。最大长度为25个字符，支持英文字母、数字、汉字、符号+@、&._[]-:,
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取关系策略。取值：Financial
                     * @return PolicyType 关系策略。取值：Financial
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置关系策略。取值：Financial
                     * @param _policyType 关系策略。取值：Financial
                     * 
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取成员财务权限ID列表。取值：1-查看账单、2-查看余额、3-资金划拨、4-合并出账、5-开票、6-优惠继承、7-代付费，1、2 默认必须
                     * @return PermissionIds 成员财务权限ID列表。取值：1-查看账单、2-查看余额、3-资金划拨、4-合并出账、5-开票、6-优惠继承、7-代付费，1、2 默认必须
                     * 
                     */
                    std::vector<uint64_t> GetPermissionIds() const;

                    /**
                     * 设置成员财务权限ID列表。取值：1-查看账单、2-查看余额、3-资金划拨、4-合并出账、5-开票、6-优惠继承、7-代付费，1、2 默认必须
                     * @param _permissionIds 成员财务权限ID列表。取值：1-查看账单、2-查看余额、3-资金划拨、4-合并出账、5-开票、6-优惠继承、7-代付费，1、2 默认必须
                     * 
                     */
                    void SetPermissionIds(const std::vector<uint64_t>& _permissionIds);

                    /**
                     * 判断参数 PermissionIds 是否已赋值
                     * @return PermissionIds 是否已赋值
                     * 
                     */
                    bool PermissionIdsHasBeenSet() const;

                    /**
                     * 获取成员所属部门的节点ID。可以通过[DescribeOrganizationNodes](https://cloud.tencent.com/document/product/850/82926)获取
                     * @return NodeId 成员所属部门的节点ID。可以通过[DescribeOrganizationNodes](https://cloud.tencent.com/document/product/850/82926)获取
                     * 
                     */
                    int64_t GetNodeId() const;

                    /**
                     * 设置成员所属部门的节点ID。可以通过[DescribeOrganizationNodes](https://cloud.tencent.com/document/product/850/82926)获取
                     * @param _nodeId 成员所属部门的节点ID。可以通过[DescribeOrganizationNodes](https://cloud.tencent.com/document/product/850/82926)获取
                     * 
                     */
                    void SetNodeId(const int64_t& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取备注。
                     * @return Remark 备注。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注。
                     * @param _remark 备注。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取是否允许成员退出。允许：Allow，不允许：Denied。
                     * @return IsAllowQuit 是否允许成员退出。允许：Allow，不允许：Denied。
                     * 
                     */
                    std::string GetIsAllowQuit() const;

                    /**
                     * 设置是否允许成员退出。允许：Allow，不允许：Denied。
                     * @param _isAllowQuit 是否允许成员退出。允许：Allow，不允许：Denied。
                     * 
                     */
                    void SetIsAllowQuit(const std::string& _isAllowQuit);

                    /**
                     * 判断参数 IsAllowQuit 是否已赋值
                     * @return IsAllowQuit 是否已赋值
                     * 
                     */
                    bool IsAllowQuitHasBeenSet() const;

                    /**
                     * 获取代付者Uin。成员代付费时需要
                     * @return PayUin 代付者Uin。成员代付费时需要
                     * 
                     */
                    std::string GetPayUin() const;

                    /**
                     * 设置代付者Uin。成员代付费时需要
                     * @param _payUin 代付者Uin。成员代付费时需要
                     * 
                     */
                    void SetPayUin(const std::string& _payUin);

                    /**
                     * 判断参数 PayUin 是否已赋值
                     * @return PayUin 是否已赋值
                     * 
                     */
                    bool PayUinHasBeenSet() const;

                    /**
                     * 获取互信实名主体名称。
                     * @return RelationAuthName 互信实名主体名称。
                     * 
                     */
                    std::string GetRelationAuthName() const;

                    /**
                     * 设置互信实名主体名称。
                     * @param _relationAuthName 互信实名主体名称。
                     * 
                     */
                    void SetRelationAuthName(const std::string& _relationAuthName);

                    /**
                     * 判断参数 RelationAuthName 是否已赋值
                     * @return RelationAuthName 是否已赋值
                     * 
                     */
                    bool RelationAuthNameHasBeenSet() const;

                    /**
                     * 获取互信主体证明文件列表。
                     * @return AuthFile 互信主体证明文件列表。
                     * 
                     */
                    std::vector<AuthRelationFile> GetAuthFile() const;

                    /**
                     * 设置互信主体证明文件列表。
                     * @param _authFile 互信主体证明文件列表。
                     * 
                     */
                    void SetAuthFile(const std::vector<AuthRelationFile>& _authFile);

                    /**
                     * 判断参数 AuthFile 是否已赋值
                     * @return AuthFile 是否已赋值
                     * 
                     */
                    bool AuthFileHasBeenSet() const;

                    /**
                     * 获取成员标签列表。最大10个
                     * @return Tags 成员标签列表。最大10个
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置成员标签列表。最大10个
                     * @param _tags 成员标签列表。最大10个
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 被邀请账号Uin。
                     */
                    int64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * 成员名称。最大长度为25个字符，支持英文字母、数字、汉字、符号+@、&._[]-:,
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 关系策略。取值：Financial
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * 成员财务权限ID列表。取值：1-查看账单、2-查看余额、3-资金划拨、4-合并出账、5-开票、6-优惠继承、7-代付费，1、2 默认必须
                     */
                    std::vector<uint64_t> m_permissionIds;
                    bool m_permissionIdsHasBeenSet;

                    /**
                     * 成员所属部门的节点ID。可以通过[DescribeOrganizationNodes](https://cloud.tencent.com/document/product/850/82926)获取
                     */
                    int64_t m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * 备注。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 是否允许成员退出。允许：Allow，不允许：Denied。
                     */
                    std::string m_isAllowQuit;
                    bool m_isAllowQuitHasBeenSet;

                    /**
                     * 代付者Uin。成员代付费时需要
                     */
                    std::string m_payUin;
                    bool m_payUinHasBeenSet;

                    /**
                     * 互信实名主体名称。
                     */
                    std::string m_relationAuthName;
                    bool m_relationAuthNameHasBeenSet;

                    /**
                     * 互信主体证明文件列表。
                     */
                    std::vector<AuthRelationFile> m_authFile;
                    bool m_authFileHasBeenSet;

                    /**
                     * 成员标签列表。最大10个
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_INVITEORGANIZATIONMEMBERREQUEST_H_
