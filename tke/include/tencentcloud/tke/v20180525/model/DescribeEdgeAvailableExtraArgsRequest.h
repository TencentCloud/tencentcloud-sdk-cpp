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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEDGEAVAILABLEEXTRAARGSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEDGEAVAILABLEEXTRAARGSREQUEST_H_

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
                * DescribeEdgeAvailableExtraArgs请求参数结构体
                */
                class DescribeEdgeAvailableExtraArgsRequest : public AbstractModel
                {
                public:
                    DescribeEdgeAvailableExtraArgsRequest();
                    ~DescribeEdgeAvailableExtraArgsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群版本
                     * @return ClusterVersion 集群版本
                     * 
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 设置集群版本
                     * @param _clusterVersion 集群版本
                     * 
                     */
                    void SetClusterVersion(const std::string& _clusterVersion);

                    /**
                     * 判断参数 ClusterVersion 是否已赋值
                     * @return ClusterVersion 是否已赋值
                     * 
                     */
                    bool ClusterVersionHasBeenSet() const;

                private:

                    /**
                     * 集群版本
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEDGEAVAILABLEEXTRAARGSREQUEST_H_
