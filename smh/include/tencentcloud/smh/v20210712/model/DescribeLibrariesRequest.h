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

#ifndef TENCENTCLOUD_SMH_V20210712_MODEL_DESCRIBELIBRARIESREQUEST_H_
#define TENCENTCLOUD_SMH_V20210712_MODEL_DESCRIBELIBRARIESREQUEST_H_

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
                * DescribeLibraries请求参数结构体
                */
                class DescribeLibrariesRequest : public AbstractModel
                {
                public:
                    DescribeLibrariesRequest();
                    ~DescribeLibrariesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取按照一个或者多个媒体库 ID 查询，每次请求的上限为 100 个。
                     * @return LibraryIds 按照一个或者多个媒体库 ID 查询，每次请求的上限为 100 个。
                     * 
                     */
                    std::vector<std::string> GetLibraryIds() const;

                    /**
                     * 设置按照一个或者多个媒体库 ID 查询，每次请求的上限为 100 个。
                     * @param _libraryIds 按照一个或者多个媒体库 ID 查询，每次请求的上限为 100 个。
                     * 
                     */
                    void SetLibraryIds(const std::vector<std::string>& _libraryIds);

                    /**
                     * 判断参数 LibraryIds 是否已赋值
                     * @return LibraryIds 是否已赋值
                     * 
                     */
                    bool LibraryIdsHasBeenSet() const;

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

                private:

                    /**
                     * 按照一个或者多个媒体库 ID 查询，每次请求的上限为 100 个。
                     */
                    std::vector<std::string> m_libraryIds;
                    bool m_libraryIdsHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMH_V20210712_MODEL_DESCRIBELIBRARIESREQUEST_H_
