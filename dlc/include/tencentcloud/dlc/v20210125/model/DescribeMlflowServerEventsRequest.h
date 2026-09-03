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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEMLFLOWSERVEREVENTSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEMLFLOWSERVEREVENTSREQUEST_H_

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
                * DescribeMlflowServerEvents请求参数结构体
                */
                class DescribeMlflowServerEventsRequest : public AbstractModel
                {
                public:
                    DescribeMlflowServerEventsRequest();
                    ~DescribeMlflowServerEventsRequest() = default;
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
                     * 获取<p>查询起始时间，单位ms</p>
                     * @return StartTime <p>查询起始时间，单位ms</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>查询起始时间，单位ms</p>
                     * @param _startTime <p>查询起始时间，单位ms</p>
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
                     * 获取<p>查询结束时间，单位ms</p>
                     * @return EndTime <p>查询结束时间，单位ms</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>查询结束时间，单位ms</p>
                     * @param _endTime <p>查询结束时间，单位ms</p>
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

                    /**
                     * 获取<p>事件类型过滤，仅允许 ASCII 字母（如 Normal、Warning）</p>
                     * @return EventType <p>事件类型过滤，仅允许 ASCII 字母（如 Normal、Warning）</p>
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置<p>事件类型过滤，仅允许 ASCII 字母（如 Normal、Warning）</p>
                     * @param _eventType <p>事件类型过滤，仅允许 ASCII 字母（如 Normal、Warning）</p>
                     * 
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取<p>每次查询数量</p>
                     * @return PageSize <p>每次查询数量</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>每次查询数量</p>
                     * @param _pageSize <p>每次查询数量</p>
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
                     * 获取<p>排序字段，目前只支持EventTime</p>
                     * @return SortFields <p>排序字段，目前只支持EventTime</p>
                     * 
                     */
                    std::vector<SortField> GetSortFields() const;

                    /**
                     * 设置<p>排序字段，目前只支持EventTime</p>
                     * @param _sortFields <p>排序字段，目前只支持EventTime</p>
                     * 
                     */
                    void SetSortFields(const std::vector<SortField>& _sortFields);

                    /**
                     * 判断参数 SortFields 是否已赋值
                     * @return SortFields 是否已赋值
                     * 
                     */
                    bool SortFieldsHasBeenSet() const;

                private:

                    /**
                     * <p>MlFlowServer的ID</p>
                     */
                    std::string m_serverId;
                    bool m_serverIdHasBeenSet;

                    /**
                     * <p>查询起始时间，单位ms</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>查询结束时间，单位ms</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>翻页上下文，首次查询不传，后续翻页传入上一次返回的 Context 值</p>
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * <p>事件类型过滤，仅允许 ASCII 字母（如 Normal、Warning）</p>
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * <p>每次查询数量</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>排序字段，目前只支持EventTime</p>
                     */
                    std::vector<SortField> m_sortFields;
                    bool m_sortFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEMLFLOWSERVEREVENTSREQUEST_H_
