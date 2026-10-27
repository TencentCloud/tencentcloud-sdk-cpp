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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBESECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBESECURITYGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * DescribeSecurityGroups请求参数结构体
                */
                class DescribeSecurityGroupsRequest : public AbstractModel
                {
                public:
                    DescribeSecurityGroupsRequest();
                    ~DescribeSecurityGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>页号，从1开始</p>
                     * @return PageNumber <p>页号，从1开始</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>页号，从1开始</p>
                     * @param _pageNumber <p>页号，从1开始</p>
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
                     * 获取<p>每页最大展示数量，默认20，最大100</p>
                     * @return PageSize <p>每页最大展示数量，默认20，最大100</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>每页最大展示数量，默认20，最大100</p>
                     * @param _pageSize <p>每页最大展示数量，默认20，最大100</p>
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
                     * 获取<p>地域</p>
                     * @return SecurityGroupRegion <p>地域</p>
                     * 
                     */
                    std::string GetSecurityGroupRegion() const;

                    /**
                     * 设置<p>地域</p>
                     * @param _securityGroupRegion <p>地域</p>
                     * 
                     */
                    void SetSecurityGroupRegion(const std::string& _securityGroupRegion);

                    /**
                     * 判断参数 SecurityGroupRegion 是否已赋值
                     * @return SecurityGroupRegion 是否已赋值
                     * 
                     */
                    bool SecurityGroupRegionHasBeenSet() const;

                private:

                    /**
                     * <p>页号，从1开始</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>每页最大展示数量，默认20，最大100</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>地域</p>
                     */
                    std::string m_securityGroupRegion;
                    bool m_securityGroupRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBESECURITYGROUPSREQUEST_H_
