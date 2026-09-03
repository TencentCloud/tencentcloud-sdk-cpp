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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_LISTREGIONLBSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_LISTREGIONLBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * ListRegionLbs请求参数结构体
                */
                class ListRegionLbsRequest : public AbstractModel
                {
                public:
                    ListRegionLbsRequest();
                    ~ListRegionLbsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>TKE 集群 ID，用于查询集群所属 VPC，进而过滤同 VPC 下的独占型 CLB，例如 cls-xxxxxxxx</p>
                     * @return ClusterId <p>TKE 集群 ID，用于查询集群所属 VPC，进而过滤同 VPC 下的独占型 CLB，例如 cls-xxxxxxxx</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>TKE 集群 ID，用于查询集群所属 VPC，进而过滤同 VPC 下的独占型 CLB，例如 cls-xxxxxxxx</p>
                     * @param _clusterId <p>TKE 集群 ID，用于查询集群所属 VPC，进而过滤同 VPC 下的独占型 CLB，例如 cls-xxxxxxxx</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>负载均衡实例 ID 列表，最多 20 个；不传则查询同地域全部实例</p>
                     * @return LoadBalancerIds <p>负载均衡实例 ID 列表，最多 20 个；不传则查询同地域全部实例</p>
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 设置<p>负载均衡实例 ID 列表，最多 20 个；不传则查询同地域全部实例</p>
                     * @param _loadBalancerIds <p>负载均衡实例 ID 列表，最多 20 个；不传则查询同地域全部实例</p>
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
                     * 获取<p>分页偏移量，从 0 开始，默认 0</p>
                     * @return Offset <p>分页偏移量，从 0 开始，默认 0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量，从 0 开始，默认 0</p>
                     * @param _offset <p>分页偏移量，从 0 开始，默认 0</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>分页每页条数，默认 20，最大 100</p>
                     * @return Limit <p>分页每页条数，默认 20，最大 100</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>分页每页条数，默认 20，最大 100</p>
                     * @param _limit <p>分页每页条数，默认 20，最大 100</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p>TKE 集群 ID，用于查询集群所属 VPC，进而过滤同 VPC 下的独占型 CLB，例如 cls-xxxxxxxx</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>负载均衡实例 ID 列表，最多 20 个；不传则查询同地域全部实例</p>
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                    /**
                     * <p>分页偏移量，从 0 开始，默认 0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>分页每页条数，默认 20，最大 100</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_LISTREGIONLBSREQUEST_H_
