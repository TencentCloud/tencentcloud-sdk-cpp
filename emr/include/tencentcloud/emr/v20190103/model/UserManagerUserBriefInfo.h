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
                     * 获取用户所属的组
                     * @return UserGroup 用户所属的组
                     * 
                     */
                    std::string GetUserGroup() const;

                    /**
                     * 设置用户所属的组
                     * @param _userGroup 用户所属的组
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
                     * 获取Manager表示管理员、NormalUser表示普通用户
                     * @return UserType Manager表示管理员、NormalUser表示普通用户
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置Manager表示管理员、NormalUser表示普通用户
                     * @param _userType Manager表示管理员、NormalUser表示普通用户
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
                     * 获取用户创建时间
                     * @return CreateTime 用户创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置用户创建时间
                     * @param _createTime 用户创建时间
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
                     * 获取是否可以下载用户对应的keytab文件，对开启kerberos的集群才有意义
                     * @return SupportDownLoadKeyTab 是否可以下载用户对应的keytab文件，对开启kerberos的集群才有意义
                     * 
                     */
                    bool GetSupportDownLoadKeyTab() const;

                    /**
                     * 设置是否可以下载用户对应的keytab文件，对开启kerberos的集群才有意义
                     * @param _supportDownLoadKeyTab 是否可以下载用户对应的keytab文件，对开启kerberos的集群才有意义
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
                     * 获取keytab文件的下载地址
                     * @return DownLoadKeyTabUrl keytab文件的下载地址
                     * 
                     */
                    std::string GetDownLoadKeyTabUrl() const;

                    /**
                     * 设置keytab文件的下载地址
                     * @param _downLoadKeyTabUrl keytab文件的下载地址
                     * 
                     */
                    void SetDownLoadKeyTabUrl(const std::string& _downLoadKeyTabUrl);

                    /**
                     * 判断参数 DownLoadKeyTabUrl 是否已赋值
                     * @return DownLoadKeyTabUrl 是否已赋值
                     * 
                     */
                    bool DownLoadKeyTabUrlHasBeenSet() const;

                private:

                    /**
                     * 用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 用户所属的组
                     */
                    std::string m_userGroup;
                    bool m_userGroupHasBeenSet;

                    /**
                     * Manager表示管理员、NormalUser表示普通用户
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * 用户创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 是否可以下载用户对应的keytab文件，对开启kerberos的集群才有意义
                     */
                    bool m_supportDownLoadKeyTab;
                    bool m_supportDownLoadKeyTabHasBeenSet;

                    /**
                     * keytab文件的下载地址
                     */
                    std::string m_downLoadKeyTabUrl;
                    bool m_downLoadKeyTabUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_USERMANAGERUSERBRIEFINFO_H_
