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
                     * 获取起始时间
                     * @return StartTime 起始时间
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置起始时间
                     * @param _startTime 起始时间
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
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
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
                     * 获取事件集ID
                     * @return EventBusId 事件集ID
                     * 
                     */
                    std::string GetEventBusId() const;

                    /**
                     * 设置事件集ID
                     * @param _eventBusId 事件集ID
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
                     * 获取聚合字段,取值范围如下：Source(事件源),RuleIds(命中规则),Subject(实例ID),Region(地域)
                     * @return GroupField 聚合字段,取值范围如下：Source(事件源),RuleIds(命中规则),Subject(实例ID),Region(地域)
                     * 
                     */
                    std::string GetGroupField() const;

                    /**
                     * 设置聚合字段,取值范围如下：Source(事件源),RuleIds(命中规则),Subject(实例ID),Region(地域)
                     * @param _groupField 聚合字段,取值范围如下：Source(事件源),RuleIds(命中规则),Subject(实例ID),Region(地域)
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
                     * 获取页数
                     * @return Page 页数
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置页数
                     * @param _page 页数
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
                     * 获取每页数据大小
                     * @return Limit 每页数据大小
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页数据大小
                     * @param _limit 每页数据大小
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
                     * 获取筛选条件
                     * @return Filter 筛选条件
                     * 
                     */
                    std::vector<LogFilter> GetFilter() const;

                    /**
                     * 设置筛选条件
                     * @param _filter 筛选条件
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
                     * 起始时间
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 事件集ID
                     */
                    std::string m_eventBusId;
                    bool m_eventBusIdHasBeenSet;

                    /**
                     * 聚合字段,取值范围如下：Source(事件源),RuleIds(命中规则),Subject(实例ID),Region(地域)
                     */
                    std::string m_groupField;
                    bool m_groupFieldHasBeenSet;

                    /**
                     * 页数
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 每页数据大小
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 筛选条件
                     */
                    std::vector<LogFilter> m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_DESCRIBELOGTAGVALUEREQUEST_H_
