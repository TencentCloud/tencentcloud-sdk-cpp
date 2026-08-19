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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEMACHINECLEARHISTORYREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEMACHINECLEARHISTORYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/EDRFilters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
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
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>筛选条件多个条件筛选时 Keywords,TimeBetween,取交集 Keywords 实例名称/内网/公网IP TimeBetween 时间区间</p>
                     * @return Filters <p>筛选条件多个条件筛选时 Keywords,TimeBetween,取交集 Keywords 实例名称/内网/公网IP TimeBetween 时间区间</p>
                     * 
                     */
                    std::vector<EDRFilters> GetFilters() const;

                    /**
                     * 设置<p>筛选条件多个条件筛选时 Keywords,TimeBetween,取交集 Keywords 实例名称/内网/公网IP TimeBetween 时间区间</p>
                     * @param _filters <p>筛选条件多个条件筛选时 Keywords,TimeBetween,取交集 Keywords 实例名称/内网/公网IP TimeBetween 时间区间</p>
                     * 
                     */
                    void SetFilters(const std::vector<EDRFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>限制条数,默认10 ,最大100</p>
                     * @return Limit <p>限制条数,默认10 ,最大100</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>限制条数,默认10 ,最大100</p>
                     * @param _limit <p>限制条数,默认10 ,最大100</p>
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
                     * 获取<p>偏移量,默认0</p>
                     * @return Offset <p>偏移量,默认0</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量,默认0</p>
                     * @param _offset <p>偏移量,默认0</p>
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
                     * 获取<p>正序, ASC , 倒序 DESC , 默认ASC</p>
                     * @return Order <p>正序, ASC , 倒序 DESC , 默认ASC</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>正序, ASC , 倒序 DESC , 默认ASC</p>
                     * @param _order <p>正序, ASC , 倒序 DESC , 默认ASC</p>
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
                     * 获取<p>AgentLastOfflineTime 客户端最后离线时间AutoClearTime 清理时间</p>
                     * @return By <p>AgentLastOfflineTime 客户端最后离线时间AutoClearTime 清理时间</p>
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置<p>AgentLastOfflineTime 客户端最后离线时间AutoClearTime 清理时间</p>
                     * @param _by <p>AgentLastOfflineTime 客户端最后离线时间AutoClearTime 清理时间</p>
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
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>筛选条件多个条件筛选时 Keywords,TimeBetween,取交集 Keywords 实例名称/内网/公网IP TimeBetween 时间区间</p>
                     */
                    std::vector<EDRFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>限制条数,默认10 ,最大100</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量,默认0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>正序, ASC , 倒序 DESC , 默认ASC</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>AgentLastOfflineTime 客户端最后离线时间AutoClearTime 清理时间</p>
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEMACHINECLEARHISTORYREQUEST_H_
