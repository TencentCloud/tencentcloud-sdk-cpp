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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEDBCUSTOMCLUSTERKUBECONFIGREQUEST_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEDBCUSTOMCLUSTERKUBECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * DescribeDBCustomClusterKubeconfig请求参数结构体
                */
                class DescribeDBCustomClusterKubeconfigRequest : public AbstractModel
                {
                public:
                    DescribeDBCustomClusterKubeconfigRequest();
                    ~DescribeDBCustomClusterKubeconfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群ID</p><p>入参限制：必须为当前节点拥有的DB Custom 集群</p>
                     * @return ClusterId <p>集群ID</p><p>入参限制：必须为当前节点拥有的DB Custom 集群</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID</p><p>入参限制：必须为当前节点拥有的DB Custom 集群</p>
                     * @param _clusterId <p>集群ID</p><p>入参限制：必须为当前节点拥有的DB Custom 集群</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID</p><p>入参限制：必须为当前节点拥有的DB Custom 集群</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEDBCUSTOMCLUSTERKUBECONFIGREQUEST_H_
