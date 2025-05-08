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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYLOADBALANCERSPROJECTREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYLOADBALANCERSPROJECTREQUEST_H_

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
                * ModifyLoadBalancersProject请求参数结构体
                */
                class ModifyLoadBalancersProjectRequest : public AbstractModel
                {
                public:
                    ModifyLoadBalancersProjectRequest();
                    ~ModifyLoadBalancersProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取一个或多个待操作的负载均衡实例ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459) 接口查询。
列表支持最大长度为20。
                     * @return LoadBalancerIds 一个或多个待操作的负载均衡实例ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459) 接口查询。
列表支持最大长度为20。
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 设置一个或多个待操作的负载均衡实例ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459) 接口查询。
列表支持最大长度为20。
                     * @param _loadBalancerIds 一个或多个待操作的负载均衡实例ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459) 接口查询。
列表支持最大长度为20。
                     * 
                     */
                    void SetLoadBalancerIds(const std::vector<std::string>& _loadBalancerIds);

                    /**
                     * 判断参数 LoadBalancerIds 是否已赋值
                     * @return LoadBalancerIds 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdsHasBeenSet() const;

                    /**
                     * 获取项目ID。可以通过 [DescribeProject](https://cloud.tencent.com/document/api/651/78725) 接口获取。
                     * @return ProjectId 项目ID。可以通过 [DescribeProject](https://cloud.tencent.com/document/api/651/78725) 接口获取。
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目ID。可以通过 [DescribeProject](https://cloud.tencent.com/document/api/651/78725) 接口获取。
                     * @param _projectId 项目ID。可以通过 [DescribeProject](https://cloud.tencent.com/document/api/651/78725) 接口获取。
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 一个或多个待操作的负载均衡实例ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459) 接口查询。
列表支持最大长度为20。
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                    /**
                     * 项目ID。可以通过 [DescribeProject](https://cloud.tencent.com/document/api/651/78725) 接口获取。
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYLOADBALANCERSPROJECTREQUEST_H_
