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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERCHECKTASKITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERCHECKTASKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 集群检查任务入参
                */
                class ClusterCheckTaskItem : public AbstractModel
                {
                public:
                    ClusterCheckTaskItem();
                    ~ClusterCheckTaskItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指定要扫描的集群ID
                     * @return ClusterId 指定要扫描的集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置指定要扫描的集群ID
                     * @param _clusterId 指定要扫描的集群ID
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
                     * 获取集群所属地域
                     * @return ClusterRegion 集群所属地域
                     * 
                     */
                    std::string GetClusterRegion() const;

                    /**
                     * 设置集群所属地域
                     * @param _clusterRegion 集群所属地域
                     * 
                     */
                    void SetClusterRegion(const std::string& _clusterRegion);

                    /**
                     * 判断参数 ClusterRegion 是否已赋值
                     * @return ClusterRegion 是否已赋值
                     * 
                     */
                    bool ClusterRegionHasBeenSet() const;

                    /**
                     * 获取指定要扫描的节点IP
                     * @return NodeIp 指定要扫描的节点IP
                     * 
                     */
                    std::string GetNodeIp() const;

                    /**
                     * 设置指定要扫描的节点IP
                     * @param _nodeIp 指定要扫描的节点IP
                     * 
                     */
                    void SetNodeIp(const std::string& _nodeIp);

                    /**
                     * 判断参数 NodeIp 是否已赋值
                     * @return NodeIp 是否已赋值
                     * 
                     */
                    bool NodeIpHasBeenSet() const;

                    /**
                     * 获取按照要扫描的workload名字
                     * @return WorkloadName 按照要扫描的workload名字
                     * 
                     */
                    std::string GetWorkloadName() const;

                    /**
                     * 设置按照要扫描的workload名字
                     * @param _workloadName 按照要扫描的workload名字
                     * 
                     */
                    void SetWorkloadName(const std::string& _workloadName);

                    /**
                     * 判断参数 WorkloadName 是否已赋值
                     * @return WorkloadName 是否已赋值
                     * 
                     */
                    bool WorkloadNameHasBeenSet() const;

                private:

                    /**
                     * 指定要扫描的集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群所属地域
                     */
                    std::string m_clusterRegion;
                    bool m_clusterRegionHasBeenSet;

                    /**
                     * 指定要扫描的节点IP
                     */
                    std::string m_nodeIp;
                    bool m_nodeIpHasBeenSet;

                    /**
                     * 按照要扫描的workload名字
                     */
                    std::string m_workloadName;
                    bool m_workloadNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERCHECKTASKITEM_H_
