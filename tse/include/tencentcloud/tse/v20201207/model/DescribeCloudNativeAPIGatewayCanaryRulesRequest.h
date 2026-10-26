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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYCANARYRULESREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYCANARYRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/ListFilter.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DescribeCloudNativeAPIGatewayCanaryRules请求参数结构体
                */
                class DescribeCloudNativeAPIGatewayCanaryRulesRequest : public AbstractModel
                {
                public:
                    DescribeCloudNativeAPIGatewayCanaryRulesRequest();
                    ~DescribeCloudNativeAPIGatewayCanaryRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>网关ID</p>
                     * @return GatewayId <p>网关ID</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>网关ID</p>
                     * @param _gatewayId <p>网关ID</p>
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取<p>服务 ID</p>
                     * @return ServiceId <p>服务 ID</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>服务 ID</p>
                     * @param _serviceId <p>服务 ID</p>
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>灰度规则类别 Standard｜Lane</p>
                     * @return RuleType <p>灰度规则类别 Standard｜Lane</p>
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置<p>灰度规则类别 Standard｜Lane</p>
                     * @param _ruleType <p>灰度规则类别 Standard｜Lane</p>
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取<p>列表数量</p>
                     * @return Limit <p>列表数量</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>列表数量</p>
                     * @param _limit <p>列表数量</p>
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
                     * 获取<p>列表offset</p>
                     * @return Offset <p>列表offset</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>列表offset</p>
                     * @param _offset <p>列表offset</p>
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
                     * 获取<p>排序参数</p><p>枚举值：</p><ul><li>Priority： 优先级</li></ul>
                     * @return OrderField <p>排序参数</p><p>枚举值：</p><ul><li>Priority： 优先级</li></ul>
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置<p>排序参数</p><p>枚举值：</p><ul><li>Priority： 优先级</li></ul>
                     * @param _orderField <p>排序参数</p><p>枚举值：</p><ul><li>Priority： 优先级</li></ul>
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取<p>排序方式</p><p>枚举值：</p><ul><li>DESC： 降序</li><li>ASC： 升序</li></ul>
                     * @return OrderType <p>排序方式</p><p>枚举值：</p><ul><li>DESC： 降序</li><li>ASC： 升序</li></ul>
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置<p>排序方式</p><p>枚举值：</p><ul><li>DESC： 降序</li><li>ASC： 升序</li></ul>
                     * @param _orderType <p>排序方式</p><p>枚举值：</p><ul><li>DESC： 降序</li><li>ASC： 升序</li></ul>
                     * 
                     */
                    void SetOrderType(const std::string& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件，多个过滤条件之间是与的关系，支持 Header,Query,Body,Cookie,System,Method,Path,ServiceID,ServiceName</p>
                     * @return Filters <p>过滤条件，多个过滤条件之间是与的关系，支持 Header,Query,Body,Cookie,System,Method,Path,ServiceID,ServiceName</p>
                     * 
                     */
                    std::vector<ListFilter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件，多个过滤条件之间是与的关系，支持 Header,Query,Body,Cookie,System,Method,Path,ServiceID,ServiceName</p>
                     * @param _filters <p>过滤条件，多个过滤条件之间是与的关系，支持 Header,Query,Body,Cookie,System,Method,Path,ServiceID,ServiceName</p>
                     * 
                     */
                    void SetFilters(const std::vector<ListFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>网关ID</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>服务 ID</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>灰度规则类别 Standard｜Lane</p>
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * <p>列表数量</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>列表offset</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>排序参数</p><p>枚举值：</p><ul><li>Priority： 优先级</li></ul>
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * <p>排序方式</p><p>枚举值：</p><ul><li>DESC： 降序</li><li>ASC： 升序</li></ul>
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * <p>过滤条件，多个过滤条件之间是与的关系，支持 Header,Query,Body,Cookie,System,Method,Path,ServiceID,ServiceName</p>
                     */
                    std::vector<ListFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYCANARYRULESREQUEST_H_
