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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_DESCRIBELOGTAGVALUEREQUEST_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_DESCRIBELOGTAGVALUEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eb/v20210416/model/LogFilter.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * DescribeLogTagValue请求参数结构体
                */
                class DescribeLogTagValueRequest : public AbstractModel
                {
                public:
                    DescribeLogTagValueRequest();
                    ~DescribeLogTagValueRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>起始时间</p>
                     * @return StartTime <p>起始时间</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>起始时间</p>
                     * @param _startTime <p>起始时间</p>
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
                     * 获取<p>结束时间</p>
                     * @return EndTime <p>结束时间</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>结束时间</p>
                     * @param _endTime <p>结束时间</p>
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
                     * 获取<p>事件集ID</p>
                     * @return EventBusId <p>事件集ID</p>
                     * 
                     */
                    std::string GetEventBusId() const;

                    /**
                     * 设置<p>事件集ID</p>
                     * @param _eventBusId <p>事件集ID</p>
                     * 
                     */
                    void SetEventBusId(const std::string& _eventBusId);

                    /**
                     * 判断参数 EventBusId 是否已赋值
                     * @return EventBusId 是否已赋值
                     * 
                     */
                    bool EventBusIdHasBeenSet() const;

                    /**
                     * 获取<p>聚合字段,取值范围如下：Source(事件源),RuleIds(命中规则),Subject(实例ID),Region(地域)</p>
                     * @return GroupField <p>聚合字段,取值范围如下：Source(事件源),RuleIds(命中规则),Subject(实例ID),Region(地域)</p>
                     * 
                     */
                    std::string GetGroupField() const;

                    /**
                     * 设置<p>聚合字段,取值范围如下：Source(事件源),RuleIds(命中规则),Subject(实例ID),Region(地域)</p>
                     * @param _groupField <p>聚合字段,取值范围如下：Source(事件源),RuleIds(命中规则),Subject(实例ID),Region(地域)</p>
                     * 
                     */
                    void SetGroupField(const std::string& _groupField);

                    /**
                     * 判断参数 GroupField 是否已赋值
                     * @return GroupField 是否已赋值
                     * 
                     */
                    bool GroupFieldHasBeenSet() const;

                    /**
                     * 获取<p>页数</p>
                     * @return Page <p>页数</p>
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置<p>页数</p>
                     * @param _page <p>页数</p>
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
                     * 获取<p>每页数据大小</p>
                     * @return Limit <p>每页数据大小</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>每页数据大小</p>
                     * @param _limit <p>每页数据大小</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>筛选条件</p>
                     * @return Filter <p>筛选条件</p>
                     * 
                     */
                    std::vector<LogFilter> GetFilter() const;

                    /**
                     * 设置<p>筛选条件</p>
                     * @param _filter <p>筛选条件</p>
                     * 
                     */
                    void SetFilter(const std::vector<LogFilter>& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                private:

                    /**
                     * <p>起始时间</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>事件集ID</p>
                     */
                    std::string m_eventBusId;
                    bool m_eventBusIdHasBeenSet;

                    /**
                     * <p>聚合字段,取值范围如下：Source(事件源),RuleIds(命中规则),Subject(实例ID),Region(地域)</p>
                     */
                    std::string m_groupField;
                    bool m_groupFieldHasBeenSet;

                    /**
                     * <p>页数</p>
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * <p>每页数据大小</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>筛选条件</p>
                     */
                    std::vector<LogFilter> m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_DESCRIBELOGTAGVALUEREQUEST_H_
