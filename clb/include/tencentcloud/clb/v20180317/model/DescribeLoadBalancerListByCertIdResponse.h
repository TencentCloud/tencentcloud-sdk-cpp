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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCERLISTBYCERTIDRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCERLISTBYCERTIDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/CertIdRelatedWithLoadBalancers.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeLoadBalancerListByCertId返回参数结构体
                */
                class DescribeLoadBalancerListByCertIdResponse : public AbstractModel
                {
                public:
                    DescribeLoadBalancerListByCertIdResponse();
                    ~DescribeLoadBalancerListByCertIdResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取证书ID，以及与该证书ID关联的负载均衡实例列表
                     * @return CertSet 证书ID，以及与该证书ID关联的负载均衡实例列表
                     * 
                     */
                    std::vector<CertIdRelatedWithLoadBalancers> GetCertSet() const;

                    /**
                     * 判断参数 CertSet 是否已赋值
                     * @return CertSet 是否已赋值
                     * 
                     */
                    bool CertSetHasBeenSet() const;

                private:

                    /**
                     * 证书ID，以及与该证书ID关联的负载均衡实例列表
                     */
                    std::vector<CertIdRelatedWithLoadBalancers> m_certSet;
                    bool m_certSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCERLISTBYCERTIDRESPONSE_H_
