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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEATTACKEVENTSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEATTACKEVENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filter.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeAttackEvents请求参数结构体
                */
                class DescribeAttackEventsRequest : public AbstractModel
                {
                public:
                    DescribeAttackEventsRequest();
                    ~DescribeAttackEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取返回数量，最大值为100。
                     * @return Limit 返回数量，最大值为100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，最大值为100。
                     * @param _limit 返回数量，最大值为100。
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
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
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
                     * 获取 过滤条件。
<li>Type - String 攻击状态 0: 尝试攻击 1: 攻击成功 - 是否必填: 否</li>
<li>Status - String 事件处理状态 0：待处理 1：已处理 2： 已加白 3： 已忽略 4：已删除  - 是否必填: 否</li>
<li>SrcIP - String 来源IP - 是否必填: 否</li>
<li>Uuids - String 主机安全uuid - 是否必填: 否</li>
<li>Quuids - String cvm uuid - 是否必填: 否</li>
<li>DstPort - String 攻击目标端口 - 是否必填: 否</li>
<li>MachineName - String 主机名称 - 是否必填: 否</li>
<li>InstanceID - String 主机实例ID - 是否必填: 否</li>
<li>AttackTimeBegin - String 攻击开始时间 - 是否必填: 否</li>
<li>AttackTimeEnd - String 攻击结束时间 - 是否必填: 否</li>
<li>VulSupportDefense - String 漏洞是否支持防御 0不支持，1支持 - 是否必填: 否</li>

                     * @return Filters  过滤条件。
<li>Type - String 攻击状态 0: 尝试攻击 1: 攻击成功 - 是否必填: 否</li>
<li>Status - String 事件处理状态 0：待处理 1：已处理 2： 已加白 3： 已忽略 4：已删除  - 是否必填: 否</li>
<li>SrcIP - String 来源IP - 是否必填: 否</li>
<li>Uuids - String 主机安全uuid - 是否必填: 否</li>
<li>Quuids - String cvm uuid - 是否必填: 否</li>
<li>DstPort - String 攻击目标端口 - 是否必填: 否</li>
<li>MachineName - String 主机名称 - 是否必填: 否</li>
<li>InstanceID - String 主机实例ID - 是否必填: 否</li>
<li>AttackTimeBegin - String 攻击开始时间 - 是否必填: 否</li>
<li>AttackTimeEnd - String 攻击结束时间 - 是否必填: 否</li>
<li>VulSupportDefense - String 漏洞是否支持防御 0不支持，1支持 - 是否必填: 否</li>

                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置 过滤条件。
<li>Type - String 攻击状态 0: 尝试攻击 1: 攻击成功 - 是否必填: 否</li>
<li>Status - String 事件处理状态 0：待处理 1：已处理 2： 已加白 3： 已忽略 4：已删除  - 是否必填: 否</li>
<li>SrcIP - String 来源IP - 是否必填: 否</li>
<li>Uuids - String 主机安全uuid - 是否必填: 否</li>
<li>Quuids - String cvm uuid - 是否必填: 否</li>
<li>DstPort - String 攻击目标端口 - 是否必填: 否</li>
<li>MachineName - String 主机名称 - 是否必填: 否</li>
<li>InstanceID - String 主机实例ID - 是否必填: 否</li>
<li>AttackTimeBegin - String 攻击开始时间 - 是否必填: 否</li>
<li>AttackTimeEnd - String 攻击结束时间 - 是否必填: 否</li>
<li>VulSupportDefense - String 漏洞是否支持防御 0不支持，1支持 - 是否必填: 否</li>

                     * @param _filters  过滤条件。
<li>Type - String 攻击状态 0: 尝试攻击 1: 攻击成功 - 是否必填: 否</li>
<li>Status - String 事件处理状态 0：待处理 1：已处理 2： 已加白 3： 已忽略 4：已删除  - 是否必填: 否</li>
<li>SrcIP - String 来源IP - 是否必填: 否</li>
<li>Uuids - String 主机安全uuid - 是否必填: 否</li>
<li>Quuids - String cvm uuid - 是否必填: 否</li>
<li>DstPort - String 攻击目标端口 - 是否必填: 否</li>
<li>MachineName - String 主机名称 - 是否必填: 否</li>
<li>InstanceID - String 主机实例ID - 是否必填: 否</li>
<li>AttackTimeBegin - String 攻击开始时间 - 是否必填: 否</li>
<li>AttackTimeEnd - String 攻击结束时间 - 是否必填: 否</li>
<li>VulSupportDefense - String 漏洞是否支持防御 0不支持，1支持 - 是否必填: 否</li>

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
                     * 获取排序
                     * @return By 排序
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序
                     * @param _by 排序
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
                     * 获取排序方式 ASC,DESC
                     * @return Order 排序方式 ASC,DESC
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式 ASC,DESC
                     * @param _order 排序方式 ASC,DESC
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * 返回数量，最大值为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     *  过滤条件。
<li>Type - String 攻击状态 0: 尝试攻击 1: 攻击成功 - 是否必填: 否</li>
<li>Status - String 事件处理状态 0：待处理 1：已处理 2： 已加白 3： 已忽略 4：已删除  - 是否必填: 否</li>
<li>SrcIP - String 来源IP - 是否必填: 否</li>
<li>Uuids - String 主机安全uuid - 是否必填: 否</li>
<li>Quuids - String cvm uuid - 是否必填: 否</li>
<li>DstPort - String 攻击目标端口 - 是否必填: 否</li>
<li>MachineName - String 主机名称 - 是否必填: 否</li>
<li>InstanceID - String 主机实例ID - 是否必填: 否</li>
<li>AttackTimeBegin - String 攻击开始时间 - 是否必填: 否</li>
<li>AttackTimeEnd - String 攻击结束时间 - 是否必填: 否</li>
<li>VulSupportDefense - String 漏洞是否支持防御 0不支持，1支持 - 是否必填: 否</li>

                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * 排序方式 ASC,DESC
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEATTACKEVENTSREQUEST_H_
