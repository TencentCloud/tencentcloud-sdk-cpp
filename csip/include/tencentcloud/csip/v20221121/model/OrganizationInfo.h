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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ORGANIZATIONINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ORGANIZATIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CloudCountDesc.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 集团账号详情
                */
                class OrganizationInfo : public AbstractModel
                {
                public:
                    OrganizationInfo();
                    ~OrganizationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取成员账号名称
                     * @return NickName 成员账号名称
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置成员账号名称
                     * @param _nickName 成员账号名称
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取部门节点名称，账号所属部门
                     * @return NodeName 部门节点名称，账号所属部门
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置部门节点名称，账号所属部门
                     * @param _nodeName 部门节点名称，账号所属部门
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取Member/Admin/DelegatedAdmin/EntityAdmin; 成员/管理员/委派管理员/主体管理员
                     * @return Role Member/Admin/DelegatedAdmin/EntityAdmin; 成员/管理员/委派管理员/主体管理员
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置Member/Admin/DelegatedAdmin/EntityAdmin; 成员/管理员/委派管理员/主体管理员
                     * @param _role Member/Admin/DelegatedAdmin/EntityAdmin; 成员/管理员/委派管理员/主体管理员
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取成员账号id
                     * @return MemberId 成员账号id
                     * 
                     */
                    std::string GetMemberId() const;

                    /**
                     * 设置成员账号id
                     * @param _memberId 成员账号id
                     * 
                     */
                    void SetMemberId(const std::string& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取账号加入方式,create/invite
                     * @return JoinType 账号加入方式,create/invite
                     * 
                     */
                    std::string GetJoinType() const;

                    /**
                     * 设置账号加入方式,create/invite
                     * @param _joinType 账号加入方式,create/invite
                     * 
                     */
                    void SetJoinType(const std::string& _joinType);

                    /**
                     * 判断参数 JoinType 是否已赋值
                     * @return JoinType 是否已赋值
                     * 
                     */
                    bool JoinTypeHasBeenSet() const;

                    /**
                     * 获取集团名称
                     * @return GroupName 集团名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置集团名称
                     * @param _groupName 集团名称
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取管理员账号名称
                     * @return AdminName 管理员账号名称
                     * 
                     */
                    std::string GetAdminName() const;

                    /**
                     * 设置管理员账号名称
                     * @param _adminName 管理员账号名称
                     * 
                     */
                    void SetAdminName(const std::string& _adminName);

                    /**
                     * 判断参数 AdminName 是否已赋值
                     * @return AdminName 是否已赋值
                     * 
                     */
                    bool AdminNameHasBeenSet() const;

                    /**
                     * 获取管理员Uin
                     * @return AdminUin 管理员Uin
                     * 
                     */
                    std::string GetAdminUin() const;

                    /**
                     * 设置管理员Uin
                     * @param _adminUin 管理员Uin
                     * 
                     */
                    void SetAdminUin(const std::string& _adminUin);

                    /**
                     * 判断参数 AdminUin 是否已赋值
                     * @return AdminUin 是否已赋值
                     * 
                     */
                    bool AdminUinHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取部门数
                     * @return NodeCount 部门数
                     * 
                     */
                    int64_t GetNodeCount() const;

                    /**
                     * 设置部门数
                     * @param _nodeCount 部门数
                     * 
                     */
                    void SetNodeCount(const int64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取成员数
                     * @return MemberCount 成员数
                     * 
                     */
                    int64_t GetMemberCount() const;

                    /**
                     * 设置成员数
                     * @param _memberCount 成员数
                     * 
                     */
                    void SetMemberCount(const int64_t& _memberCount);

                    /**
                     * 判断参数 MemberCount 是否已赋值
                     * @return MemberCount 是否已赋值
                     * 
                     */
                    bool MemberCountHasBeenSet() const;

                    /**
                     * 获取子账号数
                     * @return SubAccountCount 子账号数
                     * 
                     */
                    int64_t GetSubAccountCount() const;

                    /**
                     * 设置子账号数
                     * @param _subAccountCount 子账号数
                     * 
                     */
                    void SetSubAccountCount(const int64_t& _subAccountCount);

                    /**
                     * 判断参数 SubAccountCount 是否已赋值
                     * @return SubAccountCount 是否已赋值
                     * 
                     */
                    bool SubAccountCountHasBeenSet() const;

                    /**
                     * 获取异常子账号数量
                     * @return AbnormalSubUserCount 异常子账号数量
                     * 
                     */
                    int64_t GetAbnormalSubUserCount() const;

                    /**
                     * 设置异常子账号数量
                     * @param _abnormalSubUserCount 异常子账号数量
                     * 
                     */
                    void SetAbnormalSubUserCount(const int64_t& _abnormalSubUserCount);

                    /**
                     * 判断参数 AbnormalSubUserCount 是否已赋值
                     * @return AbnormalSubUserCount 是否已赋值
                     * 
                     */
                    bool AbnormalSubUserCountHasBeenSet() const;

                    /**
                     * 获取集团关系策略权限
                     * @return GroupPermission 集团关系策略权限
                     * 
                     */
                    std::vector<std::string> GetGroupPermission() const;

                    /**
                     * 设置集团关系策略权限
                     * @param _groupPermission 集团关系策略权限
                     * 
                     */
                    void SetGroupPermission(const std::vector<std::string>& _groupPermission);

                    /**
                     * 判断参数 GroupPermission 是否已赋值
                     * @return GroupPermission 是否已赋值
                     * 
                     */
                    bool GroupPermissionHasBeenSet() const;

                    /**
                     * 获取成员关系策略权限
                     * @return MemberPermission 成员关系策略权限
                     * 
                     */
                    std::vector<std::string> GetMemberPermission() const;

                    /**
                     * 设置成员关系策略权限
                     * @param _memberPermission 成员关系策略权限
                     * 
                     */
                    void SetMemberPermission(const std::vector<std::string>& _memberPermission);

                    /**
                     * 判断参数 MemberPermission 是否已赋值
                     * @return MemberPermission 是否已赋值
                     * 
                     */
                    bool MemberPermissionHasBeenSet() const;

                    /**
                     * 获取集团付费模式；0/自付费，1/代付费
                     * @return GroupPayMode 集团付费模式；0/自付费，1/代付费
                     * 
                     */
                    int64_t GetGroupPayMode() const;

                    /**
                     * 设置集团付费模式；0/自付费，1/代付费
                     * @param _groupPayMode 集团付费模式；0/自付费，1/代付费
                     * 
                     */
                    void SetGroupPayMode(const int64_t& _groupPayMode);

                    /**
                     * 判断参数 GroupPayMode 是否已赋值
                     * @return GroupPayMode 是否已赋值
                     * 
                     */
                    bool GroupPayModeHasBeenSet() const;

                    /**
                     * 获取个人付费模式；0/自付费，1/代付费
                     * @return MemberPayMode 个人付费模式；0/自付费，1/代付费
                     * 
                     */
                    int64_t GetMemberPayMode() const;

                    /**
                     * 设置个人付费模式；0/自付费，1/代付费
                     * @param _memberPayMode 个人付费模式；0/自付费，1/代付费
                     * 
                     */
                    void SetMemberPayMode(const int64_t& _memberPayMode);

                    /**
                     * 判断参数 MemberPayMode 是否已赋值
                     * @return MemberPayMode 是否已赋值
                     * 
                     */
                    bool MemberPayModeHasBeenSet() const;

                    /**
                     * 获取空则未开启，否则不同字符串对应不同版本，common为通用，不区分版本
                     * @return CFWProtect 空则未开启，否则不同字符串对应不同版本，common为通用，不区分版本
                     * 
                     */
                    std::string GetCFWProtect() const;

                    /**
                     * 设置空则未开启，否则不同字符串对应不同版本，common为通用，不区分版本
                     * @param _cFWProtect 空则未开启，否则不同字符串对应不同版本，common为通用，不区分版本
                     * 
                     */
                    void SetCFWProtect(const std::string& _cFWProtect);

                    /**
                     * 判断参数 CFWProtect 是否已赋值
                     * @return CFWProtect 是否已赋值
                     * 
                     */
                    bool CFWProtectHasBeenSet() const;

                    /**
                     * 获取空则未开启，否则不同字符串对应不同版本，common为通用，不区分版本
                     * @return WAFProtect 空则未开启，否则不同字符串对应不同版本，common为通用，不区分版本
                     * 
                     */
                    std::string GetWAFProtect() const;

                    /**
                     * 设置空则未开启，否则不同字符串对应不同版本，common为通用，不区分版本
                     * @param _wAFProtect 空则未开启，否则不同字符串对应不同版本，common为通用，不区分版本
                     * 
                     */
                    void SetWAFProtect(const std::string& _wAFProtect);

                    /**
                     * 判断参数 WAFProtect 是否已赋值
                     * @return WAFProtect 是否已赋值
                     * 
                     */
                    bool WAFProtectHasBeenSet() const;

                    /**
                     * 获取空则未开启，否则不同字符串对应不同版本，common为通用，不区分版本
                     * @return CWPProtect 空则未开启，否则不同字符串对应不同版本，common为通用，不区分版本
                     * 
                     */
                    std::string GetCWPProtect() const;

                    /**
                     * 设置空则未开启，否则不同字符串对应不同版本，common为通用，不区分版本
                     * @param _cWPProtect 空则未开启，否则不同字符串对应不同版本，common为通用，不区分版本
                     * 
                     */
                    void SetCWPProtect(const std::string& _cWPProtect);

                    /**
                     * 判断参数 CWPProtect 是否已赋值
                     * @return CWPProtect 是否已赋值
                     * 
                     */
                    bool CWPProtectHasBeenSet() const;

                    /**
                     * 获取所有部门的集合数组
                     * @return Departments 所有部门的集合数组
                     * 
                     */
                    std::vector<std::string> GetDepartments() const;

                    /**
                     * 设置所有部门的集合数组
                     * @param _departments 所有部门的集合数组
                     * 
                     */
                    void SetDepartments(const std::vector<std::string>& _departments);

                    /**
                     * 判断参数 Departments 是否已赋值
                     * @return Departments 是否已赋值
                     * 
                     */
                    bool DepartmentsHasBeenSet() const;

                    /**
                     * 获取成员创建时间
                     * @return MemberCreateTime 成员创建时间
                     * 
                     */
                    std::string GetMemberCreateTime() const;

                    /**
                     * 设置成员创建时间
                     * @param _memberCreateTime 成员创建时间
                     * 
                     */
                    void SetMemberCreateTime(const std::string& _memberCreateTime);

                    /**
                     * 判断参数 MemberCreateTime 是否已赋值
                     * @return MemberCreateTime 是否已赋值
                     * 
                     */
                    bool MemberCreateTimeHasBeenSet() const;

                    /**
                     * 获取Advanced/Enterprise/Ultimate 
                     * @return CSIPProtect Advanced/Enterprise/Ultimate 
                     * 
                     */
                    std::string GetCSIPProtect() const;

                    /**
                     * 设置Advanced/Enterprise/Ultimate 
                     * @param _cSIPProtect Advanced/Enterprise/Ultimate 
                     * 
                     */
                    void SetCSIPProtect(const std::string& _cSIPProtect);

                    /**
                     * 判断参数 CSIPProtect 是否已赋值
                     * @return CSIPProtect 是否已赋值
                     * 
                     */
                    bool CSIPProtectHasBeenSet() const;

                    /**
                     * 获取1表示配额消耗方
                     * @return QuotaConsumer 1表示配额消耗方
                     * 
                     */
                    int64_t GetQuotaConsumer() const;

                    /**
                     * 设置1表示配额消耗方
                     * @param _quotaConsumer 1表示配额消耗方
                     * 
                     */
                    void SetQuotaConsumer(const int64_t& _quotaConsumer);

                    /**
                     * 判断参数 QuotaConsumer 是否已赋值
                     * @return QuotaConsumer 是否已赋值
                     * 
                     */
                    bool QuotaConsumerHasBeenSet() const;

                    /**
                     * 获取管理员/委派管理员 已开启数量
                     * @return EnableAdminCount 管理员/委派管理员 已开启数量
                     * 
                     */
                    int64_t GetEnableAdminCount() const;

                    /**
                     * 设置管理员/委派管理员 已开启数量
                     * @param _enableAdminCount 管理员/委派管理员 已开启数量
                     * 
                     */
                    void SetEnableAdminCount(const int64_t& _enableAdminCount);

                    /**
                     * 判断参数 EnableAdminCount 是否已赋值
                     * @return EnableAdminCount 是否已赋值
                     * 
                     */
                    bool EnableAdminCountHasBeenSet() const;

                    /**
                     * 获取账户多云信息统计，数组形式，具体参考CloudCountDesc描述
                     * @return CloudCountDesc 账户多云信息统计，数组形式，具体参考CloudCountDesc描述
                     * 
                     */
                    std::vector<CloudCountDesc> GetCloudCountDesc() const;

                    /**
                     * 设置账户多云信息统计，数组形式，具体参考CloudCountDesc描述
                     * @param _cloudCountDesc 账户多云信息统计，数组形式，具体参考CloudCountDesc描述
                     * 
                     */
                    void SetCloudCountDesc(const std::vector<CloudCountDesc>& _cloudCountDesc);

                    /**
                     * 判断参数 CloudCountDesc 是否已赋值
                     * @return CloudCountDesc 是否已赋值
                     * 
                     */
                    bool CloudCountDescHasBeenSet() const;

                    /**
                     * 获取管理员/委派管理员 总数量
                     * @return AdminCount 管理员/委派管理员 总数量
                     * 
                     */
                    int64_t GetAdminCount() const;

                    /**
                     * 设置管理员/委派管理员 总数量
                     * @param _adminCount 管理员/委派管理员 总数量
                     * 
                     */
                    void SetAdminCount(const int64_t& _adminCount);

                    /**
                     * 判断参数 AdminCount 是否已赋值
                     * @return AdminCount 是否已赋值
                     * 
                     */
                    bool AdminCountHasBeenSet() const;

                private:

                    /**
                     * 成员账号名称
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * 部门节点名称，账号所属部门
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * Member/Admin/DelegatedAdmin/EntityAdmin; 成员/管理员/委派管理员/主体管理员
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 成员账号id
                     */
                    std::string m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * 账号加入方式,create/invite
                     */
                    std::string m_joinType;
                    bool m_joinTypeHasBeenSet;

                    /**
                     * 集团名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 管理员账号名称
                     */
                    std::string m_adminName;
                    bool m_adminNameHasBeenSet;

                    /**
                     * 管理员Uin
                     */
                    std::string m_adminUin;
                    bool m_adminUinHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 部门数
                     */
                    int64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * 成员数
                     */
                    int64_t m_memberCount;
                    bool m_memberCountHasBeenSet;

                    /**
                     * 子账号数
                     */
                    int64_t m_subAccountCount;
                    bool m_subAccountCountHasBeenSet;

                    /**
                     * 异常子账号数量
                     */
                    int64_t m_abnormalSubUserCount;
                    bool m_abnormalSubUserCountHasBeenSet;

                    /**
                     * 集团关系策略权限
                     */
                    std::vector<std::string> m_groupPermission;
                    bool m_groupPermissionHasBeenSet;

                    /**
                     * 成员关系策略权限
                     */
                    std::vector<std::string> m_memberPermission;
                    bool m_memberPermissionHasBeenSet;

                    /**
                     * 集团付费模式；0/自付费，1/代付费
                     */
                    int64_t m_groupPayMode;
                    bool m_groupPayModeHasBeenSet;

                    /**
                     * 个人付费模式；0/自付费，1/代付费
                     */
                    int64_t m_memberPayMode;
                    bool m_memberPayModeHasBeenSet;

                    /**
                     * 空则未开启，否则不同字符串对应不同版本，common为通用，不区分版本
                     */
                    std::string m_cFWProtect;
                    bool m_cFWProtectHasBeenSet;

                    /**
                     * 空则未开启，否则不同字符串对应不同版本，common为通用，不区分版本
                     */
                    std::string m_wAFProtect;
                    bool m_wAFProtectHasBeenSet;

                    /**
                     * 空则未开启，否则不同字符串对应不同版本，common为通用，不区分版本
                     */
                    std::string m_cWPProtect;
                    bool m_cWPProtectHasBeenSet;

                    /**
                     * 所有部门的集合数组
                     */
                    std::vector<std::string> m_departments;
                    bool m_departmentsHasBeenSet;

                    /**
                     * 成员创建时间
                     */
                    std::string m_memberCreateTime;
                    bool m_memberCreateTimeHasBeenSet;

                    /**
                     * Advanced/Enterprise/Ultimate 
                     */
                    std::string m_cSIPProtect;
                    bool m_cSIPProtectHasBeenSet;

                    /**
                     * 1表示配额消耗方
                     */
                    int64_t m_quotaConsumer;
                    bool m_quotaConsumerHasBeenSet;

                    /**
                     * 管理员/委派管理员 已开启数量
                     */
                    int64_t m_enableAdminCount;
                    bool m_enableAdminCountHasBeenSet;

                    /**
                     * 账户多云信息统计，数组形式，具体参考CloudCountDesc描述
                     */
                    std::vector<CloudCountDesc> m_cloudCountDesc;
                    bool m_cloudCountDescHasBeenSet;

                    /**
                     * 管理员/委派管理员 总数量
                     */
                    int64_t m_adminCount;
                    bool m_adminCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ORGANIZATIONINFO_H_
