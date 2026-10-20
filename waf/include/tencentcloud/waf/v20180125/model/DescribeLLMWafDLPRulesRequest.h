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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBELLMWAFDLPRULESREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBELLMWAFDLPRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeLLMWafDLPRules请求参数结构体
                */
                class DescribeLLMWafDLPRulesRequest : public AbstractModel
                {
                public:
                    DescribeLLMWafDLPRulesRequest();
                    ~DescribeLLMWafDLPRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>SDK 模式传 ServiceId（与 Domain 二选一）</p>
                     * @return ServiceId <p>SDK 模式传 ServiceId（与 Domain 二选一）</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>SDK 模式传 ServiceId（与 Domain 二选一）</p>
                     * @param _serviceId <p>SDK 模式传 ServiceId（与 Domain 二选一）</p>
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
                     * 获取<p>实例id</p>
                     * @return InstanceId <p>实例id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例id</p>
                     * @param _instanceId <p>实例id</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>排序字段，当前仅支持 UpdateTime；为空则按规则默认顺序返回</p>
                     * @return By <p>排序字段，当前仅支持 UpdateTime；为空则按规则默认顺序返回</p>
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置<p>排序字段，当前仅支持 UpdateTime；为空则按规则默认顺序返回</p>
                     * @param _by <p>排序字段，当前仅支持 UpdateTime；为空则按规则默认顺序返回</p>
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
                     * 获取<p>排序方向：asc(升序)/desc(降序)，默认 desc</p>
                     * @return Order <p>排序方向：asc(升序)/desc(降序)，默认 desc</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>排序方向：asc(升序)/desc(降序)，默认 desc</p>
                     * @param _order <p>排序方向：asc(升序)/desc(降序)，默认 desc</p>
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
                     * 获取<p>域名模式传 Domain（与 ServiceId 二选一）</p>
                     * @return Domain <p>域名模式传 Domain（与 ServiceId 二选一）</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>域名模式传 Domain（与 ServiceId 二选一）</p>
                     * @param _domain <p>域名模式传 Domain（与 ServiceId 二选一）</p>
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * <p>SDK 模式传 ServiceId（与 Domain 二选一）</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>实例id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>排序字段，当前仅支持 UpdateTime；为空则按规则默认顺序返回</p>
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * <p>排序方向：asc(升序)/desc(降序)，默认 desc</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>域名模式传 Domain（与 ServiceId 二选一）</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBELLMWAFDLPRULESREQUEST_H_
