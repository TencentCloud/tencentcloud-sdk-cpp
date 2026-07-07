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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBELISTENERCERTIFICATESREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBELISTENERCERTIFICATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DescribeListenerCertificates请求参数结构体
                */
                class DescribeListenerCertificatesRequest : public AbstractModel
                {
                public:
                    DescribeListenerCertificatesRequest();
                    ~DescribeListenerCertificatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取证书类型。取值：CA或SVR（服务器证书）。
                     * @return CertificateType 证书类型。取值：CA或SVR（服务器证书）。
                     * 
                     */
                    std::string GetCertificateType() const;

                    /**
                     * 设置证书类型。取值：CA或SVR（服务器证书）。
                     * @param _certificateType 证书类型。取值：CA或SVR（服务器证书）。
                     * 
                     */
                    void SetCertificateType(const std::string& _certificateType);

                    /**
                     * 判断参数 CertificateType 是否已赋值
                     * @return CertificateType 是否已赋值
                     * 
                     */
                    bool CertificateTypeHasBeenSet() const;

                    /**
                     * 获取监听器 ID，格式为 lst- 后接 8 位字母数字。
                     * @return ListenerId 监听器 ID，格式为 lst- 后接 8 位字母数字。
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置监听器 ID，格式为 lst- 后接 8 位字母数字。
                     * @param _listenerId 监听器 ID，格式为 lst- 后接 8 位字母数字。
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。
                     * @return LoadBalancerId 负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。
                     * @param _loadBalancerId 负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取本次读取的最大数据记录数量。取值: 1~100。默认值: 20。
                     * @return MaxResults 本次读取的最大数据记录数量。取值: 1~100。默认值: 20。
                     * 
                     */
                    uint64_t GetMaxResults() const;

                    /**
                     * 设置本次读取的最大数据记录数量。取值: 1~100。默认值: 20。
                     * @param _maxResults 本次读取的最大数据记录数量。取值: 1~100。默认值: 20。
                     * 
                     */
                    void SetMaxResults(const uint64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取下一次查询的令牌（Token）。取值：
第一次查询和没有下一次查询时，均无需填写。
如果有下一次查询，取值为上一次 API 调用返回的 NextToken 值。
                     * @return NextToken 下一次查询的令牌（Token）。取值：
第一次查询和没有下一次查询时，均无需填写。
如果有下一次查询，取值为上一次 API 调用返回的 NextToken 值。
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置下一次查询的令牌（Token）。取值：
第一次查询和没有下一次查询时，均无需填写。
如果有下一次查询，取值为上一次 API 调用返回的 NextToken 值。
                     * @param _nextToken 下一次查询的令牌（Token）。取值：
第一次查询和没有下一次查询时，均无需填写。
如果有下一次查询，取值为上一次 API 调用返回的 NextToken 值。
                     * 
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                private:

                    /**
                     * 证书类型。取值：CA或SVR（服务器证书）。
                     */
                    std::string m_certificateType;
                    bool m_certificateTypeHasBeenSet;

                    /**
                     * 监听器 ID，格式为 lst- 后接 8 位字母数字。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 本次读取的最大数据记录数量。取值: 1~100。默认值: 20。
                     */
                    uint64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * 下一次查询的令牌（Token）。取值：
第一次查询和没有下一次查询时，均无需填写。
如果有下一次查询，取值为上一次 API 调用返回的 NextToken 值。
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBELISTENERCERTIFICATESREQUEST_H_
