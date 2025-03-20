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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETCONTAINERDETAILRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETCONTAINERDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ContainerMount.h>
#include <tencentcloud/tcss/v20201101/model/ContainerNetwork.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeAssetContainerDetail返回参数结构体
                */
                class DescribeAssetContainerDetailResponse : public AbstractModel
                {
                public:
                    DescribeAssetContainerDetailResponse();
                    ~DescribeAssetContainerDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取主机id
                     * @return HostID 主机id
                     * 
                     */
                    std::string GetHostID() const;

                    /**
                     * 判断参数 HostID 是否已赋值
                     * @return HostID 是否已赋值
                     * 
                     */
                    bool HostIDHasBeenSet() const;

                    /**
                     * 获取主机ip
                     * @return HostIP 主机ip
                     * 
                     */
                    std::string GetHostIP() const;

                    /**
                     * 判断参数 HostIP 是否已赋值
                     * @return HostIP 是否已赋值
                     * 
                     */
                    bool HostIPHasBeenSet() const;

                    /**
                     * 获取容器名称
                     * @return ContainerName 容器名称
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取运行状态
                     * @return Status 运行状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取运行账户
                     * @return RunAs 运行账户
                     * 
                     */
                    std::string GetRunAs() const;

                    /**
                     * 判断参数 RunAs 是否已赋值
                     * @return RunAs 是否已赋值
                     * 
                     */
                    bool RunAsHasBeenSet() const;

                    /**
                     * 获取命令行
                     * @return Cmd 命令行
                     * 
                     */
                    std::string GetCmd() const;

                    /**
                     * 判断参数 Cmd 是否已赋值
                     * @return Cmd 是否已赋值
                     * 
                     */
                    bool CmdHasBeenSet() const;

                    /**
                     * 获取CPU使用率 * 1000
                     * @return CPUUsage CPU使用率 * 1000
                     * 
                     */
                    uint64_t GetCPUUsage() const;

                    /**
                     * 判断参数 CPUUsage 是否已赋值
                     * @return CPUUsage 是否已赋值
                     * 
                     */
                    bool CPUUsageHasBeenSet() const;

                    /**
                     * 获取内存使用 KB
                     * @return RamUsage 内存使用 KB
                     * 
                     */
                    uint64_t GetRamUsage() const;

                    /**
                     * 判断参数 RamUsage 是否已赋值
                     * @return RamUsage 是否已赋值
                     * 
                     */
                    bool RamUsageHasBeenSet() const;

                    /**
                     * 获取镜像名
                     * @return ImageName 镜像名
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取镜像ID
                     * @return ImageID 镜像ID
                     * 
                     */
                    std::string GetImageID() const;

                    /**
                     * 判断参数 ImageID 是否已赋值
                     * @return ImageID 是否已赋值
                     * 
                     */
                    bool ImageIDHasBeenSet() const;

                    /**
                     * 获取归属POD
                     * @return POD 归属POD
                     * 
                     */
                    std::string GetPOD() const;

                    /**
                     * 判断参数 POD 是否已赋值
                     * @return POD 是否已赋值
                     * 
                     */
                    bool PODHasBeenSet() const;

                    /**
                     * 获取k8s 主节点
                     * @return K8sMaster k8s 主节点
                     * 
                     */
                    std::string GetK8sMaster() const;

                    /**
                     * 判断参数 K8sMaster 是否已赋值
                     * @return K8sMaster 是否已赋值
                     * 
                     */
                    bool K8sMasterHasBeenSet() const;

                    /**
                     * 获取容器内进程数
                     * @return ProcessCnt 容器内进程数
                     * 
                     */
                    uint64_t GetProcessCnt() const;

                    /**
                     * 判断参数 ProcessCnt 是否已赋值
                     * @return ProcessCnt 是否已赋值
                     * 
                     */
                    bool ProcessCntHasBeenSet() const;

                    /**
                     * 获取容器内端口数
                     * @return PortCnt 容器内端口数
                     * 
                     */
                    uint64_t GetPortCnt() const;

                    /**
                     * 判断参数 PortCnt 是否已赋值
                     * @return PortCnt 是否已赋值
                     * 
                     */
                    bool PortCntHasBeenSet() const;

                    /**
                     * 获取组件数
                     * @return ComponentCnt 组件数
                     * 
                     */
                    uint64_t GetComponentCnt() const;

                    /**
                     * 判断参数 ComponentCnt 是否已赋值
                     * @return ComponentCnt 是否已赋值
                     * 
                     */
                    bool ComponentCntHasBeenSet() const;

                    /**
                     * 获取app数
                     * @return AppCnt app数
                     * 
                     */
                    uint64_t GetAppCnt() const;

                    /**
                     * 判断参数 AppCnt 是否已赋值
                     * @return AppCnt 是否已赋值
                     * 
                     */
                    bool AppCntHasBeenSet() const;

                    /**
                     * 获取websvc数
                     * @return WebServiceCnt websvc数
                     * 
                     */
                    uint64_t GetWebServiceCnt() const;

                    /**
                     * 判断参数 WebServiceCnt 是否已赋值
                     * @return WebServiceCnt 是否已赋值
                     * 
                     */
                    bool WebServiceCntHasBeenSet() const;

                    /**
                     * 获取挂载
                     * @return Mounts 挂载
                     * 
                     */
                    std::vector<ContainerMount> GetMounts() const;

                    /**
                     * 判断参数 Mounts 是否已赋值
                     * @return Mounts 是否已赋值
                     * 
                     */
                    bool MountsHasBeenSet() const;

                    /**
                     * 获取容器网络信息
                     * @return Network 容器网络信息
                     * 
                     */
                    ContainerNetwork GetNetwork() const;

                    /**
                     * 判断参数 Network 是否已赋值
                     * @return Network 是否已赋值
                     * 
                     */
                    bool NetworkHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取镜像创建时间
                     * @return ImageCreateTime 镜像创建时间
                     * 
                     */
                    std::string GetImageCreateTime() const;

                    /**
                     * 判断参数 ImageCreateTime 是否已赋值
                     * @return ImageCreateTime 是否已赋值
                     * 
                     */
                    bool ImageCreateTimeHasBeenSet() const;

                    /**
                     * 获取镜像大小
                     * @return ImageSize 镜像大小
                     * 
                     */
                    uint64_t GetImageSize() const;

                    /**
                     * 判断参数 ImageSize 是否已赋值
                     * @return ImageSize 是否已赋值
                     * 
                     */
                    bool ImageSizeHasBeenSet() const;

                    /**
                     * 获取主机状态 offline,online,pause
                     * @return HostStatus 主机状态 offline,online,pause
                     * 
                     */
                    std::string GetHostStatus() const;

                    /**
                     * 判断参数 HostStatus 是否已赋值
                     * @return HostStatus 是否已赋值
                     * 
                     */
                    bool HostStatusHasBeenSet() const;

                    /**
                     * 获取网络状态
未隔离  	NORMAL
已隔离		ISOLATED
隔离中		ISOLATING
隔离失败	ISOLATE_FAILED
解除隔离中  RESTORING
解除隔离失败 RESTORE_FAILED
                     * @return NetStatus 网络状态
未隔离  	NORMAL
已隔离		ISOLATED
隔离中		ISOLATING
隔离失败	ISOLATE_FAILED
解除隔离中  RESTORING
解除隔离失败 RESTORE_FAILED
                     * 
                     */
                    std::string GetNetStatus() const;

                    /**
                     * 判断参数 NetStatus 是否已赋值
                     * @return NetStatus 是否已赋值
                     * 
                     */
                    bool NetStatusHasBeenSet() const;

                    /**
                     * 获取网络子状态
                     * @return NetSubStatus 网络子状态
                     * 
                     */
                    std::string GetNetSubStatus() const;

                    /**
                     * 判断参数 NetSubStatus 是否已赋值
                     * @return NetSubStatus 是否已赋值
                     * 
                     */
                    bool NetSubStatusHasBeenSet() const;

                    /**
                     * 获取隔离来源
                     * @return IsolateSource 隔离来源
                     * 
                     */
                    std::string GetIsolateSource() const;

                    /**
                     * 判断参数 IsolateSource 是否已赋值
                     * @return IsolateSource 是否已赋值
                     * 
                     */
                    bool IsolateSourceHasBeenSet() const;

                    /**
                     * 获取隔离时间
                     * @return IsolateTime 隔离时间
                     * 
                     */
                    std::string GetIsolateTime() const;

                    /**
                     * 判断参数 IsolateTime 是否已赋值
                     * @return IsolateTime 是否已赋值
                     * 
                     */
                    bool IsolateTimeHasBeenSet() const;

                    /**
                     * 获取节点ID
                     * @return NodeID 节点ID
                     * 
                     */
                    std::string GetNodeID() const;

                    /**
                     * 判断参数 NodeID 是否已赋值
                     * @return NodeID 是否已赋值
                     * 
                     */
                    bool NodeIDHasBeenSet() const;

                    /**
                     * 获取节点名称
                     * @return NodeName 节点名称
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取节点子网ID
                     * @return NodeSubNetID 节点子网ID
                     * 
                     */
                    std::string GetNodeSubNetID() const;

                    /**
                     * 判断参数 NodeSubNetID 是否已赋值
                     * @return NodeSubNetID 是否已赋值
                     * 
                     */
                    bool NodeSubNetIDHasBeenSet() const;

                    /**
                     * 获取节点子网名称
                     * @return NodeSubNetName 节点子网名称
                     * 
                     */
                    std::string GetNodeSubNetName() const;

                    /**
                     * 判断参数 NodeSubNetName 是否已赋值
                     * @return NodeSubNetName 是否已赋值
                     * 
                     */
                    bool NodeSubNetNameHasBeenSet() const;

                    /**
                     * 获取节点子网网段
                     * @return NodeSubNetCIDR 节点子网网段
                     * 
                     */
                    std::string GetNodeSubNetCIDR() const;

                    /**
                     * 判断参数 NodeSubNetCIDR 是否已赋值
                     * @return NodeSubNetCIDR 是否已赋值
                     * 
                     */
                    bool NodeSubNetCIDRHasBeenSet() const;

                    /**
                     * 获取pod名称
                     * @return PodName pod名称
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取pod ip
                     * @return PodIP pod ip
                     * 
                     */
                    std::string GetPodIP() const;

                    /**
                     * 判断参数 PodIP 是否已赋值
                     * @return PodIP 是否已赋值
                     * 
                     */
                    bool PodIPHasBeenSet() const;

                    /**
                     * 获取pod状态
                     * @return PodStatus pod状态
                     * 
                     */
                    std::string GetPodStatus() const;

                    /**
                     * 判断参数 PodStatus 是否已赋值
                     * @return PodStatus 是否已赋值
                     * 
                     */
                    bool PodStatusHasBeenSet() const;

                    /**
                     * 获取集群ID
                     * @return ClusterID 集群ID
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取集群名称
                     * @return ClusterName 集群名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取节点类型:NORMAL: 普通节点(默认值) SUPER: 超级节点
                     * @return NodeType 节点类型:NORMAL: 普通节点(默认值) SUPER: 超级节点
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取超级节点唯一id
                     * @return NodeUniqueID 超级节点唯一id
                     * 
                     */
                    std::string GetNodeUniqueID() const;

                    /**
                     * 判断参数 NodeUniqueID 是否已赋值
                     * @return NodeUniqueID 是否已赋值
                     * 
                     */
                    bool NodeUniqueIDHasBeenSet() const;

                    /**
                     * 获取外网ip
                     * @return PublicIP 外网ip
                     * 
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 判断参数 PublicIP 是否已赋值
                     * @return PublicIP 是否已赋值
                     * 
                     */
                    bool PublicIPHasBeenSet() const;

                private:

                    /**
                     * 主机id
                     */
                    std::string m_hostID;
                    bool m_hostIDHasBeenSet;

                    /**
                     * 主机ip
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * 容器名称
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * 运行状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 运行账户
                     */
                    std::string m_runAs;
                    bool m_runAsHasBeenSet;

                    /**
                     * 命令行
                     */
                    std::string m_cmd;
                    bool m_cmdHasBeenSet;

                    /**
                     * CPU使用率 * 1000
                     */
                    uint64_t m_cPUUsage;
                    bool m_cPUUsageHasBeenSet;

                    /**
                     * 内存使用 KB
                     */
                    uint64_t m_ramUsage;
                    bool m_ramUsageHasBeenSet;

                    /**
                     * 镜像名
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 镜像ID
                     */
                    std::string m_imageID;
                    bool m_imageIDHasBeenSet;

                    /**
                     * 归属POD
                     */
                    std::string m_pOD;
                    bool m_pODHasBeenSet;

                    /**
                     * k8s 主节点
                     */
                    std::string m_k8sMaster;
                    bool m_k8sMasterHasBeenSet;

                    /**
                     * 容器内进程数
                     */
                    uint64_t m_processCnt;
                    bool m_processCntHasBeenSet;

                    /**
                     * 容器内端口数
                     */
                    uint64_t m_portCnt;
                    bool m_portCntHasBeenSet;

                    /**
                     * 组件数
                     */
                    uint64_t m_componentCnt;
                    bool m_componentCntHasBeenSet;

                    /**
                     * app数
                     */
                    uint64_t m_appCnt;
                    bool m_appCntHasBeenSet;

                    /**
                     * websvc数
                     */
                    uint64_t m_webServiceCnt;
                    bool m_webServiceCntHasBeenSet;

                    /**
                     * 挂载
                     */
                    std::vector<ContainerMount> m_mounts;
                    bool m_mountsHasBeenSet;

                    /**
                     * 容器网络信息
                     */
                    ContainerNetwork m_network;
                    bool m_networkHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 镜像创建时间
                     */
                    std::string m_imageCreateTime;
                    bool m_imageCreateTimeHasBeenSet;

                    /**
                     * 镜像大小
                     */
                    uint64_t m_imageSize;
                    bool m_imageSizeHasBeenSet;

                    /**
                     * 主机状态 offline,online,pause
                     */
                    std::string m_hostStatus;
                    bool m_hostStatusHasBeenSet;

                    /**
                     * 网络状态
未隔离  	NORMAL
已隔离		ISOLATED
隔离中		ISOLATING
隔离失败	ISOLATE_FAILED
解除隔离中  RESTORING
解除隔离失败 RESTORE_FAILED
                     */
                    std::string m_netStatus;
                    bool m_netStatusHasBeenSet;

                    /**
                     * 网络子状态
                     */
                    std::string m_netSubStatus;
                    bool m_netSubStatusHasBeenSet;

                    /**
                     * 隔离来源
                     */
                    std::string m_isolateSource;
                    bool m_isolateSourceHasBeenSet;

                    /**
                     * 隔离时间
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * 节点ID
                     */
                    std::string m_nodeID;
                    bool m_nodeIDHasBeenSet;

                    /**
                     * 节点名称
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 节点子网ID
                     */
                    std::string m_nodeSubNetID;
                    bool m_nodeSubNetIDHasBeenSet;

                    /**
                     * 节点子网名称
                     */
                    std::string m_nodeSubNetName;
                    bool m_nodeSubNetNameHasBeenSet;

                    /**
                     * 节点子网网段
                     */
                    std::string m_nodeSubNetCIDR;
                    bool m_nodeSubNetCIDRHasBeenSet;

                    /**
                     * pod名称
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * pod ip
                     */
                    std::string m_podIP;
                    bool m_podIPHasBeenSet;

                    /**
                     * pod状态
                     */
                    std::string m_podStatus;
                    bool m_podStatusHasBeenSet;

                    /**
                     * 集群ID
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 节点类型:NORMAL: 普通节点(默认值) SUPER: 超级节点
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 超级节点唯一id
                     */
                    std::string m_nodeUniqueID;
                    bool m_nodeUniqueIDHasBeenSet;

                    /**
                     * 外网ip
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETCONTAINERDETAILRESPONSE_H_
