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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTDATABASEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTDATABASEREQUEST_H_

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
                * ListDatabase请求参数结构体
                */
                class ListDatabaseRequest : public AbstractModel
                {
                public:
                    ListDatabaseRequest();
                    ~ListDatabaseRequest() = default;
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
                     * 获取目录名称
                     * @return CatalogName 目录名称
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置目录名称
                     * @param _catalogName 目录名称
                     * 
                     */
                    void SetCatalogName(const std::string& _catalogName);

                    /**
                     * 判断参数 CatalogName 是否已赋值
                     * @return CatalogName 是否已赋值
                     * 
                     */
                    bool CatalogNameHasBeenSet() const;

                    /**
                     * 获取数据源ID
                     * @return DatasourceId 数据源ID
                     * 
                     */
                    int64_t GetDatasourceId() const;

                    /**
                     * 设置数据源ID
                     * @param _datasourceId 数据源ID
                     * 
                     */
                    void SetDatasourceId(const int64_t& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取数据库名称搜索关键字
                     * @return Keyword 数据库名称搜索关键字
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置数据库名称搜索关键字
                     * @param _keyword 数据库名称搜索关键字
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

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
                     * 目录名称
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                    /**
                     * 数据源ID
                     */
                    int64_t m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 数据库名称搜索关键字
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTDATABASEREQUEST_H_
