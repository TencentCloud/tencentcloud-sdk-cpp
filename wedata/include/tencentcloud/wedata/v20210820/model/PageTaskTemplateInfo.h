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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_PAGETASKTEMPLATEINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_PAGETASKTEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/CodeTemplateDetail.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 任务模版分页
                */
                class PageTaskTemplateInfo : public AbstractModel
                {
                public:
                    PageTaskTemplateInfo();
                    ~PageTaskTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务集合信息
                     * @return Items 任务集合信息
                     * 
                     */
                    std::vector<CodeTemplateDetail> GetItems() const;

                    /**
                     * 设置任务集合信息
                     * @param _items 任务集合信息
                     * 
                     */
                    void SetItems(const std::vector<CodeTemplateDetail>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取总页数
                     * @return PageCount 总页数
                     * 
                     */
                    uint64_t GetPageCount() const;

                    /**
                     * 设置总页数
                     * @param _pageCount 总页数
                     * 
                     */
                    void SetPageCount(const uint64_t& _pageCount);

                    /**
                     * 判断参数 PageCount 是否已赋值
                     * @return PageCount 是否已赋值
                     * 
                     */
                    bool PageCountHasBeenSet() const;

                    /**
                     * 获取总数量
                     * @return TotalCount 总数量
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置总数量
                     * @param _totalCount 总数量
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

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
                     * 获取每页显示数
                     * @return PageSize 每页显示数
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页显示数
                     * @param _pageSize 每页显示数
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
                     * 任务集合信息
                     */
                    std::vector<CodeTemplateDetail> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 总页数
                     */
                    uint64_t m_pageCount;
                    bool m_pageCountHasBeenSet;

                    /**
                     * 总数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 当前页
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页显示数
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_PAGETASKTEMPLATEINFO_H_
