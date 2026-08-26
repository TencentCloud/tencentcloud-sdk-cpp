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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_USERMANAGERUSERBRIEFINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_USERMANAGERUSERBRIEFINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 用户管理中用户的简要信息
                */
                class UserManagerUserBriefInfo : public AbstractModel
                {
                public:
                    UserManagerUserBriefInfo();
                    ~UserManagerUserBriefInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>用户所属的组</p>
                     * @return UserGroup <p>用户所属的组</p>
                     * 
                     */
                    std::string GetUserGroup() const;

                    /**
                     * 设置<p>用户所属的组</p>
                     * @param _userGroup <p>用户所属的组</p>
                     * 
                     */
                    void SetUserGroup(const std::string& _userGroup);

                    /**
                     * 判断参数 UserGroup 是否已赋值
                     * @return UserGroup 是否已赋值
                     * 
                     */
                    bool UserGroupHasBeenSet() const;

                    /**
                     * 获取<p>Manager表示管理员、NormalUser表示普通用户</p>
                     * @return UserType <p>Manager表示管理员、NormalUser表示普通用户</p>
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置<p>Manager表示管理员、NormalUser表示普通用户</p>
                     * @param _userType <p>Manager表示管理员、NormalUser表示普通用户</p>
                     * 
                     */
                    void SetUserType(const std::string& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                    /**
                     * 获取<p>用户创建时间</p>
                     * @return CreateTime <p>用户创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>用户创建时间</p>
                     * @param _createTime <p>用户创建时间</p>
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
                     * 获取<p>是否可以下载用户对应的keytab文件，对开启kerberos的集群才有意义</p>
                     * @return SupportDownLoadKeyTab <p>是否可以下载用户对应的keytab文件，对开启kerberos的集群才有意义</p>
                     * 
                     */
                    bool GetSupportDownLoadKeyTab() const;

                    /**
                     * 设置<p>是否可以下载用户对应的keytab文件，对开启kerberos的集群才有意义</p>
                     * @param _supportDownLoadKeyTab <p>是否可以下载用户对应的keytab文件，对开启kerberos的集群才有意义</p>
                     * 
                     */
                    void SetSupportDownLoadKeyTab(const bool& _supportDownLoadKeyTab);

                    /**
                     * 判断参数 SupportDownLoadKeyTab 是否已赋值
                     * @return SupportDownLoadKeyTab 是否已赋值
                     * 
                     */
                    bool SupportDownLoadKeyTabHasBeenSet() const;

                    /**
                     * 获取<p>keytab文件的下载地址</p>
                     * @return DownLoadKeyTabUrl <p>keytab文件的下载地址</p>
                     * 
                     */
                    std::string GetDownLoadKeyTabUrl() const;

                    /**
                     * 设置<p>keytab文件的下载地址</p>
                     * @param _downLoadKeyTabUrl <p>keytab文件的下载地址</p>
                     * 
                     */
                    void SetDownLoadKeyTabUrl(const std::string& _downLoadKeyTabUrl);

                    /**
                     * 判断参数 DownLoadKeyTabUrl 是否已赋值
                     * @return DownLoadKeyTabUrl 是否已赋值
                     * 
                     */
                    bool DownLoadKeyTabUrlHasBeenSet() const;

                    /**
                     * 获取<p>用户组</p>
                     * @return Groups <p>用户组</p>
                     * 
                     */
                    std::vector<std::string> GetGroups() const;

                    /**
                     * 设置<p>用户组</p>
                     * @param _groups <p>用户组</p>
                     * 
                     */
                    void SetGroups(const std::vector<std::string>& _groups);

                    /**
                     * 判断参数 Groups 是否已赋值
                     * @return Groups 是否已赋值
                     * 
                     */
                    bool GroupsHasBeenSet() const;

                    /**
                     * 获取<p>客户UIN</p>
                     * @return Uin <p>客户UIN</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>客户UIN</p>
                     * @param _uin <p>客户UIN</p>
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
                     * 获取<p>用户状态</p>
                     * @return State <p>用户状态</p>
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置<p>用户状态</p>
                     * @param _state <p>用户状态</p>
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取<p>是否展示密码更新时间</p>
                     * @return DisplayPasswdUpdateTime <p>是否展示密码更新时间</p>
                     * 
                     */
                    bool GetDisplayPasswdUpdateTime() const;

                    /**
                     * 设置<p>是否展示密码更新时间</p>
                     * @param _displayPasswdUpdateTime <p>是否展示密码更新时间</p>
                     * 
                     */
                    void SetDisplayPasswdUpdateTime(const bool& _displayPasswdUpdateTime);

                    /**
                     * 判断参数 DisplayPasswdUpdateTime 是否已赋值
                     * @return DisplayPasswdUpdateTime 是否已赋值
                     * 
                     */
                    bool DisplayPasswdUpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>密码最近更新时间</p>
                     * @return PasswdUpdateTime <p>密码最近更新时间</p>
                     * 
                     */
                    std::string GetPasswdUpdateTime() const;

                    /**
                     * 设置<p>密码最近更新时间</p>
                     * @param _passwdUpdateTime <p>密码最近更新时间</p>
                     * 
                     */
                    void SetPasswdUpdateTime(const std::string& _passwdUpdateTime);

                    /**
                     * 判断参数 PasswdUpdateTime 是否已赋值
                     * @return PasswdUpdateTime 是否已赋值
                     * 
                     */
                    bool PasswdUpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>已经使用的天数</p><p>单位：天</p>
                     * @return PasswdUsedDay <p>已经使用的天数</p><p>单位：天</p>
                     * 
                     */
                    int64_t GetPasswdUsedDay() const;

                    /**
                     * 设置<p>已经使用的天数</p><p>单位：天</p>
                     * @param _passwdUsedDay <p>已经使用的天数</p><p>单位：天</p>
                     * 
                     */
                    void SetPasswdUsedDay(const int64_t& _passwdUsedDay);

                    /**
                     * 判断参数 PasswdUsedDay 是否已赋值
                     * @return PasswdUsedDay 是否已赋值
                     * 
                     */
                    bool PasswdUsedDayHasBeenSet() const;

                    /**
                     * 获取<p>已经使用的小时数</p><p>单位：时</p>
                     * @return PasswdUsedHour <p>已经使用的小时数</p><p>单位：时</p>
                     * 
                     */
                    int64_t GetPasswdUsedHour() const;

                    /**
                     * 设置<p>已经使用的小时数</p><p>单位：时</p>
                     * @param _passwdUsedHour <p>已经使用的小时数</p><p>单位：时</p>
                     * 
                     */
                    void SetPasswdUsedHour(const int64_t& _passwdUsedHour);

                    /**
                     * 判断参数 PasswdUsedHour 是否已赋值
                     * @return PasswdUsedHour 是否已赋值
                     * 
                     */
                    bool PasswdUsedHourHasBeenSet() const;

                private:

                    /**
                     * <p>用户名</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>用户所属的组</p>
                     */
                    std::string m_userGroup;
                    bool m_userGroupHasBeenSet;

                    /**
                     * <p>Manager表示管理员、NormalUser表示普通用户</p>
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * <p>用户创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>是否可以下载用户对应的keytab文件，对开启kerberos的集群才有意义</p>
                     */
                    bool m_supportDownLoadKeyTab;
                    bool m_supportDownLoadKeyTabHasBeenSet;

                    /**
                     * <p>keytab文件的下载地址</p>
                     */
                    std::string m_downLoadKeyTabUrl;
                    bool m_downLoadKeyTabUrlHasBeenSet;

                    /**
                     * <p>用户组</p>
                     */
                    std::vector<std::string> m_groups;
                    bool m_groupsHasBeenSet;

                    /**
                     * <p>客户UIN</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>用户状态</p>
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>是否展示密码更新时间</p>
                     */
                    bool m_displayPasswdUpdateTime;
                    bool m_displayPasswdUpdateTimeHasBeenSet;

                    /**
                     * <p>密码最近更新时间</p>
                     */
                    std::string m_passwdUpdateTime;
                    bool m_passwdUpdateTimeHasBeenSet;

                    /**
                     * <p>已经使用的天数</p><p>单位：天</p>
                     */
                    int64_t m_passwdUsedDay;
                    bool m_passwdUsedDayHasBeenSet;

                    /**
                     * <p>已经使用的小时数</p><p>单位：时</p>
                     */
                    int64_t m_passwdUsedHour;
                    bool m_passwdUsedHourHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_USERMANAGERUSERBRIEFINFO_H_
