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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBECLUSTERDETAILRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBECLUSTERDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/Cluster.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeClusterDetail返回参数结构体
                */
                class DescribeClusterDetailResponse : public AbstractModel
                {
                public:
                    DescribeClusterDetailResponse();
                    ~DescribeClusterDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群的详细信息
                     * @return ClusterSet 集群的详细信息
                     * 
                     */
                    Cluster GetClusterSet() const;

                    /**
                     * 判断参数 ClusterSet 是否已赋值
                     * @return ClusterSet 是否已赋值
                     * 
                     */
                    bool ClusterSetHasBeenSet() const;

                private:

                    /**
                     * 集群的详细信息
                     */
                    Cluster m_clusterSet;
                    bool m_clusterSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBECLUSTERDETAILRESPONSE_H_
