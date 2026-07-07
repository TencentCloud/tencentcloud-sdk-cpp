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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBELOADBALANCERDETAILRESPONSE_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBELOADBALANCERDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/LoadBalancerDetail.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DescribeLoadBalancerDetail返回参数结构体
                */
                class DescribeLoadBalancerDetailResponse : public AbstractModel
                {
                public:
                    DescribeLoadBalancerDetailResponse();
                    ~DescribeLoadBalancerDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡详细信息
                     * @return LoadBalancerDetail 负载均衡详细信息
                     * 
                     */
                    LoadBalancerDetail GetLoadBalancerDetail() const;

                    /**
                     * 判断参数 LoadBalancerDetail 是否已赋值
                     * @return LoadBalancerDetail 是否已赋值
                     * 
                     */
                    bool LoadBalancerDetailHasBeenSet() const;

                private:

                    /**
                     * 负载均衡详细信息
                     */
                    LoadBalancerDetail m_loadBalancerDetail;
                    bool m_loadBalancerDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBELOADBALANCERDETAILRESPONSE_H_
