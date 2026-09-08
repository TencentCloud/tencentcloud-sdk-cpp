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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBERESOURCEGRAPHTKECLUSTERSTATUSRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBERESOURCEGRAPHTKECLUSTERSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ResourceGraphTkeClusterInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeResourceGraphTkeClusterStatus返回参数结构体
                */
                class DescribeResourceGraphTkeClusterStatusResponse : public AbstractModel
                {
                public:
                    DescribeResourceGraphTkeClusterStatusResponse();
                    ~DescribeResourceGraphTkeClusterStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>已接入的tke集群信息</p>
                     * @return ConnectedClusterInfos <p>已接入的tke集群信息</p>
                     * 
                     */
                    std::vector<ResourceGraphTkeClusterInfo> GetConnectedClusterInfos() const;

                    /**
                     * 判断参数 ConnectedClusterInfos 是否已赋值
                     * @return ConnectedClusterInfos 是否已赋值
                     * 
                     */
                    bool ConnectedClusterInfosHasBeenSet() const;

                    /**
                     * 获取<p>未接入的tke集群id</p>
                     * @return UnconnectedClusterIds <p>未接入的tke集群id</p>
                     * 
                     */
                    std::vector<std::string> GetUnconnectedClusterIds() const;

                    /**
                     * 判断参数 UnconnectedClusterIds 是否已赋值
                     * @return UnconnectedClusterIds 是否已赋值
                     * 
                     */
                    bool UnconnectedClusterIdsHasBeenSet() const;

                private:

                    /**
                     * <p>已接入的tke集群信息</p>
                     */
                    std::vector<ResourceGraphTkeClusterInfo> m_connectedClusterInfos;
                    bool m_connectedClusterInfosHasBeenSet;

                    /**
                     * <p>未接入的tke集群id</p>
                     */
                    std::vector<std::string> m_unconnectedClusterIds;
                    bool m_unconnectedClusterIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBERESOURCEGRAPHTKECLUSTERSTATUSRESPONSE_H_
