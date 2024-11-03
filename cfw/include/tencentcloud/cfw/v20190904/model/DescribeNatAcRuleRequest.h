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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATACRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATACRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/CommonFilter.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeNatAcRule请求参数结构体
                */
                class DescribeNatAcRuleRequest : public AbstractModel
                {
                public:
                    DescribeNatAcRuleRequest();
                    ~DescribeNatAcRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取每页条数
                     * @return Limit 每页条数
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页条数
                     * @param _limit 每页条数
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移值
                     * @return Offset 偏移值
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移值
                     * @param _offset 偏移值
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取需要查询的索引，特定场景使用，可不填
                     * @return Index 需要查询的索引，特定场景使用，可不填
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置需要查询的索引，特定场景使用，可不填
                     * @param _index 需要查询的索引，特定场景使用，可不填
                     * 
                     */
                    void SetIndex(const std::string& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取过滤条件组合，Direction 为0时表述查询出向规则，为1时表示查询入向规则
                     * @return Filters 过滤条件组合，Direction 为0时表述查询出向规则，为1时表示查询入向规则
                     * 
                     */
                    std::vector<CommonFilter> GetFilters() const;

                    /**
                     * 设置过滤条件组合，Direction 为0时表述查询出向规则，为1时表示查询入向规则
                     * @param _filters 过滤条件组合，Direction 为0时表述查询出向规则，为1时表示查询入向规则
                     * 
                     */
                    void SetFilters(const std::vector<CommonFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取检索的起始时间，可不传
                     * @return StartTime 检索的起始时间，可不传
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置检索的起始时间，可不传
                     * @param _startTime 检索的起始时间，可不传
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
                     * 获取检索的截止时间，可不传
                     * @return EndTime 检索的截止时间，可不传
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置检索的截止时间，可不传
                     * @param _endTime 检索的截止时间，可不传
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取desc：降序；asc：升序。根据By字段的值进行排序，这里传参的话则By也必须有值，默认为asc
                     * @return Order desc：降序；asc：升序。根据By字段的值进行排序，这里传参的话则By也必须有值，默认为asc
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置desc：降序；asc：升序。根据By字段的值进行排序，这里传参的话则By也必须有值，默认为asc
                     * @param _order desc：降序；asc：升序。根据By字段的值进行排序，这里传参的话则By也必须有值，默认为asc
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
                     * 获取排序所用到的字段，默认为sequence
                     * @return By 排序所用到的字段，默认为sequence
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序所用到的字段，默认为sequence
                     * @param _by 排序所用到的字段，默认为sequence
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * 每页条数
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移值
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 需要查询的索引，特定场景使用，可不填
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 过滤条件组合，Direction 为0时表述查询出向规则，为1时表示查询入向规则
                     */
                    std::vector<CommonFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 检索的起始时间，可不传
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 检索的截止时间，可不传
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * desc：降序；asc：升序。根据By字段的值进行排序，这里传参的话则By也必须有值，默认为asc
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序所用到的字段，默认为sequence
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATACRULEREQUEST_H_
