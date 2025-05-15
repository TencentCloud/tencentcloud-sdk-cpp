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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEBIDDINGAPPOINTLISTREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEBIDDINGAPPOINTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeBiddingAppointList请求参数结构体
                */
                class DescribeBiddingAppointListRequest : public AbstractModel
                {
                public:
                    DescribeBiddingAppointListRequest();
                    ~DescribeBiddingAppointListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取页码
默认值1
                     * @return PageNumber 页码
默认值1
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页码
默认值1
                     * @param _pageNumber 页码
默认值1
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取每页数量
默认：20 取值范围[1，200]
                     * @return PageSize 每页数量
默认：20 取值范围[1，200]
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页数量
默认：20 取值范围[1，200]
                     * @param _pageSize 每页数量
默认：20 取值范围[1，200]
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取状态：
1 已预约，2 竞价中，3 等待出价 4 竞价失败 5 等待支付 6 等待转移，7 转移中 8 交易成功 9 预约持有者赎回 10 竞价持有者赎回 11 其他阶段持有者赎回 12 违约
                     * @return Status 状态：
1 已预约，2 竞价中，3 等待出价 4 竞价失败 5 等待支付 6 等待转移，7 转移中 8 交易成功 9 预约持有者赎回 10 竞价持有者赎回 11 其他阶段持有者赎回 12 违约
                     * 
                     */
                    std::vector<uint64_t> GetStatus() const;

                    /**
                     * 设置状态：
1 已预约，2 竞价中，3 等待出价 4 竞价失败 5 等待支付 6 等待转移，7 转移中 8 交易成功 9 预约持有者赎回 10 竞价持有者赎回 11 其他阶段持有者赎回 12 违约
                     * @param _status 状态：
1 已预约，2 竞价中，3 等待出价 4 竞价失败 5 等待支付 6 等待转移，7 转移中 8 交易成功 9 预约持有者赎回 10 竞价持有者赎回 11 其他阶段持有者赎回 12 违约
                     * 
                     */
                    void SetStatus(const std::vector<uint64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取排序字段：
默认<空>，不排序
可选值：
AppointEndTime 预约结束时间
BiddingPrice 竞价保证金
BiddingEndTime 竞价结束时间
                     * @return SortField 排序字段：
默认<空>，不排序
可选值：
AppointEndTime 预约结束时间
BiddingPrice 竞价保证金
BiddingEndTime 竞价结束时间
                     * 
                     */
                    std::string GetSortField() const;

                    /**
                     * 设置排序字段：
默认<空>，不排序
可选值：
AppointEndTime 预约结束时间
BiddingPrice 竞价保证金
BiddingEndTime 竞价结束时间
                     * @param _sortField 排序字段：
默认<空>，不排序
可选值：
AppointEndTime 预约结束时间
BiddingPrice 竞价保证金
BiddingEndTime 竞价结束时间
                     * 
                     */
                    void SetSortField(const std::string& _sortField);

                    /**
                     * 判断参数 SortField 是否已赋值
                     * @return SortField 是否已赋值
                     * 
                     */
                    bool SortFieldHasBeenSet() const;

                    /**
                     * 获取排序规则：
asc:升序
desc:降序
默认：asc
                     * @return SortOrder 排序规则：
asc:升序
desc:降序
默认：asc
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置排序规则：
asc:升序
desc:降序
默认：asc
                     * @param _sortOrder 排序规则：
asc:升序
desc:降序
默认：asc
                     * 
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                private:

                    /**
                     * 页码
默认值1
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页数量
默认：20 取值范围[1，200]
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 状态：
1 已预约，2 竞价中，3 等待出价 4 竞价失败 5 等待支付 6 等待转移，7 转移中 8 交易成功 9 预约持有者赎回 10 竞价持有者赎回 11 其他阶段持有者赎回 12 违约
                     */
                    std::vector<uint64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 排序字段：
默认<空>，不排序
可选值：
AppointEndTime 预约结束时间
BiddingPrice 竞价保证金
BiddingEndTime 竞价结束时间
                     */
                    std::string m_sortField;
                    bool m_sortFieldHasBeenSet;

                    /**
                     * 排序规则：
asc:升序
desc:降序
默认：asc
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEBIDDINGAPPOINTLISTREQUEST_H_
