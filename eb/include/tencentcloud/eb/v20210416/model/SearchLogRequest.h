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
                     * 获取起始时间unix 毫秒时间戳
                     * @return StartTime 起始时间unix 毫秒时间戳
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置起始时间unix 毫秒时间戳
                     * @param _startTime 起始时间unix 毫秒时间戳
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
                     * 获取结束时间unix 毫秒时间戳
                     * @return EndTime 结束时间unix 毫秒时间戳
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间unix 毫秒时间戳
                     * @param _endTime 结束时间unix 毫秒时间戳
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
                     * 获取页码
                     * @return Page 页码
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置页码
                     * @param _page 页码
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
                     * 获取事件查询筛选条件；示例如下：[{"key":"host","operator":"eq","value":"106.53.106.243"},{"type":"AND","filters":[{"key":"region","operator":"like","value":"*guangzhou*"},{"key":"type","operator":"eq","value":"cvm:ErrorEvent:GuestReboot"}]},{"type":"OR","filters":[{"key":"field1","operator":"like","value":"*access*"},{"key":"field2","operator":"eq","value":"custorm"}]}]
                     * @return Filter 事件查询筛选条件；示例如下：[{"key":"host","operator":"eq","value":"106.53.106.243"},{"type":"AND","filters":[{"key":"region","operator":"like","value":"*guangzhou*"},{"key":"type","operator":"eq","value":"cvm:ErrorEvent:GuestReboot"}]},{"type":"OR","filters":[{"key":"field1","operator":"like","value":"*access*"},{"key":"field2","operator":"eq","value":"custorm"}]}]
                     * 
                     */
                    std::vector<LogFilter> GetFilter() const;

                    /**
                     * 设置事件查询筛选条件；示例如下：[{"key":"host","operator":"eq","value":"106.53.106.243"},{"type":"AND","filters":[{"key":"region","operator":"like","value":"*guangzhou*"},{"key":"type","operator":"eq","value":"cvm:ErrorEvent:GuestReboot"}]},{"type":"OR","filters":[{"key":"field1","operator":"like","value":"*access*"},{"key":"field2","operator":"eq","value":"custorm"}]}]
                     * @param _filter 事件查询筛选条件；示例如下：[{"key":"host","operator":"eq","value":"106.53.106.243"},{"type":"AND","filters":[{"key":"region","operator":"like","value":"*guangzhou*"},{"key":"type","operator":"eq","value":"cvm:ErrorEvent:GuestReboot"}]},{"type":"OR","filters":[{"key":"field1","operator":"like","value":"*access*"},{"key":"field2","operator":"eq","value":"custorm"}]}]
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
                     * 获取事件查询结果排序，["timestamp","subject"]
                     * @return OrderFields 事件查询结果排序，["timestamp","subject"]
                     * 
                     */
                    std::vector<std::string> GetOrderFields() const;

                    /**
                     * 设置事件查询结果排序，["timestamp","subject"]
                     * @param _orderFields 事件查询结果排序，["timestamp","subject"]
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
                     * 获取排序方式，asc 从旧到新，desc 从新到旧
                     * @return OrderBy 排序方式，asc 从旧到新，desc 从新到旧
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序方式，asc 从旧到新，desc 从新到旧
                     * @param _orderBy 排序方式，asc 从旧到新，desc 从新到旧
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
                     * 起始时间unix 毫秒时间戳
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间unix 毫秒时间戳
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 事件集ID
                     */
                    std::string m_eventBusId;
                    bool m_eventBusIdHasBeenSet;

                    /**
                     * 页码
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 每页数据大小
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 事件查询筛选条件；示例如下：[{"key":"host","operator":"eq","value":"106.53.106.243"},{"type":"AND","filters":[{"key":"region","operator":"like","value":"*guangzhou*"},{"key":"type","operator":"eq","value":"cvm:ErrorEvent:GuestReboot"}]},{"type":"OR","filters":[{"key":"field1","operator":"like","value":"*access*"},{"key":"field2","operator":"eq","value":"custorm"}]}]
                     */
                    std::vector<LogFilter> m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 事件查询结果排序，["timestamp","subject"]
                     */
                    std::vector<std::string> m_orderFields;
                    bool m_orderFieldsHasBeenSet;

                    /**
                     * 排序方式，asc 从旧到新，desc 从新到旧
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_SEARCHLOGREQUEST_H_
