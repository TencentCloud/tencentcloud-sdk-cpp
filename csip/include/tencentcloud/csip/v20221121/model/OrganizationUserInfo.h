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
                     * 获取<p>成员账号Uin</p>
                     * @return Uin <p>成员账号Uin</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>成员账号Uin</p>
                     * @param _uin <p>成员账号Uin</p>
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
                     * 获取<p>成员账号名称</p>
                     * @return NickName <p>成员账号名称</p>
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置<p>成员账号名称</p>
                     * @param _nickName <p>成员账号名称</p>
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
                     * 获取<p>部门节点名称，账号所属部门</p>
                     * @return NodeName <p>部门节点名称，账号所属部门</p>
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置<p>部门节点名称，账号所属部门</p>
                     * @param _nodeName <p>部门节点名称，账号所属部门</p>
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
                     * 获取<p>资产数量</p>
                     * @return AssetCount <p>资产数量</p>
                     * 
                     */
                    int64_t GetAssetCount() const;

                    /**
                     * 设置<p>资产数量</p>
                     * @param _assetCount <p>资产数量</p>
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
                     * 获取<p>风险数量</p>
                     * @return RiskCount <p>风险数量</p>
                     * 
                     */
                    int64_t GetRiskCount() const;

                    /**
                     * 设置<p>风险数量</p>
                     * @param _riskCount <p>风险数量</p>
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
                     * 获取<p>攻击数量</p>
                     * @return AttackCount <p>攻击数量</p>
                     * 
                     */
                    int64_t GetAttackCount() const;

                    /**
                     * 设置<p>攻击数量</p>
                     * @param _attackCount <p>攻击数量</p>
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
                     * 获取<p>Member/Admin/;成员或者管理员</p>
                     * @return Role <p>Member/Admin/;成员或者管理员</p>
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置<p>Member/Admin/;成员或者管理员</p>
                     * @param _role <p>Member/Admin/;成员或者管理员</p>
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
                     * 获取<p>成员账号id</p>
                     * @return MemberId <p>成员账号id</p>
                     * 
                     */
                    std::string GetMemberId() const;

                    /**
                     * 设置<p>成员账号id</p>
                     * @param _memberId <p>成员账号id</p>
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
                     * 获取<p>成员账号Appid</p>
                     * @return AppId <p>成员账号Appid</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>成员账号Appid</p>
                     * @param _appId <p>成员账号Appid</p>
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
                     * 获取<p>账号加入方式,create/invite</p>
                     * @return JoinType <p>账号加入方式,create/invite</p>
                     * 
                     */
                    std::string GetJoinType() const;

                    /**
                     * 设置<p>账号加入方式,create/invite</p>
                     * @param _joinType <p>账号加入方式,create/invite</p>
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
                     * 获取<p>空则未开启，否则不同字符串对应不同版本，common为通用，不区分版本</p>
                     * @return CFWProtect <p>空则未开启，否则不同字符串对应不同版本，common为通用，不区分版本</p>
                     * 
                     */
                    std::string GetCFWProtect() const;

                    /**
                     * 设置<p>空则未开启，否则不同字符串对应不同版本，common为通用，不区分版本</p>
                     * @param _cFWProtect <p>空则未开启，否则不同字符串对应不同版本，common为通用，不区分版本</p>
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
                     * 获取<p>空则未开启，否则不同字符串对应不同版本，common为通用，不区分版本</p>
                     * @return WAFProtect <p>空则未开启，否则不同字符串对应不同版本，common为通用，不区分版本</p>
                     * 
                     */
                    std::string GetWAFProtect() const;

                    /**
                     * 设置<p>空则未开启，否则不同字符串对应不同版本，common为通用，不区分版本</p>
                     * @param _wAFProtect <p>空则未开启，否则不同字符串对应不同版本，common为通用，不区分版本</p>
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
                     * 获取<p>空则未开启，否则不同字符串对应不同版本，common为通用，不区分版本</p>
                     * @return CWPProtect <p>空则未开启，否则不同字符串对应不同版本，common为通用，不区分版本</p>
                     * 
                     */
                    std::string GetCWPProtect() const;

                    /**
                     * 设置<p>空则未开启，否则不同字符串对应不同版本，common为通用，不区分版本</p>
                     * @param _cWPProtect <p>空则未开启，否则不同字符串对应不同版本，common为通用，不区分版本</p>
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
                     * 获取<p>1启用，0未启用</p>
                     * @return Enable <p>1启用，0未启用</p>
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置<p>1启用，0未启用</p>
                     * @param _enable <p>1启用，0未启用</p>
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
                     * 获取<p>&quot;Free&quot;       //免费版  &quot;Advanced&quot;   //高级版 &quot;Enterprise&quot; //企业版 &quot;Ultimate&quot;   //旗舰版</p>
                     * @return CSIPProtect <p>&quot;Free&quot;       //免费版  &quot;Advanced&quot;   //高级版 &quot;Enterprise&quot; //企业版 &quot;Ultimate&quot;   //旗舰版</p>
                     * 
                     */
                    std::string GetCSIPProtect() const;

                    /**
                     * 设置<p>&quot;Free&quot;       //免费版  &quot;Advanced&quot;   //高级版 &quot;Enterprise&quot; //企业版 &quot;Ultimate&quot;   //旗舰版</p>
                     * @param _cSIPProtect <p>&quot;Free&quot;       //免费版  &quot;Advanced&quot;   //高级版 &quot;Enterprise&quot; //企业版 &quot;Ultimate&quot;   //旗舰版</p>
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
                     * 获取<p>1为配额消耗者</p>
                     * @return QuotaConsumer <p>1为配额消耗者</p>
                     * 
                     */
                    int64_t GetQuotaConsumer() const;

                    /**
                     * 设置<p>1为配额消耗者</p>
                     * @param _quotaConsumer <p>1为配额消耗者</p>
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
                     * 获取<p>账户类型，0为腾讯云账户，1为AWS账户</p>
                     * @return CloudType <p>账户类型，0为腾讯云账户，1为AWS账户</p>
                     * 
                     */
                    int64_t GetCloudType() const;

                    /**
                     * 设置<p>账户类型，0为腾讯云账户，1为AWS账户</p>
                     * @param _cloudType <p>账户类型，0为腾讯云账户，1为AWS账户</p>
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
                     * 获取<p>0为缺省值，1为10分钟，2为1小时，3为24小时</p>
                     * @return SyncFrequency <p>0为缺省值，1为10分钟，2为1小时，3为24小时</p>
                     * 
                     */
                    int64_t GetSyncFrequency() const;

                    /**
                     * 设置<p>0为缺省值，1为10分钟，2为1小时，3为24小时</p>
                     * @param _syncFrequency <p>0为缺省值，1为10分钟，2为1小时，3为24小时</p>
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
                     * 获取<p>多云账户是否过期</p>
                     * @return IsExpired <p>多云账户是否过期</p>
                     * 
                     */
                    bool GetIsExpired() const;

                    /**
                     * 设置<p>多云账户是否过期</p>
                     * @param _isExpired <p>多云账户是否过期</p>
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
                     * 获取<p>多云账户 权限列表</p>
                     * @return PermissionList <p>多云账户 权限列表</p>
                     * 
                     */
                    std::vector<std::string> GetPermissionList() const;

                    /**
                     * 设置<p>多云账户 权限列表</p>
                     * @param _permissionList <p>多云账户 权限列表</p>
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
                     * 获取<p>账户权限类型</p><p>枚举值：</p><ul><li>1： 认证类型-Root账号AKSK</li><li>2： 认证类型-子账号AKSK</li><li>3： 认证类型-角色</li></ul>
                     * @return AuthType <p>账户权限类型</p><p>枚举值：</p><ul><li>1： 认证类型-Root账号AKSK</li><li>2： 认证类型-子账号AKSK</li><li>3： 认证类型-角色</li></ul>
                     * 
                     */
                    int64_t GetAuthType() const;

                    /**
                     * 设置<p>账户权限类型</p><p>枚举值：</p><ul><li>1： 认证类型-Root账号AKSK</li><li>2： 认证类型-子账号AKSK</li><li>3： 认证类型-角色</li></ul>
                     * @param _authType <p>账户权限类型</p><p>枚举值：</p><ul><li>1： 认证类型-Root账号AKSK</li><li>2： 认证类型-子账号AKSK</li><li>3： 认证类型-角色</li></ul>
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
                     * 获取<p>0 腾讯云集团账户<br>1 腾讯云接入账户<br>2 非腾讯云</p>
                     * @return TcMemberType <p>0 腾讯云集团账户<br>1 腾讯云接入账户<br>2 非腾讯云</p>
                     * 
                     */
                    int64_t GetTcMemberType() const;

                    /**
                     * 设置<p>0 腾讯云集团账户<br>1 腾讯云接入账户<br>2 非腾讯云</p>
                     * @param _tcMemberType <p>0 腾讯云集团账户<br>1 腾讯云接入账户<br>2 非腾讯云</p>
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
                     * 获取<p>子账号数量</p>
                     * @return SubUserCount <p>子账号数量</p>
                     * 
                     */
                    int64_t GetSubUserCount() const;

                    /**
                     * 设置<p>子账号数量</p>
                     * @param _subUserCount <p>子账号数量</p>
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
                     * 获取<p>加入方式详细信息</p>
                     * @return JoinTypeInfo <p>加入方式详细信息</p>
                     * 
                     */
                    std::string GetJoinTypeInfo() const;

                    /**
                     * 设置<p>加入方式详细信息</p>
                     * @param _joinTypeInfo <p>加入方式详细信息</p>
                     * 
                     */
                    void SetJoinTypeInfo(const std::string& _joinTypeInfo);

                    /**
                     * 判断参数 JoinTypeInfo 是否已赋值
                     * @return JoinTypeInfo 是否已赋值
                     * 
                     */
                    bool JoinTypeInfoHasBeenSet() const;

                    /**
                     * 获取<p>被共享模块列表</p><p>枚举值：</p><ul><li>AKSK： 云API异常监测</li><li>SDL： 日志分析</li><li>CSPM： 云安全态势管理</li><li>CWP： 主机安全</li><li>COS_AUDIT： COS审计</li><li>IMAGE_SCAN： 容器镜像扫描</li><li>SKILL_SCAN： Skill安全检测</li><li>SKILL_SCAN_POST： Skill安全检测(后付费)</li><li>DSPM： 数据安全态势管理</li></ul><p>默认值：[]</p>
                     * @return SharedModules <p>被共享模块列表</p><p>枚举值：</p><ul><li>AKSK： 云API异常监测</li><li>SDL： 日志分析</li><li>CSPM： 云安全态势管理</li><li>CWP： 主机安全</li><li>COS_AUDIT： COS审计</li><li>IMAGE_SCAN： 容器镜像扫描</li><li>SKILL_SCAN： Skill安全检测</li><li>SKILL_SCAN_POST： Skill安全检测(后付费)</li><li>DSPM： 数据安全态势管理</li></ul><p>默认值：[]</p>
                     * 
                     */
                    std::vector<std::string> GetSharedModules() const;

                    /**
                     * 设置<p>被共享模块列表</p><p>枚举值：</p><ul><li>AKSK： 云API异常监测</li><li>SDL： 日志分析</li><li>CSPM： 云安全态势管理</li><li>CWP： 主机安全</li><li>COS_AUDIT： COS审计</li><li>IMAGE_SCAN： 容器镜像扫描</li><li>SKILL_SCAN： Skill安全检测</li><li>SKILL_SCAN_POST： Skill安全检测(后付费)</li><li>DSPM： 数据安全态势管理</li></ul><p>默认值：[]</p>
                     * @param _sharedModules <p>被共享模块列表</p><p>枚举值：</p><ul><li>AKSK： 云API异常监测</li><li>SDL： 日志分析</li><li>CSPM： 云安全态势管理</li><li>CWP： 主机安全</li><li>COS_AUDIT： COS审计</li><li>IMAGE_SCAN： 容器镜像扫描</li><li>SKILL_SCAN： Skill安全检测</li><li>SKILL_SCAN_POST： Skill安全检测(后付费)</li><li>DSPM： 数据安全态势管理</li></ul><p>默认值：[]</p>
                     * 
                     */
                    void SetSharedModules(const std::vector<std::string>& _sharedModules);

                    /**
                     * 判断参数 SharedModules 是否已赋值
                     * @return SharedModules 是否已赋值
                     * 
                     */
                    bool SharedModulesHasBeenSet() const;

                    /**
                     * 获取<p>安全分</p>
                     * @return SecurityScore <p>安全分</p>
                     * 
                     */
                    int64_t GetSecurityScore() const;

                    /**
                     * 设置<p>安全分</p>
                     * @param _securityScore <p>安全分</p>
                     * 
                     */
                    void SetSecurityScore(const int64_t& _securityScore);

                    /**
                     * 判断参数 SecurityScore 是否已赋值
                     * @return SecurityScore 是否已赋值
                     * 
                     */
                    bool SecurityScoreHasBeenSet() const;

                private:

                    /**
                     * <p>成员账号Uin</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>成员账号名称</p>
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * <p>部门节点名称，账号所属部门</p>
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * <p>资产数量</p>
                     */
                    int64_t m_assetCount;
                    bool m_assetCountHasBeenSet;

                    /**
                     * <p>风险数量</p>
                     */
                    int64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * <p>攻击数量</p>
                     */
                    int64_t m_attackCount;
                    bool m_attackCountHasBeenSet;

                    /**
                     * <p>Member/Admin/;成员或者管理员</p>
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * <p>成员账号id</p>
                     */
                    std::string m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>成员账号Appid</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>账号加入方式,create/invite</p>
                     */
                    std::string m_joinType;
                    bool m_joinTypeHasBeenSet;

                    /**
                     * <p>空则未开启，否则不同字符串对应不同版本，common为通用，不区分版本</p>
                     */
                    std::string m_cFWProtect;
                    bool m_cFWProtectHasBeenSet;

                    /**
                     * <p>空则未开启，否则不同字符串对应不同版本，common为通用，不区分版本</p>
                     */
                    std::string m_wAFProtect;
                    bool m_wAFProtectHasBeenSet;

                    /**
                     * <p>空则未开启，否则不同字符串对应不同版本，common为通用，不区分版本</p>
                     */
                    std::string m_cWPProtect;
                    bool m_cWPProtectHasBeenSet;

                    /**
                     * <p>1启用，0未启用</p>
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>&quot;Free&quot;       //免费版  &quot;Advanced&quot;   //高级版 &quot;Enterprise&quot; //企业版 &quot;Ultimate&quot;   //旗舰版</p>
                     */
                    std::string m_cSIPProtect;
                    bool m_cSIPProtectHasBeenSet;

                    /**
                     * <p>1为配额消耗者</p>
                     */
                    int64_t m_quotaConsumer;
                    bool m_quotaConsumerHasBeenSet;

                    /**
                     * <p>账户类型，0为腾讯云账户，1为AWS账户</p>
                     */
                    int64_t m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * <p>0为缺省值，1为10分钟，2为1小时，3为24小时</p>
                     */
                    int64_t m_syncFrequency;
                    bool m_syncFrequencyHasBeenSet;

                    /**
                     * <p>多云账户是否过期</p>
                     */
                    bool m_isExpired;
                    bool m_isExpiredHasBeenSet;

                    /**
                     * <p>多云账户 权限列表</p>
                     */
                    std::vector<std::string> m_permissionList;
                    bool m_permissionListHasBeenSet;

                    /**
                     * <p>账户权限类型</p><p>枚举值：</p><ul><li>1： 认证类型-Root账号AKSK</li><li>2： 认证类型-子账号AKSK</li><li>3： 认证类型-角色</li></ul>
                     */
                    int64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * <p>0 腾讯云集团账户<br>1 腾讯云接入账户<br>2 非腾讯云</p>
                     */
                    int64_t m_tcMemberType;
                    bool m_tcMemberTypeHasBeenSet;

                    /**
                     * <p>子账号数量</p>
                     */
                    int64_t m_subUserCount;
                    bool m_subUserCountHasBeenSet;

                    /**
                     * <p>加入方式详细信息</p>
                     */
                    std::string m_joinTypeInfo;
                    bool m_joinTypeInfoHasBeenSet;

                    /**
                     * <p>被共享模块列表</p><p>枚举值：</p><ul><li>AKSK： 云API异常监测</li><li>SDL： 日志分析</li><li>CSPM： 云安全态势管理</li><li>CWP： 主机安全</li><li>COS_AUDIT： COS审计</li><li>IMAGE_SCAN： 容器镜像扫描</li><li>SKILL_SCAN： Skill安全检测</li><li>SKILL_SCAN_POST： Skill安全检测(后付费)</li><li>DSPM： 数据安全态势管理</li></ul><p>默认值：[]</p>
                     */
                    std::vector<std::string> m_sharedModules;
                    bool m_sharedModulesHasBeenSet;

                    /**
                     * <p>安全分</p>
                     */
                    int64_t m_securityScore;
                    bool m_securityScoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ORGANIZATIONUSERINFO_H_
