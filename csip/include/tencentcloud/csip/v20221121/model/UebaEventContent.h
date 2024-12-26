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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_UEBAEVENTCONTENT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_UEBAEVENTCONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/WhereFilter.h>
#include <tencentcloud/csip/v20221121/model/StatisticalFilter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 用户行为分析 发生事件结构体
                */
                class UebaEventContent : public AbstractModel
                {
                public:
                    UebaEventContent();
                    ~UebaEventContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取发生事件类型
1:语句检索
2:过滤检索
                     * @return EventType 发生事件类型
1:语句检索
2:过滤检索
                     * 
                     */
                    int64_t GetEventType() const;

                    /**
                     * 设置发生事件类型
1:语句检索
2:过滤检索
                     * @param _eventType 发生事件类型
1:语句检索
2:过滤检索
                     * 
                     */
                    void SetEventType(const int64_t& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取语句检索内容
                     * @return Content 语句检索内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置语句检索内容
                     * @param _content 语句检索内容
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取检索条件

                     * @return Filters 检索条件

                     * 
                     */
                    std::vector<WhereFilter> GetFilters() const;

                    /**
                     * 设置检索条件

                     * @param _filters 检索条件

                     * 
                     */
                    void SetFilters(const std::vector<WhereFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取统计条件
                     * @return StatisticalFilter 统计条件
                     * 
                     */
                    StatisticalFilter GetStatisticalFilter() const;

                    /**
                     * 设置统计条件
                     * @param _statisticalFilter 统计条件
                     * 
                     */
                    void SetStatisticalFilter(const StatisticalFilter& _statisticalFilter);

                    /**
                     * 判断参数 StatisticalFilter 是否已赋值
                     * @return StatisticalFilter 是否已赋值
                     * 
                     */
                    bool StatisticalFilterHasBeenSet() const;

                private:

                    /**
                     * 发生事件类型
1:语句检索
2:过滤检索
                     */
                    int64_t m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 语句检索内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 检索条件

                     */
                    std::vector<WhereFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 统计条件
                     */
                    StatisticalFilter m_statisticalFilter;
                    bool m_statisticalFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_UEBAEVENTCONTENT_H_
