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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_GETRAYCLUSTEREVENTREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_GETRAYCLUSTEREVENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * GetRayClusterEvent请求参数结构体
                */
                class GetRayClusterEventRequest : public AbstractModel
                {
                public:
                    GetRayClusterEventRequest();
                    ~GetRayClusterEventRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Ray集群ID</p>
                     * @return Id <p>Ray集群ID</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>Ray集群ID</p>
                     * @param _id <p>Ray集群ID</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>当前页码（从1开始）</p>
                     * @return Page <p>当前页码（从1开始）</p>
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置<p>当前页码（从1开始）</p>
                     * @param _page <p>当前页码（从1开始）</p>
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
                     * 获取<p>每页数量</p>
                     * @return PageSize <p>每页数量</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>每页数量</p>
                     * @param _pageSize <p>每页数量</p>
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
                     * 获取<p>开始时间（毫秒时间戳）</p>
                     * @return StartTime <p>开始时间（毫秒时间戳）</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>开始时间（毫秒时间戳）</p>
                     * @param _startTime <p>开始时间（毫秒时间戳）</p>
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
                     * 获取<p>结束时间（毫秒时间戳）</p>
                     * @return EndTime <p>结束时间（毫秒时间戳）</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>结束时间（毫秒时间戳）</p>
                     * @param _endTime <p>结束时间（毫秒时间戳）</p>
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
                     * 获取<p>排序字段列表</p>
                     * @return SortFields <p>排序字段列表</p>
                     * 
                     */
                    std::vector<SortField> GetSortFields() const;

                    /**
                     * 设置<p>排序字段列表</p>
                     * @param _sortFields <p>排序字段列表</p>
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
                     * 获取<p>翻页上下文，首次查询不传，后续翻页传入上一次返回的 Context 值</p>
                     * @return Context <p>翻页上下文，首次查询不传，后续翻页传入上一次返回的 Context 值</p>
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置<p>翻页上下文，首次查询不传，后续翻页传入上一次返回的 Context 值</p>
                     * @param _context <p>翻页上下文，首次查询不传，后续翻页传入上一次返回的 Context 值</p>
                     * 
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                private:

                    /**
                     * <p>Ray集群ID</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>当前页码（从1开始）</p>
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * <p>每页数量</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>开始时间（毫秒时间戳）</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间（毫秒时间戳）</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>排序字段列表</p>
                     */
                    std::vector<SortField> m_sortFields;
                    bool m_sortFieldsHasBeenSet;

                    /**
                     * <p>翻页上下文，首次查询不传，后续翻页传入上一次返回的 Context 值</p>
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_GETRAYCLUSTEREVENTREQUEST_H_
