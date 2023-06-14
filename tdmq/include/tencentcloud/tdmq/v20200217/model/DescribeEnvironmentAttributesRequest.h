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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEENVIRONMENTATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEENVIRONMENTATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeEnvironmentAttributes请求参数结构体
                */
                class DescribeEnvironmentAttributesRequest : public AbstractModel
                {
                public:
                    DescribeEnvironmentAttributesRequest();
                    ~DescribeEnvironmentAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境（命名空间）名称。
                     * @return EnvironmentId 环境（命名空间）名称。
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置环境（命名空间）名称。
                     * @param _environmentId 环境（命名空间）名称。
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Pulsar 集群的ID
                     * @return ClusterId Pulsar 集群的ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Pulsar 集群的ID
                     * @param _clusterId Pulsar 集群的ID
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
                     * 环境（命名空间）名称。
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Pulsar 集群的ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEENVIRONMENTATTRIBUTESREQUEST_H_
