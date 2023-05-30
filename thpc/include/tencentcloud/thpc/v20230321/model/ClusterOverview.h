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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_CLUSTEROVERVIEW_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_CLUSTEROVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/thpc/v20230321/model/Placement.h>
#include <tencentcloud/thpc/v20230321/model/ComputeNodeOverview.h>
#include <tencentcloud/thpc/v20230321/model/ManagerNodeOverview.h>
#include <tencentcloud/thpc/v20230321/model/LoginNodeOverview.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * 集群概览信息。
                */
                class ClusterOverview : public AbstractModel
                {
                public:
                    ClusterOverview();
                    ~ClusterOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群ID。
                     * @return ClusterId 集群ID。
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID。
                     * @param ClusterId 集群ID。
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取集群状态。取值范围：<br><li>PENDING：创建中<br><li>INITING：初始化中<br><li>INIT_FAILED：初始化失败<br><li>RUNNING：运行中<br><li>TERMINATING：销毁中
                     * @return ClusterStatus 集群状态。取值范围：<br><li>PENDING：创建中<br><li>INITING：初始化中<br><li>INIT_FAILED：初始化失败<br><li>RUNNING：运行中<br><li>TERMINATING：销毁中
                     */
                    std::string GetClusterStatus() const;

                    /**
                     * 设置集群状态。取值范围：<br><li>PENDING：创建中<br><li>INITING：初始化中<br><li>INIT_FAILED：初始化失败<br><li>RUNNING：运行中<br><li>TERMINATING：销毁中
                     * @param ClusterStatus 集群状态。取值范围：<br><li>PENDING：创建中<br><li>INITING：初始化中<br><li>INIT_FAILED：初始化失败<br><li>RUNNING：运行中<br><li>TERMINATING：销毁中
                     */
                    void SetClusterStatus(const std::string& _clusterStatus);

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     */
                    bool ClusterStatusHasBeenSet() const;

                    /**
                     * 获取集群名称。
                     * @return ClusterName 集群名称。
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称。
                     * @param ClusterName 集群名称。
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取集群位置信息。
                     * @return Placement 集群位置信息。
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置集群位置信息。
                     * @param Placement 集群位置信息。
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取集群创建时间。
                     * @return CreateTime 集群创建时间。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置集群创建时间。
                     * @param CreateTime 集群创建时间。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取集群调度器。
                     * @return SchedulerType 集群调度器。
                     */
                    std::string GetSchedulerType() const;

                    /**
                     * 设置集群调度器。
                     * @param SchedulerType 集群调度器。
                     */
                    void SetSchedulerType(const std::string& _schedulerType);

                    /**
                     * 判断参数 SchedulerType 是否已赋值
                     * @return SchedulerType 是否已赋值
                     */
                    bool SchedulerTypeHasBeenSet() const;

                    /**
                     * 获取计算节点数量。
                     * @return ComputeNodeCount 计算节点数量。
                     */
                    int64_t GetComputeNodeCount() const;

                    /**
                     * 设置计算节点数量。
                     * @param ComputeNodeCount 计算节点数量。
                     */
                    void SetComputeNodeCount(const int64_t& _computeNodeCount);

                    /**
                     * 判断参数 ComputeNodeCount 是否已赋值
                     * @return ComputeNodeCount 是否已赋值
                     */
                    bool ComputeNodeCountHasBeenSet() const;

                    /**
                     * 获取计算节点概览。
                     * @return ComputeNodeSet 计算节点概览。
                     */
                    std::vector<ComputeNodeOverview> GetComputeNodeSet() const;

                    /**
                     * 设置计算节点概览。
                     * @param ComputeNodeSet 计算节点概览。
                     */
                    void SetComputeNodeSet(const std::vector<ComputeNodeOverview>& _computeNodeSet);

                    /**
                     * 判断参数 ComputeNodeSet 是否已赋值
                     * @return ComputeNodeSet 是否已赋值
                     */
                    bool ComputeNodeSetHasBeenSet() const;

                    /**
                     * 获取管控节点数量。
                     * @return ManagerNodeCount 管控节点数量。
                     */
                    int64_t GetManagerNodeCount() const;

                    /**
                     * 设置管控节点数量。
                     * @param ManagerNodeCount 管控节点数量。
                     */
                    void SetManagerNodeCount(const int64_t& _managerNodeCount);

                    /**
                     * 判断参数 ManagerNodeCount 是否已赋值
                     * @return ManagerNodeCount 是否已赋值
                     */
                    bool ManagerNodeCountHasBeenSet() const;

                    /**
                     * 获取管控节点概览。
                     * @return ManagerNodeSet 管控节点概览。
                     */
                    std::vector<ManagerNodeOverview> GetManagerNodeSet() const;

                    /**
                     * 设置管控节点概览。
                     * @param ManagerNodeSet 管控节点概览。
                     */
                    void SetManagerNodeSet(const std::vector<ManagerNodeOverview>& _managerNodeSet);

                    /**
                     * 判断参数 ManagerNodeSet 是否已赋值
                     * @return ManagerNodeSet 是否已赋值
                     */
                    bool ManagerNodeSetHasBeenSet() const;

                    /**
                     * 获取登录节点概览。
                     * @return LoginNodeSet 登录节点概览。
                     */
                    std::vector<LoginNodeOverview> GetLoginNodeSet() const;

                    /**
                     * 设置登录节点概览。
                     * @param LoginNodeSet 登录节点概览。
                     */
                    void SetLoginNodeSet(const std::vector<LoginNodeOverview>& _loginNodeSet);

                    /**
                     * 判断参数 LoginNodeSet 是否已赋值
                     * @return LoginNodeSet 是否已赋值
                     */
                    bool LoginNodeSetHasBeenSet() const;

                    /**
                     * 获取登录节点数量。
                     * @return LoginNodeCount 登录节点数量。
                     */
                    int64_t GetLoginNodeCount() const;

                    /**
                     * 设置登录节点数量。
                     * @param LoginNodeCount 登录节点数量。
                     */
                    void SetLoginNodeCount(const int64_t& _loginNodeCount);

                    /**
                     * 判断参数 LoginNodeCount 是否已赋值
                     * @return LoginNodeCount 是否已赋值
                     */
                    bool LoginNodeCountHasBeenSet() const;

                    /**
                     * 获取弹性伸缩类型。<br><li>THPC_AS：集群自动扩缩容由THPC产品内部实现。<br><li>AS：集群自动扩缩容由[弹性伸缩](https://cloud.tencent.com/document/product/377/3154)产品实现。
                     * @return AutoScalingType 弹性伸缩类型。<br><li>THPC_AS：集群自动扩缩容由THPC产品内部实现。<br><li>AS：集群自动扩缩容由[弹性伸缩](https://cloud.tencent.com/document/product/377/3154)产品实现。
                     */
                    std::string GetAutoScalingType() const;

                    /**
                     * 设置弹性伸缩类型。<br><li>THPC_AS：集群自动扩缩容由THPC产品内部实现。<br><li>AS：集群自动扩缩容由[弹性伸缩](https://cloud.tencent.com/document/product/377/3154)产品实现。
                     * @param AutoScalingType 弹性伸缩类型。<br><li>THPC_AS：集群自动扩缩容由THPC产品内部实现。<br><li>AS：集群自动扩缩容由[弹性伸缩](https://cloud.tencent.com/document/product/377/3154)产品实现。
                     */
                    void SetAutoScalingType(const std::string& _autoScalingType);

                    /**
                     * 判断参数 AutoScalingType 是否已赋值
                     * @return AutoScalingType 是否已赋值
                     */
                    bool AutoScalingTypeHasBeenSet() const;

                    /**
                     * 获取集群所属私有网络ID。
                     * @return VpcId 集群所属私有网络ID。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置集群所属私有网络ID。
                     * @param VpcId 集群所属私有网络ID。
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                private:

                    /**
                     * 集群ID。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群状态。取值范围：<br><li>PENDING：创建中<br><li>INITING：初始化中<br><li>INIT_FAILED：初始化失败<br><li>RUNNING：运行中<br><li>TERMINATING：销毁中
                     */
                    std::string m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * 集群名称。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 集群位置信息。
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * 集群创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 集群调度器。
                     */
                    std::string m_schedulerType;
                    bool m_schedulerTypeHasBeenSet;

                    /**
                     * 计算节点数量。
                     */
                    int64_t m_computeNodeCount;
                    bool m_computeNodeCountHasBeenSet;

                    /**
                     * 计算节点概览。
                     */
                    std::vector<ComputeNodeOverview> m_computeNodeSet;
                    bool m_computeNodeSetHasBeenSet;

                    /**
                     * 管控节点数量。
                     */
                    int64_t m_managerNodeCount;
                    bool m_managerNodeCountHasBeenSet;

                    /**
                     * 管控节点概览。
                     */
                    std::vector<ManagerNodeOverview> m_managerNodeSet;
                    bool m_managerNodeSetHasBeenSet;

                    /**
                     * 登录节点概览。
                     */
                    std::vector<LoginNodeOverview> m_loginNodeSet;
                    bool m_loginNodeSetHasBeenSet;

                    /**
                     * 登录节点数量。
                     */
                    int64_t m_loginNodeCount;
                    bool m_loginNodeCountHasBeenSet;

                    /**
                     * 弹性伸缩类型。<br><li>THPC_AS：集群自动扩缩容由THPC产品内部实现。<br><li>AS：集群自动扩缩容由[弹性伸缩](https://cloud.tencent.com/document/product/377/3154)产品实现。
                     */
                    std::string m_autoScalingType;
                    bool m_autoScalingTypeHasBeenSet;

                    /**
                     * 集群所属私有网络ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_CLUSTEROVERVIEW_H_
