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
                     * 获取<p>成员名称。最大长度为25个字符，支持英文字母、数字、汉字、符号+@、&amp;._[]-:,</p>
                     * @return Name <p>成员名称。最大长度为25个字符，支持英文字母、数字、汉字、符号+@、&amp;._[]-:,</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>成员名称。最大长度为25个字符，支持英文字母、数字、汉字、符号+@、&amp;._[]-:,</p>
                     * @param _name <p>成员名称。最大长度为25个字符，支持英文字母、数字、汉字、符号+@、&amp;._[]-:,</p>
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
                     * 获取<p>关系策略。取值：Financial</p>
                     * @return PolicyType <p>关系策略。取值：Financial</p>
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置<p>关系策略。取值：Financial</p>
                     * @param _policyType <p>关系策略。取值：Financial</p>
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
                     * 获取<p>成员财务权限ID列表。取值：1-查看账单、2-查看余额、3-资金划拨（若需要开启资金划拨权限，请联系您的商务经理内部开通。）、4-合并出账、5-开票、6-优惠继承、7-代付费、8-成本分析、9-预算管理、10-信用额度设置（若需要开启信用额度设置权限，请联系您的商务经理内部开通。），1、2 默认必须</p>
                     * @return PermissionIds <p>成员财务权限ID列表。取值：1-查看账单、2-查看余额、3-资金划拨（若需要开启资金划拨权限，请联系您的商务经理内部开通。）、4-合并出账、5-开票、6-优惠继承、7-代付费、8-成本分析、9-预算管理、10-信用额度设置（若需要开启信用额度设置权限，请联系您的商务经理内部开通。），1、2 默认必须</p>
                     * 
                     */
                    std::vector<uint64_t> GetPermissionIds() const;

                    /**
                     * 设置<p>成员财务权限ID列表。取值：1-查看账单、2-查看余额、3-资金划拨（若需要开启资金划拨权限，请联系您的商务经理内部开通。）、4-合并出账、5-开票、6-优惠继承、7-代付费、8-成本分析、9-预算管理、10-信用额度设置（若需要开启信用额度设置权限，请联系您的商务经理内部开通。），1、2 默认必须</p>
                     * @param _permissionIds <p>成员财务权限ID列表。取值：1-查看账单、2-查看余额、3-资金划拨（若需要开启资金划拨权限，请联系您的商务经理内部开通。）、4-合并出账、5-开票、6-优惠继承、7-代付费、8-成本分析、9-预算管理、10-信用额度设置（若需要开启信用额度设置权限，请联系您的商务经理内部开通。），1、2 默认必须</p>
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
                     * 获取<p>成员所属部门的节点ID。可以通过<a href="https://cloud.tencent.com/document/product/850/82926">DescribeOrganizationNodes</a>获取</p>
                     * @return NodeId <p>成员所属部门的节点ID。可以通过<a href="https://cloud.tencent.com/document/product/850/82926">DescribeOrganizationNodes</a>获取</p>
                     * 
                     */
                    int64_t GetNodeId() const;

                    /**
                     * 设置<p>成员所属部门的节点ID。可以通过<a href="https://cloud.tencent.com/document/product/850/82926">DescribeOrganizationNodes</a>获取</p>
                     * @param _nodeId <p>成员所属部门的节点ID。可以通过<a href="https://cloud.tencent.com/document/product/850/82926">DescribeOrganizationNodes</a>获取</p>
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
                     * 获取<p>账号名称。最大长度为25个字符，支持英文字母、数字、汉字、符号+@、&amp;._[]-:,</p>
                     * @return AccountName <p>账号名称。最大长度为25个字符，支持英文字母、数字、汉字、符号+@、&amp;._[]-:,</p>
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置<p>账号名称。最大长度为25个字符，支持英文字母、数字、汉字、符号+@、&amp;._[]-:,</p>
                     * @param _accountName <p>账号名称。最大长度为25个字符，支持英文字母、数字、汉字、符号+@、&amp;._[]-:,</p>
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
                     * 获取<p>备注。</p>
                     * @return Remark <p>备注。</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注。</p>
                     * @param _remark <p>备注。</p>
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
                     * 获取<p>成员创建记录ID。创建异常重试时需要</p>
                     * @return RecordId <p>成员创建记录ID。创建异常重试时需要</p>
                     * 
                     */
                    int64_t GetRecordId() const;

                    /**
                     * 设置<p>成员创建记录ID。创建异常重试时需要</p>
                     * @param _recordId <p>成员创建记录ID。创建异常重试时需要</p>
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
                     * 获取<p>代付者Uin。成员代付费时需要</p>
                     * @return PayUin <p>代付者Uin。成员代付费时需要</p>
                     * 
                     */
                    std::string GetPayUin() const;

                    /**
                     * 设置<p>代付者Uin。成员代付费时需要</p>
                     * @param _payUin <p>代付者Uin。成员代付费时需要</p>
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
                     * 获取<p>成员访问身份ID列表。可以调用ListOrganizationIdentity获取，1默认支持</p>
                     * @return IdentityRoleID <p>成员访问身份ID列表。可以调用ListOrganizationIdentity获取，1默认支持</p>
                     * 
                     */
                    std::vector<uint64_t> GetIdentityRoleID() const;

                    /**
                     * 设置<p>成员访问身份ID列表。可以调用ListOrganizationIdentity获取，1默认支持</p>
                     * @param _identityRoleID <p>成员访问身份ID列表。可以调用ListOrganizationIdentity获取，1默认支持</p>
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
                     * 获取<p>认证主体关系ID。给不同主体创建成员时需要，可以调用DescribeOrganizationAuthNode获取</p>
                     * @return AuthRelationId <p>认证主体关系ID。给不同主体创建成员时需要，可以调用DescribeOrganizationAuthNode获取</p>
                     * 
                     */
                    int64_t GetAuthRelationId() const;

                    /**
                     * 设置<p>认证主体关系ID。给不同主体创建成员时需要，可以调用DescribeOrganizationAuthNode获取</p>
                     * @param _authRelationId <p>认证主体关系ID。给不同主体创建成员时需要，可以调用DescribeOrganizationAuthNode获取</p>
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
                     * 获取<p>成员标签列表。最大10个</p>
                     * @return Tags <p>成员标签列表。最大10个</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>成员标签列表。最大10个</p>
                     * @param _tags <p>成员标签列表。最大10个</p>
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
                     * <p>成员名称。最大长度为25个字符，支持英文字母、数字、汉字、符号+@、&amp;._[]-:,</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>关系策略。取值：Financial</p>
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * <p>成员财务权限ID列表。取值：1-查看账单、2-查看余额、3-资金划拨（若需要开启资金划拨权限，请联系您的商务经理内部开通。）、4-合并出账、5-开票、6-优惠继承、7-代付费、8-成本分析、9-预算管理、10-信用额度设置（若需要开启信用额度设置权限，请联系您的商务经理内部开通。），1、2 默认必须</p>
                     */
                    std::vector<uint64_t> m_permissionIds;
                    bool m_permissionIdsHasBeenSet;

                    /**
                     * <p>成员所属部门的节点ID。可以通过<a href="https://cloud.tencent.com/document/product/850/82926">DescribeOrganizationNodes</a>获取</p>
                     */
                    int64_t m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * <p>账号名称。最大长度为25个字符，支持英文字母、数字、汉字、符号+@、&amp;._[]-:,</p>
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * <p>备注。</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>成员创建记录ID。创建异常重试时需要</p>
                     */
                    int64_t m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * <p>代付者Uin。成员代付费时需要</p>
                     */
                    std::string m_payUin;
                    bool m_payUinHasBeenSet;

                    /**
                     * <p>成员访问身份ID列表。可以调用ListOrganizationIdentity获取，1默认支持</p>
                     */
                    std::vector<uint64_t> m_identityRoleID;
                    bool m_identityRoleIDHasBeenSet;

                    /**
                     * <p>认证主体关系ID。给不同主体创建成员时需要，可以调用DescribeOrganizationAuthNode获取</p>
                     */
                    int64_t m_authRelationId;
                    bool m_authRelationIdHasBeenSet;

                    /**
                     * <p>成员标签列表。最大10个</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEORGANIZATIONMEMBERREQUEST_H_
