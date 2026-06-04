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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBERELEASELISTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBERELEASELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeReleaseList请求参数结构体
                */
                class DescribeReleaseListRequest : public AbstractModel
                {
                public:
                    DescribeReleaseListRequest();
                    ~DescribeReleaseListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return AppId 应用ID
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置应用ID
                     * @param _appId 应用ID
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取页码(从0开始)
                     * @return PageNumber 页码(从0开始)
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页码(从0开始)
                     * @param _pageNumber 页码(从0开始)
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
                     * 获取每页数量(最大值:100)
                     * @return PageSize 每页数量(最大值:100)
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页数量(最大值:100)
                     * @param _pageSize 每页数量(最大值:100)
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
                     * 应用ID
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 页码(从0开始)
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页数量(最大值:100)
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBERELEASELISTREQUEST_H_
