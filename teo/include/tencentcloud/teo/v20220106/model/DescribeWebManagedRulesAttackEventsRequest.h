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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEWEBMANAGEDRULESATTACKEVENTSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEWEBMANAGEDRULESATTACKEVENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeWebManagedRulesAttackEvents请求参数结构体
                */
                class DescribeWebManagedRulesAttackEventsRequest : public AbstractModel
                {
                public:
                    DescribeWebManagedRulesAttackEventsRequest();
                    ~DescribeWebManagedRulesAttackEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param StartTime 开始时间
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param EndTime 结束时间
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取条数
                     * @return PageSize 条数
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置条数
                     * @param PageSize 条数
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取当前页
                     * @return PageNo 当前页
                     */
                    int64_t GetPageNo() const;

                    /**
                     * 设置当前页
                     * @param PageNo 当前页
                     */
                    void SetPageNo(const int64_t& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     */
                    bool PageNoHasBeenSet() const;

                    /**
                     * 获取ddos策略组id 集合
                     * @return PolicyIds ddos策略组id 集合
                     */
                    std::vector<int64_t> GetPolicyIds() const;

                    /**
                     * 设置ddos策略组id 集合
                     * @param PolicyIds ddos策略组id 集合
                     */
                    void SetPolicyIds(const std::vector<int64_t>& _policyIds);

                    /**
                     * 判断参数 PolicyIds 是否已赋值
                     * @return PolicyIds 是否已赋值
                     */
                    bool PolicyIdsHasBeenSet() const;

                    /**
                     * 获取站点集合
                     * @return ZoneIds 站点集合
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置站点集合
                     * @param ZoneIds 站点集合
                     */
                    void SetZoneIds(const std::vector<std::string>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取协议类型,{tcp,udp,all}
                     * @return Domains 协议类型,{tcp,udp,all}
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置协议类型,{tcp,udp,all}
                     * @param Domains 协议类型,{tcp,udp,all}
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取选填{Y、N},默认为Y；Y：展示，N：不展示
                     * @return IsShowDetail 选填{Y、N},默认为Y；Y：展示，N：不展示
                     */
                    std::string GetIsShowDetail() const;

                    /**
                     * 设置选填{Y、N},默认为Y；Y：展示，N：不展示
                     * @param IsShowDetail 选填{Y、N},默认为Y；Y：展示，N：不展示
                     */
                    void SetIsShowDetail(const std::string& _isShowDetail);

                    /**
                     * 判断参数 IsShowDetail 是否已赋值
                     * @return IsShowDetail 是否已赋值
                     */
                    bool IsShowDetailHasBeenSet() const;

                private:

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 条数
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 当前页
                     */
                    int64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * ddos策略组id 集合
                     */
                    std::vector<int64_t> m_policyIds;
                    bool m_policyIdsHasBeenSet;

                    /**
                     * 站点集合
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * 协议类型,{tcp,udp,all}
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 选填{Y、N},默认为Y；Y：展示，N：不展示
                     */
                    std::string m_isShowDetail;
                    bool m_isShowDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEWEBMANAGEDRULESATTACKEVENTSREQUEST_H_
