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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEDOMAINSREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEDOMAINSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/FiltersItemNew.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeDomains请求参数结构体
                */
                class DescribeDomainsRequest : public AbstractModel
                {
                public:
                    DescribeDomainsRequest();
                    ~DescribeDomainsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页偏移量，取Limit整数倍。最小值为0，最大值= Total/Limit向上取整
                     * @return Offset 分页偏移量，取Limit整数倍。最小值为0，最大值= Total/Limit向上取整
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，取Limit整数倍。最小值为0，最大值= Total/Limit向上取整
                     * @param _offset 分页偏移量，取Limit整数倍。最小值为0，最大值= Total/Limit向上取整
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
                     * 获取返回域名的数量
                     * @return Limit 返回域名的数量
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回域名的数量
                     * @param _limit 返回域名的数量
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
                     * 获取过滤数组，过滤字段包括：Edition：实例版本，sparta-waf或clb-waf Domain：域名 DomainId：域名ID InstanceName：实例名称 InstanceId：实例ID FlowMode：流量接入模式，仅支持CLBWAF FlowCheckMode：流量体检模式，仅支持CLBWAF ClsStatus：日志开关 Status：WAF开关BotStatus：BOT开关 ApiStatus：API安全开关 Engine：引擎模式 UpstreamIP：源站IP，仅支持SAAS型WAF UpstreamDomain：源站域名，仅支持SAAS型WAF DomainState：域名状态，仅支持SAAS型WAF SgState：安全组状态，仅支持SAAS型WAF Label：分组标签，同时仅支持一种标签过滤
                     * @return Filters 过滤数组，过滤字段包括：Edition：实例版本，sparta-waf或clb-waf Domain：域名 DomainId：域名ID InstanceName：实例名称 InstanceId：实例ID FlowMode：流量接入模式，仅支持CLBWAF FlowCheckMode：流量体检模式，仅支持CLBWAF ClsStatus：日志开关 Status：WAF开关BotStatus：BOT开关 ApiStatus：API安全开关 Engine：引擎模式 UpstreamIP：源站IP，仅支持SAAS型WAF UpstreamDomain：源站域名，仅支持SAAS型WAF DomainState：域名状态，仅支持SAAS型WAF SgState：安全组状态，仅支持SAAS型WAF Label：分组标签，同时仅支持一种标签过滤
                     * 
                     */
                    std::vector<FiltersItemNew> GetFilters() const;

                    /**
                     * 设置过滤数组，过滤字段包括：Edition：实例版本，sparta-waf或clb-waf Domain：域名 DomainId：域名ID InstanceName：实例名称 InstanceId：实例ID FlowMode：流量接入模式，仅支持CLBWAF FlowCheckMode：流量体检模式，仅支持CLBWAF ClsStatus：日志开关 Status：WAF开关BotStatus：BOT开关 ApiStatus：API安全开关 Engine：引擎模式 UpstreamIP：源站IP，仅支持SAAS型WAF UpstreamDomain：源站域名，仅支持SAAS型WAF DomainState：域名状态，仅支持SAAS型WAF SgState：安全组状态，仅支持SAAS型WAF Label：分组标签，同时仅支持一种标签过滤
                     * @param _filters 过滤数组，过滤字段包括：Edition：实例版本，sparta-waf或clb-waf Domain：域名 DomainId：域名ID InstanceName：实例名称 InstanceId：实例ID FlowMode：流量接入模式，仅支持CLBWAF FlowCheckMode：流量体检模式，仅支持CLBWAF ClsStatus：日志开关 Status：WAF开关BotStatus：BOT开关 ApiStatus：API安全开关 Engine：引擎模式 UpstreamIP：源站IP，仅支持SAAS型WAF UpstreamDomain：源站域名，仅支持SAAS型WAF DomainState：域名状态，仅支持SAAS型WAF SgState：安全组状态，仅支持SAAS型WAF Label：分组标签，同时仅支持一种标签过滤
                     * 
                     */
                    void SetFilters(const std::vector<FiltersItemNew>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 分页偏移量，取Limit整数倍。最小值为0，最大值= Total/Limit向上取整
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回域名的数量
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤数组，过滤字段包括：Edition：实例版本，sparta-waf或clb-waf Domain：域名 DomainId：域名ID InstanceName：实例名称 InstanceId：实例ID FlowMode：流量接入模式，仅支持CLBWAF FlowCheckMode：流量体检模式，仅支持CLBWAF ClsStatus：日志开关 Status：WAF开关BotStatus：BOT开关 ApiStatus：API安全开关 Engine：引擎模式 UpstreamIP：源站IP，仅支持SAAS型WAF UpstreamDomain：源站域名，仅支持SAAS型WAF DomainState：域名状态，仅支持SAAS型WAF SgState：安全组状态，仅支持SAAS型WAF Label：分组标签，同时仅支持一种标签过滤
                     */
                    std::vector<FiltersItemNew> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEDOMAINSREQUEST_H_
