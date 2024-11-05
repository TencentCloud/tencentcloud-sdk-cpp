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
                     * 获取uid，数据库中唯一
                     * @return Id uid，数据库中唯一
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置uid，数据库中唯一
                     * @param _id uid，数据库中唯一
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
                     * 获取账号，登录账号
                     * @return UserId 账号，登录账号
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置账号，登录账号
                     * @param _userId 账号，登录账号
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
                     * 获取用户名
                     * @return UserName 用户名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名
                     * @param _userName 用户名
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
                     * 获取账号id，同Id字段
                     * @return AccountId 账号id，同Id字段
                     * 
                     */
                    int64_t GetAccountId() const;

                    /**
                     * 设置账号id，同Id字段
                     * @param _accountId 账号id，同Id字段
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
                     * 获取账号所在的分组id
                     * @return GroupId 账号所在的分组id
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置账号所在的分组id
                     * @param _groupId 账号所在的分组id
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
                     * 获取账号所在的分组名称
                     * @return GroupName 账号所在的分组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置账号所在的分组名称
                     * @param _groupName 账号所在的分组名称
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
                     * 获取账号所在的分组名称路径，用英文.分割
                     * @return NamePath 账号所在的分组名称路径，用英文.分割
                     * 
                     */
                    std::string GetNamePath() const;

                    /**
                     * 设置账号所在的分组名称路径，用英文.分割
                     * @param _namePath 账号所在的分组名称路径，用英文.分割
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
                     * 获取账号来源,0表示本地账号(只支持32位)
                     * @return Source 账号来源,0表示本地账号(只支持32位)
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置账号来源,0表示本地账号(只支持32位)
                     * @param _source 账号来源,0表示本地账号(只支持32位)
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
                     * 获取账号状态,0禁用，1启用(只支持32位)
                     * @return Status 账号状态,0禁用，1启用(只支持32位)
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置账号状态,0禁用，1启用(只支持32位)
                     * @param _status 账号状态,0禁用，1启用(只支持32位)
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
                     * 获取账号的创建时间
                     * @return Itime 账号的创建时间
                     * 
                     */
                    std::string GetItime() const;

                    /**
                     * 设置账号的创建时间
                     * @param _itime 账号的创建时间
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
                     * 获取账号的最后更新时间
                     * @return Utime 账号的最后更新时间
                     * 
                     */
                    std::string GetUtime() const;

                    /**
                     * 设置账号的最后更新时间
                     * @param _utime 账号的最后更新时间
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
                     * 获取账号的扩展信息，包含邮箱、手机号、身份证、职位等信息
                     * @return ExtraInfo 账号的扩展信息，包含邮箱、手机号、身份证、职位等信息
                     * 
                     */
                    std::string GetExtraInfo() const;

                    /**
                     * 设置账号的扩展信息，包含邮箱、手机号、身份证、职位等信息
                     * @param _extraInfo 账号的扩展信息，包含邮箱、手机号、身份证、职位等信息
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
                     * 获取用户风险等级，枚举：none, low, middle, high
                     * @return RiskLevel 用户风险等级，枚举：none, low, middle, high
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置用户风险等级，枚举：none, low, middle, high
                     * @param _riskLevel 用户风险等级，枚举：none, low, middle, high
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
                     * 获取所属组
                     * @return AccountGroups 所属组
                     * 
                     */
                    std::vector<DescribeLocalAccountAccountGroupsData> GetAccountGroups() const;

                    /**
                     * 设置所属组
                     * @param _accountGroups 所属组
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
                     * 获取绑定手机端设备数
                     * @return MobileBindNum 绑定手机端设备数
                     * 
                     */
                    int64_t GetMobileBindNum() const;

                    /**
                     * 设置绑定手机端设备数
                     * @param _mobileBindNum 绑定手机端设备数
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
                     * 获取绑定Pc端设备数
                     * @return PcBindNum 绑定Pc端设备数
                     * 
                     */
                    int64_t GetPcBindNum() const;

                    /**
                     * 设置绑定Pc端设备数
                     * @param _pcBindNum 绑定Pc端设备数
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
                     * 获取账号在线状态 1：在线 2：离线
                     * @return OnlineStatus 账号在线状态 1：在线 2：离线
                     * 
                     */
                    int64_t GetOnlineStatus() const;

                    /**
                     * 设置账号在线状态 1：在线 2：离线
                     * @param _onlineStatus 账号在线状态 1：在线 2：离线
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
                     * 获取账号活跃状态 1：活跃 2：非活跃
                     * @return ActiveStatus 账号活跃状态 1：活跃 2：非活跃
                     * 
                     */
                    int64_t GetActiveStatus() const;

                    /**
                     * 设置账号活跃状态 1：活跃 2：非活跃
                     * @param _activeStatus 账号活跃状态 1：活跃 2：非活跃
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
                     * 获取账号登录时间
                     * @return LoginTime 账号登录时间
                     * 
                     */
                    std::string GetLoginTime() const;

                    /**
                     * 设置账号登录时间
                     * @param _loginTime 账号登录时间
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
                     * 获取账号登出时间
                     * @return LogoutTime 账号登出时间
                     * 
                     */
                    std::string GetLogoutTime() const;

                    /**
                     * 设置账号登出时间
                     * @param _logoutTime 账号登出时间
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
                     * uid，数据库中唯一
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 账号，登录账号
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 账号id，同Id字段
                     */
                    int64_t m_accountId;
                    bool m_accountIdHasBeenSet;

                    /**
                     * 账号所在的分组id
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 账号所在的分组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 账号所在的分组名称路径，用英文.分割
                     */
                    std::string m_namePath;
                    bool m_namePathHasBeenSet;

                    /**
                     * 账号来源,0表示本地账号(只支持32位)
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 账号状态,0禁用，1启用(只支持32位)
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 账号的创建时间
                     */
                    std::string m_itime;
                    bool m_itimeHasBeenSet;

                    /**
                     * 账号的最后更新时间
                     */
                    std::string m_utime;
                    bool m_utimeHasBeenSet;

                    /**
                     * 账号的扩展信息，包含邮箱、手机号、身份证、职位等信息
                     */
                    std::string m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * 用户风险等级，枚举：none, low, middle, high
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 所属组
                     */
                    std::vector<DescribeLocalAccountAccountGroupsData> m_accountGroups;
                    bool m_accountGroupsHasBeenSet;

                    /**
                     * 绑定手机端设备数
                     */
                    int64_t m_mobileBindNum;
                    bool m_mobileBindNumHasBeenSet;

                    /**
                     * 绑定Pc端设备数
                     */
                    int64_t m_pcBindNum;
                    bool m_pcBindNumHasBeenSet;

                    /**
                     * 账号在线状态 1：在线 2：离线
                     */
                    int64_t m_onlineStatus;
                    bool m_onlineStatusHasBeenSet;

                    /**
                     * 账号活跃状态 1：活跃 2：非活跃
                     */
                    int64_t m_activeStatus;
                    bool m_activeStatusHasBeenSet;

                    /**
                     * 账号登录时间
                     */
                    std::string m_loginTime;
                    bool m_loginTimeHasBeenSet;

                    /**
                     * 账号登出时间
                     */
                    std::string m_logoutTime;
                    bool m_logoutTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBELOCALACCOUNTSDATA_H_
