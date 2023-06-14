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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_ADDCLUSTERCIDRREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_ADDCLUSTERCIDRREQUEST_H_

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
                * AddClusterCIDR请求参数结构体
                */
                class AddClusterCIDRRequest : public AbstractModel
                {
                public:
                    AddClusterCIDRRequest();
                    ~AddClusterCIDRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
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
                     * 获取增加的ClusterCIDR
                     * @return ClusterCIDRs 增加的ClusterCIDR
                     * 
                     */
                    std::vector<std::string> GetClusterCIDRs() const;

                    /**
                     * 设置增加的ClusterCIDR
                     * @param _clusterCIDRs 增加的ClusterCIDR
                     * 
                     */
                    void SetClusterCIDRs(const std::vector<std::string>& _clusterCIDRs);

                    /**
                     * 判断参数 ClusterCIDRs 是否已赋值
                     * @return ClusterCIDRs 是否已赋值
                     * 
                     */
                    bool ClusterCIDRsHasBeenSet() const;

                    /**
                     * 获取是否忽略ClusterCIDR与VPC路由表的冲突
                     * @return IgnoreClusterCIDRConflict 是否忽略ClusterCIDR与VPC路由表的冲突
                     * 
                     */
                    bool GetIgnoreClusterCIDRConflict() const;

                    /**
                     * 设置是否忽略ClusterCIDR与VPC路由表的冲突
                     * @param _ignoreClusterCIDRConflict 是否忽略ClusterCIDR与VPC路由表的冲突
                     * 
                     */
                    void SetIgnoreClusterCIDRConflict(const bool& _ignoreClusterCIDRConflict);

                    /**
                     * 判断参数 IgnoreClusterCIDRConflict 是否已赋值
                     * @return IgnoreClusterCIDRConflict 是否已赋值
                     * 
                     */
                    bool IgnoreClusterCIDRConflictHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 增加的ClusterCIDR
                     */
                    std::vector<std::string> m_clusterCIDRs;
                    bool m_clusterCIDRsHasBeenSet;

                    /**
                     * 是否忽略ClusterCIDR与VPC路由表的冲突
                     */
                    bool m_ignoreClusterCIDRConflict;
                    bool m_ignoreClusterCIDRConflictHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_ADDCLUSTERCIDRREQUEST_H_
