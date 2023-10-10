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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINECLEARHISTORYREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINECLEARHISTORYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeMachineClearHistory请求参数结构体
                */
                class DescribeMachineClearHistoryRequest : public AbstractModel
                {
                public:
                    DescribeMachineClearHistoryRequest();
                    ~DescribeMachineClearHistoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取筛选条件
多个条件筛选时 Keywords,TimeBetween,取交集
<li> Keywords 实例名称/内网/公网IP</li>
<li> TimeBetween 时间区间</li>
                     * @return Filters 筛选条件
多个条件筛选时 Keywords,TimeBetween,取交集
<li> Keywords 实例名称/内网/公网IP</li>
<li> TimeBetween 时间区间</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置筛选条件
多个条件筛选时 Keywords,TimeBetween,取交集
<li> Keywords 实例名称/内网/公网IP</li>
<li> TimeBetween 时间区间</li>
                     * @param _filters 筛选条件
多个条件筛选时 Keywords,TimeBetween,取交集
<li> Keywords 实例名称/内网/公网IP</li>
<li> TimeBetween 时间区间</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取限制条数,默认10 ,最大100
                     * @return Limit 限制条数,默认10 ,最大100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制条数,默认10 ,最大100
                     * @param _limit 限制条数,默认10 ,最大100
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
                     * 获取偏移量,默认0
                     * @return Offset 偏移量,默认0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量,默认0
                     * @param _offset 偏移量,默认0
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
                     * 获取正序, ASC , 倒序 DESC , 默认ASC
                     * @return Order 正序, ASC , 倒序 DESC , 默认ASC
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置正序, ASC , 倒序 DESC , 默认ASC
                     * @param _order 正序, ASC , 倒序 DESC , 默认ASC
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
                     * 获取AgentLastOfflineTime 客户端最后离线时间
AutoClearTime 清理时间
                     * @return By AgentLastOfflineTime 客户端最后离线时间
AutoClearTime 清理时间
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置AgentLastOfflineTime 客户端最后离线时间
AutoClearTime 清理时间
                     * @param _by AgentLastOfflineTime 客户端最后离线时间
AutoClearTime 清理时间
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
                     * 筛选条件
多个条件筛选时 Keywords,TimeBetween,取交集
<li> Keywords 实例名称/内网/公网IP</li>
<li> TimeBetween 时间区间</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 限制条数,默认10 ,最大100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量,默认0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 正序, ASC , 倒序 DESC , 默认ASC
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * AgentLastOfflineTime 客户端最后离线时间
AutoClearTime 清理时间
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINECLEARHISTORYREQUEST_H_
