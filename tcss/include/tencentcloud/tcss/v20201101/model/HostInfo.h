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
                     * 获取主机id
                     * @return HostID 主机id
                     */
                    std::string GetHostID() const;

                    /**
                     * 设置主机id
                     * @param HostID 主机id
                     */
                    void SetHostID(const std::string& _hostID);

                    /**
                     * 判断参数 HostID 是否已赋值
                     * @return HostID 是否已赋值
                     */
                    bool HostIDHasBeenSet() const;

                    /**
                     * 获取主机ip即内网ip
                     * @return HostIP 主机ip即内网ip
                     */
                    std::string GetHostIP() const;

                    /**
                     * 设置主机ip即内网ip
                     * @param HostIP 主机ip即内网ip
                     */
                    void SetHostIP(const std::string& _hostIP);

                    /**
                     * 判断参数 HostIP 是否已赋值
                     * @return HostIP 是否已赋值
                     */
                    bool HostIPHasBeenSet() const;

                    /**
                     * 获取主机名称
                     * @return HostName 主机名称
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置主机名称
                     * @param HostName 主机名称
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取业务组
                     * @return Group 业务组
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置业务组
                     * @param Group 业务组
                     */
                    void SetGroup(const std::string& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取docker 版本
                     * @return DockerVersion docker 版本
                     */
                    std::string GetDockerVersion() const;

                    /**
                     * 设置docker 版本
                     * @param DockerVersion docker 版本
                     */
                    void SetDockerVersion(const std::string& _dockerVersion);

                    /**
                     * 判断参数 DockerVersion 是否已赋值
                     * @return DockerVersion 是否已赋值
                     */
                    bool DockerVersionHasBeenSet() const;

                    /**
                     * 获取docker 文件系统类型
                     * @return DockerFileSystemDriver docker 文件系统类型
                     */
                    std::string GetDockerFileSystemDriver() const;

                    /**
                     * 设置docker 文件系统类型
                     * @param DockerFileSystemDriver docker 文件系统类型
                     */
                    void SetDockerFileSystemDriver(const std::string& _dockerFileSystemDriver);

                    /**
                     * 判断参数 DockerFileSystemDriver 是否已赋值
                     * @return DockerFileSystemDriver 是否已赋值
                     */
                    bool DockerFileSystemDriverHasBeenSet() const;

                    /**
                     * 获取镜像个数
                     * @return ImageCnt 镜像个数
                     */
                    uint64_t GetImageCnt() const;

                    /**
                     * 设置镜像个数
                     * @param ImageCnt 镜像个数
                     */
                    void SetImageCnt(const uint64_t& _imageCnt);

                    /**
                     * 判断参数 ImageCnt 是否已赋值
                     * @return ImageCnt 是否已赋值
                     */
                    bool ImageCntHasBeenSet() const;

                    /**
                     * 获取容器个数
                     * @return ContainerCnt 容器个数
                     */
                    uint64_t GetContainerCnt() const;

                    /**
                     * 设置容器个数
                     * @param ContainerCnt 容器个数
                     */
                    void SetContainerCnt(const uint64_t& _containerCnt);

                    /**
                     * 判断参数 ContainerCnt 是否已赋值
                     * @return ContainerCnt 是否已赋值
                     */
                    bool ContainerCntHasBeenSet() const;

                    /**
                     * 获取agent运行状态
                     * @return Status agent运行状态
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置agent运行状态
                     * @param Status agent运行状态
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取是否是Containerd
                     * @return IsContainerd 是否是Containerd
                     */
                    bool GetIsContainerd() const;

                    /**
                     * 设置是否是Containerd
                     * @param IsContainerd 是否是Containerd
                     */
                    void SetIsContainerd(const bool& _isContainerd);

                    /**
                     * 判断参数 IsContainerd 是否已赋值
                     * @return IsContainerd 是否已赋值
                     */
                    bool IsContainerdHasBeenSet() const;

                    /**
                     * 获取主机来源：["CVM", "ECM", "LH", "BM"]  中的之一为腾讯云服务器；["Other"]之一非腾讯云服务器；
                     * @return MachineType 主机来源：["CVM", "ECM", "LH", "BM"]  中的之一为腾讯云服务器；["Other"]之一非腾讯云服务器；
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置主机来源：["CVM", "ECM", "LH", "BM"]  中的之一为腾讯云服务器；["Other"]之一非腾讯云服务器；
                     * @param MachineType 主机来源：["CVM", "ECM", "LH", "BM"]  中的之一为腾讯云服务器；["Other"]之一非腾讯云服务器；
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取外网ip
                     * @return PublicIp 外网ip
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置外网ip
                     * @param PublicIp 外网ip
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取主机uuid
                     * @return Uuid 主机uuid
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置主机uuid
                     * @param Uuid 主机uuid
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取主机实例ID
                     * @return InstanceID 主机实例ID
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置主机实例ID
                     * @param InstanceID 主机实例ID
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取地域ID
                     * @return RegionID 地域ID
                     */
                    int64_t GetRegionID() const;

                    /**
                     * 设置地域ID
                     * @param RegionID 地域ID
                     */
                    void SetRegionID(const int64_t& _regionID);

                    /**
                     * 判断参数 RegionID 是否已赋值
                     * @return RegionID 是否已赋值
                     */
                    bool RegionIDHasBeenSet() const;

                    /**
                     * 获取所属项目
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Project 所属项目
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ProjectInfo GetProject() const;

                    /**
                     * 设置所属项目
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Project 所属项目
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProject(const ProjectInfo& _project);

                    /**
                     * 判断参数 Project 是否已赋值
                     * @return Project 是否已赋值
                     */
                    bool ProjectHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取集群id
                     * @return ClusterID 集群id
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置集群id
                     * @param ClusterID 集群id
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     */
                    bool ClusterIDHasBeenSet() const;

                private:

                    /**
                     * 主机id
                     */
                    std::string m_hostID;
                    bool m_hostIDHasBeenSet;

                    /**
                     * 主机ip即内网ip
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * 主机名称
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 业务组
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * docker 版本
                     */
                    std::string m_dockerVersion;
                    bool m_dockerVersionHasBeenSet;

                    /**
                     * docker 文件系统类型
                     */
                    std::string m_dockerFileSystemDriver;
                    bool m_dockerFileSystemDriverHasBeenSet;

                    /**
                     * 镜像个数
                     */
                    uint64_t m_imageCnt;
                    bool m_imageCntHasBeenSet;

                    /**
                     * 容器个数
                     */
                    uint64_t m_containerCnt;
                    bool m_containerCntHasBeenSet;

                    /**
                     * agent运行状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否是Containerd
                     */
                    bool m_isContainerd;
                    bool m_isContainerdHasBeenSet;

                    /**
                     * 主机来源：["CVM", "ECM", "LH", "BM"]  中的之一为腾讯云服务器；["Other"]之一非腾讯云服务器；
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * 外网ip
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 主机uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ProjectInfo m_project;
                    bool m_projectHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 集群id
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_HOSTINFO_H_
