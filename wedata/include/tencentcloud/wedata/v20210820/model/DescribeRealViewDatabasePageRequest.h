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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEREALVIEWDATABASEPAGEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEREALVIEWDATABASEPAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeRealViewDatabasePage请求参数结构体
                */
                class DescribeRealViewDatabasePageRequest : public AbstractModel
                {
                public:
                    DescribeRealViewDatabasePageRequest();
                    ~DescribeRealViewDatabasePageRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param _projectId 项目Id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取排序字段类型：ASC/DESC
                     * @return Asc 排序字段类型：ASC/DESC
                     * 
                     */
                    bool GetAsc() const;

                    /**
                     * 设置排序字段类型：ASC/DESC
                     * @param _asc 排序字段类型：ASC/DESC
                     * 
                     */
                    void SetAsc(const bool& _asc);

                    /**
                     * 判断参数 Asc 是否已赋值
                     * @return Asc 是否已赋值
                     * 
                     */
                    bool AscHasBeenSet() const;

                    /**
                     * 获取指定数据源链接方式，如hive jdbc或者metastore client
                     * @return ConnectionType 指定数据源链接方式，如hive jdbc或者metastore client
                     * 
                     */
                    std::string GetConnectionType() const;

                    /**
                     * 设置指定数据源链接方式，如hive jdbc或者metastore client
                     * @param _connectionType 指定数据源链接方式，如hive jdbc或者metastore client
                     * 
                     */
                    void SetConnectionType(const std::string& _connectionType);

                    /**
                     * 判断参数 ConnectionType 是否已赋值
                     * @return ConnectionType 是否已赋值
                     * 
                     */
                    bool ConnectionTypeHasBeenSet() const;

                    /**
                     * 获取Keyword过滤
                     * @return Keyword Keyword过滤
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Keyword过滤
                     * @param _keyword Keyword过滤
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取【分页参数】页码
                     * @return PageNumber 【分页参数】页码
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置【分页参数】页码
                     * @param _pageNumber 【分页参数】页码
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
                     * 获取【分页参数】分页大小
                     * @return PageSize 【分页参数】分页大小
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置【分页参数】分页大小
                     * @param _pageSize 【分页参数】分页大小
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
                     * 获取资源组ID
                     * @return ResourceGroupId 资源组ID
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置资源组ID
                     * @param _resourceGroupId 资源组ID
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取资源组类型
                     * @return ResourceType 资源组类型
                     * 
                     */
                    int64_t GetResourceType() const;

                    /**
                     * 设置资源组类型
                     * @param _resourceType 资源组类型
                     * 
                     */
                    void SetResourceType(const int64_t& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取Sort
                     * @return Sort Sort
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置Sort
                     * @param _sort Sort
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取catalog名称
                     * @return CatalogName catalog名称
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置catalog名称
                     * @param _catalogName catalog名称
                     * 
                     */
                    void SetCatalogName(const std::string& _catalogName);

                    /**
                     * 判断参数 CatalogName 是否已赋值
                     * @return CatalogName 是否已赋值
                     * 
                     */
                    bool CatalogNameHasBeenSet() const;

                private:

                    /**
                     * 数据源ID
                     */
                    int64_t m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 排序字段类型：ASC/DESC
                     */
                    bool m_asc;
                    bool m_ascHasBeenSet;

                    /**
                     * 指定数据源链接方式，如hive jdbc或者metastore client
                     */
                    std::string m_connectionType;
                    bool m_connectionTypeHasBeenSet;

                    /**
                     * Keyword过滤
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 【分页参数】页码
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 【分页参数】分页大小
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 资源组ID
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * 资源组类型
                     */
                    int64_t m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Sort
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * catalog名称
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEREALVIEWDATABASEPAGEREQUEST_H_
