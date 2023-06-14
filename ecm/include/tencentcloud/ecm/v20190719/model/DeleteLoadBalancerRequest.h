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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DELETELOADBALANCERREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DELETELOADBALANCERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DeleteLoadBalancer请求参数结构体
                */
                class DeleteLoadBalancerRequest : public AbstractModel
                {
                public:
                    DeleteLoadBalancerRequest();
                    ~DeleteLoadBalancerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要删除的负载均衡实例 ID数组，数组大小最大支持20
                     * @return LoadBalancerIds 要删除的负载均衡实例 ID数组，数组大小最大支持20
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 设置要删除的负载均衡实例 ID数组，数组大小最大支持20
                     * @param _loadBalancerIds 要删除的负载均衡实例 ID数组，数组大小最大支持20
                     * 
                     */
                    void SetLoadBalancerIds(const std::vector<std::string>& _loadBalancerIds);

                    /**
                     * 判断参数 LoadBalancerIds 是否已赋值
                     * @return LoadBalancerIds 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdsHasBeenSet() const;

                private:

                    /**
                     * 要删除的负载均衡实例 ID数组，数组大小最大支持20
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DELETELOADBALANCERREQUEST_H_
