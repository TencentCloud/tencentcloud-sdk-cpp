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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEUSERSREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEUSERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bh/v20230418/model/Filter.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeUsers请求参数结构体
                */
                class DescribeUsersRequest : public AbstractModel
                {
                public:
                    DescribeUsersRequest();
                    ~DescribeUsersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取如果IdSet不为空，则忽略其他参数
                     * @return IdSet 如果IdSet不为空，则忽略其他参数
                     * 
                     */
                    std::vector<uint64_t> GetIdSet() const;

                    /**
                     * 设置如果IdSet不为空，则忽略其他参数
                     * @param _idSet 如果IdSet不为空，则忽略其他参数
                     * 
                     */
                    void SetIdSet(const std::vector<uint64_t>& _idSet);

                    /**
                     * 判断参数 IdSet 是否已赋值
                     * @return IdSet 是否已赋值
                     * 
                     */
                    bool IdSetHasBeenSet() const;

                    /**
                     * 获取模糊查询，IdSet、UserName、Phone为空时才生效，对用户名和姓名进行模糊查询
                     * @return Name 模糊查询，IdSet、UserName、Phone为空时才生效，对用户名和姓名进行模糊查询
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置模糊查询，IdSet、UserName、Phone为空时才生效，对用户名和姓名进行模糊查询
                     * @param _name 模糊查询，IdSet、UserName、Phone为空时才生效，对用户名和姓名进行模糊查询
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
                     * 获取分页偏移位置，默认值为0
                     * @return Offset 分页偏移位置，默认值为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移位置，默认值为0
                     * @param _offset 分页偏移位置，默认值为0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取每页条目数量，默认20, 最大500
                     * @return Limit 每页条目数量，默认20, 最大500
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页条目数量，默认20, 最大500
                     * @param _limit 每页条目数量，默认20, 最大500
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取精确查询，IdSet为空时才生效
                     * @return UserName 精确查询，IdSet为空时才生效
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置精确查询，IdSet为空时才生效
                     * @param _userName 精确查询，IdSet为空时才生效
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
                     * 获取精确查询，IdSet、UserName为空时才生效。
大陆手机号直接填写，如果是其他国家、地区号码,按照"国家地区代码|手机号"的格式输入。如: "+852|xxxxxxxx"
                     * @return Phone 精确查询，IdSet、UserName为空时才生效。
大陆手机号直接填写，如果是其他国家、地区号码,按照"国家地区代码|手机号"的格式输入。如: "+852|xxxxxxxx"
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置精确查询，IdSet、UserName为空时才生效。
大陆手机号直接填写，如果是其他国家、地区号码,按照"国家地区代码|手机号"的格式输入。如: "+852|xxxxxxxx"
                     * @param _phone 精确查询，IdSet、UserName为空时才生效。
大陆手机号直接填写，如果是其他国家、地区号码,按照"国家地区代码|手机号"的格式输入。如: "+852|xxxxxxxx"
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
                     * 获取邮箱，精确查询
                     * @return Email 邮箱，精确查询
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置邮箱，精确查询
                     * @param _email 邮箱，精确查询
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
                     * 获取查询具有指定资产ID访问权限的用户
                     * @return AuthorizedDeviceIdSet 查询具有指定资产ID访问权限的用户
                     * 
                     */
                    std::vector<uint64_t> GetAuthorizedDeviceIdSet() const;

                    /**
                     * 设置查询具有指定资产ID访问权限的用户
                     * @param _authorizedDeviceIdSet 查询具有指定资产ID访问权限的用户
                     * 
                     */
                    void SetAuthorizedDeviceIdSet(const std::vector<uint64_t>& _authorizedDeviceIdSet);

                    /**
                     * 判断参数 AuthorizedDeviceIdSet 是否已赋值
                     * @return AuthorizedDeviceIdSet 是否已赋值
                     * 
                     */
                    bool AuthorizedDeviceIdSetHasBeenSet() const;

                    /**
                     * 获取查询具有指定应用资产ID访问权限的用户
                     * @return AuthorizedAppAssetIdSet 查询具有指定应用资产ID访问权限的用户
                     * 
                     */
                    std::vector<uint64_t> GetAuthorizedAppAssetIdSet() const;

                    /**
                     * 设置查询具有指定应用资产ID访问权限的用户
                     * @param _authorizedAppAssetIdSet 查询具有指定应用资产ID访问权限的用户
                     * 
                     */
                    void SetAuthorizedAppAssetIdSet(const std::vector<uint64_t>& _authorizedAppAssetIdSet);

                    /**
                     * 判断参数 AuthorizedAppAssetIdSet 是否已赋值
                     * @return AuthorizedAppAssetIdSet 是否已赋值
                     * 
                     */
                    bool AuthorizedAppAssetIdSetHasBeenSet() const;

                    /**
                     * 获取认证方式，0 - 本地, 1 - LDAP, 2 - OAuth, 3-ioa 不传为全部
                     * @return AuthTypeSet 认证方式，0 - 本地, 1 - LDAP, 2 - OAuth, 3-ioa 不传为全部
                     * 
                     */
                    std::vector<uint64_t> GetAuthTypeSet() const;

                    /**
                     * 设置认证方式，0 - 本地, 1 - LDAP, 2 - OAuth, 3-ioa 不传为全部
                     * @param _authTypeSet 认证方式，0 - 本地, 1 - LDAP, 2 - OAuth, 3-ioa 不传为全部
                     * 
                     */
                    void SetAuthTypeSet(const std::vector<uint64_t>& _authTypeSet);

                    /**
                     * 判断参数 AuthTypeSet 是否已赋值
                     * @return AuthTypeSet 是否已赋值
                     * 
                     */
                    bool AuthTypeSetHasBeenSet() const;

                    /**
                     * 获取部门ID，用于过滤属于某个部门的用户
                     * @return DepartmentId 部门ID，用于过滤属于某个部门的用户
                     * 
                     */
                    std::string GetDepartmentId() const;

                    /**
                     * 设置部门ID，用于过滤属于某个部门的用户
                     * @param _departmentId 部门ID，用于过滤属于某个部门的用户
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
                     * 获取参数过滤数组

                     * @return Filters 参数过滤数组

                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置参数过滤数组

                     * @param _filters 参数过滤数组

                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取是否获取cam用户, 0-否，1-是
                     * @return IsCamUser 是否获取cam用户, 0-否，1-是
                     * 
                     */
                    uint64_t GetIsCamUser() const;

                    /**
                     * 设置是否获取cam用户, 0-否，1-是
                     * @param _isCamUser 是否获取cam用户, 0-否，1-是
                     * 
                     */
                    void SetIsCamUser(const uint64_t& _isCamUser);

                    /**
                     * 判断参数 IsCamUser 是否已赋值
                     * @return IsCamUser 是否已赋值
                     * 
                     */
                    bool IsCamUserHasBeenSet() const;

                    /**
                     * 获取用户来源，0-bh，1-ioa,不传为全部
                     * @return UserFromSet 用户来源，0-bh，1-ioa,不传为全部
                     * 
                     */
                    std::vector<uint64_t> GetUserFromSet() const;

                    /**
                     * 设置用户来源，0-bh，1-ioa,不传为全部
                     * @param _userFromSet 用户来源，0-bh，1-ioa,不传为全部
                     * 
                     */
                    void SetUserFromSet(const std::vector<uint64_t>& _userFromSet);

                    /**
                     * 判断参数 UserFromSet 是否已赋值
                     * @return UserFromSet 是否已赋值
                     * 
                     */
                    bool UserFromSetHasBeenSet() const;

                private:

                    /**
                     * 如果IdSet不为空，则忽略其他参数
                     */
                    std::vector<uint64_t> m_idSet;
                    bool m_idSetHasBeenSet;

                    /**
                     * 模糊查询，IdSet、UserName、Phone为空时才生效，对用户名和姓名进行模糊查询
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 分页偏移位置，默认值为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页条目数量，默认20, 最大500
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 精确查询，IdSet为空时才生效
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 精确查询，IdSet、UserName为空时才生效。
大陆手机号直接填写，如果是其他国家、地区号码,按照"国家地区代码|手机号"的格式输入。如: "+852|xxxxxxxx"
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 邮箱，精确查询
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 查询具有指定资产ID访问权限的用户
                     */
                    std::vector<uint64_t> m_authorizedDeviceIdSet;
                    bool m_authorizedDeviceIdSetHasBeenSet;

                    /**
                     * 查询具有指定应用资产ID访问权限的用户
                     */
                    std::vector<uint64_t> m_authorizedAppAssetIdSet;
                    bool m_authorizedAppAssetIdSetHasBeenSet;

                    /**
                     * 认证方式，0 - 本地, 1 - LDAP, 2 - OAuth, 3-ioa 不传为全部
                     */
                    std::vector<uint64_t> m_authTypeSet;
                    bool m_authTypeSetHasBeenSet;

                    /**
                     * 部门ID，用于过滤属于某个部门的用户
                     */
                    std::string m_departmentId;
                    bool m_departmentIdHasBeenSet;

                    /**
                     * 参数过滤数组

                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 是否获取cam用户, 0-否，1-是
                     */
                    uint64_t m_isCamUser;
                    bool m_isCamUserHasBeenSet;

                    /**
                     * 用户来源，0-bh，1-ioa,不传为全部
                     */
                    std::vector<uint64_t> m_userFromSet;
                    bool m_userFromSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEUSERSREQUEST_H_
