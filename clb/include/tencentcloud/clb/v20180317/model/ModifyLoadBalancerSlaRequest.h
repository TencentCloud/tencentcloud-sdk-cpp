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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYLOADBALANCERSLAREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYLOADBALANCERSLAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/SlaUpdateParam.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * ModifyLoadBalancerSla请求参数结构体
                */
                class ModifyLoadBalancerSlaRequest : public AbstractModel
                {
                public:
                    ModifyLoadBalancerSlaRequest();
                    ~ModifyLoadBalancerSlaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡实例信息
                     * @return LoadBalancerSla 负载均衡实例信息
                     */
                    std::vector<SlaUpdateParam> GetLoadBalancerSla() const;

                    /**
                     * 设置负载均衡实例信息
                     * @param LoadBalancerSla 负载均衡实例信息
                     */
                    void SetLoadBalancerSla(const std::vector<SlaUpdateParam>& _loadBalancerSla);

                    /**
                     * 判断参数 LoadBalancerSla 是否已赋值
                     * @return LoadBalancerSla 是否已赋值
                     */
                    bool LoadBalancerSlaHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例信息
                     */
                    std::vector<SlaUpdateParam> m_loadBalancerSla;
                    bool m_loadBalancerSlaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYLOADBALANCERSLAREQUEST_H_
