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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETHOSTDETAILRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETHOSTDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ProjectInfo.h>
#include <tencentcloud/tcss/v20201101/model/TagInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeAssetHostDetail返回参数结构体
                */
                class DescribeAssetHostDetailResponse : public AbstractModel
                {
                public:
                    DescribeAssetHostDetailResponse();
                    ~DescribeAssetHostDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取容器安全uuid
                     * @return UUID 容器安全uuid
                     * 
                     */
                    std::string GetUUID() const;

                    /**
                     * 判断参数 UUID 是否已赋值
                     * @return UUID 是否已赋值
                     * 
                     */
                    bool UUIDHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取主机名
                     * @return HostName 主机名
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取主机分组
                     * @return Group 主机分组
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取主机IP
                     * @return HostIP 主机IP
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
                     * 获取操作系统
                     * @return OsName 操作系统
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     * 
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取agent版本
                     * @return AgentVersion agent版本
                     * 
                     */
                    std::string GetAgentVersion() const;

                    /**
                     * 判断参数 AgentVersion 是否已赋值
                     * @return AgentVersion 是否已赋值
                     * 
                     */
                    bool AgentVersionHasBeenSet() const;

                    /**
                     * 获取内核版本
                     * @return KernelVersion 内核版本
                     * 
                     */
                    std::string GetKernelVersion() const;

                    /**
                     * 判断参数 KernelVersion 是否已赋值
                     * @return KernelVersion 是否已赋值
                     * 
                     */
                    bool KernelVersionHasBeenSet() const;

                    /**
                     * 获取docker版本
                     * @return DockerVersion docker版本
                     * 
                     */
                    std::string GetDockerVersion() const;

                    /**
                     * 判断参数 DockerVersion 是否已赋值
                     * @return DockerVersion 是否已赋值
                     * 
                     */
                    bool DockerVersionHasBeenSet() const;

                    /**
                     * 获取docker api版本
                     * @return DockerAPIVersion docker api版本
                     * 
                     */
                    std::string GetDockerAPIVersion() const;

                    /**
                     * 判断参数 DockerAPIVersion 是否已赋值
                     * @return DockerAPIVersion 是否已赋值
                     * 
                     */
                    bool DockerAPIVersionHasBeenSet() const;

                    /**
                     * 获取docker go 版本
                     * @return DockerGoVersion docker go 版本
                     * 
                     */
                    std::string GetDockerGoVersion() const;

                    /**
                     * 判断参数 DockerGoVersion 是否已赋值
                     * @return DockerGoVersion 是否已赋值
                     * 
                     */
                    bool DockerGoVersionHasBeenSet() const;

                    /**
                     * 获取docker 文件系统类型
                     * @return DockerFileSystemDriver docker 文件系统类型
                     * 
                     */
                    std::string GetDockerFileSystemDriver() const;

                    /**
                     * 判断参数 DockerFileSystemDriver 是否已赋值
                     * @return DockerFileSystemDriver 是否已赋值
                     * 
                     */
                    bool DockerFileSystemDriverHasBeenSet() const;

                    /**
                     * 获取docker root 目录
                     * @return DockerRootDir docker root 目录
                     * 
                     */
                    std::string GetDockerRootDir() const;

                    /**
                     * 判断参数 DockerRootDir 是否已赋值
                     * @return DockerRootDir 是否已赋值
                     * 
                     */
                    bool DockerRootDirHasBeenSet() const;

                    /**
                     * 获取镜像数
                     * @return ImageCnt 镜像数
                     * 
                     */
                    uint64_t GetImageCnt() const;

                    /**
                     * 判断参数 ImageCnt 是否已赋值
                     * @return ImageCnt 是否已赋值
                     * 
                     */
                    bool ImageCntHasBeenSet() const;

                    /**
                     * 获取容器数
                     * @return ContainerCnt 容器数
                     * 
                     */
                    uint64_t GetContainerCnt() const;

                    /**
                     * 判断参数 ContainerCnt 是否已赋值
                     * @return ContainerCnt 是否已赋值
                     * 
                     */
                    bool ContainerCntHasBeenSet() const;

                    /**
                     * 获取k8s IP
                     * @return K8sMasterIP k8s IP
                     * 
                     */
                    std::string GetK8sMasterIP() const;

                    /**
                     * 判断参数 K8sMasterIP 是否已赋值
                     * @return K8sMasterIP 是否已赋值
                     * 
                     */
                    bool K8sMasterIPHasBeenSet() const;

                    /**
                     * 获取k8s version
                     * @return K8sVersion k8s version
                     * 
                     */
                    std::string GetK8sVersion() const;

                    /**
                     * 判断参数 K8sVersion 是否已赋值
                     * @return K8sVersion 是否已赋值
                     * 
                     */
                    bool K8sVersionHasBeenSet() const;

                    /**
                     * 获取kube proxy
                     * @return KubeProxyVersion kube proxy
                     * 
                     */
                    std::string GetKubeProxyVersion() const;

                    /**
                     * 判断参数 KubeProxyVersion 是否已赋值
                     * @return KubeProxyVersion 是否已赋值
                     * 
                     */
                    bool KubeProxyVersionHasBeenSet() const;

                    /**
                     * 获取"UNINSTALL"："未安装","OFFLINE"："离线", "ONLINE"："防护中
                     * @return Status "UNINSTALL"："未安装","OFFLINE"："离线", "ONLINE"："防护中
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
                     * 获取是否Containerd
                     * @return IsContainerd 是否Containerd
                     * 
                     */
                    bool GetIsContainerd() const;

                    /**
                     * 判断参数 IsContainerd 是否已赋值
                     * @return IsContainerd 是否已赋值
                     * 
                     */
                    bool IsContainerdHasBeenSet() const;

                    /**
                     * 获取主机来源;"TENCENTCLOUD":"腾讯云服务器","OTHERCLOUD":"非腾讯云服务器"
                     * @return MachineType 主机来源;"TENCENTCLOUD":"腾讯云服务器","OTHERCLOUD":"非腾讯云服务器"
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取外网ip
                     * @return PublicIp 外网ip
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取主机实例ID
                     * @return InstanceID 主机实例ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取地域ID
                     * @return RegionID 地域ID
                     * 
                     */
                    int64_t GetRegionID() const;

                    /**
                     * 判断参数 RegionID 是否已赋值
                     * @return RegionID 是否已赋值
                     * 
                     */
                    bool RegionIDHasBeenSet() const;

                    /**
                     * 获取所属项目
                     * @return Project 所属项目
                     * 
                     */
                    ProjectInfo GetProject() const;

                    /**
                     * 判断参数 Project 是否已赋值
                     * @return Project 是否已赋值
                     * 
                     */
                    bool ProjectHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Tags 标签
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

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
                     * 获取集群接入状态
                     * @return ClusterAccessedStatus 集群接入状态
                     * 
                     */
                    std::string GetClusterAccessedStatus() const;

                    /**
                     * 判断参数 ClusterAccessedStatus 是否已赋值
                     * @return ClusterAccessedStatus 是否已赋值
                     * 
                     */
                    bool ClusterAccessedStatusHasBeenSet() const;

                private:

                    /**
                     * 容器安全uuid
                     */
                    std::string m_uUID;
                    bool m_uUIDHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 主机名
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 主机分组
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * 主机IP
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * 操作系统
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * agent版本
                     */
                    std::string m_agentVersion;
                    bool m_agentVersionHasBeenSet;

                    /**
                     * 内核版本
                     */
                    std::string m_kernelVersion;
                    bool m_kernelVersionHasBeenSet;

                    /**
                     * docker版本
                     */
                    std::string m_dockerVersion;
                    bool m_dockerVersionHasBeenSet;

                    /**
                     * docker api版本
                     */
                    std::string m_dockerAPIVersion;
                    bool m_dockerAPIVersionHasBeenSet;

                    /**
                     * docker go 版本
                     */
                    std::string m_dockerGoVersion;
                    bool m_dockerGoVersionHasBeenSet;

                    /**
                     * docker 文件系统类型
                     */
                    std::string m_dockerFileSystemDriver;
                    bool m_dockerFileSystemDriverHasBeenSet;

                    /**
                     * docker root 目录
                     */
                    std::string m_dockerRootDir;
                    bool m_dockerRootDirHasBeenSet;

                    /**
                     * 镜像数
                     */
                    uint64_t m_imageCnt;
                    bool m_imageCntHasBeenSet;

                    /**
                     * 容器数
                     */
                    uint64_t m_containerCnt;
                    bool m_containerCntHasBeenSet;

                    /**
                     * k8s IP
                     */
                    std::string m_k8sMasterIP;
                    bool m_k8sMasterIPHasBeenSet;

                    /**
                     * k8s version
                     */
                    std::string m_k8sVersion;
                    bool m_k8sVersionHasBeenSet;

                    /**
                     * kube proxy
                     */
                    std::string m_kubeProxyVersion;
                    bool m_kubeProxyVersionHasBeenSet;

                    /**
                     * "UNINSTALL"："未安装","OFFLINE"："离线", "ONLINE"："防护中
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否Containerd
                     */
                    bool m_isContainerd;
                    bool m_isContainerdHasBeenSet;

                    /**
                     * 主机来源;"TENCENTCLOUD":"腾讯云服务器","OTHERCLOUD":"非腾讯云服务器"
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * 外网ip
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 主机实例ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 地域ID
                     */
                    int64_t m_regionID;
                    bool m_regionIDHasBeenSet;

                    /**
                     * 所属项目
                     */
                    ProjectInfo m_project;
                    bool m_projectHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

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
                     * 集群接入状态
                     */
                    std::string m_clusterAccessedStatus;
                    bool m_clusterAccessedStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETHOSTDETAILRESPONSE_H_
