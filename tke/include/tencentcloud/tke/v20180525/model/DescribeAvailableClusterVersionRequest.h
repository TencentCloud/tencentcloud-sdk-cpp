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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEAVAILABLECLUSTERVERSIONREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEAVAILABLECLUSTERVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeAvailableClusterVersion请求参数结构体
                */
                class DescribeAvailableClusterVersionRequest : public AbstractModel
                {
                public:
                    DescribeAvailableClusterVersionRequest();
                    ~DescribeAvailableClusterVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群 Id。若只查询某个集群可升级的版本，需填写此项。
                     * @return ClusterId 集群 Id。若只查询某个集群可升级的版本，需填写此项。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群 Id。若只查询某个集群可升级的版本，需填写此项。
                     * @param _clusterId 集群 Id。若只查询某个集群可升级的版本，需填写此项。
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
                     * 获取集群 Id 列表。若查询多个集群可升级的版本，需填写此项。
                     * @return ClusterIds 集群 Id 列表。若查询多个集群可升级的版本，需填写此项。
                     * 
                     */
                    std::vector<std::string> GetClusterIds() const;

                    /**
                     * 设置集群 Id 列表。若查询多个集群可升级的版本，需填写此项。
                     * @param _clusterIds 集群 Id 列表。若查询多个集群可升级的版本，需填写此项。
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
                     * 集群 Id。若只查询某个集群可升级的版本，需填写此项。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群 Id 列表。若查询多个集群可升级的版本，需填写此项。
                     */
                    std::vector<std::string> m_clusterIds;
                    bool m_clusterIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEAVAILABLECLUSTERVERSIONREQUEST_H_
