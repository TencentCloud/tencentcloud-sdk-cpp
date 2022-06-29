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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_DESCRIBEUSERSREQUEST_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_DESCRIBEUSERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
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
                     */
                    std::vector<uint64_t> GetIdSet() const;

                    /**
                     * 设置如果IdSet不为空，则忽略其他参数
                     * @param IdSet 如果IdSet不为空，则忽略其他参数
                     */
                    void SetIdSet(const std::vector<uint64_t>& _idSet);

                    /**
                     * 判断参数 IdSet 是否已赋值
                     * @return IdSet 是否已赋值
                     */
                    bool IdSetHasBeenSet() const;

                    /**
                     * 获取模糊查询，IdSet、UserName、Phone为空时才生效，对用户名和姓名进行模糊查询
                     * @return Name 模糊查询，IdSet、UserName、Phone为空时才生效，对用户名和姓名进行模糊查询
                     */
                    std::string GetName() const;

                    /**
                     * 设置模糊查询，IdSet、UserName、Phone为空时才生效，对用户名和姓名进行模糊查询
                     * @param Name 模糊查询，IdSet、UserName、Phone为空时才生效，对用户名和姓名进行模糊查询
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取分页，偏移位置
                     * @return Offset 分页，偏移位置
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页，偏移位置
                     * @param Offset 分页，偏移位置
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取每页条目数量，默认20, 最大500
                     * @return Limit 每页条目数量，默认20, 最大500
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页条目数量，默认20, 最大500
                     * @param Limit 每页条目数量，默认20, 最大500
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取精确查询，IdSet为空时才生效
                     * @return UserName 精确查询，IdSet为空时才生效
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置精确查询，IdSet为空时才生效
                     * @param UserName 精确查询，IdSet为空时才生效
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取精确查询，IdSet、UserName为空时才生效。
大陆手机号直接填写，如果是其他国家、地区号码,按照"国家地区代码|手机号"的格式输入。如: "+852|xxxxxxxx"
                     * @return Phone 精确查询，IdSet、UserName为空时才生效。
大陆手机号直接填写，如果是其他国家、地区号码,按照"国家地区代码|手机号"的格式输入。如: "+852|xxxxxxxx"
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置精确查询，IdSet、UserName为空时才生效。
大陆手机号直接填写，如果是其他国家、地区号码,按照"国家地区代码|手机号"的格式输入。如: "+852|xxxxxxxx"
                     * @param Phone 精确查询，IdSet、UserName为空时才生效。
大陆手机号直接填写，如果是其他国家、地区号码,按照"国家地区代码|手机号"的格式输入。如: "+852|xxxxxxxx"
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取查询具有指定资产ID访问权限的用户
                     * @return AuthorizedDeviceIdSet 查询具有指定资产ID访问权限的用户
                     */
                    std::vector<uint64_t> GetAuthorizedDeviceIdSet() const;

                    /**
                     * 设置查询具有指定资产ID访问权限的用户
                     * @param AuthorizedDeviceIdSet 查询具有指定资产ID访问权限的用户
                     */
                    void SetAuthorizedDeviceIdSet(const std::vector<uint64_t>& _authorizedDeviceIdSet);

                    /**
                     * 判断参数 AuthorizedDeviceIdSet 是否已赋值
                     * @return AuthorizedDeviceIdSet 是否已赋值
                     */
                    bool AuthorizedDeviceIdSetHasBeenSet() const;

                    /**
                     * 获取认证方式，0 - 本地, 1 - LDAP, 2 - OAuth, 不传为全部
                     * @return AuthTypeSet 认证方式，0 - 本地, 1 - LDAP, 2 - OAuth, 不传为全部
                     */
                    std::vector<uint64_t> GetAuthTypeSet() const;

                    /**
                     * 设置认证方式，0 - 本地, 1 - LDAP, 2 - OAuth, 不传为全部
                     * @param AuthTypeSet 认证方式，0 - 本地, 1 - LDAP, 2 - OAuth, 不传为全部
                     */
                    void SetAuthTypeSet(const std::vector<uint64_t>& _authTypeSet);

                    /**
                     * 判断参数 AuthTypeSet 是否已赋值
                     * @return AuthTypeSet 是否已赋值
                     */
                    bool AuthTypeSetHasBeenSet() const;

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
                     * 分页，偏移位置
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
                     * 查询具有指定资产ID访问权限的用户
                     */
                    std::vector<uint64_t> m_authorizedDeviceIdSet;
                    bool m_authorizedDeviceIdSetHasBeenSet;

                    /**
                     * 认证方式，0 - 本地, 1 - LDAP, 2 - OAuth, 不传为全部
                     */
                    std::vector<uint64_t> m_authTypeSet;
                    bool m_authTypeSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_DESCRIBEUSERSREQUEST_H_
