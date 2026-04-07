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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERSCHEDULERPOLICYREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERSCHEDULERPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/SchedulerPolicyConfig.h>
#include <tencentcloud/tke/v20180525/model/ClientConnection.h>
#include <tencentcloud/tke/v20180525/model/Extenders.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * ModifyClusterSchedulerPolicy请求参数结构体
                */
                class ModifyClusterSchedulerPolicyRequest : public AbstractModel
                {
                public:
                    ModifyClusterSchedulerPolicyRequest();
                    ~ModifyClusterSchedulerPolicyRequest() = default;
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
                     * 获取SchedulerPolicy配置信息
                     * @return SchedulerPolicyConfig SchedulerPolicy配置信息
                     * 
                     */
                    std::vector<SchedulerPolicyConfig> GetSchedulerPolicyConfig() const;

                    /**
                     * 设置SchedulerPolicy配置信息
                     * @param _schedulerPolicyConfig SchedulerPolicy配置信息
                     * 
                     */
                    void SetSchedulerPolicyConfig(const std::vector<SchedulerPolicyConfig>& _schedulerPolicyConfig);

                    /**
                     * 判断参数 SchedulerPolicyConfig 是否已赋值
                     * @return SchedulerPolicyConfig 是否已赋值
                     * 
                     */
                    bool SchedulerPolicyConfigHasBeenSet() const;

                    /**
                     * 获取客户端连接
                     * @return ClientConnection 客户端连接
                     * 
                     */
                    ClientConnection GetClientConnection() const;

                    /**
                     * 设置客户端连接
                     * @param _clientConnection 客户端连接
                     * 
                     */
                    void SetClientConnection(const ClientConnection& _clientConnection);

                    /**
                     * 判断参数 ClientConnection 是否已赋值
                     * @return ClientConnection 是否已赋值
                     * 
                     */
                    bool ClientConnectionHasBeenSet() const;

                    /**
                     * 获取扩展调度器
                     * @return Extenders 扩展调度器
                     * 
                     */
                    std::vector<Extenders> GetExtenders() const;

                    /**
                     * 设置扩展调度器
                     * @param _extenders 扩展调度器
                     * 
                     */
                    void SetExtenders(const std::vector<Extenders>& _extenders);

                    /**
                     * 判断参数 Extenders 是否已赋值
                     * @return Extenders 是否已赋值
                     * 
                     */
                    bool ExtendersHasBeenSet() const;

                    /**
                     * 获取高性能模式
                     * @return HighPerformance 高性能模式
                     * 
                     */
                    bool GetHighPerformance() const;

                    /**
                     * 设置高性能模式
                     * @param _highPerformance 高性能模式
                     * 
                     */
                    void SetHighPerformance(const bool& _highPerformance);

                    /**
                     * 判断参数 HighPerformance 是否已赋值
                     * @return HighPerformance 是否已赋值
                     * 
                     */
                    bool HighPerformanceHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * SchedulerPolicy配置信息
                     */
                    std::vector<SchedulerPolicyConfig> m_schedulerPolicyConfig;
                    bool m_schedulerPolicyConfigHasBeenSet;

                    /**
                     * 客户端连接
                     */
                    ClientConnection m_clientConnection;
                    bool m_clientConnectionHasBeenSet;

                    /**
                     * 扩展调度器
                     */
                    std::vector<Extenders> m_extenders;
                    bool m_extendersHasBeenSet;

                    /**
                     * 高性能模式
                     */
                    bool m_highPerformance;
                    bool m_highPerformanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERSCHEDULERPOLICYREQUEST_H_
