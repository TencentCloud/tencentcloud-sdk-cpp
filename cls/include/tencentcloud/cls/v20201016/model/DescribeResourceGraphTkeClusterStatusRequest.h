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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBERESOURCEGRAPHTKECLUSTERSTATUSREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBERESOURCEGRAPHTKECLUSTERSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeResourceGraphTkeClusterStatus请求参数结构体
                */
                class DescribeResourceGraphTkeClusterStatusRequest : public AbstractModel
                {
                public:
                    DescribeResourceGraphTkeClusterStatusRequest();
                    ~DescribeResourceGraphTkeClusterStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>待检测的tke集群id</p>
                     * @return ClusterIds <p>待检测的tke集群id</p>
                     * 
                     */
                    std::vector<std::string> GetClusterIds() const;

                    /**
                     * 设置<p>待检测的tke集群id</p>
                     * @param _clusterIds <p>待检测的tke集群id</p>
                     * 
                     */
                    void SetClusterIds(const std::vector<std::string>& _clusterIds);

                    /**
                     * 判断参数 ClusterIds 是否已赋值
                     * @return ClusterIds 是否已赋值
                     * 
                     */
                    bool ClusterIdsHasBeenSet() const;

                private:

                    /**
                     * <p>待检测的tke集群id</p>
                     */
                    std::vector<std::string> m_clusterIds;
                    bool m_clusterIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBERESOURCEGRAPHTKECLUSTERSTATUSREQUEST_H_
