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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_SEARCHLOGREQUEST_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_SEARCHLOGREQUEST_H_

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
                * SearchLog请求参数结构体
                */
                class SearchLogRequest : public AbstractModel
                {
                public:
                    SearchLogRequest();
                    ~SearchLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>起始时间unix 毫秒时间戳</p>
                     * @return StartTime <p>起始时间unix 毫秒时间戳</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>起始时间unix 毫秒时间戳</p>
                     * @param _startTime <p>起始时间unix 毫秒时间戳</p>
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
                     * 获取<p>结束时间unix 毫秒时间戳</p>
                     * @return EndTime <p>结束时间unix 毫秒时间戳</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>结束时间unix 毫秒时间戳</p>
                     * @param _endTime <p>结束时间unix 毫秒时间戳</p>
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
                     * 获取<p>页码</p>
                     * @return Page <p>页码</p>
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置<p>页码</p>
                     * @param _page <p>页码</p>
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
                     * 获取<p>每页数据大小</p><p>取值范围：[1, 1000]</p><p>默认值：10</p>
                     * @return Limit <p>每页数据大小</p><p>取值范围：[1, 1000]</p><p>默认值：10</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>每页数据大小</p><p>取值范围：[1, 1000]</p><p>默认值：10</p>
                     * @param _limit <p>每页数据大小</p><p>取值范围：[1, 1000]</p><p>默认值：10</p>
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
                     * 获取<p>事件查询筛选条件；示例如下：[{&quot;key&quot;:&quot;host&quot;,&quot;operator&quot;:&quot;eq&quot;,&quot;value&quot;:&quot;106.53.106.243&quot;},{&quot;type&quot;:&quot;AND&quot;,&quot;filters&quot;:[{&quot;key&quot;:&quot;region&quot;,&quot;operator&quot;:&quot;like&quot;,&quot;value&quot;:&quot;<em>guangzhou</em>&quot;},{&quot;key&quot;:&quot;type&quot;,&quot;operator&quot;:&quot;eq&quot;,&quot;value&quot;:&quot;cvm:ErrorEvent:GuestReboot&quot;}]},{&quot;type&quot;:&quot;OR&quot;,&quot;filters&quot;:[{&quot;key&quot;:&quot;field1&quot;,&quot;operator&quot;:&quot;like&quot;,&quot;value&quot;:&quot;<em>access</em>&quot;},{&quot;key&quot;:&quot;field2&quot;,&quot;operator&quot;:&quot;eq&quot;,&quot;value&quot;:&quot;custom&quot;}]}]</p>
                     * @return Filter <p>事件查询筛选条件；示例如下：[{&quot;key&quot;:&quot;host&quot;,&quot;operator&quot;:&quot;eq&quot;,&quot;value&quot;:&quot;106.53.106.243&quot;},{&quot;type&quot;:&quot;AND&quot;,&quot;filters&quot;:[{&quot;key&quot;:&quot;region&quot;,&quot;operator&quot;:&quot;like&quot;,&quot;value&quot;:&quot;<em>guangzhou</em>&quot;},{&quot;key&quot;:&quot;type&quot;,&quot;operator&quot;:&quot;eq&quot;,&quot;value&quot;:&quot;cvm:ErrorEvent:GuestReboot&quot;}]},{&quot;type&quot;:&quot;OR&quot;,&quot;filters&quot;:[{&quot;key&quot;:&quot;field1&quot;,&quot;operator&quot;:&quot;like&quot;,&quot;value&quot;:&quot;<em>access</em>&quot;},{&quot;key&quot;:&quot;field2&quot;,&quot;operator&quot;:&quot;eq&quot;,&quot;value&quot;:&quot;custom&quot;}]}]</p>
                     * 
                     */
                    std::vector<LogFilter> GetFilter() const;

                    /**
                     * 设置<p>事件查询筛选条件；示例如下：[{&quot;key&quot;:&quot;host&quot;,&quot;operator&quot;:&quot;eq&quot;,&quot;value&quot;:&quot;106.53.106.243&quot;},{&quot;type&quot;:&quot;AND&quot;,&quot;filters&quot;:[{&quot;key&quot;:&quot;region&quot;,&quot;operator&quot;:&quot;like&quot;,&quot;value&quot;:&quot;<em>guangzhou</em>&quot;},{&quot;key&quot;:&quot;type&quot;,&quot;operator&quot;:&quot;eq&quot;,&quot;value&quot;:&quot;cvm:ErrorEvent:GuestReboot&quot;}]},{&quot;type&quot;:&quot;OR&quot;,&quot;filters&quot;:[{&quot;key&quot;:&quot;field1&quot;,&quot;operator&quot;:&quot;like&quot;,&quot;value&quot;:&quot;<em>access</em>&quot;},{&quot;key&quot;:&quot;field2&quot;,&quot;operator&quot;:&quot;eq&quot;,&quot;value&quot;:&quot;custom&quot;}]}]</p>
                     * @param _filter <p>事件查询筛选条件；示例如下：[{&quot;key&quot;:&quot;host&quot;,&quot;operator&quot;:&quot;eq&quot;,&quot;value&quot;:&quot;106.53.106.243&quot;},{&quot;type&quot;:&quot;AND&quot;,&quot;filters&quot;:[{&quot;key&quot;:&quot;region&quot;,&quot;operator&quot;:&quot;like&quot;,&quot;value&quot;:&quot;<em>guangzhou</em>&quot;},{&quot;key&quot;:&quot;type&quot;,&quot;operator&quot;:&quot;eq&quot;,&quot;value&quot;:&quot;cvm:ErrorEvent:GuestReboot&quot;}]},{&quot;type&quot;:&quot;OR&quot;,&quot;filters&quot;:[{&quot;key&quot;:&quot;field1&quot;,&quot;operator&quot;:&quot;like&quot;,&quot;value&quot;:&quot;<em>access</em>&quot;},{&quot;key&quot;:&quot;field2&quot;,&quot;operator&quot;:&quot;eq&quot;,&quot;value&quot;:&quot;custom&quot;}]}]</p>
                     * 
                     */
                    void SetFilter(const std::vector<LogFilter>& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取<p>事件查询结果排序</p><p>枚举值：</p><ul><li>Timestamp： 事件触发时间</li><li>Source： 事件源</li><li>Type： 事件类型</li><li>RuleIds： 事件规则</li><li>Subject： 事件对象</li><li>Region： 事件地域</li><li>Status： 事件状态</li></ul>
                     * @return OrderFields <p>事件查询结果排序</p><p>枚举值：</p><ul><li>Timestamp： 事件触发时间</li><li>Source： 事件源</li><li>Type： 事件类型</li><li>RuleIds： 事件规则</li><li>Subject： 事件对象</li><li>Region： 事件地域</li><li>Status： 事件状态</li></ul>
                     * 
                     */
                    std::vector<std::string> GetOrderFields() const;

                    /**
                     * 设置<p>事件查询结果排序</p><p>枚举值：</p><ul><li>Timestamp： 事件触发时间</li><li>Source： 事件源</li><li>Type： 事件类型</li><li>RuleIds： 事件规则</li><li>Subject： 事件对象</li><li>Region： 事件地域</li><li>Status： 事件状态</li></ul>
                     * @param _orderFields <p>事件查询结果排序</p><p>枚举值：</p><ul><li>Timestamp： 事件触发时间</li><li>Source： 事件源</li><li>Type： 事件类型</li><li>RuleIds： 事件规则</li><li>Subject： 事件对象</li><li>Region： 事件地域</li><li>Status： 事件状态</li></ul>
                     * 
                     */
                    void SetOrderFields(const std::vector<std::string>& _orderFields);

                    /**
                     * 判断参数 OrderFields 是否已赋值
                     * @return OrderFields 是否已赋值
                     * 
                     */
                    bool OrderFieldsHasBeenSet() const;

                    /**
                     * 获取<p>排序方式，asc 从旧到新，desc 从新到旧</p><p>枚举值：</p><ul><li>asc： 从旧到新</li><li>desc： 从新到旧</li></ul><p>默认值：desc</p>
                     * @return OrderBy <p>排序方式，asc 从旧到新，desc 从新到旧</p><p>枚举值：</p><ul><li>asc： 从旧到新</li><li>desc： 从新到旧</li></ul><p>默认值：desc</p>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>排序方式，asc 从旧到新，desc 从新到旧</p><p>枚举值：</p><ul><li>asc： 从旧到新</li><li>desc： 从新到旧</li></ul><p>默认值：desc</p>
                     * @param _orderBy <p>排序方式，asc 从旧到新，desc 从新到旧</p><p>枚举值：</p><ul><li>asc： 从旧到新</li><li>desc： 从新到旧</li></ul><p>默认值：desc</p>
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                private:

                    /**
                     * <p>起始时间unix 毫秒时间戳</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间unix 毫秒时间戳</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>事件集ID</p>
                     */
                    std::string m_eventBusId;
                    bool m_eventBusIdHasBeenSet;

                    /**
                     * <p>页码</p>
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * <p>每页数据大小</p><p>取值范围：[1, 1000]</p><p>默认值：10</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>事件查询筛选条件；示例如下：[{&quot;key&quot;:&quot;host&quot;,&quot;operator&quot;:&quot;eq&quot;,&quot;value&quot;:&quot;106.53.106.243&quot;},{&quot;type&quot;:&quot;AND&quot;,&quot;filters&quot;:[{&quot;key&quot;:&quot;region&quot;,&quot;operator&quot;:&quot;like&quot;,&quot;value&quot;:&quot;<em>guangzhou</em>&quot;},{&quot;key&quot;:&quot;type&quot;,&quot;operator&quot;:&quot;eq&quot;,&quot;value&quot;:&quot;cvm:ErrorEvent:GuestReboot&quot;}]},{&quot;type&quot;:&quot;OR&quot;,&quot;filters&quot;:[{&quot;key&quot;:&quot;field1&quot;,&quot;operator&quot;:&quot;like&quot;,&quot;value&quot;:&quot;<em>access</em>&quot;},{&quot;key&quot;:&quot;field2&quot;,&quot;operator&quot;:&quot;eq&quot;,&quot;value&quot;:&quot;custom&quot;}]}]</p>
                     */
                    std::vector<LogFilter> m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * <p>事件查询结果排序</p><p>枚举值：</p><ul><li>Timestamp： 事件触发时间</li><li>Source： 事件源</li><li>Type： 事件类型</li><li>RuleIds： 事件规则</li><li>Subject： 事件对象</li><li>Region： 事件地域</li><li>Status： 事件状态</li></ul>
                     */
                    std::vector<std::string> m_orderFields;
                    bool m_orderFieldsHasBeenSet;

                    /**
                     * <p>排序方式，asc 从旧到新，desc 从新到旧</p><p>枚举值：</p><ul><li>asc： 从旧到新</li><li>desc： 从新到旧</li></ul><p>默认值：desc</p>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_SEARCHLOGREQUEST_H_
