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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CREATELOADBALANCERSNATIPSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CREATELOADBALANCERSNATIPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/SnatIp.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * CreateLoadBalancerSnatIps请求参数结构体
                */
                class CreateLoadBalancerSnatIpsRequest : public AbstractModel
                {
                public:
                    CreateLoadBalancerSnatIpsRequest();
                    ~CreateLoadBalancerSnatIpsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡唯一性ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口查询。例如：lb-12345678。
                     * @return LoadBalancerId 负载均衡唯一性ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口查询。例如：lb-12345678。
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡唯一性ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口查询。例如：lb-12345678。
                     * @param _loadBalancerId 负载均衡唯一性ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口查询。例如：lb-12345678。
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
                     * 获取添加的SnatIp信息，可指定IP申请，或者指定子网自动申请。可以通过 [DescribeSubnets](https://cloud.tencent.com/document/api/215/15784) 查询获取，单个CLB实例可申请的默认上限为10个。
                     * @return SnatIps 添加的SnatIp信息，可指定IP申请，或者指定子网自动申请。可以通过 [DescribeSubnets](https://cloud.tencent.com/document/api/215/15784) 查询获取，单个CLB实例可申请的默认上限为10个。
                     * 
                     */
                    std::vector<SnatIp> GetSnatIps() const;

                    /**
                     * 设置添加的SnatIp信息，可指定IP申请，或者指定子网自动申请。可以通过 [DescribeSubnets](https://cloud.tencent.com/document/api/215/15784) 查询获取，单个CLB实例可申请的默认上限为10个。
                     * @param _snatIps 添加的SnatIp信息，可指定IP申请，或者指定子网自动申请。可以通过 [DescribeSubnets](https://cloud.tencent.com/document/api/215/15784) 查询获取，单个CLB实例可申请的默认上限为10个。
                     * 
                     */
                    void SetSnatIps(const std::vector<SnatIp>& _snatIps);

                    /**
                     * 判断参数 SnatIps 是否已赋值
                     * @return SnatIps 是否已赋值
                     * 
                     */
                    bool SnatIpsHasBeenSet() const;

                    /**
                     * 获取添加的SnatIp的个数，可与SnatIps一起使用，但若指定IP时，则不能指定创建的SnatIp个数。默认值为1，数量上限与用户配置有关，默认上限为10。
                     * @return Number 添加的SnatIp的个数，可与SnatIps一起使用，但若指定IP时，则不能指定创建的SnatIp个数。默认值为1，数量上限与用户配置有关，默认上限为10。
                     * 
                     */
                    uint64_t GetNumber() const;

                    /**
                     * 设置添加的SnatIp的个数，可与SnatIps一起使用，但若指定IP时，则不能指定创建的SnatIp个数。默认值为1，数量上限与用户配置有关，默认上限为10。
                     * @param _number 添加的SnatIp的个数，可与SnatIps一起使用，但若指定IP时，则不能指定创建的SnatIp个数。默认值为1，数量上限与用户配置有关，默认上限为10。
                     * 
                     */
                    void SetNumber(const uint64_t& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                private:

                    /**
                     * 负载均衡唯一性ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口查询。例如：lb-12345678。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 添加的SnatIp信息，可指定IP申请，或者指定子网自动申请。可以通过 [DescribeSubnets](https://cloud.tencent.com/document/api/215/15784) 查询获取，单个CLB实例可申请的默认上限为10个。
                     */
                    std::vector<SnatIp> m_snatIps;
                    bool m_snatIpsHasBeenSet;

                    /**
                     * 添加的SnatIp的个数，可与SnatIps一起使用，但若指定IP时，则不能指定创建的SnatIp个数。默认值为1，数量上限与用户配置有关，默认上限为10。
                     */
                    uint64_t m_number;
                    bool m_numberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CREATELOADBALANCERSNATIPSREQUEST_H_
