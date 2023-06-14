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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_DESCRIBERSGASGROUPACTIVITIESREQUEST_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_DESCRIBERSGASGROUPACTIVITIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiems/v20190416/model/Filter.h>


namespace TencentCloud
{
    namespace Tiems
    {
        namespace V20190416
        {
            namespace Model
            {
                /**
                * DescribeRsgAsGroupActivities请求参数结构体
                */
                class DescribeRsgAsGroupActivitiesRequest : public AbstractModel
                {
                public:
                    DescribeRsgAsGroupActivitiesRequest();
                    ~DescribeRsgAsGroupActivitiesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取伸缩组 ID
                     * @return Id 伸缩组 ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置伸缩组 ID
                     * @param _id 伸缩组 ID
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
                     * 获取查询活动的开始时间
                     * @return StartTime 查询活动的开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询活动的开始时间
                     * @param _startTime 查询活动的开始时间
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
                     * 获取查询互动的结束时间
                     * @return EndTime 查询互动的结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询互动的结束时间
                     * @param _endTime 查询互动的结束时间
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
                     * 获取筛选选项
                     * @return Filters 筛选选项
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置筛选选项
                     * @param _filters 筛选选项
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为 0
                     * @return Offset 偏移量，默认为 0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为 0
                     * @param _offset 偏移量，默认为 0
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
                     * 获取返回数量，默认为 20，最大值为 200
                     * @return Limit 返回数量，默认为 20，最大值为 200
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为 20，最大值为 200
                     * @param _limit 返回数量，默认为 20，最大值为 200
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
                     * 获取输出列表的排列顺序。取值范围："ASC", "DESC"
                     * @return Order 输出列表的排列顺序。取值范围："ASC", "DESC"
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置输出列表的排列顺序。取值范围："ASC", "DESC"
                     * @param _order 输出列表的排列顺序。取值范围："ASC", "DESC"
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
                     * 获取排序的依据字段， 取值范围 "CREATE_TIME", "UPDATE_TIME", "NAME"
                     * @return OrderField 排序的依据字段， 取值范围 "CREATE_TIME", "UPDATE_TIME", "NAME"
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置排序的依据字段， 取值范围 "CREATE_TIME", "UPDATE_TIME", "NAME"
                     * @param _orderField 排序的依据字段， 取值范围 "CREATE_TIME", "UPDATE_TIME", "NAME"
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                private:

                    /**
                     * 伸缩组 ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 查询活动的开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询互动的结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 筛选选项
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为 20，最大值为 200
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 输出列表的排列顺序。取值范围："ASC", "DESC"
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序的依据字段， 取值范围 "CREATE_TIME", "UPDATE_TIME", "NAME"
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_DESCRIBERSGASGROUPACTIVITIESREQUEST_H_
