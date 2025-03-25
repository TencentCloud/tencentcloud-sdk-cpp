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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBESLOWQUERYRECORDSREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBESLOWQUERYRECORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeSlowQueryRecords请求参数结构体
                */
                class DescribeSlowQueryRecordsRequest : public AbstractModel
                {
                public:
                    DescribeSlowQueryRecordsRequest();
                    ~DescribeSlowQueryRecordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取慢查询时间
                     * @return QueryDurationMs 慢查询时间
                     * 
                     */
                    int64_t GetQueryDurationMs() const;

                    /**
                     * 设置慢查询时间
                     * @param _queryDurationMs 慢查询时间
                     * 
                     */
                    void SetQueryDurationMs(const int64_t& _queryDurationMs);

                    /**
                     * 判断参数 QueryDurationMs 是否已赋值
                     * @return QueryDurationMs 是否已赋值
                     * 
                     */
                    bool QueryDurationMsHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取分页
                     * @return PageSize 分页
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置分页
                     * @param _pageSize 分页
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
                     * 获取分页
                     * @return PageNum 分页
                     * 
                     */
                    int64_t GetPageNum() const;

                    /**
                     * 设置分页
                     * @param _pageNum 分页
                     * 
                     */
                    void SetPageNum(const int64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取排序参数
                     * @return DurationMs 排序参数
                     * 
                     */
                    std::string GetDurationMs() const;

                    /**
                     * 设置排序参数
                     * @param _durationMs 排序参数
                     * 
                     */
                    void SetDurationMs(const std::string& _durationMs);

                    /**
                     * 判断参数 DurationMs 是否已赋值
                     * @return DurationMs 是否已赋值
                     * 
                     */
                    bool DurationMsHasBeenSet() const;

                    /**
                     * 获取数据库名称
                     * @return DbName 数据库名称
                     * 
                     */
                    std::vector<std::string> GetDbName() const;

                    /**
                     * 设置数据库名称
                     * @param _dbName 数据库名称
                     * 
                     */
                    void SetDbName(const std::vector<std::string>& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取是否是查询，0：否， 1：是
                     * @return IsQuery 是否是查询，0：否， 1：是
                     * 
                     */
                    int64_t GetIsQuery() const;

                    /**
                     * 设置是否是查询，0：否， 1：是
                     * @param _isQuery 是否是查询，0：否， 1：是
                     * 
                     */
                    void SetIsQuery(const int64_t& _isQuery);

                    /**
                     * 判断参数 IsQuery 是否已赋值
                     * @return IsQuery 是否已赋值
                     * 
                     */
                    bool IsQueryHasBeenSet() const;

                    /**
                     * 获取catalog名称
                     * @return CatalogName catalog名称
                     * 
                     */
                    std::vector<std::string> GetCatalogName() const;

                    /**
                     * 设置catalog名称
                     * @param _catalogName catalog名称
                     * 
                     */
                    void SetCatalogName(const std::vector<std::string>& _catalogName);

                    /**
                     * 判断参数 CatalogName 是否已赋值
                     * @return CatalogName 是否已赋值
                     * 
                     */
                    bool CatalogNameHasBeenSet() const;

                    /**
                     * 获取sql名
                     * @return Sql sql名
                     * 
                     */
                    std::string GetSql() const;

                    /**
                     * 设置sql名
                     * @param _sql sql名
                     * 
                     */
                    void SetSql(const std::string& _sql);

                    /**
                     * 判断参数 Sql 是否已赋值
                     * @return Sql 是否已赋值
                     * 
                     */
                    bool SqlHasBeenSet() const;

                    /**
                     * 获取ReadRows排序字段
                     * @return ReadRows ReadRows排序字段
                     * 
                     */
                    std::string GetReadRows() const;

                    /**
                     * 设置ReadRows排序字段
                     * @param _readRows ReadRows排序字段
                     * 
                     */
                    void SetReadRows(const std::string& _readRows);

                    /**
                     * 判断参数 ReadRows 是否已赋值
                     * @return ReadRows 是否已赋值
                     * 
                     */
                    bool ReadRowsHasBeenSet() const;

                    /**
                     * 获取ResultBytes排序字段
                     * @return ResultBytes ResultBytes排序字段
                     * 
                     */
                    std::string GetResultBytes() const;

                    /**
                     * 设置ResultBytes排序字段
                     * @param _resultBytes ResultBytes排序字段
                     * 
                     */
                    void SetResultBytes(const std::string& _resultBytes);

                    /**
                     * 判断参数 ResultBytes 是否已赋值
                     * @return ResultBytes 是否已赋值
                     * 
                     */
                    bool ResultBytesHasBeenSet() const;

                    /**
                     * 获取MemoryUsage排序字段
                     * @return MemoryUsage MemoryUsage排序字段
                     * 
                     */
                    std::string GetMemoryUsage() const;

                    /**
                     * 设置MemoryUsage排序字段
                     * @param _memoryUsage MemoryUsage排序字段
                     * 
                     */
                    void SetMemoryUsage(const std::string& _memoryUsage);

                    /**
                     * 判断参数 MemoryUsage 是否已赋值
                     * @return MemoryUsage 是否已赋值
                     * 
                     */
                    bool MemoryUsageHasBeenSet() const;

                    /**
                     * 获取排序字段
                     * @return SortField 排序字段
                     * 
                     */
                    std::string GetSortField() const;

                    /**
                     * 设置排序字段
                     * @param _sortField 排序字段
                     * 
                     */
                    void SetSortField(const std::string& _sortField);

                    /**
                     * 判断参数 SortField 是否已赋值
                     * @return SortField 是否已赋值
                     * 
                     */
                    bool SortFieldHasBeenSet() const;

                    /**
                     * 获取排序方式
                     * @return SortOrder 排序方式
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置排序方式
                     * @param _sortOrder 排序方式
                     * 
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                    /**
                     * 获取user
                     * @return UserName user
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置user
                     * @param _userName user
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取计算组列表
                     * @return ComputeGroups 计算组列表
                     * 
                     */
                    std::vector<std::string> GetComputeGroups() const;

                    /**
                     * 设置计算组列表
                     * @param _computeGroups 计算组列表
                     * 
                     */
                    void SetComputeGroups(const std::vector<std::string>& _computeGroups);

                    /**
                     * 判断参数 ComputeGroups 是否已赋值
                     * @return ComputeGroups 是否已赋值
                     * 
                     */
                    bool ComputeGroupsHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 慢查询时间
                     */
                    int64_t m_queryDurationMs;
                    bool m_queryDurationMsHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 分页
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 分页
                     */
                    int64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * 排序参数
                     */
                    std::string m_durationMs;
                    bool m_durationMsHasBeenSet;

                    /**
                     * 数据库名称
                     */
                    std::vector<std::string> m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 是否是查询，0：否， 1：是
                     */
                    int64_t m_isQuery;
                    bool m_isQueryHasBeenSet;

                    /**
                     * catalog名称
                     */
                    std::vector<std::string> m_catalogName;
                    bool m_catalogNameHasBeenSet;

                    /**
                     * sql名
                     */
                    std::string m_sql;
                    bool m_sqlHasBeenSet;

                    /**
                     * ReadRows排序字段
                     */
                    std::string m_readRows;
                    bool m_readRowsHasBeenSet;

                    /**
                     * ResultBytes排序字段
                     */
                    std::string m_resultBytes;
                    bool m_resultBytesHasBeenSet;

                    /**
                     * MemoryUsage排序字段
                     */
                    std::string m_memoryUsage;
                    bool m_memoryUsageHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::string m_sortField;
                    bool m_sortFieldHasBeenSet;

                    /**
                     * 排序方式
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                    /**
                     * user
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 计算组列表
                     */
                    std::vector<std::string> m_computeGroups;
                    bool m_computeGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBESLOWQUERYRECORDSREQUEST_H_
