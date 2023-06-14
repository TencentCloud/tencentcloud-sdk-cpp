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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_LISTFIRMWARESREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_LISTFIRMWARESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/SearchKeyword.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * ListFirmwares请求参数结构体
                */
                class ListFirmwaresRequest : public AbstractModel
                {
                public:
                    ListFirmwaresRequest();
                    ~ListFirmwaresRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取获取的页数
                     * @return PageNum 获取的页数
                     * 
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 设置获取的页数
                     * @param _pageNum 获取的页数
                     * 
                     */
                    void SetPageNum(const uint64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取分页的大小
                     * @return PageSize 分页的大小
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置分页的大小
                     * @param _pageSize 分页的大小
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
                     * 获取产品ID
                     * @return ProductID 产品ID
                     * 
                     */
                    std::string GetProductID() const;

                    /**
                     * 设置产品ID
                     * @param _productID 产品ID
                     * 
                     */
                    void SetProductID(const std::string& _productID);

                    /**
                     * 判断参数 ProductID 是否已赋值
                     * @return ProductID 是否已赋值
                     * 
                     */
                    bool ProductIDHasBeenSet() const;

                    /**
                     * 获取搜索过滤条件
                     * @return Filters 搜索过滤条件
                     * 
                     */
                    std::vector<SearchKeyword> GetFilters() const;

                    /**
                     * 设置搜索过滤条件
                     * @param _filters 搜索过滤条件
                     * 
                     */
                    void SetFilters(const std::vector<SearchKeyword>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 获取的页数
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * 分页的大小
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 产品ID
                     */
                    std::string m_productID;
                    bool m_productIDHasBeenSet;

                    /**
                     * 搜索过滤条件
                     */
                    std::vector<SearchKeyword> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_LISTFIRMWARESREQUEST_H_
