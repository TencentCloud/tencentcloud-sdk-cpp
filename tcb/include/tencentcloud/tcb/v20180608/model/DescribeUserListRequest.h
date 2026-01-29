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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEUSERLISTREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEUSERLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeUserList请求参数结构体
                */
                class DescribeUserListRequest : public AbstractModel
                {
                public:
                    DescribeUserListRequest();
                    ~DescribeUserListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境id
                     * @return EnvId 环境id
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境id
                     * @param _envId 环境id
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取页码，从1开始，默认1
                     * @return PageNo 页码，从1开始，默认1
                     * 
                     */
                    int64_t GetPageNo() const;

                    /**
                     * 设置页码，从1开始，默认1
                     * @param _pageNo 页码，从1开始，默认1
                     * 
                     */
                    void SetPageNo(const int64_t& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     * 
                     */
                    bool PageNoHasBeenSet() const;

                    /**
                     * 获取每页数量，默认20，最大100
                     * @return PageSize 每页数量，默认20，最大100
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页数量，默认20，最大100
                     * @param _pageSize 每页数量，默认20，最大100
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取用户名，模糊查询
                     * @return Name 用户名，模糊查询
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置用户名，模糊查询
                     * @param _name 用户名，模糊查询
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
                     * 获取用户昵称，模糊查询
                     * @return NickName 用户昵称，模糊查询
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置用户昵称，模糊查询
                     * @param _nickName 用户昵称，模糊查询
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
                     * 获取手机号，模糊查询
                     * @return Phone 手机号，模糊查询
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置手机号，模糊查询
                     * @param _phone 手机号，模糊查询
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
                     * 获取邮箱，模糊查询
                     * @return Email 邮箱，模糊查询
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置邮箱，模糊查询
                     * @param _email 邮箱，模糊查询
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                private:

                    /**
                     * 环境id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 页码，从1开始，默认1
                     */
                    int64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * 每页数量，默认20，最大100
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 用户名，模糊查询
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 用户昵称，模糊查询
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * 手机号，模糊查询
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 邮箱，模糊查询
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEUSERLISTREQUEST_H_
