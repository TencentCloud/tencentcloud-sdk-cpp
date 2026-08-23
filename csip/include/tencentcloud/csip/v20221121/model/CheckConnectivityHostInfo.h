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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CHECKCONNECTIVITYHOSTINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CHECKCONNECTIVITYHOSTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ProjectInfo.h>
#include <tencentcloud/csip/v20221121/model/Tags.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 用于联通性检测主机信息
                */
                class CheckConnectivityHostInfo : public AbstractModel
                {
                public:
                    CheckConnectivityHostInfo();
                    ~CheckConnectivityHostInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>主机id</p>
                     * @return HostId <p>主机id</p>
                     * 
                     */
                    std::string GetHostId() const;

                    /**
                     * 设置<p>主机id</p>
                     * @param _hostId <p>主机id</p>
                     * 
                     */
                    void SetHostId(const std::string& _hostId);

                    /**
                     * 判断参数 HostId 是否已赋值
                     * @return HostId 是否已赋值
                     * 
                     */
                    bool HostIdHasBeenSet() const;

                    /**
                     * 获取<p>主机ip</p>
                     * @return HostIp <p>主机ip</p>
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置<p>主机ip</p>
                     * @param _hostIp <p>主机ip</p>
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取<p>主机名</p>
                     * @return HostName <p>主机名</p>
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置<p>主机名</p>
                     * @param _hostName <p>主机名</p>
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
                     * 获取<p>docker版本</p>
                     * @return DockerVersion <p>docker版本</p>
                     * 
                     */
                    std::string GetDockerVersion() const;

                    /**
                     * 设置<p>docker版本</p>
                     * @param _dockerVersion <p>docker版本</p>
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
                     * 获取<p>docker文件系统类型</p>
                     * @return DockerFileSystemDriver <p>docker文件系统类型</p>
                     * 
                     */
                    std::string GetDockerFileSystemDriver() const;

                    /**
                     * 设置<p>docker文件系统类型</p>
                     * @param _dockerFileSystemDriver <p>docker文件系统类型</p>
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
                     * 获取<p>状态</p>
                     * @return Status <p>状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态</p>
                     * @param _status <p>状态</p>
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
                     * 获取<p>是否是容器</p>
                     * @return IsContainerd <p>是否是容器</p>
                     * 
                     */
                    bool GetIsContainerd() const;

                    /**
                     * 设置<p>是否是容器</p>
                     * @param _isContainerd <p>是否是容器</p>
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
                     * 获取<p>主机类型</p>
                     * @return MachineType <p>主机类型</p>
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置<p>主机类型</p>
                     * @param _machineType <p>主机类型</p>
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
                     * 获取<p>公网ip</p>
                     * @return PublicIp <p>公网ip</p>
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置<p>公网ip</p>
                     * @param _publicIp <p>公网ip</p>
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
                     * 获取<p>主机UUID</p>
                     * @return Uuid <p>主机UUID</p>
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置<p>主机UUID</p>
                     * @param _uuid <p>主机UUID</p>
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
                     * 获取<p>实例id</p>
                     * @return InstanceId <p>实例id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例id</p>
                     * @param _instanceId <p>实例id</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>主机所在region id</p>
                     * @return HostRegionId <p>主机所在region id</p>
                     * 
                     */
                    int64_t GetHostRegionId() const;

                    /**
                     * 设置<p>主机所在region id</p>
                     * @param _hostRegionId <p>主机所在region id</p>
                     * 
                     */
                    void SetHostRegionId(const int64_t& _hostRegionId);

                    /**
                     * 判断参数 HostRegionId 是否已赋值
                     * @return HostRegionId 是否已赋值
                     * 
                     */
                    bool HostRegionIdHasBeenSet() const;

                    /**
                     * 获取<p>主机所在地域</p>
                     * @return HostRegion <p>主机所在地域</p>
                     * 
                     */
                    std::string GetHostRegion() const;

                    /**
                     * 设置<p>主机所在地域</p>
                     * @param _hostRegion <p>主机所在地域</p>
                     * 
                     */
                    void SetHostRegion(const std::string& _hostRegion);

                    /**
                     * 判断参数 HostRegion 是否已赋值
                     * @return HostRegion 是否已赋值
                     * 
                     */
                    bool HostRegionHasBeenSet() const;

                    /**
                     * 获取<p>集群所属项目</p>
                     * @return Project <p>集群所属项目</p>
                     * 
                     */
                    ProjectInfo GetProject() const;

                    /**
                     * 设置<p>集群所属项目</p>
                     * @param _project <p>集群所属项目</p>
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
                     * 获取<p>集群标签</p>
                     * @return Tags <p>集群标签</p>
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置<p>集群标签</p>
                     * @param _tags <p>集群标签</p>
                     * 
                     */
                    void SetTags(const std::vector<Tags>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>集群id</p>
                     * @return ClusterId <p>集群id</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群id</p>
                     * @param _clusterId <p>集群id</p>
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
                     * 获取<p>集群名</p>
                     * @return ClusterName <p>集群名</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>集群名</p>
                     * @param _clusterName <p>集群名</p>
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                private:

                    /**
                     * <p>主机id</p>
                     */
                    std::string m_hostId;
                    bool m_hostIdHasBeenSet;

                    /**
                     * <p>主机ip</p>
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * <p>主机名</p>
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * <p>docker版本</p>
                     */
                    std::string m_dockerVersion;
                    bool m_dockerVersionHasBeenSet;

                    /**
                     * <p>docker文件系统类型</p>
                     */
                    std::string m_dockerFileSystemDriver;
                    bool m_dockerFileSystemDriverHasBeenSet;

                    /**
                     * <p>状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>是否是容器</p>
                     */
                    bool m_isContainerd;
                    bool m_isContainerdHasBeenSet;

                    /**
                     * <p>主机类型</p>
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * <p>公网ip</p>
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * <p>主机UUID</p>
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * <p>实例id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>主机所在region id</p>
                     */
                    int64_t m_hostRegionId;
                    bool m_hostRegionIdHasBeenSet;

                    /**
                     * <p>主机所在地域</p>
                     */
                    std::string m_hostRegion;
                    bool m_hostRegionHasBeenSet;

                    /**
                     * <p>集群所属项目</p>
                     */
                    ProjectInfo m_project;
                    bool m_projectHasBeenSet;

                    /**
                     * <p>集群标签</p>
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>集群id</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>集群名</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CHECKCONNECTIVITYHOSTINFO_H_
