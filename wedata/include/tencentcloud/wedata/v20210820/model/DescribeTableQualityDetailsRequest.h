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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLEQUALITYDETAILSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLEQUALITYDETAILSREQUEST_H_

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
                * DescribeTableQualityDetails请求参数结构体
                */
                class DescribeTableQualityDetailsRequest : public AbstractModel
                {
                public:
                    DescribeTableQualityDetailsRequest();
                    ~DescribeTableQualityDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取统计日期
                     * @return StatisticsDate 统计日期
                     * 
                     */
                    int64_t GetStatisticsDate() const;

                    /**
                     * 设置统计日期
                     * @param _statisticsDate 统计日期
                     * 
                     */
                    void SetStatisticsDate(const int64_t& _statisticsDate);

                    /**
                     * 判断参数 StatisticsDate 是否已赋值
                     * @return StatisticsDate 是否已赋值
                     * 
                     */
                    bool StatisticsDateHasBeenSet() const;

                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
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
                     * 获取分页序号
                     * @return PageNumber 分页序号
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置分页序号
                     * @param _pageNumber 分页序号
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
                     * 获取过滤参数TableName、DatabaseId 、DatabaseName、OwnerUserName
                     * @return Filters 过滤参数TableName、DatabaseId 、DatabaseName、OwnerUserName
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤参数TableName、DatabaseId 、DatabaseName、OwnerUserName
                     * @param _filters 过滤参数TableName、DatabaseId 、DatabaseName、OwnerUserName
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
                     * 获取排序参数 排序方式 DESC 或者 ASC，表得分排序 TableScore
                     * @return OrderFields 排序参数 排序方式 DESC 或者 ASC，表得分排序 TableScore
                     * 
                     */
                    std::vector<OrderField> GetOrderFields() const;

                    /**
                     * 设置排序参数 排序方式 DESC 或者 ASC，表得分排序 TableScore
                     * @param _orderFields 排序参数 排序方式 DESC 或者 ASC，表得分排序 TableScore
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
                     * 获取数据来源id
                     * @return DatasourceId 数据来源id
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置数据来源id
                     * @param _datasourceId 数据来源id
                     * 
                     */
                    void SetDatasourceId(const std::string& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取1:按全维度权重计算,2:按已配置维度权重计算,3:不按维度权重计算,默认1
                     * @return ScoreType 1:按全维度权重计算,2:按已配置维度权重计算,3:不按维度权重计算,默认1
                     * 
                     */
                    std::string GetScoreType() const;

                    /**
                     * 设置1:按全维度权重计算,2:按已配置维度权重计算,3:不按维度权重计算,默认1
                     * @param _scoreType 1:按全维度权重计算,2:按已配置维度权重计算,3:不按维度权重计算,默认1
                     * 
                     */
                    void SetScoreType(const std::string& _scoreType);

                    /**
                     * 判断参数 ScoreType 是否已赋值
                     * @return ScoreType 是否已赋值
                     * 
                     */
                    bool ScoreTypeHasBeenSet() const;

                private:

                    /**
                     * 统计日期
                     */
                    int64_t m_statisticsDate;
                    bool m_statisticsDateHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 分页序号
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 分页大小
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 过滤参数TableName、DatabaseId 、DatabaseName、OwnerUserName
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序参数 排序方式 DESC 或者 ASC，表得分排序 TableScore
                     */
                    std::vector<OrderField> m_orderFields;
                    bool m_orderFieldsHasBeenSet;

                    /**
                     * 数据来源id
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 1:按全维度权重计算,2:按已配置维度权重计算,3:不按维度权重计算,默认1
                     */
                    std::string m_scoreType;
                    bool m_scoreTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLEQUALITYDETAILSREQUEST_H_
