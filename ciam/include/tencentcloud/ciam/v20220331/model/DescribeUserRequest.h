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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_DESCRIBEUSERREQUEST_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_DESCRIBEUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ciam/v20220331/model/Pageable.h>
#include <tencentcloud/ciam/v20220331/model/QueryUserFilter.h>
#include <tencentcloud/ciam/v20220331/model/Sort.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * DescribeUser请求参数结构体
                */
                class DescribeUserRequest : public AbstractModel
                {
                public:
                    DescribeUserRequest();
                    ~DescribeUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户目录ID
                     * @return UserStoreId 用户目录ID
                     * 
                     */
                    std::string GetUserStoreId() const;

                    /**
                     * 设置用户目录ID
                     * @param _userStoreId 用户目录ID
                     * 
                     */
                    void SetUserStoreId(const std::string& _userStoreId);

                    /**
                     * 判断参数 UserStoreId 是否已赋值
                     * @return UserStoreId 是否已赋值
                     * 
                     */
                    bool UserStoreIdHasBeenSet() const;

                    /**
                     * 获取分页数据
                     * @return Pageable 分页数据
                     * 
                     */
                    Pageable GetPageable() const;

                    /**
                     * 设置分页数据
                     * @param _pageable 分页数据
                     * 
                     */
                    void SetPageable(const Pageable& _pageable);

                    /**
                     * 判断参数 Pageable 是否已赋值
                     * @return Pageable 是否已赋值
                     * 
                     */
                    bool PageableHasBeenSet() const;

                    /**
                     * 获取查询条件，根据propertycode和propertykey
                     * @return Filters 查询条件，根据propertycode和propertykey
                     * 
                     */
                    std::vector<QueryUserFilter> GetFilters() const;

                    /**
                     * 设置查询条件，根据propertycode和propertykey
                     * @param _filters 查询条件，根据propertycode和propertykey
                     * 
                     */
                    void SetFilters(const std::vector<QueryUserFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取是否返回明文
                     * @return Original 是否返回明文
                     * 
                     */
                    bool GetOriginal() const;

                    /**
                     * 设置是否返回明文
                     * @param _original 是否返回明文
                     * 
                     */
                    void SetOriginal(const bool& _original);

                    /**
                     * 判断参数 Original 是否已赋值
                     * @return Original 是否已赋值
                     * 
                     */
                    bool OriginalHasBeenSet() const;

                    /**
                     * 获取排序设置
                     * @return Sort 排序设置
                     * 
                     */
                    Sort GetSort() const;

                    /**
                     * 设置排序设置
                     * @param _sort 排序设置
                     * 
                     */
                    void SetSort(const Sort& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                private:

                    /**
                     * 用户目录ID
                     */
                    std::string m_userStoreId;
                    bool m_userStoreIdHasBeenSet;

                    /**
                     * 分页数据
                     */
                    Pageable m_pageable;
                    bool m_pageableHasBeenSet;

                    /**
                     * 查询条件，根据propertycode和propertykey
                     */
                    std::vector<QueryUserFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 是否返回明文
                     */
                    bool m_original;
                    bool m_originalHasBeenSet;

                    /**
                     * 排序设置
                     */
                    Sort m_sort;
                    bool m_sortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_DESCRIBEUSERREQUEST_H_
