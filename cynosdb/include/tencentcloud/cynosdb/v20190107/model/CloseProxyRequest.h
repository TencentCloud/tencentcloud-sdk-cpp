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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLOSEPROXYREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLOSEPROXYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * CloseProxy请求参数结构体
                */
                class CloseProxyRequest : public AbstractModel
                {
                public:
                    CloseProxyRequest();
                    ~CloseProxyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
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
                     * 获取数据库代理组ID
                     * @return ProxyGroupId 数据库代理组ID
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置数据库代理组ID
                     * @param _proxyGroupId 数据库代理组ID
                     * 
                     */
                    void SetProxyGroupId(const std::string& _proxyGroupId);

                    /**
                     * 判断参数 ProxyGroupId 是否已赋值
                     * @return ProxyGroupId 是否已赋值
                     * 
                     */
                    bool ProxyGroupIdHasBeenSet() const;

                    /**
                     * 获取是否只关闭读写分离，取值：是 "true","false"
                     * @return OnlyCloseRW 是否只关闭读写分离，取值：是 "true","false"
                     * 
                     */
                    bool GetOnlyCloseRW() const;

                    /**
                     * 设置是否只关闭读写分离，取值：是 "true","false"
                     * @param _onlyCloseRW 是否只关闭读写分离，取值：是 "true","false"
                     * 
                     */
                    void SetOnlyCloseRW(const bool& _onlyCloseRW);

                    /**
                     * 判断参数 OnlyCloseRW 是否已赋值
                     * @return OnlyCloseRW 是否已赋值
                     * 
                     */
                    bool OnlyCloseRWHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 数据库代理组ID
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * 是否只关闭读写分离，取值：是 "true","false"
                     */
                    bool m_onlyCloseRW;
                    bool m_onlyCloseRWHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLOSEPROXYREQUEST_H_
