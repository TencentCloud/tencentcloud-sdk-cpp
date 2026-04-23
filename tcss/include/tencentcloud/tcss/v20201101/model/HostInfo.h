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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_HOSTINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_HOSTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 容器安全主机列表
                */
                class HostInfo : public AbstractModel
                {
                public:
                    HostInfo();
                    ~HostInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>主机id</p>
                     * @return HostID <p>主机id</p>
                     * 
                     */
                    std::string GetHostID() const;

                    /**
                     * 设置<p>主机id</p>
                     * @param _hostID <p>主机id</p>
                     * 
                     */
                    void SetHostID(const std::string& _hostID);

                    /**
                     * 判断参数 HostID 是否已赋值
                     * @return HostID 是否已赋值
                     * 
                     */
                    bool HostIDHasBeenSet() const;

                    /**
                     * 获取<p>主机ip即内网ip</p>
                     * @return HostIP <p>主机ip即内网ip</p>
                     * 
                     */
                    std::string GetHostIP() const;

                    /**
                     * 设置<p>主机ip即内网ip</p>
                     * @param _hostIP <p>主机ip即内网ip</p>
                     * 
                     */
                    void SetHostIP(const std::string& _hostIP);

                    /**
                     * 判断参数 HostIP 是否已赋值
                     * @return HostIP 是否已赋值
                     * 
                     */
                    bool HostIPHasBeenSet() const;

                    /**
                     * 获取<p>主机名称</p>
                     * @return HostName <p>主机名称</p>
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置<p>主机名称</p>
                     * @param _hostName <p>主机名称</p>
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取<p>业务组</p>
                     * @return Group <p>业务组</p>
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置<p>业务组</p>
                     * @param _group <p>业务组</p>
                     * 
                     */
                    void SetGroup(const std::string& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取<p>docker 版本</p>
                     * @return DockerVersion <p>docker 版本</p>
                     * 
                     */
                    std::string GetDockerVersion() const;

                    /**
                     * 设置<p>docker 版本</p>
                     * @param _dockerVersion <p>docker 版本</p>
                     * 
                     */
                    void SetDockerVersion(const std::string& _dockerVersion);

                    /**
                     * 判断参数 DockerVersion 是否已赋值
                     * @return DockerVersion 是否已赋值
                     * 
                     */
                    bool DockerVersionHasBeenSet() const;

                    /**
                     * 获取<p>docker 文件系统类型</p>
                     * @return DockerFileSystemDriver <p>docker 文件系统类型</p>
                     * 
                     */
                    std::string GetDockerFileSystemDriver() const;

                    /**
                     * 设置<p>docker 文件系统类型</p>
                     * @param _dockerFileSystemDriver <p>docker 文件系统类型</p>
                     * 
                     */
                    void SetDockerFileSystemDriver(const std::string& _dockerFileSystemDriver);

                    /**
                     * 判断参数 DockerFileSystemDriver 是否已赋值
                     * @return DockerFileSystemDriver 是否已赋值
                     * 
                     */
                    bool DockerFileSystemDriverHasBeenSet() const;

                    /**
                     * 获取<p>镜像个数</p>
                     * @return ImageCnt <p>镜像个数</p>
                     * 
                     */
                    uint64_t GetImageCnt() const;

                    /**
                     * 设置<p>镜像个数</p>
                     * @param _imageCnt <p>镜像个数</p>
                     * 
                     */
                    void SetImageCnt(const uint64_t& _imageCnt);

                    /**
                     * 判断参数 ImageCnt 是否已赋值
                     * @return ImageCnt 是否已赋值
                     * 
                     */
                    bool ImageCntHasBeenSet() const;

                    /**
                     * 获取<p>容器个数</p>
                     * @return ContainerCnt <p>容器个数</p>
                     * 
                     */
                    uint64_t GetContainerCnt() const;

                    /**
                     * 设置<p>容器个数</p>
                     * @param _containerCnt <p>容器个数</p>
                     * 
                     */
                    void SetContainerCnt(const uint64_t& _containerCnt);

                    /**
                     * 判断参数 ContainerCnt 是否已赋值
                     * @return ContainerCnt 是否已赋值
                     * 
                     */
                    bool ContainerCntHasBeenSet() const;

                    /**
                     * 获取<p>agent运行状态</p>
                     * @return Status <p>agent运行状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>agent运行状态</p>
                     * @param _status <p>agent运行状态</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>是否是Containerd</p>
                     * @return IsContainerd <p>是否是Containerd</p>
                     * 
                     */
                    bool GetIsContainerd() const;

                    /**
                     * 设置<p>是否是Containerd</p>
                     * @param _isContainerd <p>是否是Containerd</p>
                     * 
                     */
                    void SetIsContainerd(const bool& _isContainerd);

                    /**
                     * 判断参数 IsContainerd 是否已赋值
                     * @return IsContainerd 是否已赋值
                     * 
                     */
                    bool IsContainerdHasBeenSet() const;

                    /**
                     * 获取<p>主机来源：[&quot;CVM&quot;, &quot;ECM&quot;, &quot;LH&quot;, &quot;BM&quot;]  中的之一为腾讯云服务器；[&quot;Other&quot;]之一非腾讯云服务器；</p>
                     * @return MachineType <p>主机来源：[&quot;CVM&quot;, &quot;ECM&quot;, &quot;LH&quot;, &quot;BM&quot;]  中的之一为腾讯云服务器；[&quot;Other&quot;]之一非腾讯云服务器；</p>
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置<p>主机来源：[&quot;CVM&quot;, &quot;ECM&quot;, &quot;LH&quot;, &quot;BM&quot;]  中的之一为腾讯云服务器；[&quot;Other&quot;]之一非腾讯云服务器；</p>
                     * @param _machineType <p>主机来源：[&quot;CVM&quot;, &quot;ECM&quot;, &quot;LH&quot;, &quot;BM&quot;]  中的之一为腾讯云服务器；[&quot;Other&quot;]之一非腾讯云服务器；</p>
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取<p>外网ip</p>
                     * @return PublicIp <p>外网ip</p>
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置<p>外网ip</p>
                     * @param _publicIp <p>外网ip</p>
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取<p>主机uuid</p>
                     * @return Uuid <p>主机uuid</p>
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置<p>主机uuid</p>
                     * @param _uuid <p>主机uuid</p>
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取<p>主机实例ID</p>
                     * @return InstanceID <p>主机实例ID</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>主机实例ID</p>
                     * @param _instanceID <p>主机实例ID</p>
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取<p>地域ID</p>
                     * @return RegionID <p>地域ID</p>
                     * 
                     */
                    int64_t GetRegionID() const;

                    /**
                     * 设置<p>地域ID</p>
                     * @param _regionID <p>地域ID</p>
                     * 
                     */
                    void SetRegionID(const int64_t& _regionID);

                    /**
                     * 判断参数 RegionID 是否已赋值
                     * @return RegionID 是否已赋值
                     * 
                     */
                    bool RegionIDHasBeenSet() const;

                    /**
                     * 获取<p>所属项目</p>
                     * @return Project <p>所属项目</p>
                     * 
                     */
                    ProjectInfo GetProject() const;

                    /**
                     * 设置<p>所属项目</p>
                     * @param _project <p>所属项目</p>
                     * 
                     */
                    void SetProject(const ProjectInfo& _project);

                    /**
                     * 判断参数 Project 是否已赋值
                     * @return Project 是否已赋值
                     * 
                     */
                    bool ProjectHasBeenSet() const;

                    /**
                     * 获取<p>标签</p>
                     * @return Tags <p>标签</p>
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _tags <p>标签</p>
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>集群id</p>
                     * @return ClusterID <p>集群id</p>
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置<p>集群id</p>
                     * @param _clusterID <p>集群id</p>
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取<p>集群名称</p>
                     * @return ClusterName <p>集群名称</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>集群名称</p>
                     * @param _clusterName <p>集群名称</p>
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取<p>集群接入状态</p>
                     * @return ClusterAccessedStatus <p>集群接入状态</p>
                     * 
                     */
                    std::string GetClusterAccessedStatus() const;

                    /**
                     * 设置<p>集群接入状态</p>
                     * @param _clusterAccessedStatus <p>集群接入状态</p>
                     * 
                     */
                    void SetClusterAccessedStatus(const std::string& _clusterAccessedStatus);

                    /**
                     * 判断参数 ClusterAccessedStatus 是否已赋值
                     * @return ClusterAccessedStatus 是否已赋值
                     * 
                     */
                    bool ClusterAccessedStatusHasBeenSet() const;

                    /**
                     * 获取<p>集群接入子状态</p><p>枚举值：</p><ul><li>AccessedSubNone： 无</li><li>AccessedSubUninstallException： 卸载异常</li><li>AccessedSubTimeout： 接入超时</li><li>AccessedSubUninstallTimeout： 卸载超时</li><li>AccessedSubResourceException： 集群组件检查异常-Deployment/DaemonSet等异常</li><li>AccessedSubCAMPermissionDenied： CAM权限不够</li></ul>
                     * @return ClusterAccessedSubStatus <p>集群接入子状态</p><p>枚举值：</p><ul><li>AccessedSubNone： 无</li><li>AccessedSubUninstallException： 卸载异常</li><li>AccessedSubTimeout： 接入超时</li><li>AccessedSubUninstallTimeout： 卸载超时</li><li>AccessedSubResourceException： 集群组件检查异常-Deployment/DaemonSet等异常</li><li>AccessedSubCAMPermissionDenied： CAM权限不够</li></ul>
                     * 
                     */
                    std::string GetClusterAccessedSubStatus() const;

                    /**
                     * 设置<p>集群接入子状态</p><p>枚举值：</p><ul><li>AccessedSubNone： 无</li><li>AccessedSubUninstallException： 卸载异常</li><li>AccessedSubTimeout： 接入超时</li><li>AccessedSubUninstallTimeout： 卸载超时</li><li>AccessedSubResourceException： 集群组件检查异常-Deployment/DaemonSet等异常</li><li>AccessedSubCAMPermissionDenied： CAM权限不够</li></ul>
                     * @param _clusterAccessedSubStatus <p>集群接入子状态</p><p>枚举值：</p><ul><li>AccessedSubNone： 无</li><li>AccessedSubUninstallException： 卸载异常</li><li>AccessedSubTimeout： 接入超时</li><li>AccessedSubUninstallTimeout： 卸载超时</li><li>AccessedSubResourceException： 集群组件检查异常-Deployment/DaemonSet等异常</li><li>AccessedSubCAMPermissionDenied： CAM权限不够</li></ul>
                     * 
                     */
                    void SetClusterAccessedSubStatus(const std::string& _clusterAccessedSubStatus);

                    /**
                     * 判断参数 ClusterAccessedSubStatus 是否已赋值
                     * @return ClusterAccessedSubStatus 是否已赋值
                     * 
                     */
                    bool ClusterAccessedSubStatusHasBeenSet() const;

                    /**
                     * 获取<p>失败具体原因描述</p>
                     * @return ClusterAccessedErrorReason <p>失败具体原因描述</p>
                     * 
                     */
                    std::string GetClusterAccessedErrorReason() const;

                    /**
                     * 设置<p>失败具体原因描述</p>
                     * @param _clusterAccessedErrorReason <p>失败具体原因描述</p>
                     * 
                     */
                    void SetClusterAccessedErrorReason(const std::string& _clusterAccessedErrorReason);

                    /**
                     * 判断参数 ClusterAccessedErrorReason 是否已赋值
                     * @return ClusterAccessedErrorReason 是否已赋值
                     * 
                     */
                    bool ClusterAccessedErrorReasonHasBeenSet() const;

                    /**
                     * 获取<p>计费核数</p>
                     * @return ChargeCoresCnt <p>计费核数</p>
                     * 
                     */
                    uint64_t GetChargeCoresCnt() const;

                    /**
                     * 设置<p>计费核数</p>
                     * @param _chargeCoresCnt <p>计费核数</p>
                     * 
                     */
                    void SetChargeCoresCnt(const uint64_t& _chargeCoresCnt);

                    /**
                     * 判断参数 ChargeCoresCnt 是否已赋值
                     * @return ChargeCoresCnt 是否已赋值
                     * 
                     */
                    bool ChargeCoresCntHasBeenSet() const;

                    /**
                     * 获取<p>防护状态:<br>已防护: Defended<br>未防护: UnDefended</p>
                     * @return DefendStatus <p>防护状态:<br>已防护: Defended<br>未防护: UnDefended</p>
                     * 
                     */
                    std::string GetDefendStatus() const;

                    /**
                     * 设置<p>防护状态:<br>已防护: Defended<br>未防护: UnDefended</p>
                     * @param _defendStatus <p>防护状态:<br>已防护: Defended<br>未防护: UnDefended</p>
                     * 
                     */
                    void SetDefendStatus(const std::string& _defendStatus);

                    /**
                     * 判断参数 DefendStatus 是否已赋值
                     * @return DefendStatus 是否已赋值
                     * 
                     */
                    bool DefendStatusHasBeenSet() const;

                    /**
                     * 获取<p>核数</p>
                     * @return CoresCnt <p>核数</p>
                     * 
                     */
                    uint64_t GetCoresCnt() const;

                    /**
                     * 设置<p>核数</p>
                     * @param _coresCnt <p>核数</p>
                     * 
                     */
                    void SetCoresCnt(const uint64_t& _coresCnt);

                    /**
                     * 判断参数 CoresCnt 是否已赋值
                     * @return CoresCnt 是否已赋值
                     * 
                     */
                    bool CoresCntHasBeenSet() const;

                    /**
                     * 获取<p>最近在线时间</p>
                     * @return LastOnlineTime <p>最近在线时间</p>
                     * 
                     */
                    std::string GetLastOnlineTime() const;

                    /**
                     * 设置<p>最近在线时间</p>
                     * @param _lastOnlineTime <p>最近在线时间</p>
                     * 
                     */
                    void SetLastOnlineTime(const std::string& _lastOnlineTime);

                    /**
                     * 判断参数 LastOnlineTime 是否已赋值
                     * @return LastOnlineTime 是否已赋值
                     * 
                     */
                    bool LastOnlineTimeHasBeenSet() const;

                private:

                    /**
                     * <p>主机id</p>
                     */
                    std::string m_hostID;
                    bool m_hostIDHasBeenSet;

                    /**
                     * <p>主机ip即内网ip</p>
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * <p>主机名称</p>
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * <p>业务组</p>
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * <p>docker 版本</p>
                     */
                    std::string m_dockerVersion;
                    bool m_dockerVersionHasBeenSet;

                    /**
                     * <p>docker 文件系统类型</p>
                     */
                    std::string m_dockerFileSystemDriver;
                    bool m_dockerFileSystemDriverHasBeenSet;

                    /**
                     * <p>镜像个数</p>
                     */
                    uint64_t m_imageCnt;
                    bool m_imageCntHasBeenSet;

                    /**
                     * <p>容器个数</p>
                     */
                    uint64_t m_containerCnt;
                    bool m_containerCntHasBeenSet;

                    /**
                     * <p>agent运行状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>是否是Containerd</p>
                     */
                    bool m_isContainerd;
                    bool m_isContainerdHasBeenSet;

                    /**
                     * <p>主机来源：[&quot;CVM&quot;, &quot;ECM&quot;, &quot;LH&quot;, &quot;BM&quot;]  中的之一为腾讯云服务器；[&quot;Other&quot;]之一非腾讯云服务器；</p>
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * <p>外网ip</p>
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * <p>主机uuid</p>
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * <p>主机实例ID</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>地域ID</p>
                     */
                    int64_t m_regionID;
                    bool m_regionIDHasBeenSet;

                    /**
                     * <p>所属项目</p>
                     */
                    ProjectInfo m_project;
                    bool m_projectHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>集群id</p>
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * <p>集群名称</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>集群接入状态</p>
                     */
                    std::string m_clusterAccessedStatus;
                    bool m_clusterAccessedStatusHasBeenSet;

                    /**
                     * <p>集群接入子状态</p><p>枚举值：</p><ul><li>AccessedSubNone： 无</li><li>AccessedSubUninstallException： 卸载异常</li><li>AccessedSubTimeout： 接入超时</li><li>AccessedSubUninstallTimeout： 卸载超时</li><li>AccessedSubResourceException： 集群组件检查异常-Deployment/DaemonSet等异常</li><li>AccessedSubCAMPermissionDenied： CAM权限不够</li></ul>
                     */
                    std::string m_clusterAccessedSubStatus;
                    bool m_clusterAccessedSubStatusHasBeenSet;

                    /**
                     * <p>失败具体原因描述</p>
                     */
                    std::string m_clusterAccessedErrorReason;
                    bool m_clusterAccessedErrorReasonHasBeenSet;

                    /**
                     * <p>计费核数</p>
                     */
                    uint64_t m_chargeCoresCnt;
                    bool m_chargeCoresCntHasBeenSet;

                    /**
                     * <p>防护状态:<br>已防护: Defended<br>未防护: UnDefended</p>
                     */
                    std::string m_defendStatus;
                    bool m_defendStatusHasBeenSet;

                    /**
                     * <p>核数</p>
                     */
                    uint64_t m_coresCnt;
                    bool m_coresCntHasBeenSet;

                    /**
                     * <p>最近在线时间</p>
                     */
                    std::string m_lastOnlineTime;
                    bool m_lastOnlineTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_HOSTINFO_H_
