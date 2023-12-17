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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDDOSATTACKEVENTREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDDOSATTACKEVENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeDDoSAttackEvent请求参数结构体
                */
                class DescribeDDoSAttackEventRequest : public AbstractModel
                {
                public:
                    DescribeDDoSAttackEventRequest();
                    ~DescribeDDoSAttackEventRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始时间，时间范围为 30 天。
                     * @return StartTime 开始时间，时间范围为 30 天。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间，时间范围为 30 天。
                     * @param _startTime 开始时间，时间范围为 30 天。
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
                     * 获取结束时间，时间范围为 30 天。
                     * @return EndTime 结束时间，时间范围为 30 天。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，时间范围为 30 天。
                     * @param _endTime 结束时间，时间范围为 30 天。
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
                     * 获取ddos策略组集合，不填默认选择全部策略。
                     * @return PolicyIds ddos策略组集合，不填默认选择全部策略。
                     * 
                     */
                    std::vector<int64_t> GetPolicyIds() const;

                    /**
                     * 设置ddos策略组集合，不填默认选择全部策略。
                     * @param _policyIds ddos策略组集合，不填默认选择全部策略。
                     * 
                     */
                    void SetPolicyIds(const std::vector<int64_t>& _policyIds);

                    /**
                     * 判断参数 PolicyIds 是否已赋值
                     * @return PolicyIds 是否已赋值
                     * 
                     */
                    bool PolicyIdsHasBeenSet() const;

                    /**
                     * 获取站点集合，此参数必填。
                     * @return ZoneIds 站点集合，此参数必填。
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置站点集合，此参数必填。
                     * @param _zoneIds 站点集合，此参数必填。
                     * 
                     */
                    void SetZoneIds(const std::vector<std::string>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取分页查询的限制数目，默认值为20，最大查询条目为1000。
                     * @return Limit 分页查询的限制数目，默认值为20，最大查询条目为1000。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页查询的限制数目，默认值为20，最大查询条目为1000。
                     * @param _limit 分页查询的限制数目，默认值为20，最大查询条目为1000。
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
                     * 获取分页的偏移量，默认值为0。
                     * @return Offset 分页的偏移量，默认值为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页的偏移量，默认值为0。
                     * @param _offset 分页的偏移量，默认值为0。
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
                     * 获取展示攻击详情的参数，若填false，默认只返回攻击次数，不返回攻击详情；若填true，返回攻击详情。
                     * @return ShowDetail 展示攻击详情的参数，若填false，默认只返回攻击次数，不返回攻击详情；若填true，返回攻击详情。
                     * 
                     */
                    bool GetShowDetail() const;

                    /**
                     * 设置展示攻击详情的参数，若填false，默认只返回攻击次数，不返回攻击详情；若填true，返回攻击详情。
                     * @param _showDetail 展示攻击详情的参数，若填false，默认只返回攻击次数，不返回攻击详情；若填true，返回攻击详情。
                     * 
                     */
                    void SetShowDetail(const bool& _showDetail);

                    /**
                     * 判断参数 ShowDetail 是否已赋值
                     * @return ShowDetail 是否已赋值
                     * 
                     */
                    bool ShowDetailHasBeenSet() const;

                    /**
                     * 获取数据归属地区，取值有：
<li>overseas：全球（除中国大陆地区）数据；</li>
<li>mainland：中国大陆地区数据；</li>
<li>global：全球数据；</li>不填默认取值为global。
                     * @return Area 数据归属地区，取值有：
<li>overseas：全球（除中国大陆地区）数据；</li>
<li>mainland：中国大陆地区数据；</li>
<li>global：全球数据；</li>不填默认取值为global。
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置数据归属地区，取值有：
<li>overseas：全球（除中国大陆地区）数据；</li>
<li>mainland：中国大陆地区数据；</li>
<li>global：全球数据；</li>不填默认取值为global。
                     * @param _area 数据归属地区，取值有：
<li>overseas：全球（除中国大陆地区）数据；</li>
<li>mainland：中国大陆地区数据；</li>
<li>global：全球数据；</li>不填默认取值为global。
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取排序字段，取值有：
<li>MaxBandWidth：带宽峰值；</li>
<li>AttackStartTime：攻击开始时间。</li>不填默认值为：AttackStartTime。
                     * @return OrderBy 排序字段，取值有：
<li>MaxBandWidth：带宽峰值；</li>
<li>AttackStartTime：攻击开始时间。</li>不填默认值为：AttackStartTime。
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段，取值有：
<li>MaxBandWidth：带宽峰值；</li>
<li>AttackStartTime：攻击开始时间。</li>不填默认值为：AttackStartTime。
                     * @param _orderBy 排序字段，取值有：
<li>MaxBandWidth：带宽峰值；</li>
<li>AttackStartTime：攻击开始时间。</li>不填默认值为：AttackStartTime。
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取排序方式，取值有：
<li>asc：升序方式；</li>
<li>desc：降序方式。</li>不填默认值为：desc。
                     * @return OrderType 排序方式，取值有：
<li>asc：升序方式；</li>
<li>desc：降序方式。</li>不填默认值为：desc。
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置排序方式，取值有：
<li>asc：升序方式；</li>
<li>desc：降序方式。</li>不填默认值为：desc。
                     * @param _orderType 排序方式，取值有：
<li>asc：升序方式；</li>
<li>desc：降序方式。</li>不填默认值为：desc。
                     * 
                     */
                    void SetOrderType(const std::string& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                private:

                    /**
                     * 开始时间，时间范围为 30 天。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，时间范围为 30 天。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * ddos策略组集合，不填默认选择全部策略。
                     */
                    std::vector<int64_t> m_policyIds;
                    bool m_policyIdsHasBeenSet;

                    /**
                     * 站点集合，此参数必填。
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * 分页查询的限制数目，默认值为20，最大查询条目为1000。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页的偏移量，默认值为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 展示攻击详情的参数，若填false，默认只返回攻击次数，不返回攻击详情；若填true，返回攻击详情。
                     */
                    bool m_showDetail;
                    bool m_showDetailHasBeenSet;

                    /**
                     * 数据归属地区，取值有：
<li>overseas：全球（除中国大陆地区）数据；</li>
<li>mainland：中国大陆地区数据；</li>
<li>global：全球数据；</li>不填默认取值为global。
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 排序字段，取值有：
<li>MaxBandWidth：带宽峰值；</li>
<li>AttackStartTime：攻击开始时间。</li>不填默认值为：AttackStartTime。
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序方式，取值有：
<li>asc：升序方式；</li>
<li>desc：降序方式。</li>不填默认值为：desc。
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDDOSATTACKEVENTREQUEST_H_
