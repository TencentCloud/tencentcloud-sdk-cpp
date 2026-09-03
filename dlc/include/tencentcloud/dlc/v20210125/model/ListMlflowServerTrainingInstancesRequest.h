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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_LISTMLFLOWSERVERTRAININGINSTANCESREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_LISTMLFLOWSERVERTRAININGINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Filter.h>
#include <tencentcloud/dlc/v20210125/model/SortField.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * ListMlflowServerTrainingInstances请求参数结构体
                */
                class ListMlflowServerTrainingInstancesRequest : public AbstractModel
                {
                public:
                    ListMlflowServerTrainingInstancesRequest();
                    ~ListMlflowServerTrainingInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>MlFlowServer的ID</p>
                     * @return ServerId <p>MlFlowServer的ID</p>
                     * 
                     */
                    std::string GetServerId() const;

                    /**
                     * 设置<p>MlFlowServer的ID</p>
                     * @param _serverId <p>MlFlowServer的ID</p>
                     * 
                     */
                    void SetServerId(const std::string& _serverId);

                    /**
                     * 判断参数 ServerId 是否已赋值
                     * @return ServerId 是否已赋值
                     * 
                     */
                    bool ServerIdHasBeenSet() const;

                    /**
                     * 获取<p>分页过滤条件</p>
                     * @return Filters <p>分页过滤条件</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>分页过滤条件</p>
                     * @param _filters <p>分页过滤条件</p>
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
                     * 获取<p>分页筛选条件</p>
                     * @return SortFields <p>分页筛选条件</p>
                     * 
                     */
                    std::vector<SortField> GetSortFields() const;

                    /**
                     * 设置<p>分页筛选条件</p>
                     * @param _sortFields <p>分页筛选条件</p>
                     * 
                     */
                    void SetSortFields(const std::vector<SortField>& _sortFields);

                    /**
                     * 判断参数 SortFields 是否已赋值
                     * @return SortFields 是否已赋值
                     * 
                     */
                    bool SortFieldsHasBeenSet() const;

                    /**
                     * 获取<p>分页开始时间范围</p>
                     * @return StartTime <p>分页开始时间范围</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>分页开始时间范围</p>
                     * @param _startTime <p>分页开始时间范围</p>
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>分页结束时间范围</p>
                     * @return EndTime <p>分页结束时间范围</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>分页结束时间范围</p>
                     * @param _endTime <p>分页结束时间范围</p>
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>分页当前页号</p>
                     * @return Page <p>分页当前页号</p>
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置<p>分页当前页号</p>
                     * @param _page <p>分页当前页号</p>
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取<p>分页每页大小</p>
                     * @return PageSize <p>分页每页大小</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>分页每页大小</p>
                     * @param _pageSize <p>分页每页大小</p>
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
                     * <p>MlFlowServer的ID</p>
                     */
                    std::string m_serverId;
                    bool m_serverIdHasBeenSet;

                    /**
                     * <p>分页过滤条件</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>分页筛选条件</p>
                     */
                    std::vector<SortField> m_sortFields;
                    bool m_sortFieldsHasBeenSet;

                    /**
                     * <p>分页开始时间范围</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>分页结束时间范围</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>分页当前页号</p>
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * <p>分页每页大小</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_LISTMLFLOWSERVERTRAININGINSTANCESREQUEST_H_
