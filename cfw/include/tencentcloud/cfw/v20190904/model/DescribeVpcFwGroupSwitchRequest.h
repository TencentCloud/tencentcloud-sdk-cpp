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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEVPCFWGROUPSWITCHREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEVPCFWGROUPSWITCHREQUEST_H_

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
                * DescribeVpcFwGroupSwitch请求参数结构体
                */
                class DescribeVpcFwGroupSwitchRequest : public AbstractModel
                {
                public:
                    DescribeVpcFwGroupSwitchRequest();
                    ~DescribeVpcFwGroupSwitchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>每页条数</p>
                     * @return Limit <p>每页条数</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>每页条数</p>
                     * @param _limit <p>每页条数</p>
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
                     * 获取<p>偏移值</p>
                     * @return Offset <p>偏移值</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移值</p>
                     * @param _offset <p>偏移值</p>
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
                     * 获取<p>过滤条件组合</p>
                     * @return Filters <p>过滤条件组合</p>
                     * 
                     */
                    std::vector<CommonFilter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件组合</p>
                     * @param _filters <p>过滤条件组合</p>
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
                     * 获取<p>检索的起始时间，可不传</p>
                     * @return StartTime <p>检索的起始时间，可不传</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>检索的起始时间，可不传</p>
                     * @param _startTime <p>检索的起始时间，可不传</p>
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
                     * 获取<p>检索的截止时间，可不传</p>
                     * @return EndTime <p>检索的截止时间，可不传</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>检索的截止时间，可不传</p>
                     * @param _endTime <p>检索的截止时间，可不传</p>
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
                     * 获取<p>desc：降序；asc：升序。根据By字段的值进行排序，这里传参的话则By也必须有值</p>
                     * @return Order <p>desc：降序；asc：升序。根据By字段的值进行排序，这里传参的话则By也必须有值</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>desc：降序；asc：升序。根据By字段的值进行排序，这里传参的话则By也必须有值</p>
                     * @param _order <p>desc：降序；asc：升序。根据By字段的值进行排序，这里传参的话则By也必须有值</p>
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
                     * 获取<p>排序所用到的字段</p>
                     * @return By <p>排序所用到的字段</p>
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置<p>排序所用到的字段</p>
                     * @param _by <p>排序所用到的字段</p>
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
                     * <p>每页条数</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移值</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>过滤条件组合</p>
                     */
                    std::vector<CommonFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>检索的起始时间，可不传</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>检索的截止时间，可不传</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>desc：降序；asc：升序。根据By字段的值进行排序，这里传参的话则By也必须有值</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>排序所用到的字段</p>
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEVPCFWGROUPSWITCHREQUEST_H_
