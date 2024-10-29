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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEACTIVECARRIERPRIVILEGENUMBERREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEACTIVECARRIERPRIVILEGENUMBERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/Filter.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeActiveCarrierPrivilegeNumber请求参数结构体
                */
                class DescribeActiveCarrierPrivilegeNumberRequest : public AbstractModel
                {
                public:
                    DescribeActiveCarrierPrivilegeNumberRequest();
                    ~DescribeActiveCarrierPrivilegeNumberRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @return SdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @param _sdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取默认0
                     * @return PageNumber 默认0
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置默认0
                     * @param _pageNumber 默认0
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
                     * 获取默认10，最大100
                     * @return PageSize 默认10，最大100
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置默认10，最大100
                     * @param _pageSize 默认10，最大100
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
                     * 获取筛选条件 Name支持PhoneNumber(按号码模糊查找)
                     * @return Filters 筛选条件 Name支持PhoneNumber(按号码模糊查找)
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置筛选条件 Name支持PhoneNumber(按号码模糊查找)
                     * @param _filters 筛选条件 Name支持PhoneNumber(按号码模糊查找)
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
                     * 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 默认0
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 默认10，最大100
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 筛选条件 Name支持PhoneNumber(按号码模糊查找)
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEACTIVECARRIERPRIVILEGENUMBERREQUEST_H_
