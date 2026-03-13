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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATAASSETSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATAASSETSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/Filter.h>
#include <tencentcloud/wedata/v20210820/model/OrderField.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeDataAssets请求参数结构体
                */
                class DescribeDataAssetsRequest : public AbstractModel
                {
                public:
                    DescribeDataAssetsRequest();
                    ~DescribeDataAssetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取请求来源，WEB 前端；CLIENT 客户端
                     * @return RequestFromSource 请求来源，WEB 前端；CLIENT 客户端
                     * 
                     */
                    std::string GetRequestFromSource() const;

                    /**
                     * 设置请求来源，WEB 前端；CLIENT 客户端
                     * @param _requestFromSource 请求来源，WEB 前端；CLIENT 客户端
                     * 
                     */
                    void SetRequestFromSource(const std::string& _requestFromSource);

                    /**
                     * 判断参数 RequestFromSource 是否已赋值
                     * @return RequestFromSource 是否已赋值
                     * 
                     */
                    bool RequestFromSourceHasBeenSet() const;

                    /**
                     * 获取过滤字段名称
Name 取值如下
      keyword 搜索关键字
      bizCatalogIds 表示目录分类取值
      DataAssetType 数据资产类型枚举取值：ALL-全部类型、TABLE-数据表
      DatasourceType 数据源类型
      datasourceIds 数据源ID列表
      DatabaseName 数据库名称
      InCharge 负责人
      ProjectId 项目ID
      Label 标签
      ProjectId 数据资产归属的项目ID
      AssetLevel 等级 取值：ALL-全部，40-核心，30-重要，20-一般，10-临时
      OwnerMe 我负责的
      PermissionMe 我有权限的
      MyFavorite 我收藏的
                     * @return Filters 过滤字段名称
Name 取值如下
      keyword 搜索关键字
      bizCatalogIds 表示目录分类取值
      DataAssetType 数据资产类型枚举取值：ALL-全部类型、TABLE-数据表
      DatasourceType 数据源类型
      datasourceIds 数据源ID列表
      DatabaseName 数据库名称
      InCharge 负责人
      ProjectId 项目ID
      Label 标签
      ProjectId 数据资产归属的项目ID
      AssetLevel 等级 取值：ALL-全部，40-核心，30-重要，20-一般，10-临时
      OwnerMe 我负责的
      PermissionMe 我有权限的
      MyFavorite 我收藏的
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤字段名称
Name 取值如下
      keyword 搜索关键字
      bizCatalogIds 表示目录分类取值
      DataAssetType 数据资产类型枚举取值：ALL-全部类型、TABLE-数据表
      DatasourceType 数据源类型
      datasourceIds 数据源ID列表
      DatabaseName 数据库名称
      InCharge 负责人
      ProjectId 项目ID
      Label 标签
      ProjectId 数据资产归属的项目ID
      AssetLevel 等级 取值：ALL-全部，40-核心，30-重要，20-一般，10-临时
      OwnerMe 我负责的
      PermissionMe 我有权限的
      MyFavorite 我收藏的
                     * @param _filters 过滤字段名称
Name 取值如下
      keyword 搜索关键字
      bizCatalogIds 表示目录分类取值
      DataAssetType 数据资产类型枚举取值：ALL-全部类型、TABLE-数据表
      DatasourceType 数据源类型
      datasourceIds 数据源ID列表
      DatabaseName 数据库名称
      InCharge 负责人
      ProjectId 项目ID
      Label 标签
      ProjectId 数据资产归属的项目ID
      AssetLevel 等级 取值：ALL-全部，40-核心，30-重要，20-一般，10-临时
      OwnerMe 我负责的
      PermissionMe 我有权限的
      MyFavorite 我收藏的
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取排序字段列表
取值：
     Name： Table-按表名，LikeCount-按热度
     Direction： ASC, DESC
                     * @return OrderFields 排序字段列表
取值：
     Name： Table-按表名，LikeCount-按热度
     Direction： ASC, DESC
                     * 
                     */
                    std::vector<OrderField> GetOrderFields() const;

                    /**
                     * 设置排序字段列表
取值：
     Name： Table-按表名，LikeCount-按热度
     Direction： ASC, DESC
                     * @param _orderFields 排序字段列表
取值：
     Name： Table-按表名，LikeCount-按热度
     Direction： ASC, DESC
                     * 
                     */
                    void SetOrderFields(const std::vector<OrderField>& _orderFields);

                    /**
                     * 判断参数 OrderFields 是否已赋值
                     * @return OrderFields 是否已赋值
                     * 
                     */
                    bool OrderFieldsHasBeenSet() const;

                    /**
                     * 获取页码，配合pageSize使用
                     * @return PageNumber 页码，配合pageSize使用
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置页码，配合pageSize使用
                     * @param _pageNumber 页码，配合pageSize使用
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
                     * 获取每页数目，配合pageNumber使用
                     * @return PageSize 每页数目，配合pageNumber使用
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页数目，配合pageNumber使用
                     * @param _pageSize 每页数目，配合pageNumber使用
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
                     * 请求来源，WEB 前端；CLIENT 客户端
                     */
                    std::string m_requestFromSource;
                    bool m_requestFromSourceHasBeenSet;

                    /**
                     * 过滤字段名称
Name 取值如下
      keyword 搜索关键字
      bizCatalogIds 表示目录分类取值
      DataAssetType 数据资产类型枚举取值：ALL-全部类型、TABLE-数据表
      DatasourceType 数据源类型
      datasourceIds 数据源ID列表
      DatabaseName 数据库名称
      InCharge 负责人
      ProjectId 项目ID
      Label 标签
      ProjectId 数据资产归属的项目ID
      AssetLevel 等级 取值：ALL-全部，40-核心，30-重要，20-一般，10-临时
      OwnerMe 我负责的
      PermissionMe 我有权限的
      MyFavorite 我收藏的
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序字段列表
取值：
     Name： Table-按表名，LikeCount-按热度
     Direction： ASC, DESC
                     */
                    std::vector<OrderField> m_orderFields;
                    bool m_orderFieldsHasBeenSet;

                    /**
                     * 页码，配合pageSize使用
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页数目，配合pageNumber使用
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATAASSETSREQUEST_H_
