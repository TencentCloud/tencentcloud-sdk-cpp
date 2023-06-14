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

#ifndef TENCENTCLOUD_TOURISM_V20230215_MODEL_DESCRIBEDRAWRESOURCELISTREQUEST_H_
#define TENCENTCLOUD_TOURISM_V20230215_MODEL_DESCRIBEDRAWRESOURCELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tourism
    {
        namespace V20230215
        {
            namespace Model
            {
                /**
                * DescribeDrawResourceList请求参数结构体
                */
                class DescribeDrawResourceListRequest : public AbstractModel
                {
                public:
                    DescribeDrawResourceListRequest();
                    ~DescribeDrawResourceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取PageNumber
                     * @return PageNumber PageNumber
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置PageNumber
                     * @param _pageNumber PageNumber
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
                     * 获取PageSize
                     * @return PageSize PageSize
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置PageSize
                     * @param _pageSize PageSize
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * PageNumber
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * PageSize
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOURISM_V20230215_MODEL_DESCRIBEDRAWRESOURCELISTREQUEST_H_
