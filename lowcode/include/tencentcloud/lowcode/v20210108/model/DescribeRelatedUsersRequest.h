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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_DESCRIBERELATEDUSERSREQUEST_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_DESCRIBERELATEDUSERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lowcode
    {
        namespace V20210108
        {
            namespace Model
            {
                /**
                * DescribeRelatedUsers请求参数结构体
                */
                class DescribeRelatedUsersRequest : public AbstractModel
                {
                public:
                    DescribeRelatedUsersRequest();
                    ~DescribeRelatedUsersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取角色id
                     * @return RoleId 角色id
                     * 
                     */
                    int64_t GetRoleId() const;

                    /**
                     * 设置角色id
                     * @param _roleId 角色id
                     * 
                     */
                    void SetRoleId(const int64_t& _roleId);

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     * 
                     */
                    bool RoleIdHasBeenSet() const;

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
                     * 获取页码
                     * @return PageNo 页码
                     * 
                     */
                    int64_t GetPageNo() const;

                    /**
                     * 设置页码
                     * @param _pageNo 页码
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
                     * 获取页面含量
                     * @return PageSize 页面含量
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置页面含量
                     * @param _pageSize 页面含量
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
                     * 获取环境类型
                     * @return EnvType 环境类型
                     * 
                     */
                    std::string GetEnvType() const;

                    /**
                     * 设置环境类型
                     * @param _envType 环境类型
                     * 
                     */
                    void SetEnvType(const std::string& _envType);

                    /**
                     * 判断参数 EnvType 是否已赋值
                     * @return EnvType 是否已赋值
                     * 
                     */
                    bool EnvTypeHasBeenSet() const;

                    /**
                     * 获取新角色id
                     * @return RoleStringId 新角色id
                     * 
                     */
                    std::string GetRoleStringId() const;

                    /**
                     * 设置新角色id
                     * @param _roleStringId 新角色id
                     * 
                     */
                    void SetRoleStringId(const std::string& _roleStringId);

                    /**
                     * 判断参数 RoleStringId 是否已赋值
                     * @return RoleStringId 是否已赋值
                     * 
                     */
                    bool RoleStringIdHasBeenSet() const;

                private:

                    /**
                     * 角色id
                     */
                    int64_t m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * 环境id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 页码
                     */
                    int64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * 页面含量
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 环境类型
                     */
                    std::string m_envType;
                    bool m_envTypeHasBeenSet;

                    /**
                     * 新角色id
                     */
                    std::string m_roleStringId;
                    bool m_roleStringIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_DESCRIBERELATEDUSERSREQUEST_H_
