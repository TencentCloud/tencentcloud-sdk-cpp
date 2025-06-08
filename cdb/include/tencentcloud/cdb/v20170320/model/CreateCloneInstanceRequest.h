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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CREATECLONEINSTANCEREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CREATECLONEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/TagInfo.h>
#include <tencentcloud/cdb/v20170320/model/ClusterTopology.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * CreateCloneInstance请求参数结构体
                */
                class CreateCloneInstanceRequest : public AbstractModel
                {
                public:
                    CreateCloneInstanceRequest();
                    ~CreateCloneInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取克隆源实例Id。
                     * @return InstanceId 克隆源实例Id。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置克隆源实例Id。
                     * @param _instanceId 克隆源实例Id。
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
                     * 获取如果需要克隆实例回档到指定时间，则指定该值。时间格式为：yyyy-mm-dd hh:mm:ss。
说明：此参数和 SpecifiedBackupId 参数需要2选1进行设置。
                     * @return SpecifiedRollbackTime 如果需要克隆实例回档到指定时间，则指定该值。时间格式为：yyyy-mm-dd hh:mm:ss。
说明：此参数和 SpecifiedBackupId 参数需要2选1进行设置。
                     * 
                     */
                    std::string GetSpecifiedRollbackTime() const;

                    /**
                     * 设置如果需要克隆实例回档到指定时间，则指定该值。时间格式为：yyyy-mm-dd hh:mm:ss。
说明：此参数和 SpecifiedBackupId 参数需要2选1进行设置。
                     * @param _specifiedRollbackTime 如果需要克隆实例回档到指定时间，则指定该值。时间格式为：yyyy-mm-dd hh:mm:ss。
说明：此参数和 SpecifiedBackupId 参数需要2选1进行设置。
                     * 
                     */
                    void SetSpecifiedRollbackTime(const std::string& _specifiedRollbackTime);

                    /**
                     * 判断参数 SpecifiedRollbackTime 是否已赋值
                     * @return SpecifiedRollbackTime 是否已赋值
                     * 
                     */
                    bool SpecifiedRollbackTimeHasBeenSet() const;

                    /**
                     * 获取如果需要克隆实例回档到指定备份集，则指定该值为备份文件的 Id。请使用 [查询数据备份文件列表](/document/api/236/15842)。
说明：如果是克隆双节点、三节点实例，备份文件为物理备份，如果是克隆单节点、集群版实例，备份文件为快照备份。
                     * @return SpecifiedBackupId 如果需要克隆实例回档到指定备份集，则指定该值为备份文件的 Id。请使用 [查询数据备份文件列表](/document/api/236/15842)。
说明：如果是克隆双节点、三节点实例，备份文件为物理备份，如果是克隆单节点、集群版实例，备份文件为快照备份。
                     * 
                     */
                    int64_t GetSpecifiedBackupId() const;

                    /**
                     * 设置如果需要克隆实例回档到指定备份集，则指定该值为备份文件的 Id。请使用 [查询数据备份文件列表](/document/api/236/15842)。
说明：如果是克隆双节点、三节点实例，备份文件为物理备份，如果是克隆单节点、集群版实例，备份文件为快照备份。
                     * @param _specifiedBackupId 如果需要克隆实例回档到指定备份集，则指定该值为备份文件的 Id。请使用 [查询数据备份文件列表](/document/api/236/15842)。
说明：如果是克隆双节点、三节点实例，备份文件为物理备份，如果是克隆单节点、集群版实例，备份文件为快照备份。
                     * 
                     */
                    void SetSpecifiedBackupId(const int64_t& _specifiedBackupId);

                    /**
                     * 判断参数 SpecifiedBackupId 是否已赋值
                     * @return SpecifiedBackupId 是否已赋值
                     * 
                     */
                    bool SpecifiedBackupIdHasBeenSet() const;

                    /**
                     * 获取私有网络 ID，请使用 [查询私有网络列表](/document/api/215/15778)。
                     * @return UniqVpcId 私有网络 ID，请使用 [查询私有网络列表](/document/api/215/15778)。
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置私有网络 ID，请使用 [查询私有网络列表](/document/api/215/15778)。
                     * @param _uniqVpcId 私有网络 ID，请使用 [查询私有网络列表](/document/api/215/15778)。
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取私有网络下的子网 ID，如果设置了 UniqVpcId，则 UniqSubnetId 必填，请使用 [查询子网列表](/document/api/215/15784)。
                     * @return UniqSubnetId 私有网络下的子网 ID，如果设置了 UniqVpcId，则 UniqSubnetId 必填，请使用 [查询子网列表](/document/api/215/15784)。
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置私有网络下的子网 ID，如果设置了 UniqVpcId，则 UniqSubnetId 必填，请使用 [查询子网列表](/document/api/215/15784)。
                     * @param _uniqSubnetId 私有网络下的子网 ID，如果设置了 UniqVpcId，则 UniqSubnetId 必填，请使用 [查询子网列表](/document/api/215/15784)。
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取实例内存大小，单位：MB，需要不低于克隆源实例，默认和源实例相同。
                     * @return Memory 实例内存大小，单位：MB，需要不低于克隆源实例，默认和源实例相同。
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置实例内存大小，单位：MB，需要不低于克隆源实例，默认和源实例相同。
                     * @param _memory 实例内存大小，单位：MB，需要不低于克隆源实例，默认和源实例相同。
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取实例硬盘大小，单位：GB，需要不低于克隆源实例，默认和源实例相同。
                     * @return Volume 实例硬盘大小，单位：GB，需要不低于克隆源实例，默认和源实例相同。
                     * 
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置实例硬盘大小，单位：GB，需要不低于克隆源实例，默认和源实例相同。
                     * @param _volume 实例硬盘大小，单位：GB，需要不低于克隆源实例，默认和源实例相同。
                     * 
                     */
                    void SetVolume(const int64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取新产生的克隆实例名称。
                     * @return InstanceName 新产生的克隆实例名称。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置新产生的克隆实例名称。
                     * @param _instanceName 新产生的克隆实例名称。
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取安全组参数，可使用 [查询项目安全组信息](https://cloud.tencent.com/document/api/236/15850) 接口查询某个项目的安全组详情。
                     * @return SecurityGroup 安全组参数，可使用 [查询项目安全组信息](https://cloud.tencent.com/document/api/236/15850) 接口查询某个项目的安全组详情。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroup() const;

                    /**
                     * 设置安全组参数，可使用 [查询项目安全组信息](https://cloud.tencent.com/document/api/236/15850) 接口查询某个项目的安全组详情。
                     * @param _securityGroup 安全组参数，可使用 [查询项目安全组信息](https://cloud.tencent.com/document/api/236/15850) 接口查询某个项目的安全组详情。
                     * 
                     */
                    void SetSecurityGroup(const std::vector<std::string>& _securityGroup);

                    /**
                     * 判断参数 SecurityGroup 是否已赋值
                     * @return SecurityGroup 是否已赋值
                     * 
                     */
                    bool SecurityGroupHasBeenSet() const;

                    /**
                     * 获取实例标签信息。
                     * @return ResourceTags 实例标签信息。
                     * 
                     */
                    std::vector<TagInfo> GetResourceTags() const;

                    /**
                     * 设置实例标签信息。
                     * @param _resourceTags 实例标签信息。
                     * 
                     */
                    void SetResourceTags(const std::vector<TagInfo>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取实例Cpu核数，需要不低于克隆源实例，默认和源实例相同。
                     * @return Cpu 实例Cpu核数，需要不低于克隆源实例，默认和源实例相同。
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置实例Cpu核数，需要不低于克隆源实例，默认和源实例相同。
                     * @param _cpu 实例Cpu核数，需要不低于克隆源实例，默认和源实例相同。
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取数据复制方式，默认为 0，支持值包括：0 - 表示异步复制，1 - 表示半同步复制，2 - 表示强同步复制。
                     * @return ProtectMode 数据复制方式，默认为 0，支持值包括：0 - 表示异步复制，1 - 表示半同步复制，2 - 表示强同步复制。
                     * 
                     */
                    int64_t GetProtectMode() const;

                    /**
                     * 设置数据复制方式，默认为 0，支持值包括：0 - 表示异步复制，1 - 表示半同步复制，2 - 表示强同步复制。
                     * @param _protectMode 数据复制方式，默认为 0，支持值包括：0 - 表示异步复制，1 - 表示半同步复制，2 - 表示强同步复制。
                     * 
                     */
                    void SetProtectMode(const int64_t& _protectMode);

                    /**
                     * 判断参数 ProtectMode 是否已赋值
                     * @return ProtectMode 是否已赋值
                     * 
                     */
                    bool ProtectModeHasBeenSet() const;

                    /**
                     * 获取多可用区域，默认为 0，支持值包括：0 - 表示单可用区，1 - 表示多可用区。
                     * @return DeployMode 多可用区域，默认为 0，支持值包括：0 - 表示单可用区，1 - 表示多可用区。
                     * 
                     */
                    int64_t GetDeployMode() const;

                    /**
                     * 设置多可用区域，默认为 0，支持值包括：0 - 表示单可用区，1 - 表示多可用区。
                     * @param _deployMode 多可用区域，默认为 0，支持值包括：0 - 表示单可用区，1 - 表示多可用区。
                     * 
                     */
                    void SetDeployMode(const int64_t& _deployMode);

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     * 
                     */
                    bool DeployModeHasBeenSet() const;

                    /**
                     * 获取新产生的克隆实例备库 1 的可用区信息，默认同源实例 Zone 的值。
                     * @return SlaveZone 新产生的克隆实例备库 1 的可用区信息，默认同源实例 Zone 的值。
                     * 
                     */
                    std::string GetSlaveZone() const;

                    /**
                     * 设置新产生的克隆实例备库 1 的可用区信息，默认同源实例 Zone 的值。
                     * @param _slaveZone 新产生的克隆实例备库 1 的可用区信息，默认同源实例 Zone 的值。
                     * 
                     */
                    void SetSlaveZone(const std::string& _slaveZone);

                    /**
                     * 判断参数 SlaveZone 是否已赋值
                     * @return SlaveZone 是否已赋值
                     * 
                     */
                    bool SlaveZoneHasBeenSet() const;

                    /**
                     * 获取备库 2 的可用区信息，默认为空，克隆强同步主实例时可指定该参数。
                     * @return BackupZone 备库 2 的可用区信息，默认为空，克隆强同步主实例时可指定该参数。
                     * 
                     */
                    std::string GetBackupZone() const;

                    /**
                     * 设置备库 2 的可用区信息，默认为空，克隆强同步主实例时可指定该参数。
                     * @param _backupZone 备库 2 的可用区信息，默认为空，克隆强同步主实例时可指定该参数。
                     * 
                     */
                    void SetBackupZone(const std::string& _backupZone);

                    /**
                     * 判断参数 BackupZone 是否已赋值
                     * @return BackupZone 是否已赋值
                     * 
                     */
                    bool BackupZoneHasBeenSet() const;

                    /**
                     * 获取克隆实例类型。支持值包括："UNIVERSAL" - 通用型实例，"EXCLUSIVE" - 独享型实例，"CLOUD_NATIVE_CLUSTER" - 集群版标准型，"CLOUD_NATIVE_CLUSTER_EXCLUSIVE" - 集群版加强型。不指定则默认为通用型。
                     * @return DeviceType 克隆实例类型。支持值包括："UNIVERSAL" - 通用型实例，"EXCLUSIVE" - 独享型实例，"CLOUD_NATIVE_CLUSTER" - 集群版标准型，"CLOUD_NATIVE_CLUSTER_EXCLUSIVE" - 集群版加强型。不指定则默认为通用型。
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置克隆实例类型。支持值包括："UNIVERSAL" - 通用型实例，"EXCLUSIVE" - 独享型实例，"CLOUD_NATIVE_CLUSTER" - 集群版标准型，"CLOUD_NATIVE_CLUSTER_EXCLUSIVE" - 集群版加强型。不指定则默认为通用型。
                     * @param _deviceType 克隆实例类型。支持值包括："UNIVERSAL" - 通用型实例，"EXCLUSIVE" - 独享型实例，"CLOUD_NATIVE_CLUSTER" - 集群版标准型，"CLOUD_NATIVE_CLUSTER_EXCLUSIVE" - 集群版加强型。不指定则默认为通用型。
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取新克隆实例节点数。如果需要克隆出三节点实例， 请将该值设置为3 或指定 BackupZone 参数。如果需要克隆出两节点实例，请将该值设置为2。默认克隆出两节点实例。
                     * @return InstanceNodes 新克隆实例节点数。如果需要克隆出三节点实例， 请将该值设置为3 或指定 BackupZone 参数。如果需要克隆出两节点实例，请将该值设置为2。默认克隆出两节点实例。
                     * 
                     */
                    int64_t GetInstanceNodes() const;

                    /**
                     * 设置新克隆实例节点数。如果需要克隆出三节点实例， 请将该值设置为3 或指定 BackupZone 参数。如果需要克隆出两节点实例，请将该值设置为2。默认克隆出两节点实例。
                     * @param _instanceNodes 新克隆实例节点数。如果需要克隆出三节点实例， 请将该值设置为3 或指定 BackupZone 参数。如果需要克隆出两节点实例，请将该值设置为2。默认克隆出两节点实例。
                     * 
                     */
                    void SetInstanceNodes(const int64_t& _instanceNodes);

                    /**
                     * 判断参数 InstanceNodes 是否已赋值
                     * @return InstanceNodes 是否已赋值
                     * 
                     */
                    bool InstanceNodesHasBeenSet() const;

                    /**
                     * 获取置放群组 ID。
                     * @return DeployGroupId 置放群组 ID。
                     * 
                     */
                    std::string GetDeployGroupId() const;

                    /**
                     * 设置置放群组 ID。
                     * @param _deployGroupId 置放群组 ID。
                     * 
                     */
                    void SetDeployGroupId(const std::string& _deployGroupId);

                    /**
                     * 判断参数 DeployGroupId 是否已赋值
                     * @return DeployGroupId 是否已赋值
                     * 
                     */
                    bool DeployGroupIdHasBeenSet() const;

                    /**
                     * 获取是否只预检此次请求。true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制等。如果检查不通过，则返回对应错误码；如果检查通过，则返回RequestId.默认为false：发送正常请求，通过检查后直接创建实例。
                     * @return DryRun 是否只预检此次请求。true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制等。如果检查不通过，则返回对应错误码；如果检查通过，则返回RequestId.默认为false：发送正常请求，通过检查后直接创建实例。
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置是否只预检此次请求。true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制等。如果检查不通过，则返回对应错误码；如果检查通过，则返回RequestId.默认为false：发送正常请求，通过检查后直接创建实例。
                     * @param _dryRun 是否只预检此次请求。true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制等。如果检查不通过，则返回对应错误码；如果检查通过，则返回RequestId.默认为false：发送正常请求，通过检查后直接创建实例。
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取金融围拢 ID 。
                     * @return CageId 金融围拢 ID 。
                     * 
                     */
                    std::string GetCageId() const;

                    /**
                     * 设置金融围拢 ID 。
                     * @param _cageId 金融围拢 ID 。
                     * 
                     */
                    void SetCageId(const std::string& _cageId);

                    /**
                     * 判断参数 CageId 是否已赋值
                     * @return CageId 是否已赋值
                     * 
                     */
                    bool CageIdHasBeenSet() const;

                    /**
                     * 获取项目ID，默认项目ID0
                     * @return ProjectId 项目ID，默认项目ID0
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目ID，默认项目ID0
                     * @param _projectId 项目ID，默认项目ID0
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取付费类型，PRE_PAID：包年包月，USED_PAID：按量计费。默认为按量计费
                     * @return PayType 付费类型，PRE_PAID：包年包月，USED_PAID：按量计费。默认为按量计费
                     * 
                     */
                    std::string GetPayType() const;

                    /**
                     * 设置付费类型，PRE_PAID：包年包月，USED_PAID：按量计费。默认为按量计费
                     * @param _payType 付费类型，PRE_PAID：包年包月，USED_PAID：按量计费。默认为按量计费
                     * 
                     */
                    void SetPayType(const std::string& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     * 
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取实例时长，PayType为PRE_PAID时必传，单位：月，可选值包括 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。
                     * @return Period 实例时长，PayType为PRE_PAID时必传，单位：月，可选值包括 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置实例时长，PayType为PRE_PAID时必传，单位：月，可选值包括 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。
                     * @param _period 实例时长，PayType为PRE_PAID时必传，单位：月，可选值包括 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取集群版节点拓扑配置。
                     * @return ClusterTopology 集群版节点拓扑配置。
                     * 
                     */
                    ClusterTopology GetClusterTopology() const;

                    /**
                     * 设置集群版节点拓扑配置。
                     * @param _clusterTopology 集群版节点拓扑配置。
                     * 
                     */
                    void SetClusterTopology(const ClusterTopology& _clusterTopology);

                    /**
                     * 判断参数 ClusterTopology 是否已赋值
                     * @return ClusterTopology 是否已赋值
                     * 
                     */
                    bool ClusterTopologyHasBeenSet() const;

                    /**
                     * 获取原实例所在地域名，当传入异地备份时为必选项，例：ap-guangzhou
                     * @return SrcRegion 原实例所在地域名，当传入异地备份时为必选项，例：ap-guangzhou
                     * 
                     */
                    std::string GetSrcRegion() const;

                    /**
                     * 设置原实例所在地域名，当传入异地备份时为必选项，例：ap-guangzhou
                     * @param _srcRegion 原实例所在地域名，当传入异地备份时为必选项，例：ap-guangzhou
                     * 
                     */
                    void SetSrcRegion(const std::string& _srcRegion);

                    /**
                     * 判断参数 SrcRegion 是否已赋值
                     * @return SrcRegion 是否已赋值
                     * 
                     */
                    bool SrcRegionHasBeenSet() const;

                    /**
                     * 获取异地数据备份id
                     * @return SpecifiedSubBackupId 异地数据备份id
                     * 
                     */
                    int64_t GetSpecifiedSubBackupId() const;

                    /**
                     * 设置异地数据备份id
                     * @param _specifiedSubBackupId 异地数据备份id
                     * 
                     */
                    void SetSpecifiedSubBackupId(const int64_t& _specifiedSubBackupId);

                    /**
                     * 判断参数 SpecifiedSubBackupId 是否已赋值
                     * @return SpecifiedSubBackupId 是否已赋值
                     * 
                     */
                    bool SpecifiedSubBackupIdHasBeenSet() const;

                private:

                    /**
                     * 克隆源实例Id。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 如果需要克隆实例回档到指定时间，则指定该值。时间格式为：yyyy-mm-dd hh:mm:ss。
说明：此参数和 SpecifiedBackupId 参数需要2选1进行设置。
                     */
                    std::string m_specifiedRollbackTime;
                    bool m_specifiedRollbackTimeHasBeenSet;

                    /**
                     * 如果需要克隆实例回档到指定备份集，则指定该值为备份文件的 Id。请使用 [查询数据备份文件列表](/document/api/236/15842)。
说明：如果是克隆双节点、三节点实例，备份文件为物理备份，如果是克隆单节点、集群版实例，备份文件为快照备份。
                     */
                    int64_t m_specifiedBackupId;
                    bool m_specifiedBackupIdHasBeenSet;

                    /**
                     * 私有网络 ID，请使用 [查询私有网络列表](/document/api/215/15778)。
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 私有网络下的子网 ID，如果设置了 UniqVpcId，则 UniqSubnetId 必填，请使用 [查询子网列表](/document/api/215/15784)。
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * 实例内存大小，单位：MB，需要不低于克隆源实例，默认和源实例相同。
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 实例硬盘大小，单位：GB，需要不低于克隆源实例，默认和源实例相同。
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * 新产生的克隆实例名称。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 安全组参数，可使用 [查询项目安全组信息](https://cloud.tencent.com/document/api/236/15850) 接口查询某个项目的安全组详情。
                     */
                    std::vector<std::string> m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * 实例标签信息。
                     */
                    std::vector<TagInfo> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * 实例Cpu核数，需要不低于克隆源实例，默认和源实例相同。
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 数据复制方式，默认为 0，支持值包括：0 - 表示异步复制，1 - 表示半同步复制，2 - 表示强同步复制。
                     */
                    int64_t m_protectMode;
                    bool m_protectModeHasBeenSet;

                    /**
                     * 多可用区域，默认为 0，支持值包括：0 - 表示单可用区，1 - 表示多可用区。
                     */
                    int64_t m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * 新产生的克隆实例备库 1 的可用区信息，默认同源实例 Zone 的值。
                     */
                    std::string m_slaveZone;
                    bool m_slaveZoneHasBeenSet;

                    /**
                     * 备库 2 的可用区信息，默认为空，克隆强同步主实例时可指定该参数。
                     */
                    std::string m_backupZone;
                    bool m_backupZoneHasBeenSet;

                    /**
                     * 克隆实例类型。支持值包括："UNIVERSAL" - 通用型实例，"EXCLUSIVE" - 独享型实例，"CLOUD_NATIVE_CLUSTER" - 集群版标准型，"CLOUD_NATIVE_CLUSTER_EXCLUSIVE" - 集群版加强型。不指定则默认为通用型。
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 新克隆实例节点数。如果需要克隆出三节点实例， 请将该值设置为3 或指定 BackupZone 参数。如果需要克隆出两节点实例，请将该值设置为2。默认克隆出两节点实例。
                     */
                    int64_t m_instanceNodes;
                    bool m_instanceNodesHasBeenSet;

                    /**
                     * 置放群组 ID。
                     */
                    std::string m_deployGroupId;
                    bool m_deployGroupIdHasBeenSet;

                    /**
                     * 是否只预检此次请求。true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制等。如果检查不通过，则返回对应错误码；如果检查通过，则返回RequestId.默认为false：发送正常请求，通过检查后直接创建实例。
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * 金融围拢 ID 。
                     */
                    std::string m_cageId;
                    bool m_cageIdHasBeenSet;

                    /**
                     * 项目ID，默认项目ID0
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 付费类型，PRE_PAID：包年包月，USED_PAID：按量计费。默认为按量计费
                     */
                    std::string m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * 实例时长，PayType为PRE_PAID时必传，单位：月，可选值包括 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 集群版节点拓扑配置。
                     */
                    ClusterTopology m_clusterTopology;
                    bool m_clusterTopologyHasBeenSet;

                    /**
                     * 原实例所在地域名，当传入异地备份时为必选项，例：ap-guangzhou
                     */
                    std::string m_srcRegion;
                    bool m_srcRegionHasBeenSet;

                    /**
                     * 异地数据备份id
                     */
                    int64_t m_specifiedSubBackupId;
                    bool m_specifiedSubBackupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CREATECLONEINSTANCEREQUEST_H_
