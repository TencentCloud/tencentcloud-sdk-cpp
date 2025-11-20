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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEACCOUNTGROUPSREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEACCOUNTGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeAccountGroups请求参数结构体
                */
                class DescribeAccountGroupsRequest : public AbstractModel
                {
                public:
                    DescribeAccountGroupsRequest();
                    ~DescribeAccountGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否递归查询，0为不递归，1为递归
                     * @return DeepIn 是否递归查询，0为不递归，1为递归
                     * 
                     */
                    int64_t GetDeepIn() const;

                    /**
                     * 设置是否递归查询，0为不递归，1为递归
                     * @param _deepIn 是否递归查询，0为不递归，1为递归
                     * 
                     */
                    void SetDeepIn(const int64_t& _deepIn);

                    /**
                     * 判断参数 DeepIn 是否已赋值
                     * @return DeepIn 是否已赋值
                     * 
                     */
                    bool DeepInHasBeenSet() const;

                    /**
                     * 获取父账号组ID, 默认0,查询根账号组下所有分组 
                     * @return ParentId 父账号组ID, 默认0,查询根账号组下所有分组 
                     * 
                     */
                    int64_t GetParentId() const;

                    /**
                     * 设置父账号组ID, 默认0,查询根账号组下所有分组 
                     * @param _parentId 父账号组ID, 默认0,查询根账号组下所有分组 
                     * 
                     */
                    void SetParentId(const int64_t& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                    /**
                     * 获取账号组名称，模糊查询
                     * @return GroupName 账号组名称，模糊查询
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置账号组名称，模糊查询
                     * @param _groupName 账号组名称，模糊查询
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
                     * 获取分页查询，每页条数
                     * @return PageSize 分页查询，每页条数
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置分页查询，每页条数
                     * @param _pageSize 分页查询，每页条数
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
                     * 获取获取第几页的数据
                     * @return PageNum 获取第几页的数据
                     * 
                     */
                    int64_t GetPageNum() const;

                    /**
                     * 设置获取第几页的数据
                     * @param _pageNum 获取第几页的数据
                     * 
                     */
                    void SetPageNum(const int64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                private:

                    /**
                     * 是否递归查询，0为不递归，1为递归
                     */
                    int64_t m_deepIn;
                    bool m_deepInHasBeenSet;

                    /**
                     * 父账号组ID, 默认0,查询根账号组下所有分组 
                     */
                    int64_t m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * 账号组名称，模糊查询
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 分页查询，每页条数
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 获取第几页的数据
                     */
                    int64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEACCOUNTGROUPSREQUEST_H_
