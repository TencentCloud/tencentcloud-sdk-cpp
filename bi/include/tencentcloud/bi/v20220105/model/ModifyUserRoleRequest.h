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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_MODIFYUSERROLEREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_MODIFYUSERROLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * ModifyUserRole请求参数结构体
                */
                class ModifyUserRoleRequest : public AbstractModel
                {
                public:
                    ModifyUserRoleRequest();
                    ~ModifyUserRoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户ID
                     * @return UserId 用户ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户ID
                     * @param _userId 用户ID
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
                     * 获取角色ID 列表
                     * @return RoleIdList 角色ID 列表
                     * 
                     */
                    std::vector<int64_t> GetRoleIdList() const;

                    /**
                     * 设置角色ID 列表
                     * @param _roleIdList 角色ID 列表
                     * 
                     */
                    void SetRoleIdList(const std::vector<int64_t>& _roleIdList);

                    /**
                     * 判断参数 RoleIdList 是否已赋值
                     * @return RoleIdList 是否已赋值
                     * 
                     */
                    bool RoleIdListHasBeenSet() const;

                    /**
                     * 获取邮箱
                     * @return Email 邮箱
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置邮箱
                     * @param _email 邮箱
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

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
                     * 获取手机号
                     * @return PhoneNumber 手机号
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置手机号
                     * @param _phoneNumber 手机号
                     * 
                     */
                    void SetPhoneNumber(const std::string& _phoneNumber);

                    /**
                     * 判断参数 PhoneNumber 是否已赋值
                     * @return PhoneNumber 是否已赋值
                     * 
                     */
                    bool PhoneNumberHasBeenSet() const;

                    /**
                     * 获取手机区号
                     * @return AreaCode 手机区号
                     * 
                     */
                    std::string GetAreaCode() const;

                    /**
                     * 设置手机区号
                     * @param _areaCode 手机区号
                     * 
                     */
                    void SetAreaCode(const std::string& _areaCode);

                    /**
                     * 判断参数 AreaCode 是否已赋值
                     * @return AreaCode 是否已赋值
                     * 
                     */
                    bool AreaCodeHasBeenSet() const;

                    /**
                     * 获取企业微信应用用户id
                     * @return AppUserId 企业微信应用用户id
                     * 
                     */
                    std::string GetAppUserId() const;

                    /**
                     * 设置企业微信应用用户id
                     * @param _appUserId 企业微信应用用户id
                     * 
                     */
                    void SetAppUserId(const std::string& _appUserId);

                    /**
                     * 判断参数 AppUserId 是否已赋值
                     * @return AppUserId 是否已赋值
                     * 
                     */
                    bool AppUserIdHasBeenSet() const;

                    /**
                     * 获取是否开启手机验证码登录（0 关闭，1 开启）
                     * @return LoginSecurityStatus 是否开启手机验证码登录（0 关闭，1 开启）
                     * 
                     */
                    int64_t GetLoginSecurityStatus() const;

                    /**
                     * 设置是否开启手机验证码登录（0 关闭，1 开启）
                     * @param _loginSecurityStatus 是否开启手机验证码登录（0 关闭，1 开启）
                     * 
                     */
                    void SetLoginSecurityStatus(const int64_t& _loginSecurityStatus);

                    /**
                     * 判断参数 LoginSecurityStatus 是否已赋值
                     * @return LoginSecurityStatus 是否已赋值
                     * 
                     */
                    bool LoginSecurityStatusHasBeenSet() const;

                private:

                    /**
                     * 用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 角色ID 列表
                     */
                    std::vector<int64_t> m_roleIdList;
                    bool m_roleIdListHasBeenSet;

                    /**
                     * 邮箱
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 手机号
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * 手机区号
                     */
                    std::string m_areaCode;
                    bool m_areaCodeHasBeenSet;

                    /**
                     * 企业微信应用用户id
                     */
                    std::string m_appUserId;
                    bool m_appUserIdHasBeenSet;

                    /**
                     * 是否开启手机验证码登录（0 关闭，1 开启）
                     */
                    int64_t m_loginSecurityStatus;
                    bool m_loginSecurityStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_MODIFYUSERROLEREQUEST_H_
