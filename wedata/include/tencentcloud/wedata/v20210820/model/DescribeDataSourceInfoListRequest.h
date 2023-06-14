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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATASOURCEINFOLISTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATASOURCEINFOLISTREQUEST_H_

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
                * DescribeDataSourceInfoList请求参数结构体
                */
                class DescribeDataSourceInfoListRequest : public AbstractModel
                {
                public:
                    DescribeDataSourceInfoListRequest();
                    ~DescribeDataSourceInfoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取工作空间id
                     * @return ProjectId 工作空间id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置工作空间id
                     * @param _projectId 工作空间id
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
                     * 获取页码
                     * @return PageNumber 页码
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页码
                     * @param _pageNumber 页码
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
                     * 获取页数
                     * @return PageSize 页数
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置页数
                     * @param _pageSize 页数
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
                     * 获取可选过滤条件，Filter可选配置(参考): "Name": { "type": "string", "description": "数据源名称" }, "Type": { "type": "string", "description": "类型" }, "ClusterId": { "type": "string", "description": "集群id" }, "CategoryId": { "type": "string", "description": "分类，项目或空间id" }
                     * @return Filters 可选过滤条件，Filter可选配置(参考): "Name": { "type": "string", "description": "数据源名称" }, "Type": { "type": "string", "description": "类型" }, "ClusterId": { "type": "string", "description": "集群id" }, "CategoryId": { "type": "string", "description": "分类，项目或空间id" }
                     * 
                     */
                    Filter GetFilters() const;

                    /**
                     * 设置可选过滤条件，Filter可选配置(参考): "Name": { "type": "string", "description": "数据源名称" }, "Type": { "type": "string", "description": "类型" }, "ClusterId": { "type": "string", "description": "集群id" }, "CategoryId": { "type": "string", "description": "分类，项目或空间id" }
                     * @param _filters 可选过滤条件，Filter可选配置(参考): "Name": { "type": "string", "description": "数据源名称" }, "Type": { "type": "string", "description": "类型" }, "ClusterId": { "type": "string", "description": "集群id" }, "CategoryId": { "type": "string", "description": "分类，项目或空间id" }
                     * 
                     */
                    void SetFilters(const Filter& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取排序配置
                     * @return OrderFields 排序配置
                     * 
                     */
                    OrderField GetOrderFields() const;

                    /**
                     * 设置排序配置
                     * @param _orderFields 排序配置
                     * 
                     */
                    void SetOrderFields(const OrderField& _orderFields);

                    /**
                     * 判断参数 OrderFields 是否已赋值
                     * @return OrderFields 是否已赋值
                     * 
                     */
                    bool OrderFieldsHasBeenSet() const;

                    /**
                     * 获取数据源类型
                     * @return Type 数据源类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置数据源类型
                     * @param _type 数据源类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取数据源名称过滤用
                     * @return DatasourceName 数据源名称过滤用
                     * 
                     */
                    std::string GetDatasourceName() const;

                    /**
                     * 设置数据源名称过滤用
                     * @param _datasourceName 数据源名称过滤用
                     * 
                     */
                    void SetDatasourceName(const std::string& _datasourceName);

                    /**
                     * 判断参数 DatasourceName 是否已赋值
                     * @return DatasourceName 是否已赋值
                     * 
                     */
                    bool DatasourceNameHasBeenSet() const;

                private:

                    /**
                     * 工作空间id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 页码
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 页数
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 可选过滤条件，Filter可选配置(参考): "Name": { "type": "string", "description": "数据源名称" }, "Type": { "type": "string", "description": "类型" }, "ClusterId": { "type": "string", "description": "集群id" }, "CategoryId": { "type": "string", "description": "分类，项目或空间id" }
                     */
                    Filter m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序配置
                     */
                    OrderField m_orderFields;
                    bool m_orderFieldsHasBeenSet;

                    /**
                     * 数据源类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 数据源名称过滤用
                     */
                    std::string m_datasourceName;
                    bool m_datasourceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATASOURCEINFOLISTREQUEST_H_
