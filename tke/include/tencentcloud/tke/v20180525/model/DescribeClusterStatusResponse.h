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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERSTATUSRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ClusterStatus.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeClusterStatus返回参数结构体
                */
                class DescribeClusterStatusResponse : public AbstractModel
                {
                public:
                    DescribeClusterStatusResponse();
                    ~DescribeClusterStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群状态列表
                     * @return ClusterStatusSet 集群状态列表
                     * 
                     */
                    std::vector<ClusterStatus> GetClusterStatusSet() const;

                    /**
                     * 判断参数 ClusterStatusSet 是否已赋值
                     * @return ClusterStatusSet 是否已赋值
                     * 
                     */
                    bool ClusterStatusSetHasBeenSet() const;

                    /**
                     * 获取集群个数
                     * @return TotalCount 集群个数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 集群状态列表
                     */
                    std::vector<ClusterStatus> m_clusterStatusSet;
                    bool m_clusterStatusSetHasBeenSet;

                    /**
                     * 集群个数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERSTATUSRESPONSE_H_
