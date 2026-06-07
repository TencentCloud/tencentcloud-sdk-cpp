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
                     * 获取<p>环境id</p>
                     * @return EnvId <p>环境id</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>环境id</p>
                     * @param _envId <p>环境id</p>
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
                     * 获取<p>页码，从1开始，默认1</p>
                     * @return PageNo <p>页码，从1开始，默认1</p>
                     * 
                     */
                    int64_t GetPageNo() const;

                    /**
                     * 设置<p>页码，从1开始，默认1</p>
                     * @param _pageNo <p>页码，从1开始，默认1</p>
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
                     * 获取<p>每页数量，默认20，最大100</p>
                     * @return PageSize <p>每页数量，默认20，最大100</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>每页数量，默认20，最大100</p>
                     * @param _pageSize <p>每页数量，默认20，最大100</p>
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
                     * 获取<p>用户名，模糊查询</p>
                     * @return Name <p>用户名，模糊查询</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>用户名，模糊查询</p>
                     * @param _name <p>用户名，模糊查询</p>
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
                     * 获取<p>用户昵称，模糊查询</p>
                     * @return NickName <p>用户昵称，模糊查询</p>
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置<p>用户昵称，模糊查询</p>
                     * @param _nickName <p>用户昵称，模糊查询</p>
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
                     * 获取<p>手机号，模糊查询</p>
                     * @return Phone <p>手机号，模糊查询</p>
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置<p>手机号，模糊查询</p>
                     * @param _phone <p>手机号，模糊查询</p>
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
                     * 获取<p>邮箱，模糊查询</p>
                     * @return Email <p>邮箱，模糊查询</p>
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置<p>邮箱，模糊查询</p>
                     * @param _email <p>邮箱，模糊查询</p>
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
                     * 获取<p>用户id列表，根据id过滤用户</p>
                     * @return UidList <p>用户id列表，根据id过滤用户</p>
                     * 
                     */
                    std::vector<std::string> GetUidList() const;

                    /**
                     * 设置<p>用户id列表，根据id过滤用户</p>
                     * @param _uidList <p>用户id列表，根据id过滤用户</p>
                     * 
                     */
                    void SetUidList(const std::vector<std::string>& _uidList);

                    /**
                     * 判断参数 UidList 是否已赋值
                     * @return UidList 是否已赋值
                     * 
                     */
                    bool UidListHasBeenSet() const;

                private:

                    /**
                     * <p>环境id</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>页码，从1开始，默认1</p>
                     */
                    int64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * <p>每页数量，默认20，最大100</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>用户名，模糊查询</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>用户昵称，模糊查询</p>
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * <p>手机号，模糊查询</p>
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * <p>邮箱，模糊查询</p>
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * <p>用户id列表，根据id过滤用户</p>
                     */
                    std::vector<std::string> m_uidList;
                    bool m_uidListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEUSERLISTREQUEST_H_
