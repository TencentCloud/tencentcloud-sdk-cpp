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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERSECURITYREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERSECURITYREQUEST_H_

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
                * DescribeClusterSecurity请求参数结构体
                */
                class DescribeClusterSecurityRequest : public AbstractModel
                {
                public:
                    DescribeClusterSecurityRequest();
                    ~DescribeClusterSecurityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群 ID，请填写 查询集群列表 接口中返回的 clusterId 字段
                     * @return ClusterId 集群 ID，请填写 查询集群列表 接口中返回的 clusterId 字段
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群 ID，请填写 查询集群列表 接口中返回的 clusterId 字段
                     * @param _clusterId 集群 ID，请填写 查询集群列表 接口中返回的 clusterId 字段
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
                     * 集群 ID，请填写 查询集群列表 接口中返回的 clusterId 字段
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERSECURITYREQUEST_H_
