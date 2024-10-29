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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATASERVICEPUBLISHEDAPILISTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATASERVICEPUBLISHEDAPILISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/DataServicePublishedApiListFilter.h>
#include <tencentcloud/wedata/v20210820/model/DataServiceRequestListOrder.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeDataServicePublishedApiList请求参数结构体
                */
                class DescribeDataServicePublishedApiListRequest : public AbstractModel
                {
                public:
                    DescribeDataServicePublishedApiListRequest();
                    ~DescribeDataServicePublishedApiListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取页码
                     * @return PageNumber 页码
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页码
                     * @param _pageNumber 页码
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
                     * 获取每页大小
                     * @return PageSize 每页大小
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页大小
                     * @param _pageSize 每页大小
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
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取查询参数
                     * @return Filters 查询参数
                     * 
                     */
                    DataServicePublishedApiListFilter GetFilters() const;

                    /**
                     * 设置查询参数
                     * @param _filters 查询参数
                     * 
                     */
                    void SetFilters(const DataServicePublishedApiListFilter& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取排序配置
                     * @return OrderFields 排序配置
                     * 
                     */
                    std::vector<DataServiceRequestListOrder> GetOrderFields() const;

                    /**
                     * 设置排序配置
                     * @param _orderFields 排序配置
                     * 
                     */
                    void SetOrderFields(const std::vector<DataServiceRequestListOrder>& _orderFields);

                    /**
                     * 判断参数 OrderFields 是否已赋值
                     * @return OrderFields 是否已赋值
                     * 
                     */
                    bool OrderFieldsHasBeenSet() const;

                private:

                    /**
                     * 页码
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页大小
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 查询参数
                     */
                    DataServicePublishedApiListFilter m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序配置
                     */
                    std::vector<DataServiceRequestListOrder> m_orderFields;
                    bool m_orderFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATASERVICEPUBLISHEDAPILISTREQUEST_H_
