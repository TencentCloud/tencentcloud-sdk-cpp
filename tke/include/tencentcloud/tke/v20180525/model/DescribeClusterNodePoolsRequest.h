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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERNODEPOOLSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERNODEPOOLSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/Filter.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeClusterNodePools请求参数结构体
                */
                class DescribeClusterNodePoolsRequest : public AbstractModel
                {
                public:
                    DescribeClusterNodePoolsRequest();
                    ~DescribeClusterNodePoolsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ClusterId（集群id）
                     * @return ClusterId ClusterId（集群id）
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置ClusterId（集群id）
                     * @param _clusterId ClusterId（集群id）
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
                     * 获取· "Name":"NodePoolsName","Values": ["test"]
    按照【节点池名】进行过滤。
    类型：String
    必选：否

·  "Name":"NodePoolsId","Values": ["np-d2mb2zb"]
    按照【节点池id】进行过滤。
    类型：String
    必选：否

·  "Name":"Tags","Values": ["product:tke"]
    按照【标签键值对】进行过滤。
    类型：String
    必选：否
                     * @return Filters · "Name":"NodePoolsName","Values": ["test"]
    按照【节点池名】进行过滤。
    类型：String
    必选：否

·  "Name":"NodePoolsId","Values": ["np-d2mb2zb"]
    按照【节点池id】进行过滤。
    类型：String
    必选：否

·  "Name":"Tags","Values": ["product:tke"]
    按照【标签键值对】进行过滤。
    类型：String
    必选：否
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置· "Name":"NodePoolsName","Values": ["test"]
    按照【节点池名】进行过滤。
    类型：String
    必选：否

·  "Name":"NodePoolsId","Values": ["np-d2mb2zb"]
    按照【节点池id】进行过滤。
    类型：String
    必选：否

·  "Name":"Tags","Values": ["product:tke"]
    按照【标签键值对】进行过滤。
    类型：String
    必选：否
                     * @param _filters · "Name":"NodePoolsName","Values": ["test"]
    按照【节点池名】进行过滤。
    类型：String
    必选：否

·  "Name":"NodePoolsId","Values": ["np-d2mb2zb"]
    按照【节点池id】进行过滤。
    类型：String
    必选：否

·  "Name":"Tags","Values": ["product:tke"]
    按照【标签键值对】进行过滤。
    类型：String
    必选：否
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * ClusterId（集群id）
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * · "Name":"NodePoolsName","Values": ["test"]
    按照【节点池名】进行过滤。
    类型：String
    必选：否

·  "Name":"NodePoolsId","Values": ["np-d2mb2zb"]
    按照【节点池id】进行过滤。
    类型：String
    必选：否

·  "Name":"Tags","Values": ["product:tke"]
    按照【标签键值对】进行过滤。
    类型：String
    必选：否
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERNODEPOOLSREQUEST_H_
