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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBENUMBERSREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBENUMBERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeNumbers请求参数结构体
                */
                class DescribeNumbersRequest : public AbstractModel
                {
                public:
                    DescribeNumbersRequest();
                    ~DescribeNumbersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc</p>
                     * @return SdkAppId <p>应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc</p>
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置<p>应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc</p>
                     * @param _sdkAppId <p>应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc</p>
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
                     * 获取<p>页数，从0开始</p>
                     * @return PageNumber <p>页数，从0开始</p>
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置<p>页数，从0开始</p>
                     * @param _pageNumber <p>页数，从0开始</p>
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
                     * 获取<p>分页大小，默认20</p>
                     * @return PageSize <p>分页大小，默认20</p>
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置<p>分页大小，默认20</p>
                     * @param _pageSize <p>分页大小，默认20</p>
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * <p>应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc</p>
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * <p>页数，从0开始</p>
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>分页大小，默认20</p>
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBENUMBERSREQUEST_H_
