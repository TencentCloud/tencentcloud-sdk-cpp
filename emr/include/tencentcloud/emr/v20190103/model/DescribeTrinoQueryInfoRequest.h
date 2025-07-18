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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBETRINOQUERYINFOREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBETRINOQUERYINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeTrinoQueryInfo请求参数结构体
                */
                class DescribeTrinoQueryInfoRequest : public AbstractModel
                {
                public:
                    DescribeTrinoQueryInfoRequest();
                    ~DescribeTrinoQueryInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return InstanceId 集群ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群ID
                     * @param _instanceId 集群ID
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
                     * 获取获取查询信息开始时间 (s)
                     * @return StartTime 获取查询信息开始时间 (s)
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置获取查询信息开始时间 (s)
                     * @param _startTime 获取查询信息开始时间 (s)
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
                     * 获取获取查询信息结束时间 (s)
                     * @return EndTime 获取查询信息结束时间 (s)
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置获取查询信息结束时间 (s)
                     * @param _endTime 获取查询信息结束时间 (s)
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
                     * 获取分页查询时的分页大小，最小1，最大100
                     * @return PageSize 分页查询时的分页大小，最小1，最大100
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置分页查询时的分页大小，最小1，最大100
                     * @param _pageSize 分页查询时的分页大小，最小1，最大100
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
                     * 获取分页查询时的页号，从1开始
                     * @return Page 分页查询时的页号，从1开始
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置分页查询时的页号，从1开始
                     * @param _page 分页查询时的页号，从1开始
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 获取查询信息开始时间 (s)
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 获取查询信息结束时间 (s)
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 分页查询时的分页大小，最小1，最大100
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 分页查询时的页号，从1开始
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBETRINOQUERYINFOREQUEST_H_
