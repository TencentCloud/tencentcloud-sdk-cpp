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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERULETEMPLATESBYPAGEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERULETEMPLATESBYPAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/OrderField.h>
#include <tencentcloud/wedata/v20210820/model/Filter.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeRuleTemplatesByPage请求参数结构体
                */
                class DescribeRuleTemplatesByPageRequest : public AbstractModel
                {
                public:
                    DescribeRuleTemplatesByPageRequest();
                    ~DescribeRuleTemplatesByPageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取当前页
                     * @return PageNumber 当前页
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置当前页
                     * @param _pageNumber 当前页
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
                     * 获取每页记录数
                     * @return PageSize 每页记录数
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页记录数
                     * @param _pageSize 每页记录数
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
                     * 获取工作空间ID
                     * @return ProjectId 工作空间ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置工作空间ID
                     * @param _projectId 工作空间ID
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
                     * 获取通用排序字段
                     * @return OrderFields 通用排序字段
                     * 
                     */
                    std::vector<OrderField> GetOrderFields() const;

                    /**
                     * 设置通用排序字段
                     * @param _orderFields 通用排序字段
                     * 
                     */
                    void SetOrderFields(const std::vector<OrderField>& _orderFields);

                    /**
                     * 判断参数 OrderFields 是否已赋值
                     * @return OrderFields 是否已赋值
                     * 
                     */
                    bool OrderFieldsHasBeenSet() const;

                    /**
                     * 获取通用过滤条件
                     * @return Filters 通用过滤条件
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置通用过滤条件
                     * @param _filters 通用过滤条件
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 当前页
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页记录数
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 工作空间ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 通用排序字段
                     */
                    std::vector<OrderField> m_orderFields;
                    bool m_orderFieldsHasBeenSet;

                    /**
                     * 通用过滤条件
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERULETEMPLATESBYPAGEREQUEST_H_
