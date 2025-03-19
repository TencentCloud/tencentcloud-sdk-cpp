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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_SSOTEAMUSER_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_SSOTEAMUSER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 部门用户
                */
                class SsoTeamUser : public AbstractModel
                {
                public:
                    SsoTeamUser();
                    ~SsoTeamUser() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取用户名称
                     * @return RealName 用户名称
                     * 
                     */
                    std::string GetRealName() const;

                    /**
                     * 设置用户名称
                     * @param _realName 用户名称
                     * 
                     */
                    void SetRealName(const std::string& _realName);

                    /**
                     * 判断参数 RealName 是否已赋值
                     * @return RealName 是否已赋值
                     * 
                     */
                    bool RealNameHasBeenSet() const;

                    /**
                     * 获取用户类型，1-超级管理员；2-1号管理员；3-普通管理员；99-普通用户
                     * @return UserType 用户类型，1-超级管理员；2-1号管理员；3-普通管理员；99-普通用户
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置用户类型，1-超级管理员；2-1号管理员；3-普通管理员；99-普通用户
                     * @param _userType 用户类型，1-超级管理员；2-1号管理员；3-普通管理员；99-普通用户
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
                     * 获取所属租户ID
                     * @return TenantId 所属租户ID
                     * 
                     */
                    std::string GetTenantId() const;

                    /**
                     * 设置所属租户ID
                     * @param _tenantId 所属租户ID
                     * 
                     */
                    void SetTenantId(const std::string& _tenantId);

                    /**
                     * 判断参数 TenantId 是否已赋值
                     * @return TenantId 是否已赋值
                     * 
                     */
                    bool TenantIdHasBeenSet() const;

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
                     * 获取电话
                     * @return Phone 电话
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置电话
                     * @param _phone 电话
                     * 
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取用户状态
                     * @return Status 用户状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置用户状态
                     * @param _status 用户状态
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
                     * 获取创建时间
                     * @return CreateAt 创建时间
                     * 
                     */
                    int64_t GetCreateAt() const;

                    /**
                     * 设置创建时间
                     * @param _createAt 创建时间
                     * 
                     */
                    void SetCreateAt(const int64_t& _createAt);

                    /**
                     * 判断参数 CreateAt 是否已赋值
                     * @return CreateAt 是否已赋值
                     * 
                     */
                    bool CreateAtHasBeenSet() const;

                    /**
                     * 获取部门ID
                     * @return DepartmentId 部门ID
                     * 
                     */
                    std::string GetDepartmentId() const;

                    /**
                     * 设置部门ID
                     * @param _departmentId 部门ID
                     * 
                     */
                    void SetDepartmentId(const std::string& _departmentId);

                    /**
                     * 判断参数 DepartmentId 是否已赋值
                     * @return DepartmentId 是否已赋值
                     * 
                     */
                    bool DepartmentIdHasBeenSet() const;

                    /**
                     * 获取部门名称
                     * @return DepartmentName 部门名称
                     * 
                     */
                    std::string GetDepartmentName() const;

                    /**
                     * 设置部门名称
                     * @param _departmentName 部门名称
                     * 
                     */
                    void SetDepartmentName(const std::string& _departmentName);

                    /**
                     * 判断参数 DepartmentName 是否已赋值
                     * @return DepartmentName 是否已赋值
                     * 
                     */
                    bool DepartmentNameHasBeenSet() const;

                    /**
                     * 获取是否关联权限
                     * @return LinkFilter 是否关联权限
                     * 
                     */
                    int64_t GetLinkFilter() const;

                    /**
                     * 设置是否关联权限
                     * @param _linkFilter 是否关联权限
                     * 
                     */
                    void SetLinkFilter(const int64_t& _linkFilter);

                    /**
                     * 判断参数 LinkFilter 是否已赋值
                     * @return LinkFilter 是否已赋值
                     * 
                     */
                    bool LinkFilterHasBeenSet() const;

                private:

                    /**
                     * 用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户名称
                     */
                    std::string m_realName;
                    bool m_realNameHasBeenSet;

                    /**
                     * 用户类型，1-超级管理员；2-1号管理员；3-普通管理员；99-普通用户
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * 所属租户ID
                     */
                    std::string m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * 邮箱
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 电话
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 用户状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    int64_t m_createAt;
                    bool m_createAtHasBeenSet;

                    /**
                     * 部门ID
                     */
                    std::string m_departmentId;
                    bool m_departmentIdHasBeenSet;

                    /**
                     * 部门名称
                     */
                    std::string m_departmentName;
                    bool m_departmentNameHasBeenSet;

                    /**
                     * 是否关联权限
                     */
                    int64_t m_linkFilter;
                    bool m_linkFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_SSOTEAMUSER_H_
