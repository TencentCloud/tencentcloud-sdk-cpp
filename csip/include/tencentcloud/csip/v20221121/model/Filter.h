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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_FILTER_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_FILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/WhereFilter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 列表查询接口采用新filter 接口，直接传给后台供后台查询过滤
                */
                class Filter : public AbstractModel
                {
                public:
                    Filter();
                    ~Filter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取查询数量限制
                     * @return Limit 查询数量限制
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置查询数量限制
                     * @param _limit 查询数量限制
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
                     * 获取查询偏移位置
                     * @return Offset 查询偏移位置
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置查询偏移位置
                     * @param _offset 查询偏移位置
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取排序采用升序还是降序 升:asc 降 desc
                     * @return Order 排序采用升序还是降序 升:asc 降 desc
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序采用升序还是降序 升:asc 降 desc
                     * @param _order 排序采用升序还是降序 升:asc 降 desc
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取需排序的字段
                     * @return By 需排序的字段
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置需排序的字段
                     * @param _by 需排序的字段
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取过滤的列及内容
                     * @return Filters 过滤的列及内容
                     * 
                     */
                    std::vector<WhereFilter> GetFilters() const;

                    /**
                     * 设置过滤的列及内容
                     * @param _filters 过滤的列及内容
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
                     * 获取可填无， 日志使用查询时间
                     * @return StartTime 可填无， 日志使用查询时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置可填无， 日志使用查询时间
                     * @param _startTime 可填无， 日志使用查询时间
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
                     * 获取可填无， 日志使用查询时间
                     * @return EndTime 可填无， 日志使用查询时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置可填无， 日志使用查询时间
                     * @param _endTime 可填无， 日志使用查询时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 查询数量限制
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 查询偏移位置
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 排序采用升序还是降序 升:asc 降 desc
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 需排序的字段
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * 过滤的列及内容
                     */
                    std::vector<WhereFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 可填无， 日志使用查询时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 可填无， 日志使用查询时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_FILTER_H_
