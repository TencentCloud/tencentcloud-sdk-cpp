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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTPROCESSLINEAGEPAGE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTPROCESSLINEAGEPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/LineagePair.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * ListLineagePage
                */
                class ListProcessLineagePage : public AbstractModel
                {
                public:
                    ListProcessLineagePage();
                    ~ListProcessLineagePage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取血缘pair列表
                     * @return Items 血缘pair列表
                     * 
                     */
                    std::vector<LineagePair> GetItems() const;

                    /**
                     * 设置血缘pair列表
                     * @param _items 血缘pair列表
                     * 
                     */
                    void SetItems(const std::vector<LineagePair>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取分页总页数
                     * @return PageCount 分页总页数
                     * 
                     */
                    int64_t GetPageCount() const;

                    /**
                     * 设置分页总页数
                     * @param _pageCount 分页总页数
                     * 
                     */
                    void SetPageCount(const int64_t& _pageCount);

                    /**
                     * 判断参数 PageCount 是否已赋值
                     * @return PageCount 是否已赋值
                     * 
                     */
                    bool PageCountHasBeenSet() const;

                    /**
                     * 获取分页大小
                     * @return PageSize 分页大小
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置分页大小
                     * @param _pageSize 分页大小
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
                     * 获取分页页码
                     * @return PageNumber 分页页码
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置分页页码
                     * @param _pageNumber 分页页码
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
                     * 获取记录总数
                     * @return TotalCount 记录总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置记录总数
                     * @param _totalCount 记录总数
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 血缘pair列表
                     */
                    std::vector<LineagePair> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 分页总页数
                     */
                    int64_t m_pageCount;
                    bool m_pageCountHasBeenSet;

                    /**
                     * 分页大小
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 分页页码
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 记录总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTPROCESSLINEAGEPAGE_H_
