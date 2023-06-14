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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYCLUSTERMACHINEREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYCLUSTERMACHINEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/MachineInfo.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * ModifyClusterMachine请求参数结构体
                */
                class ModifyClusterMachineRequest : public AbstractModel
                {
                public:
                    ModifyClusterMachineRequest();
                    ~ModifyClusterMachineRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群id
                     * @return ClusterId 集群id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
                     * @param _clusterId 集群id
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
                     * 获取svr占用的机器
                     * @return ServerList svr占用的机器
                     * 
                     */
                    std::vector<MachineInfo> GetServerList() const;

                    /**
                     * 设置svr占用的机器
                     * @param _serverList svr占用的机器
                     * 
                     */
                    void SetServerList(const std::vector<MachineInfo>& _serverList);

                    /**
                     * 判断参数 ServerList 是否已赋值
                     * @return ServerList 是否已赋值
                     * 
                     */
                    bool ServerListHasBeenSet() const;

                    /**
                     * 获取proxy占用的机器
                     * @return ProxyList proxy占用的机器
                     * 
                     */
                    std::vector<MachineInfo> GetProxyList() const;

                    /**
                     * 设置proxy占用的机器
                     * @param _proxyList proxy占用的机器
                     * 
                     */
                    void SetProxyList(const std::vector<MachineInfo>& _proxyList);

                    /**
                     * 判断参数 ProxyList 是否已赋值
                     * @return ProxyList 是否已赋值
                     * 
                     */
                    bool ProxyListHasBeenSet() const;

                    /**
                     * 获取集群类型1共享集群2独占集群
                     * @return ClusterType 集群类型1共享集群2独占集群
                     * 
                     */
                    int64_t GetClusterType() const;

                    /**
                     * 设置集群类型1共享集群2独占集群
                     * @param _clusterType 集群类型1共享集群2独占集群
                     * 
                     */
                    void SetClusterType(const int64_t& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * svr占用的机器
                     */
                    std::vector<MachineInfo> m_serverList;
                    bool m_serverListHasBeenSet;

                    /**
                     * proxy占用的机器
                     */
                    std::vector<MachineInfo> m_proxyList;
                    bool m_proxyListHasBeenSet;

                    /**
                     * 集群类型1共享集群2独占集群
                     */
                    int64_t m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYCLUSTERMACHINEREQUEST_H_
