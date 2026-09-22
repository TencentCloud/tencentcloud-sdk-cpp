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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBECONNECTORLISTREQUEST_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBECONNECTORLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/Filter.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * DescribeConnectorList请求参数结构体
                */
                class DescribeConnectorListRequest : public AbstractModel
                {
                public:
                    DescribeConnectorListRequest();
                    ~DescribeConnectorListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件数组，多个 Filter 之间为 AND 关系。支持 Name：Name（名称模糊匹配）/ Status（ACTIVE / DISABLED）/ Source（ENTERPRISE_AGENT / ASSISTANT）
                     * @return Filters 过滤条件数组，多个 Filter 之间为 AND 关系。支持 Name：Name（名称模糊匹配）/ Status（ACTIVE / DISABLED）/ Source（ENTERPRISE_AGENT / ASSISTANT）
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件数组，多个 Filter 之间为 AND 关系。支持 Name：Name（名称模糊匹配）/ Status（ACTIVE / DISABLED）/ Source（ENTERPRISE_AGENT / ASSISTANT）
                     * @param _filters 过滤条件数组，多个 Filter 之间为 AND 关系。支持 Name：Name（名称模糊匹配）/ Status（ACTIVE / DISABLED）/ Source（ENTERPRISE_AGENT / ASSISTANT）
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
                     * 获取已废弃：服务端不再读取，请使用 Offset/Limit。字段保留仅为过渡兼容，后续下线
                     * @return PageNumber 已废弃：服务端不再读取，请使用 Offset/Limit。字段保留仅为过渡兼容，后续下线
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置已废弃：服务端不再读取，请使用 Offset/Limit。字段保留仅为过渡兼容，后续下线
                     * @param _pageNumber 已废弃：服务端不再读取，请使用 Offset/Limit。字段保留仅为过渡兼容，后续下线
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取已废弃：服务端不再读取，请使用 Offset/Limit。字段保留仅为过渡兼容，后续下线
                     * @return PageSize 已废弃：服务端不再读取，请使用 Offset/Limit。字段保留仅为过渡兼容，后续下线
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置已废弃：服务端不再读取，请使用 Offset/Limit。字段保留仅为过渡兼容，后续下线
                     * @param _pageSize 已废弃：服务端不再读取，请使用 Offset/Limit。字段保留仅为过渡兼容，后续下线
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
                     * 获取偏移量，0 基准，缺省 0（标准 CAPI 分页参数）
                     * @return Offset 偏移量，0 基准，缺省 0（标准 CAPI 分页参数）
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，0 基准，缺省 0（标准 CAPI 分页参数）
                     * @param _offset 偏移量，0 基准，缺省 0（标准 CAPI 分页参数）
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取每页数量，取值 1-100，缺省 20（标准 CAPI 分页参数）
                     * @return Limit 每页数量，取值 1-100，缺省 20（标准 CAPI 分页参数）
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页数量，取值 1-100，缺省 20（标准 CAPI 分页参数）
                     * @param _limit 每页数量，取值 1-100，缺省 20（标准 CAPI 分页参数）
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 过滤条件数组，多个 Filter 之间为 AND 关系。支持 Name：Name（名称模糊匹配）/ Status（ACTIVE / DISABLED）/ Source（ENTERPRISE_AGENT / ASSISTANT）
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 已废弃：服务端不再读取，请使用 Offset/Limit。字段保留仅为过渡兼容，后续下线
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 已废弃：服务端不再读取，请使用 Offset/Limit。字段保留仅为过渡兼容，后续下线
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 偏移量，0 基准，缺省 0（标准 CAPI 分页参数）
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页数量，取值 1-100，缺省 20（标准 CAPI 分页参数）
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBECONNECTORLISTREQUEST_H_
