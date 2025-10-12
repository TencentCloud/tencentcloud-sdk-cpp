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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTCATALOGREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTCATALOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * ListCatalog请求参数结构体
                */
                class ListCatalogRequest : public AbstractModel
                {
                public:
                    ListCatalogRequest();
                    ~ListCatalogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取页码，从1开始
                     * @return PageNumber 页码，从1开始
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置页码，从1开始
                     * @param _pageNumber 页码，从1开始
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
                     * 获取分页大小，最大500
                     * @return PageSize 分页大小，最大500
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置分页大小，最大500
                     * @param _pageSize 分页大小，最大500
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
                     * 获取父目录ID
                     * @return ParentCatalogId 父目录ID
                     * 
                     */
                    std::string GetParentCatalogId() const;

                    /**
                     * 设置父目录ID
                     * @param _parentCatalogId 父目录ID
                     * 
                     */
                    void SetParentCatalogId(const std::string& _parentCatalogId);

                    /**
                     * 判断参数 ParentCatalogId 是否已赋值
                     * @return ParentCatalogId 是否已赋值
                     * 
                     */
                    bool ParentCatalogIdHasBeenSet() const;

                private:

                    /**
                     * 页码，从1开始
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 分页大小，最大500
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 父目录ID
                     */
                    std::string m_parentCatalogId;
                    bool m_parentCatalogIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTCATALOGREQUEST_H_
