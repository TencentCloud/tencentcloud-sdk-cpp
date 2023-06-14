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

#ifndef TENCENTCLOUD_SMH_V20210712_MODEL_DESCRIBEOFFICIALINSTANCESREQUEST_H_
#define TENCENTCLOUD_SMH_V20210712_MODEL_DESCRIBEOFFICIALINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Smh
    {
        namespace V20210712
        {
            namespace Model
            {
                /**
                * DescribeOfficialInstances请求参数结构体
                */
                class DescribeOfficialInstancesRequest : public AbstractModel
                {
                public:
                    DescribeOfficialInstancesRequest();
                    ~DescribeOfficialInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否查询实例绑定的超级管理员账号，默认值为 false。
                     * @return SuperAdminAccount 是否查询实例绑定的超级管理员账号，默认值为 false。
                     * 
                     */
                    bool GetSuperAdminAccount() const;

                    /**
                     * 设置是否查询实例绑定的超级管理员账号，默认值为 false。
                     * @param _superAdminAccount 是否查询实例绑定的超级管理员账号，默认值为 false。
                     * 
                     */
                    void SetSuperAdminAccount(const bool& _superAdminAccount);

                    /**
                     * 判断参数 SuperAdminAccount 是否已赋值
                     * @return SuperAdminAccount 是否已赋值
                     * 
                     */
                    bool SuperAdminAccountHasBeenSet() const;

                    /**
                     * 获取按照一个或者多个实例 ID 查询，每次请求的上限为 100 个。
                     * @return InstanceIds 按照一个或者多个实例 ID 查询，每次请求的上限为 100 个。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置按照一个或者多个实例 ID 查询，每次请求的上限为 100 个。
                     * @param _instanceIds 按照一个或者多个实例 ID 查询，每次请求的上限为 100 个。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取页码，整型，配合 PageSize 使用，默认值为 1。
                     * @return PageNumber 页码，整型，配合 PageSize 使用，默认值为 1。
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页码，整型，配合 PageSize 使用，默认值为 1。
                     * @param _pageNumber 页码，整型，配合 PageSize 使用，默认值为 1。
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取每页数目，整型，配合 PageNumber 使用，默认值为 20，最大值为 100。
                     * @return PageSize 每页数目，整型，配合 PageNumber 使用，默认值为 20，最大值为 100。
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页数目，整型，配合 PageNumber 使用，默认值为 20，最大值为 100。
                     * @param _pageSize 每页数目，整型，配合 PageNumber 使用，默认值为 20，最大值为 100。
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取对指定列进行排序
                     * @return OrderBy 对指定列进行排序
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置对指定列进行排序
                     * @param _orderBy 对指定列进行排序
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取排序方式
                     * @return OrderByType 排序方式
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置排序方式
                     * @param _orderByType 排序方式
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取续费管理筛选类型
                     * @return AutoRenew 续费管理筛选类型
                     * 
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置续费管理筛选类型
                     * @param _autoRenew 续费管理筛选类型
                     * 
                     */
                    void SetAutoRenew(const uint64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取超级管理管理员账号是否绑定了手机号
                     * @return BindPhone 超级管理管理员账号是否绑定了手机号
                     * 
                     */
                    bool GetBindPhone() const;

                    /**
                     * 设置超级管理管理员账号是否绑定了手机号
                     * @param _bindPhone 超级管理管理员账号是否绑定了手机号
                     * 
                     */
                    void SetBindPhone(const bool& _bindPhone);

                    /**
                     * 判断参数 BindPhone 是否已赋值
                     * @return BindPhone 是否已赋值
                     * 
                     */
                    bool BindPhoneHasBeenSet() const;

                private:

                    /**
                     * 是否查询实例绑定的超级管理员账号，默认值为 false。
                     */
                    bool m_superAdminAccount;
                    bool m_superAdminAccountHasBeenSet;

                    /**
                     * 按照一个或者多个实例 ID 查询，每次请求的上限为 100 个。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 页码，整型，配合 PageSize 使用，默认值为 1。
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页数目，整型，配合 PageNumber 使用，默认值为 20，最大值为 100。
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 对指定列进行排序
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序方式
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * 续费管理筛选类型
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * 超级管理管理员账号是否绑定了手机号
                     */
                    bool m_bindPhone;
                    bool m_bindPhoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMH_V20210712_MODEL_DESCRIBEOFFICIALINSTANCESREQUEST_H_
