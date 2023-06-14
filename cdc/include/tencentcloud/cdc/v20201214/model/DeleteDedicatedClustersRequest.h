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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_DELETEDEDICATEDCLUSTERSREQUEST_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_DELETEDEDICATEDCLUSTERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * DeleteDedicatedClusters请求参数结构体
                */
                class DeleteDedicatedClustersRequest : public AbstractModel
                {
                public:
                    DeleteDedicatedClustersRequest();
                    ~DeleteDedicatedClustersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要删除的专用集群id
                     * @return DedicatedClusterIds 要删除的专用集群id
                     * 
                     */
                    std::vector<std::string> GetDedicatedClusterIds() const;

                    /**
                     * 设置要删除的专用集群id
                     * @param _dedicatedClusterIds 要删除的专用集群id
                     * 
                     */
                    void SetDedicatedClusterIds(const std::vector<std::string>& _dedicatedClusterIds);

                    /**
                     * 判断参数 DedicatedClusterIds 是否已赋值
                     * @return DedicatedClusterIds 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdsHasBeenSet() const;

                private:

                    /**
                     * 要删除的专用集群id
                     */
                    std::vector<std::string> m_dedicatedClusterIds;
                    bool m_dedicatedClusterIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_DELETEDEDICATEDCLUSTERSREQUEST_H_
