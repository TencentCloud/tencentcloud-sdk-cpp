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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEHPCCLUSTERSRESPONSE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEHPCCLUSTERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/HpcClusterInfo.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeHpcClusters返回参数结构体
                */
                class DescribeHpcClustersResponse : public AbstractModel
                {
                public:
                    DescribeHpcClustersResponse();
                    ~DescribeHpcClustersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取高性能计算集群信息。
                     * @return HpcClusterSet 高性能计算集群信息。
                     * 
                     */
                    std::vector<HpcClusterInfo> GetHpcClusterSet() const;

                    /**
                     * 判断参数 HpcClusterSet 是否已赋值
                     * @return HpcClusterSet 是否已赋值
                     * 
                     */
                    bool HpcClusterSetHasBeenSet() const;

                    /**
                     * 获取高性能计算集群总数。
                     * @return TotalCount 高性能计算集群总数。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 高性能计算集群信息。
                     */
                    std::vector<HpcClusterInfo> m_hpcClusterSet;
                    bool m_hpcClusterSetHasBeenSet;

                    /**
                     * 高性能计算集群总数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEHPCCLUSTERSRESPONSE_H_
