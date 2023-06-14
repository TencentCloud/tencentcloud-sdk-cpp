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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DELETEHPCCLUSTERSREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DELETEHPCCLUSTERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DeleteHpcClusters请求参数结构体
                */
                class DeleteHpcClustersRequest : public AbstractModel
                {
                public:
                    DeleteHpcClustersRequest();
                    ~DeleteHpcClustersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取高性能计算集群ID列表。
                     * @return HpcClusterIds 高性能计算集群ID列表。
                     * 
                     */
                    std::vector<std::string> GetHpcClusterIds() const;

                    /**
                     * 设置高性能计算集群ID列表。
                     * @param _hpcClusterIds 高性能计算集群ID列表。
                     * 
                     */
                    void SetHpcClusterIds(const std::vector<std::string>& _hpcClusterIds);

                    /**
                     * 判断参数 HpcClusterIds 是否已赋值
                     * @return HpcClusterIds 是否已赋值
                     * 
                     */
                    bool HpcClusterIdsHasBeenSet() const;

                private:

                    /**
                     * 高性能计算集群ID列表。
                     */
                    std::vector<std::string> m_hpcClusterIds;
                    bool m_hpcClusterIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DELETEHPCCLUSTERSREQUEST_H_
