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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBELOCALACCOUNTSDATA_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBELOCALACCOUNTSDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ioa/v20220601/model/DescribeLocalAccountAccountGroupsData.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 获取账号列表响应的单个对象
                */
                class DescribeLocalAccountsData : public AbstractModel
                {
                public:
                    DescribeLocalAccountsData();
                    ~DescribeLocalAccountsData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>uid，数据库中唯一</p>
                     * @return Id <p>uid，数据库中唯一</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>uid，数据库中唯一</p>
                     * @param _id <p>uid，数据库中唯一</p>
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>账号，登录账号</p>
                     * @return UserId <p>账号，登录账号</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>账号，登录账号</p>
                     * @param _userId <p>账号，登录账号</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取<p>用户名</p>
                     * @return UserName <p>用户名</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>用户名</p>
                     * @param _userName <p>用户名</p>
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取<p>账号id，同Id字段</p>
                     * @return AccountId <p>账号id，同Id字段</p>
                     * 
                     */
                    int64_t GetAccountId() const;

                    /**
                     * 设置<p>账号id，同Id字段</p>
                     * @param _accountId <p>账号id，同Id字段</p>
                     * 
                     */
                    void SetAccountId(const int64_t& _accountId);

                    /**
                     * 判断参数 AccountId 是否已赋值
                     * @return AccountId 是否已赋值
                     * 
                     */
                    bool AccountIdHasBeenSet() const;

                    /**
                     * 获取<p>账号所在的分组id</p>
                     * @return GroupId <p>账号所在的分组id</p>
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置<p>账号所在的分组id</p>
                     * @param _groupId <p>账号所在的分组id</p>
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>账号所在的分组名称</p>
                     * @return GroupName <p>账号所在的分组名称</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>账号所在的分组名称</p>
                     * @param _groupName <p>账号所在的分组名称</p>
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
                     * 获取<p>账号所在的分组名称路径，用英文.分割</p>
                     * @return NamePath <p>账号所在的分组名称路径，用英文.分割</p>
                     * 
                     */
                    std::string GetNamePath() const;

                    /**
                     * 设置<p>账号所在的分组名称路径，用英文.分割</p>
                     * @param _namePath <p>账号所在的分组名称路径，用英文.分割</p>
                     * 
                     */
                    void SetNamePath(const std::string& _namePath);

                    /**
                     * 判断参数 NamePath 是否已赋值
                     * @return NamePath 是否已赋值
                     * 
                     */
                    bool NamePathHasBeenSet() const;

                    /**
                     * 获取<p>账号来源,0表示本地账号(只支持32位)</p>
                     * @return Source <p>账号来源,0表示本地账号(只支持32位)</p>
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置<p>账号来源,0表示本地账号(只支持32位)</p>
                     * @param _source <p>账号来源,0表示本地账号(只支持32位)</p>
                     * 
                     */
                    void SetSource(const int64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>账号状态,0禁用，1启用(只支持32位)</p>
                     * @return Status <p>账号状态,0禁用，1启用(只支持32位)</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>账号状态,0禁用，1启用(只支持32位)</p>
                     * @param _status <p>账号状态,0禁用，1启用(只支持32位)</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>账号的创建时间</p>
                     * @return Itime <p>账号的创建时间</p>
                     * 
                     */
                    std::string GetItime() const;

                    /**
                     * 设置<p>账号的创建时间</p>
                     * @param _itime <p>账号的创建时间</p>
                     * 
                     */
                    void SetItime(const std::string& _itime);

                    /**
                     * 判断参数 Itime 是否已赋值
                     * @return Itime 是否已赋值
                     * 
                     */
                    bool ItimeHasBeenSet() const;

                    /**
                     * 获取<p>账号的最后更新时间</p>
                     * @return Utime <p>账号的最后更新时间</p>
                     * 
                     */
                    std::string GetUtime() const;

                    /**
                     * 设置<p>账号的最后更新时间</p>
                     * @param _utime <p>账号的最后更新时间</p>
                     * 
                     */
                    void SetUtime(const std::string& _utime);

                    /**
                     * 判断参数 Utime 是否已赋值
                     * @return Utime 是否已赋值
                     * 
                     */
                    bool UtimeHasBeenSet() const;

                    /**
                     * 获取<p>账号的扩展信息，包含邮箱、手机号、身份证、职位等信息</p>
                     * @return ExtraInfo <p>账号的扩展信息，包含邮箱、手机号、身份证、职位等信息</p>
                     * 
                     */
                    std::string GetExtraInfo() const;

                    /**
                     * 设置<p>账号的扩展信息，包含邮箱、手机号、身份证、职位等信息</p>
                     * @param _extraInfo <p>账号的扩展信息，包含邮箱、手机号、身份证、职位等信息</p>
                     * 
                     */
                    void SetExtraInfo(const std::string& _extraInfo);

                    /**
                     * 判断参数 ExtraInfo 是否已赋值
                     * @return ExtraInfo 是否已赋值
                     * 
                     */
                    bool ExtraInfoHasBeenSet() const;

                    /**
                     * 获取<p>用户风险等级，枚举：none, low, middle, high</p>
                     * @return RiskLevel <p>用户风险等级，枚举：none, low, middle, high</p>
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置<p>用户风险等级，枚举：none, low, middle, high</p>
                     * @param _riskLevel <p>用户风险等级，枚举：none, low, middle, high</p>
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取<p>所属组</p>
                     * @return AccountGroups <p>所属组</p>
                     * 
                     */
                    std::vector<DescribeLocalAccountAccountGroupsData> GetAccountGroups() const;

                    /**
                     * 设置<p>所属组</p>
                     * @param _accountGroups <p>所属组</p>
                     * 
                     */
                    void SetAccountGroups(const std::vector<DescribeLocalAccountAccountGroupsData>& _accountGroups);

                    /**
                     * 判断参数 AccountGroups 是否已赋值
                     * @return AccountGroups 是否已赋值
                     * 
                     */
                    bool AccountGroupsHasBeenSet() const;

                    /**
                     * 获取<p>绑定手机端设备数</p>
                     * @return MobileBindNum <p>绑定手机端设备数</p>
                     * 
                     */
                    int64_t GetMobileBindNum() const;

                    /**
                     * 设置<p>绑定手机端设备数</p>
                     * @param _mobileBindNum <p>绑定手机端设备数</p>
                     * 
                     */
                    void SetMobileBindNum(const int64_t& _mobileBindNum);

                    /**
                     * 判断参数 MobileBindNum 是否已赋值
                     * @return MobileBindNum 是否已赋值
                     * 
                     */
                    bool MobileBindNumHasBeenSet() const;

                    /**
                     * 获取<p>绑定Pc端设备数</p>
                     * @return PcBindNum <p>绑定Pc端设备数</p>
                     * 
                     */
                    int64_t GetPcBindNum() const;

                    /**
                     * 设置<p>绑定Pc端设备数</p>
                     * @param _pcBindNum <p>绑定Pc端设备数</p>
                     * 
                     */
                    void SetPcBindNum(const int64_t& _pcBindNum);

                    /**
                     * 判断参数 PcBindNum 是否已赋值
                     * @return PcBindNum 是否已赋值
                     * 
                     */
                    bool PcBindNumHasBeenSet() const;

                    /**
                     * 获取<p>账号在线状态 1：在线 2：离线</p>
                     * @return OnlineStatus <p>账号在线状态 1：在线 2：离线</p>
                     * 
                     */
                    int64_t GetOnlineStatus() const;

                    /**
                     * 设置<p>账号在线状态 1：在线 2：离线</p>
                     * @param _onlineStatus <p>账号在线状态 1：在线 2：离线</p>
                     * 
                     */
                    void SetOnlineStatus(const int64_t& _onlineStatus);

                    /**
                     * 判断参数 OnlineStatus 是否已赋值
                     * @return OnlineStatus 是否已赋值
                     * 
                     */
                    bool OnlineStatusHasBeenSet() const;

                    /**
                     * 获取<p>账号活跃状态 1：活跃 2：非活跃</p>
                     * @return ActiveStatus <p>账号活跃状态 1：活跃 2：非活跃</p>
                     * 
                     */
                    int64_t GetActiveStatus() const;

                    /**
                     * 设置<p>账号活跃状态 1：活跃 2：非活跃</p>
                     * @param _activeStatus <p>账号活跃状态 1：活跃 2：非活跃</p>
                     * 
                     */
                    void SetActiveStatus(const int64_t& _activeStatus);

                    /**
                     * 判断参数 ActiveStatus 是否已赋值
                     * @return ActiveStatus 是否已赋值
                     * 
                     */
                    bool ActiveStatusHasBeenSet() const;

                    /**
                     * 获取<p>账号登录时间</p>
                     * @return LoginTime <p>账号登录时间</p>
                     * 
                     */
                    std::string GetLoginTime() const;

                    /**
                     * 设置<p>账号登录时间</p>
                     * @param _loginTime <p>账号登录时间</p>
                     * 
                     */
                    void SetLoginTime(const std::string& _loginTime);

                    /**
                     * 判断参数 LoginTime 是否已赋值
                     * @return LoginTime 是否已赋值
                     * 
                     */
                    bool LoginTimeHasBeenSet() const;

                    /**
                     * 获取<p>账号登出时间</p>
                     * @return LogoutTime <p>账号登出时间</p>
                     * 
                     */
                    std::string GetLogoutTime() const;

                    /**
                     * 设置<p>账号登出时间</p>
                     * @param _logoutTime <p>账号登出时间</p>
                     * 
                     */
                    void SetLogoutTime(const std::string& _logoutTime);

                    /**
                     * 判断参数 LogoutTime 是否已赋值
                     * @return LogoutTime 是否已赋值
                     * 
                     */
                    bool LogoutTimeHasBeenSet() const;

                private:

                    /**
                     * <p>uid，数据库中唯一</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>账号，登录账号</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>用户名</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>账号id，同Id字段</p>
                     */
                    int64_t m_accountId;
                    bool m_accountIdHasBeenSet;

                    /**
                     * <p>账号所在的分组id</p>
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>账号所在的分组名称</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>账号所在的分组名称路径，用英文.分割</p>
                     */
                    std::string m_namePath;
                    bool m_namePathHasBeenSet;

                    /**
                     * <p>账号来源,0表示本地账号(只支持32位)</p>
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>账号状态,0禁用，1启用(只支持32位)</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>账号的创建时间</p>
                     */
                    std::string m_itime;
                    bool m_itimeHasBeenSet;

                    /**
                     * <p>账号的最后更新时间</p>
                     */
                    std::string m_utime;
                    bool m_utimeHasBeenSet;

                    /**
                     * <p>账号的扩展信息，包含邮箱、手机号、身份证、职位等信息</p>
                     */
                    std::string m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * <p>用户风险等级，枚举：none, low, middle, high</p>
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>所属组</p>
                     */
                    std::vector<DescribeLocalAccountAccountGroupsData> m_accountGroups;
                    bool m_accountGroupsHasBeenSet;

                    /**
                     * <p>绑定手机端设备数</p>
                     */
                    int64_t m_mobileBindNum;
                    bool m_mobileBindNumHasBeenSet;

                    /**
                     * <p>绑定Pc端设备数</p>
                     */
                    int64_t m_pcBindNum;
                    bool m_pcBindNumHasBeenSet;

                    /**
                     * <p>账号在线状态 1：在线 2：离线</p>
                     */
                    int64_t m_onlineStatus;
                    bool m_onlineStatusHasBeenSet;

                    /**
                     * <p>账号活跃状态 1：活跃 2：非活跃</p>
                     */
                    int64_t m_activeStatus;
                    bool m_activeStatusHasBeenSet;

                    /**
                     * <p>账号登录时间</p>
                     */
                    std::string m_loginTime;
                    bool m_loginTimeHasBeenSet;

                    /**
                     * <p>账号登出时间</p>
                     */
                    std::string m_logoutTime;
                    bool m_logoutTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBELOCALACCOUNTSDATA_H_
