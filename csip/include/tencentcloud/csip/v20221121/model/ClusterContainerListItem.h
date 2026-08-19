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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERCONTAINERLISTITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERCONTAINERLISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 集群容器列表项
                */
                class ClusterContainerListItem : public AbstractModel
                {
                public:
                    ClusterContainerListItem();
                    ~ClusterContainerListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>appid</p>
                     * @return AppID <p>appid</p>
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 设置<p>appid</p>
                     * @param _appID <p>appid</p>
                     * 
                     */
                    void SetAppID(const uint64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取<p>资产id</p>
                     * @return AssetId <p>资产id</p>
                     * @deprecated
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置<p>资产id</p>
                     * @param _assetId <p>资产id</p>
                     * @deprecated
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * @deprecated
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取<p>容器id</p>
                     * @return ContainerId <p>容器id</p>
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置<p>容器id</p>
                     * @param _containerId <p>容器id</p>
                     * 
                     */
                    void SetContainerId(const std::string& _containerId);

                    /**
                     * 判断参数 ContainerId 是否已赋值
                     * @return ContainerId 是否已赋值
                     * 
                     */
                    bool ContainerIdHasBeenSet() const;

                    /**
                     * 获取<p>容器名称</p>
                     * @return ContainerName <p>容器名称</p>
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置<p>容器名称</p>
                     * @param _containerName <p>容器名称</p>
                     * 
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取<p>运行状态</p>
                     * @return RunStatus <p>运行状态</p>
                     * 
                     */
                    std::string GetRunStatus() const;

                    /**
                     * 设置<p>运行状态</p>
                     * @param _runStatus <p>运行状态</p>
                     * 
                     */
                    void SetRunStatus(const std::string& _runStatus);

                    /**
                     * 判断参数 RunStatus 是否已赋值
                     * @return RunStatus 是否已赋值
                     * 
                     */
                    bool RunStatusHasBeenSet() const;

                    /**
                     * 获取<p>节点id</p>
                     * @return NodeId <p>节点id</p>
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置<p>节点id</p>
                     * @param _nodeId <p>节点id</p>
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取<p>节点类型</p>
                     * @return NodeType <p>节点类型</p>
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置<p>节点类型</p>
                     * @param _nodeType <p>节点类型</p>
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取<p>pod唯一id</p>
                     * @return PodUid <p>pod唯一id</p>
                     * 
                     */
                    std::string GetPodUid() const;

                    /**
                     * 设置<p>pod唯一id</p>
                     * @param _podUid <p>pod唯一id</p>
                     * 
                     */
                    void SetPodUid(const std::string& _podUid);

                    /**
                     * 判断参数 PodUid 是否已赋值
                     * @return PodUid 是否已赋值
                     * 
                     */
                    bool PodUidHasBeenSet() const;

                    /**
                     * 获取<p>pod名称</p>
                     * @return PodName <p>pod名称</p>
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置<p>pod名称</p>
                     * @param _podName <p>pod名称</p>
                     * 
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取<p>镜像id</p>
                     * @return ImageId <p>镜像id</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>镜像id</p>
                     * @param _imageId <p>镜像id</p>
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取<p>镜像名称</p>
                     * @return ImageName <p>镜像名称</p>
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置<p>镜像名称</p>
                     * @param _imageName <p>镜像名称</p>
                     * 
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取<p>隔离状态</p>
                     * @return IsolateStatus <p>隔离状态</p>
                     * 
                     */
                    std::string GetIsolateStatus() const;

                    /**
                     * 设置<p>隔离状态</p>
                     * @param _isolateStatus <p>隔离状态</p>
                     * 
                     */
                    void SetIsolateStatus(const std::string& _isolateStatus);

                    /**
                     * 判断参数 IsolateStatus 是否已赋值
                     * @return IsolateStatus 是否已赋值
                     * 
                     */
                    bool IsolateStatusHasBeenSet() const;

                    /**
                     * 获取<p>严重风险数量</p>
                     * @return RiskEventCriticalCount <p>严重风险数量</p>
                     * @deprecated
                     */
                    uint64_t GetRiskEventCriticalCount() const;

                    /**
                     * 设置<p>严重风险数量</p>
                     * @param _riskEventCriticalCount <p>严重风险数量</p>
                     * @deprecated
                     */
                    void SetRiskEventCriticalCount(const uint64_t& _riskEventCriticalCount);

                    /**
                     * 判断参数 RiskEventCriticalCount 是否已赋值
                     * @return RiskEventCriticalCount 是否已赋值
                     * @deprecated
                     */
                    bool RiskEventCriticalCountHasBeenSet() const;

                    /**
                     * 获取<p>高危风险数量</p>
                     * @return RiskEventHighCount <p>高危风险数量</p>
                     * @deprecated
                     */
                    uint64_t GetRiskEventHighCount() const;

                    /**
                     * 设置<p>高危风险数量</p>
                     * @param _riskEventHighCount <p>高危风险数量</p>
                     * @deprecated
                     */
                    void SetRiskEventHighCount(const uint64_t& _riskEventHighCount);

                    /**
                     * 判断参数 RiskEventHighCount 是否已赋值
                     * @return RiskEventHighCount 是否已赋值
                     * @deprecated
                     */
                    bool RiskEventHighCountHasBeenSet() const;

                    /**
                     * 获取<p>中危风险数量</p>
                     * @return RiskEventMiddleCount <p>中危风险数量</p>
                     * @deprecated
                     */
                    uint64_t GetRiskEventMiddleCount() const;

                    /**
                     * 设置<p>中危风险数量</p>
                     * @param _riskEventMiddleCount <p>中危风险数量</p>
                     * @deprecated
                     */
                    void SetRiskEventMiddleCount(const uint64_t& _riskEventMiddleCount);

                    /**
                     * 判断参数 RiskEventMiddleCount 是否已赋值
                     * @return RiskEventMiddleCount 是否已赋值
                     * @deprecated
                     */
                    bool RiskEventMiddleCountHasBeenSet() const;

                    /**
                     * 获取<p>低危风险数量</p>
                     * @return RiskEventLowCount <p>低危风险数量</p>
                     * @deprecated
                     */
                    uint64_t GetRiskEventLowCount() const;

                    /**
                     * 设置<p>低危风险数量</p>
                     * @param _riskEventLowCount <p>低危风险数量</p>
                     * @deprecated
                     */
                    void SetRiskEventLowCount(const uint64_t& _riskEventLowCount);

                    /**
                     * 判断参数 RiskEventLowCount 是否已赋值
                     * @return RiskEventLowCount 是否已赋值
                     * @deprecated
                     */
                    bool RiskEventLowCountHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>关联告警数</p>
                     * @return AlarmCount <p>关联告警数</p>
                     * 
                     */
                    uint64_t GetAlarmCount() const;

                    /**
                     * 设置<p>关联告警数</p>
                     * @param _alarmCount <p>关联告警数</p>
                     * 
                     */
                    void SetAlarmCount(const uint64_t& _alarmCount);

                    /**
                     * 判断参数 AlarmCount 是否已赋值
                     * @return AlarmCount 是否已赋值
                     * 
                     */
                    bool AlarmCountHasBeenSet() const;

                private:

                    /**
                     * <p>appid</p>
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>资产id</p>
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * <p>容器id</p>
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * <p>容器名称</p>
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * <p>运行状态</p>
                     */
                    std::string m_runStatus;
                    bool m_runStatusHasBeenSet;

                    /**
                     * <p>节点id</p>
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * <p>节点类型</p>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * <p>pod唯一id</p>
                     */
                    std::string m_podUid;
                    bool m_podUidHasBeenSet;

                    /**
                     * <p>pod名称</p>
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * <p>镜像id</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>镜像名称</p>
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * <p>隔离状态</p>
                     */
                    std::string m_isolateStatus;
                    bool m_isolateStatusHasBeenSet;

                    /**
                     * <p>严重风险数量</p>
                     */
                    uint64_t m_riskEventCriticalCount;
                    bool m_riskEventCriticalCountHasBeenSet;

                    /**
                     * <p>高危风险数量</p>
                     */
                    uint64_t m_riskEventHighCount;
                    bool m_riskEventHighCountHasBeenSet;

                    /**
                     * <p>中危风险数量</p>
                     */
                    uint64_t m_riskEventMiddleCount;
                    bool m_riskEventMiddleCountHasBeenSet;

                    /**
                     * <p>低危风险数量</p>
                     */
                    uint64_t m_riskEventLowCount;
                    bool m_riskEventLowCountHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>关联告警数</p>
                     */
                    uint64_t m_alarmCount;
                    bool m_alarmCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERCONTAINERLISTITEM_H_
