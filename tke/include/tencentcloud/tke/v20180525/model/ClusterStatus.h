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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERSTATUS_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 集群状态信息
                */
                class ClusterStatus : public AbstractModel
                {
                public:
                    ClusterStatus();
                    ~ClusterStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群Id
                     * @return ClusterId 集群Id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群Id
                     * @param _clusterId 集群Id
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
                     * 获取集群状态
                     * @return ClusterState 集群状态
                     * 
                     */
                    std::string GetClusterState() const;

                    /**
                     * 设置集群状态
                     * @param _clusterState 集群状态
                     * 
                     */
                    void SetClusterState(const std::string& _clusterState);

                    /**
                     * 判断参数 ClusterState 是否已赋值
                     * @return ClusterState 是否已赋值
                     * 
                     */
                    bool ClusterStateHasBeenSet() const;

                    /**
                     * 获取集群下机器实例的状态
                     * @return ClusterInstanceState 集群下机器实例的状态
                     * 
                     */
                    std::string GetClusterInstanceState() const;

                    /**
                     * 设置集群下机器实例的状态
                     * @param _clusterInstanceState 集群下机器实例的状态
                     * 
                     */
                    void SetClusterInstanceState(const std::string& _clusterInstanceState);

                    /**
                     * 判断参数 ClusterInstanceState 是否已赋值
                     * @return ClusterInstanceState 是否已赋值
                     * 
                     */
                    bool ClusterInstanceStateHasBeenSet() const;

                    /**
                     * 获取集群是否开启监控
                     * @return ClusterBMonitor 集群是否开启监控
                     * 
                     */
                    bool GetClusterBMonitor() const;

                    /**
                     * 设置集群是否开启监控
                     * @param _clusterBMonitor 集群是否开启监控
                     * 
                     */
                    void SetClusterBMonitor(const bool& _clusterBMonitor);

                    /**
                     * 判断参数 ClusterBMonitor 是否已赋值
                     * @return ClusterBMonitor 是否已赋值
                     * 
                     */
                    bool ClusterBMonitorHasBeenSet() const;

                    /**
                     * 获取集群创建中的节点数，-1表示获取节点状态超时，-2表示获取节点状态失败
                     * @return ClusterInitNodeNum 集群创建中的节点数，-1表示获取节点状态超时，-2表示获取节点状态失败
                     * 
                     */
                    int64_t GetClusterInitNodeNum() const;

                    /**
                     * 设置集群创建中的节点数，-1表示获取节点状态超时，-2表示获取节点状态失败
                     * @param _clusterInitNodeNum 集群创建中的节点数，-1表示获取节点状态超时，-2表示获取节点状态失败
                     * 
                     */
                    void SetClusterInitNodeNum(const int64_t& _clusterInitNodeNum);

                    /**
                     * 判断参数 ClusterInitNodeNum 是否已赋值
                     * @return ClusterInitNodeNum 是否已赋值
                     * 
                     */
                    bool ClusterInitNodeNumHasBeenSet() const;

                    /**
                     * 获取集群运行中的节点数，-1表示获取节点状态超时，-2表示获取节点状态失败
                     * @return ClusterRunningNodeNum 集群运行中的节点数，-1表示获取节点状态超时，-2表示获取节点状态失败
                     * 
                     */
                    int64_t GetClusterRunningNodeNum() const;

                    /**
                     * 设置集群运行中的节点数，-1表示获取节点状态超时，-2表示获取节点状态失败
                     * @param _clusterRunningNodeNum 集群运行中的节点数，-1表示获取节点状态超时，-2表示获取节点状态失败
                     * 
                     */
                    void SetClusterRunningNodeNum(const int64_t& _clusterRunningNodeNum);

                    /**
                     * 判断参数 ClusterRunningNodeNum 是否已赋值
                     * @return ClusterRunningNodeNum 是否已赋值
                     * 
                     */
                    bool ClusterRunningNodeNumHasBeenSet() const;

                    /**
                     * 获取集群异常的节点数，-1表示获取节点状态超时，-2表示获取节点状态失败
                     * @return ClusterFailedNodeNum 集群异常的节点数，-1表示获取节点状态超时，-2表示获取节点状态失败
                     * 
                     */
                    int64_t GetClusterFailedNodeNum() const;

                    /**
                     * 设置集群异常的节点数，-1表示获取节点状态超时，-2表示获取节点状态失败
                     * @param _clusterFailedNodeNum 集群异常的节点数，-1表示获取节点状态超时，-2表示获取节点状态失败
                     * 
                     */
                    void SetClusterFailedNodeNum(const int64_t& _clusterFailedNodeNum);

                    /**
                     * 判断参数 ClusterFailedNodeNum 是否已赋值
                     * @return ClusterFailedNodeNum 是否已赋值
                     * 
                     */
                    bool ClusterFailedNodeNumHasBeenSet() const;

                    /**
                     * 获取集群已关机的节点数，-1表示获取节点状态超时，-2表示获取节点状态失败
                     * @return ClusterClosedNodeNum 集群已关机的节点数，-1表示获取节点状态超时，-2表示获取节点状态失败
                     * 
                     */
                    int64_t GetClusterClosedNodeNum() const;

                    /**
                     * 设置集群已关机的节点数，-1表示获取节点状态超时，-2表示获取节点状态失败
                     * @param _clusterClosedNodeNum 集群已关机的节点数，-1表示获取节点状态超时，-2表示获取节点状态失败
                     * 
                     */
                    void SetClusterClosedNodeNum(const int64_t& _clusterClosedNodeNum);

                    /**
                     * 判断参数 ClusterClosedNodeNum 是否已赋值
                     * @return ClusterClosedNodeNum 是否已赋值
                     * 
                     */
                    bool ClusterClosedNodeNumHasBeenSet() const;

                    /**
                     * 获取集群关机中的节点数，-1表示获取节点状态超时，-2表示获取节点状态失败
                     * @return ClusterClosingNodeNum 集群关机中的节点数，-1表示获取节点状态超时，-2表示获取节点状态失败
                     * 
                     */
                    int64_t GetClusterClosingNodeNum() const;

                    /**
                     * 设置集群关机中的节点数，-1表示获取节点状态超时，-2表示获取节点状态失败
                     * @param _clusterClosingNodeNum 集群关机中的节点数，-1表示获取节点状态超时，-2表示获取节点状态失败
                     * 
                     */
                    void SetClusterClosingNodeNum(const int64_t& _clusterClosingNodeNum);

                    /**
                     * 判断参数 ClusterClosingNodeNum 是否已赋值
                     * @return ClusterClosingNodeNum 是否已赋值
                     * 
                     */
                    bool ClusterClosingNodeNumHasBeenSet() const;

                    /**
                     * 获取集群是否开启删除保护
                     * @return ClusterDeletionProtection 集群是否开启删除保护
                     * 
                     */
                    bool GetClusterDeletionProtection() const;

                    /**
                     * 设置集群是否开启删除保护
                     * @param _clusterDeletionProtection 集群是否开启删除保护
                     * 
                     */
                    void SetClusterDeletionProtection(const bool& _clusterDeletionProtection);

                    /**
                     * 判断参数 ClusterDeletionProtection 是否已赋值
                     * @return ClusterDeletionProtection 是否已赋值
                     * 
                     */
                    bool ClusterDeletionProtectionHasBeenSet() const;

                    /**
                     * 获取集群是否可审计
                     * @return ClusterAuditEnabled 集群是否可审计
                     * 
                     */
                    bool GetClusterAuditEnabled() const;

                    /**
                     * 设置集群是否可审计
                     * @param _clusterAuditEnabled 集群是否可审计
                     * 
                     */
                    void SetClusterAuditEnabled(const bool& _clusterAuditEnabled);

                    /**
                     * 判断参数 ClusterAuditEnabled 是否已赋值
                     * @return ClusterAuditEnabled 是否已赋值
                     * 
                     */
                    bool ClusterAuditEnabledHasBeenSet() const;

                private:

                    /**
                     * 集群Id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群状态
                     */
                    std::string m_clusterState;
                    bool m_clusterStateHasBeenSet;

                    /**
                     * 集群下机器实例的状态
                     */
                    std::string m_clusterInstanceState;
                    bool m_clusterInstanceStateHasBeenSet;

                    /**
                     * 集群是否开启监控
                     */
                    bool m_clusterBMonitor;
                    bool m_clusterBMonitorHasBeenSet;

                    /**
                     * 集群创建中的节点数，-1表示获取节点状态超时，-2表示获取节点状态失败
                     */
                    int64_t m_clusterInitNodeNum;
                    bool m_clusterInitNodeNumHasBeenSet;

                    /**
                     * 集群运行中的节点数，-1表示获取节点状态超时，-2表示获取节点状态失败
                     */
                    int64_t m_clusterRunningNodeNum;
                    bool m_clusterRunningNodeNumHasBeenSet;

                    /**
                     * 集群异常的节点数，-1表示获取节点状态超时，-2表示获取节点状态失败
                     */
                    int64_t m_clusterFailedNodeNum;
                    bool m_clusterFailedNodeNumHasBeenSet;

                    /**
                     * 集群已关机的节点数，-1表示获取节点状态超时，-2表示获取节点状态失败
                     */
                    int64_t m_clusterClosedNodeNum;
                    bool m_clusterClosedNodeNumHasBeenSet;

                    /**
                     * 集群关机中的节点数，-1表示获取节点状态超时，-2表示获取节点状态失败
                     */
                    int64_t m_clusterClosingNodeNum;
                    bool m_clusterClosingNodeNumHasBeenSet;

                    /**
                     * 集群是否开启删除保护
                     */
                    bool m_clusterDeletionProtection;
                    bool m_clusterDeletionProtectionHasBeenSet;

                    /**
                     * 集群是否可审计
                     */
                    bool m_clusterAuditEnabled;
                    bool m_clusterAuditEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERSTATUS_H_
