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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEORGANIZATIONMEMBERREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEORGANIZATIONMEMBERREQUEST_H_

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
                * UpdateOrganizationMember请求参数结构体
                */
                class UpdateOrganizationMemberRequest : public AbstractModel
                {
                public:
                    UpdateOrganizationMemberRequest();
                    ~UpdateOrganizationMemberRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取成员Uin。
                     * @return MemberUin 成员Uin。
                     * 
                     */
                    uint64_t GetMemberUin() const;

                    /**
                     * 设置成员Uin。
                     * @param _memberUin 成员Uin。
                     * 
                     */
                    void SetMemberUin(const uint64_t& _memberUin);

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
                     * 获取备注。最大长度为40个字符
                     * @return Remark 备注。最大长度为40个字符
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注。最大长度为40个字符
                     * @param _remark 备注。最大长度为40个字符
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
                     * 获取关系策略类型。PolicyType不为空，PermissionIds不能为空。取值：Financial
                     * @return PolicyType 关系策略类型。PolicyType不为空，PermissionIds不能为空。取值：Financial
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置关系策略类型。PolicyType不为空，PermissionIds不能为空。取值：Financial
                     * @param _policyType 关系策略类型。PolicyType不为空，PermissionIds不能为空。取值：Financial
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
                     * 获取成员财务权限ID列表。PermissionIds不为空，PolicyType不能为空。
取值：1-查看账单、2-查看余额、3-资金划拨、4-合并出账、5-开票、6-优惠继承、7-代付费、8-成本分析，如果有值，1、2 默认必须
                     * @return PermissionIds 成员财务权限ID列表。PermissionIds不为空，PolicyType不能为空。
取值：1-查看账单、2-查看余额、3-资金划拨、4-合并出账、5-开票、6-优惠继承、7-代付费、8-成本分析，如果有值，1、2 默认必须
                     * 
                     */
                    std::vector<uint64_t> GetPermissionIds() const;

                    /**
                     * 设置成员财务权限ID列表。PermissionIds不为空，PolicyType不能为空。
取值：1-查看账单、2-查看余额、3-资金划拨、4-合并出账、5-开票、6-优惠继承、7-代付费、8-成本分析，如果有值，1、2 默认必须
                     * @param _permissionIds 成员财务权限ID列表。PermissionIds不为空，PolicyType不能为空。
取值：1-查看账单、2-查看余额、3-资金划拨、4-合并出账、5-开票、6-优惠继承、7-代付费、8-成本分析，如果有值，1、2 默认必须
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
                     * 获取是否允许成员退出组织。取值：Allow-允许、Denied-不允许
                     * @return IsAllowQuit 是否允许成员退出组织。取值：Allow-允许、Denied-不允许
                     * 
                     */
                    std::string GetIsAllowQuit() const;

                    /**
                     * 设置是否允许成员退出组织。取值：Allow-允许、Denied-不允许
                     * @param _isAllowQuit 是否允许成员退出组织。取值：Allow-允许、Denied-不允许
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
                     * 获取代付者Uin。成员财务权限有代付费时需要，取值为成员对应主体的主体管理员Uin
                     * @return PayUin 代付者Uin。成员财务权限有代付费时需要，取值为成员对应主体的主体管理员Uin
                     * 
                     */
                    std::string GetPayUin() const;

                    /**
                     * 设置代付者Uin。成员财务权限有代付费时需要，取值为成员对应主体的主体管理员Uin
                     * @param _payUin 代付者Uin。成员财务权限有代付费时需要，取值为成员对应主体的主体管理员Uin
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
                     * 获取是否同步组织成员名称到成员账号昵称。取值： 1-同步 0-不同步
                     * @return IsModifyNickName 是否同步组织成员名称到成员账号昵称。取值： 1-同步 0-不同步
                     * 
                     */
                    uint64_t GetIsModifyNickName() const;

                    /**
                     * 设置是否同步组织成员名称到成员账号昵称。取值： 1-同步 0-不同步
                     * @param _isModifyNickName 是否同步组织成员名称到成员账号昵称。取值： 1-同步 0-不同步
                     * 
                     */
                    void SetIsModifyNickName(const uint64_t& _isModifyNickName);

                    /**
                     * 判断参数 IsModifyNickName 是否已赋值
                     * @return IsModifyNickName 是否已赋值
                     * 
                     */
                    bool IsModifyNickNameHasBeenSet() const;

                private:

                    /**
                     * 成员Uin。
                     */
                    uint64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * 成员名称。最大长度为25个字符，支持英文字母、数字、汉字、符号+@、&._[]-:,
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 备注。最大长度为40个字符
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 关系策略类型。PolicyType不为空，PermissionIds不能为空。取值：Financial
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * 成员财务权限ID列表。PermissionIds不为空，PolicyType不能为空。
取值：1-查看账单、2-查看余额、3-资金划拨、4-合并出账、5-开票、6-优惠继承、7-代付费、8-成本分析，如果有值，1、2 默认必须
                     */
                    std::vector<uint64_t> m_permissionIds;
                    bool m_permissionIdsHasBeenSet;

                    /**
                     * 是否允许成员退出组织。取值：Allow-允许、Denied-不允许
                     */
                    std::string m_isAllowQuit;
                    bool m_isAllowQuitHasBeenSet;

                    /**
                     * 代付者Uin。成员财务权限有代付费时需要，取值为成员对应主体的主体管理员Uin
                     */
                    std::string m_payUin;
                    bool m_payUinHasBeenSet;

                    /**
                     * 是否同步组织成员名称到成员账号昵称。取值： 1-同步 0-不同步
                     */
                    uint64_t m_isModifyNickName;
                    bool m_isModifyNickNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEORGANIZATIONMEMBERREQUEST_H_
