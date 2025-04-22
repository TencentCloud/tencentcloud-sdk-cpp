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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCERTRAFFICRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCERTRAFFICRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/LoadBalancerTraffic.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeLoadBalancerTraffic返回参数结构体
                */
                class DescribeLoadBalancerTrafficResponse : public AbstractModel
                {
                public:
                    DescribeLoadBalancerTrafficResponse();
                    ~DescribeLoadBalancerTrafficResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取按出带宽从高到低排序后的负载均衡信息。
                     * @return LoadBalancerTraffic 按出带宽从高到低排序后的负载均衡信息。
                     * 
                     */
                    std::vector<LoadBalancerTraffic> GetLoadBalancerTraffic() const;

                    /**
                     * 判断参数 LoadBalancerTraffic 是否已赋值
                     * @return LoadBalancerTraffic 是否已赋值
                     * 
                     */
                    bool LoadBalancerTrafficHasBeenSet() const;

                private:

                    /**
                     * 按出带宽从高到低排序后的负载均衡信息。
                     */
                    std::vector<LoadBalancerTraffic> m_loadBalancerTraffic;
                    bool m_loadBalancerTrafficHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCERTRAFFICRESPONSE_H_
