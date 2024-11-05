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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ORGANIZATIONUSERINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ORGANIZATIONUSERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 集团账号成员详情
                */
                class OrganizationUserInfo : public AbstractModel
                {
                public:
                    OrganizationUserInfo();
                    ~OrganizationUserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取成员账号Uin
                     * @return Uin 成员账号Uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置成员账号Uin
                     * @param _uin 成员账号Uin
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

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
                     * 获取资产数量
                     * @return AssetCount 资产数量
                     * 
                     */
                    int64_t GetAssetCount() const;

                    /**
                     * 设置资产数量
                     * @param _assetCount 资产数量
                     * 
                     */
                    void SetAssetCount(const int64_t& _assetCount);

                    /**
                     * 判断参数 AssetCount 是否已赋值
                     * @return AssetCount 是否已赋值
                     * 
                     */
                    bool AssetCountHasBeenSet() const;

                    /**
                     * 获取风险数量
                     * @return RiskCount 风险数量
                     * 
                     */
                    int64_t GetRiskCount() const;

                    /**
                     * 设置风险数量
                     * @param _riskCount 风险数量
                     * 
                     */
                    void SetRiskCount(const int64_t& _riskCount);

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

                    /**
                     * 获取攻击数量
                     * @return AttackCount 攻击数量
                     * 
                     */
                    int64_t GetAttackCount() const;

                    /**
                     * 设置攻击数量
                     * @param _attackCount 攻击数量
                     * 
                     */
                    void SetAttackCount(const int64_t& _attackCount);

                    /**
                     * 判断参数 AttackCount 是否已赋值
                     * @return AttackCount 是否已赋值
                     * 
                     */
                    bool AttackCountHasBeenSet() const;

                    /**
                     * 获取Member/Admin/;成员或者管理员
                     * @return Role Member/Admin/;成员或者管理员
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置Member/Admin/;成员或者管理员
                     * @param _role Member/Admin/;成员或者管理员
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
                     * 获取成员账号Appid
                     * @return AppId 成员账号Appid
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置成员账号Appid
                     * @param _appId 成员账号Appid
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

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
                     * 获取1启用，0未启用
                     * @return Enable 1启用，0未启用
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置1启用，0未启用
                     * @param _enable 1启用，0未启用
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取"Free"       //免费版  "Advanced"   //高级版 "Enterprise" //企业版 "Ultimate"   //旗舰版
                     * @return CSIPProtect "Free"       //免费版  "Advanced"   //高级版 "Enterprise" //企业版 "Ultimate"   //旗舰版
                     * 
                     */
                    std::string GetCSIPProtect() const;

                    /**
                     * 设置"Free"       //免费版  "Advanced"   //高级版 "Enterprise" //企业版 "Ultimate"   //旗舰版
                     * @param _cSIPProtect "Free"       //免费版  "Advanced"   //高级版 "Enterprise" //企业版 "Ultimate"   //旗舰版
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
                     * 获取1为配额消耗者
                     * @return QuotaConsumer 1为配额消耗者
                     * 
                     */
                    int64_t GetQuotaConsumer() const;

                    /**
                     * 设置1为配额消耗者
                     * @param _quotaConsumer 1为配额消耗者
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
                     * 获取账户类型，0为腾讯云账户，1为AWS账户
                     * @return CloudType 账户类型，0为腾讯云账户，1为AWS账户
                     * 
                     */
                    int64_t GetCloudType() const;

                    /**
                     * 设置账户类型，0为腾讯云账户，1为AWS账户
                     * @param _cloudType 账户类型，0为腾讯云账户，1为AWS账户
                     * 
                     */
                    void SetCloudType(const int64_t& _cloudType);

                    /**
                     * 判断参数 CloudType 是否已赋值
                     * @return CloudType 是否已赋值
                     * 
                     */
                    bool CloudTypeHasBeenSet() const;

                    /**
                     * 获取0为缺省值，1为10分钟，2为1小时，3为24小时
                     * @return SyncFrequency 0为缺省值，1为10分钟，2为1小时，3为24小时
                     * 
                     */
                    int64_t GetSyncFrequency() const;

                    /**
                     * 设置0为缺省值，1为10分钟，2为1小时，3为24小时
                     * @param _syncFrequency 0为缺省值，1为10分钟，2为1小时，3为24小时
                     * 
                     */
                    void SetSyncFrequency(const int64_t& _syncFrequency);

                    /**
                     * 判断参数 SyncFrequency 是否已赋值
                     * @return SyncFrequency 是否已赋值
                     * 
                     */
                    bool SyncFrequencyHasBeenSet() const;

                    /**
                     * 获取多云账户是否过期
                     * @return IsExpired 多云账户是否过期
                     * 
                     */
                    bool GetIsExpired() const;

                    /**
                     * 设置多云账户是否过期
                     * @param _isExpired 多云账户是否过期
                     * 
                     */
                    void SetIsExpired(const bool& _isExpired);

                    /**
                     * 判断参数 IsExpired 是否已赋值
                     * @return IsExpired 是否已赋值
                     * 
                     */
                    bool IsExpiredHasBeenSet() const;

                    /**
                     * 获取多云账户 权限列表
                     * @return PermissionList 多云账户 权限列表
                     * 
                     */
                    std::vector<std::string> GetPermissionList() const;

                    /**
                     * 设置多云账户 权限列表
                     * @param _permissionList 多云账户 权限列表
                     * 
                     */
                    void SetPermissionList(const std::vector<std::string>& _permissionList);

                    /**
                     * 判断参数 PermissionList 是否已赋值
                     * @return PermissionList 是否已赋值
                     * 
                     */
                    bool PermissionListHasBeenSet() const;

                    /**
                     * 获取1
                     * @return AuthType 1
                     * 
                     */
                    int64_t GetAuthType() const;

                    /**
                     * 设置1
                     * @param _authType 1
                     * 
                     */
                    void SetAuthType(const int64_t& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取0 腾讯云集团账户
1 腾讯云接入账户
2 非腾讯云
                     * @return TcMemberType 0 腾讯云集团账户
1 腾讯云接入账户
2 非腾讯云
                     * 
                     */
                    int64_t GetTcMemberType() const;

                    /**
                     * 设置0 腾讯云集团账户
1 腾讯云接入账户
2 非腾讯云
                     * @param _tcMemberType 0 腾讯云集团账户
1 腾讯云接入账户
2 非腾讯云
                     * 
                     */
                    void SetTcMemberType(const int64_t& _tcMemberType);

                    /**
                     * 判断参数 TcMemberType 是否已赋值
                     * @return TcMemberType 是否已赋值
                     * 
                     */
                    bool TcMemberTypeHasBeenSet() const;

                    /**
                     * 获取子账号数量
                     * @return SubUserCount 子账号数量
                     * 
                     */
                    int64_t GetSubUserCount() const;

                    /**
                     * 设置子账号数量
                     * @param _subUserCount 子账号数量
                     * 
                     */
                    void SetSubUserCount(const int64_t& _subUserCount);

                    /**
                     * 判断参数 SubUserCount 是否已赋值
                     * @return SubUserCount 是否已赋值
                     * 
                     */
                    bool SubUserCountHasBeenSet() const;

                    /**
                     * 获取加入方式详细信息
                     * @return JoinTypeInfo 加入方式详细信息
                     * 
                     */
                    std::string GetJoinTypeInfo() const;

                    /**
                     * 设置加入方式详细信息
                     * @param _joinTypeInfo 加入方式详细信息
                     * 
                     */
                    void SetJoinTypeInfo(const std::string& _joinTypeInfo);

                    /**
                     * 判断参数 JoinTypeInfo 是否已赋值
                     * @return JoinTypeInfo 是否已赋值
                     * 
                     */
                    bool JoinTypeInfoHasBeenSet() const;

                private:

                    /**
                     * 成员账号Uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

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
                     * 资产数量
                     */
                    int64_t m_assetCount;
                    bool m_assetCountHasBeenSet;

                    /**
                     * 风险数量
                     */
                    int64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * 攻击数量
                     */
                    int64_t m_attackCount;
                    bool m_attackCountHasBeenSet;

                    /**
                     * Member/Admin/;成员或者管理员
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 成员账号id
                     */
                    std::string m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * 成员账号Appid
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 账号加入方式,create/invite
                     */
                    std::string m_joinType;
                    bool m_joinTypeHasBeenSet;

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
                     * 1启用，0未启用
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * "Free"       //免费版  "Advanced"   //高级版 "Enterprise" //企业版 "Ultimate"   //旗舰版
                     */
                    std::string m_cSIPProtect;
                    bool m_cSIPProtectHasBeenSet;

                    /**
                     * 1为配额消耗者
                     */
                    int64_t m_quotaConsumer;
                    bool m_quotaConsumerHasBeenSet;

                    /**
                     * 账户类型，0为腾讯云账户，1为AWS账户
                     */
                    int64_t m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * 0为缺省值，1为10分钟，2为1小时，3为24小时
                     */
                    int64_t m_syncFrequency;
                    bool m_syncFrequencyHasBeenSet;

                    /**
                     * 多云账户是否过期
                     */
                    bool m_isExpired;
                    bool m_isExpiredHasBeenSet;

                    /**
                     * 多云账户 权限列表
                     */
                    std::vector<std::string> m_permissionList;
                    bool m_permissionListHasBeenSet;

                    /**
                     * 1
                     */
                    int64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * 0 腾讯云集团账户
1 腾讯云接入账户
2 非腾讯云
                     */
                    int64_t m_tcMemberType;
                    bool m_tcMemberTypeHasBeenSet;

                    /**
                     * 子账号数量
                     */
                    int64_t m_subUserCount;
                    bool m_subUserCountHasBeenSet;

                    /**
                     * 加入方式详细信息
                     */
                    std::string m_joinTypeInfo;
                    bool m_joinTypeInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ORGANIZATIONUSERINFO_H_
