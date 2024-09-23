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
                * CreateOrganizationMember请求参数结构体
                */
                class CreateOrganizationMemberRequest : public AbstractModel
                {
                public:
                    CreateOrganizationMemberRequest();
                    ~CreateOrganizationMemberRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取账号名称。最大长度为25个字符，支持英文字母、数字、汉字、符号+@、&._[]-:,
                     * @return AccountName 账号名称。最大长度为25个字符，支持英文字母、数字、汉字、符号+@、&._[]-:,
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置账号名称。最大长度为25个字符，支持英文字母、数字、汉字、符号+@、&._[]-:,
                     * @param _accountName 账号名称。最大长度为25个字符，支持英文字母、数字、汉字、符号+@、&._[]-:,
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

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
                     * 获取成员创建记录ID。创建异常重试时需要
                     * @return RecordId 成员创建记录ID。创建异常重试时需要
                     * 
                     */
                    int64_t GetRecordId() const;

                    /**
                     * 设置成员创建记录ID。创建异常重试时需要
                     * @param _recordId 成员创建记录ID。创建异常重试时需要
                     * 
                     */
                    void SetRecordId(const int64_t& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

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
                     * 获取成员访问身份ID列表。可以调用ListOrganizationIdentity获取，1默认支持
                     * @return IdentityRoleID 成员访问身份ID列表。可以调用ListOrganizationIdentity获取，1默认支持
                     * 
                     */
                    std::vector<uint64_t> GetIdentityRoleID() const;

                    /**
                     * 设置成员访问身份ID列表。可以调用ListOrganizationIdentity获取，1默认支持
                     * @param _identityRoleID 成员访问身份ID列表。可以调用ListOrganizationIdentity获取，1默认支持
                     * 
                     */
                    void SetIdentityRoleID(const std::vector<uint64_t>& _identityRoleID);

                    /**
                     * 判断参数 IdentityRoleID 是否已赋值
                     * @return IdentityRoleID 是否已赋值
                     * 
                     */
                    bool IdentityRoleIDHasBeenSet() const;

                    /**
                     * 获取认证主体关系ID。给不同主体创建成员时需要，可以调用DescribeOrganizationAuthNode获取
                     * @return AuthRelationId 认证主体关系ID。给不同主体创建成员时需要，可以调用DescribeOrganizationAuthNode获取
                     * 
                     */
                    int64_t GetAuthRelationId() const;

                    /**
                     * 设置认证主体关系ID。给不同主体创建成员时需要，可以调用DescribeOrganizationAuthNode获取
                     * @param _authRelationId 认证主体关系ID。给不同主体创建成员时需要，可以调用DescribeOrganizationAuthNode获取
                     * 
                     */
                    void SetAuthRelationId(const int64_t& _authRelationId);

                    /**
                     * 判断参数 AuthRelationId 是否已赋值
                     * @return AuthRelationId 是否已赋值
                     * 
                     */
                    bool AuthRelationIdHasBeenSet() const;

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
                     * 账号名称。最大长度为25个字符，支持英文字母、数字、汉字、符号+@、&._[]-:,
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * 备注。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 成员创建记录ID。创建异常重试时需要
                     */
                    int64_t m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 代付者Uin。成员代付费时需要
                     */
                    std::string m_payUin;
                    bool m_payUinHasBeenSet;

                    /**
                     * 成员访问身份ID列表。可以调用ListOrganizationIdentity获取，1默认支持
                     */
                    std::vector<uint64_t> m_identityRoleID;
                    bool m_identityRoleIDHasBeenSet;

                    /**
                     * 认证主体关系ID。给不同主体创建成员时需要，可以调用DescribeOrganizationAuthNode获取
                     */
                    int64_t m_authRelationId;
                    bool m_authRelationIdHasBeenSet;

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

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEORGANIZATIONMEMBERREQUEST_H_
