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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEPROXYENDPOINTSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEPROXYENDPOINTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ProxyEndPointItem.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * CreateProxyEndPoints请求参数结构体
                */
                class CreateProxyEndPointsRequest : public AbstractModel
                {
                public:
                    CreateProxyEndPointsRequest();
                    ~CreateProxyEndPointsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群 ID。</p>
                     * @return ClusterId <p>集群 ID。</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群 ID。</p>
                     * @param _clusterId <p>集群 ID。</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>proxyEndPoint的参数配置</p>
                     * @return ProxyEndPointItems <p>proxyEndPoint的参数配置</p>
                     * 
                     */
                    std::vector<ProxyEndPointItem> GetProxyEndPointItems() const;

                    /**
                     * 设置<p>proxyEndPoint的参数配置</p>
                     * @param _proxyEndPointItems <p>proxyEndPoint的参数配置</p>
                     * 
                     */
                    void SetProxyEndPointItems(const std::vector<ProxyEndPointItem>& _proxyEndPointItems);

                    /**
                     * 判断参数 ProxyEndPointItems 是否已赋值
                     * @return ProxyEndPointItems 是否已赋值
                     * 
                     */
                    bool ProxyEndPointItemsHasBeenSet() const;

                private:

                    /**
                     * <p>集群 ID。</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>proxyEndPoint的参数配置</p>
                     */
                    std::vector<ProxyEndPointItem> m_proxyEndPointItems;
                    bool m_proxyEndPointItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEPROXYENDPOINTSREQUEST_H_
