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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCERTRAFFICREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCERTRAFFICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeLoadBalancerTraffic请求参数结构体
                */
                class DescribeLoadBalancerTrafficRequest : public AbstractModel
                {
                public:
                    DescribeLoadBalancerTrafficRequest();
                    ~DescribeLoadBalancerTrafficRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡所在地域，不传默认返回所有地域负载均衡。
                     * @return LoadBalancerRegion 负载均衡所在地域，不传默认返回所有地域负载均衡。
                     * 
                     */
                    std::string GetLoadBalancerRegion() const;

                    /**
                     * 设置负载均衡所在地域，不传默认返回所有地域负载均衡。
                     * @param _loadBalancerRegion 负载均衡所在地域，不传默认返回所有地域负载均衡。
                     * 
                     */
                    void SetLoadBalancerRegion(const std::string& _loadBalancerRegion);

                    /**
                     * 判断参数 LoadBalancerRegion 是否已赋值
                     * @return LoadBalancerRegion 是否已赋值
                     * 
                     */
                    bool LoadBalancerRegionHasBeenSet() const;

                private:

                    /**
                     * 负载均衡所在地域，不传默认返回所有地域负载均衡。
                     */
                    std::string m_loadBalancerRegion;
                    bool m_loadBalancerRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCERTRAFFICREQUEST_H_
