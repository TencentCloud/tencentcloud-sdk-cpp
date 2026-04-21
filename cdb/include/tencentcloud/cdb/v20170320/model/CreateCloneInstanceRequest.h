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
                     * 获取<p>克隆源实例 ID。可通过 <a href="https://cloud.tencent.com/document/api/236/15872">DescribeDBInstances</a> 接口获取。</p>
                     * @return InstanceId <p>克隆源实例 ID。可通过 <a href="https://cloud.tencent.com/document/api/236/15872">DescribeDBInstances</a> 接口获取。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>克隆源实例 ID。可通过 <a href="https://cloud.tencent.com/document/api/236/15872">DescribeDBInstances</a> 接口获取。</p>
                     * @param _instanceId <p>克隆源实例 ID。可通过 <a href="https://cloud.tencent.com/document/api/236/15872">DescribeDBInstances</a> 接口获取。</p>
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
                     * 获取<p>如果需要克隆实例回档到指定时间，则指定该值。时间格式为：yyyy-mm-dd hh:mm:ss。<br>说明：此参数和 SpecifiedBackupId 参数需要2选1进行设置。</p>
                     * @return SpecifiedRollbackTime <p>如果需要克隆实例回档到指定时间，则指定该值。时间格式为：yyyy-mm-dd hh:mm:ss。<br>说明：此参数和 SpecifiedBackupId 参数需要2选1进行设置。</p>
                     * 
                     */
                    std::string GetSpecifiedRollbackTime() const;

                    /**
                     * 设置<p>如果需要克隆实例回档到指定时间，则指定该值。时间格式为：yyyy-mm-dd hh:mm:ss。<br>说明：此参数和 SpecifiedBackupId 参数需要2选1进行设置。</p>
                     * @param _specifiedRollbackTime <p>如果需要克隆实例回档到指定时间，则指定该值。时间格式为：yyyy-mm-dd hh:mm:ss。<br>说明：此参数和 SpecifiedBackupId 参数需要2选1进行设置。</p>
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
                     * 获取<p>如果需要克隆实例回档到指定备份集，则指定该值为备份文件的 Id。请使用 <a href="/document/api/236/15842">查询数据备份文件列表</a>。<br>说明：如果是克隆双节点、三节点实例，备份文件为物理备份，如果是克隆单节点、云盘版实例，备份文件为快照备份。</p>
                     * @return SpecifiedBackupId <p>如果需要克隆实例回档到指定备份集，则指定该值为备份文件的 Id。请使用 <a href="/document/api/236/15842">查询数据备份文件列表</a>。<br>说明：如果是克隆双节点、三节点实例，备份文件为物理备份，如果是克隆单节点、云盘版实例，备份文件为快照备份。</p>
                     * 
                     */
                    int64_t GetSpecifiedBackupId() const;

                    /**
                     * 设置<p>如果需要克隆实例回档到指定备份集，则指定该值为备份文件的 Id。请使用 <a href="/document/api/236/15842">查询数据备份文件列表</a>。<br>说明：如果是克隆双节点、三节点实例，备份文件为物理备份，如果是克隆单节点、云盘版实例，备份文件为快照备份。</p>
                     * @param _specifiedBackupId <p>如果需要克隆实例回档到指定备份集，则指定该值为备份文件的 Id。请使用 <a href="/document/api/236/15842">查询数据备份文件列表</a>。<br>说明：如果是克隆双节点、三节点实例，备份文件为物理备份，如果是克隆单节点、云盘版实例，备份文件为快照备份。</p>
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
                     * 获取<p>私有网络 ID，请使用 <a href="/document/api/215/15778">查询私有网络列表</a>。</p>
                     * @return UniqVpcId <p>私有网络 ID，请使用 <a href="/document/api/215/15778">查询私有网络列表</a>。</p>
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置<p>私有网络 ID，请使用 <a href="/document/api/215/15778">查询私有网络列表</a>。</p>
                     * @param _uniqVpcId <p>私有网络 ID，请使用 <a href="/document/api/215/15778">查询私有网络列表</a>。</p>
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
                     * 获取<p>私有网络下的子网 ID，如果设置了 UniqVpcId，则 UniqSubnetId 必填，请使用 <a href="/document/api/215/15784">查询子网列表</a>。</p>
                     * @return UniqSubnetId <p>私有网络下的子网 ID，如果设置了 UniqVpcId，则 UniqSubnetId 必填，请使用 <a href="/document/api/215/15784">查询子网列表</a>。</p>
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置<p>私有网络下的子网 ID，如果设置了 UniqVpcId，则 UniqSubnetId 必填，请使用 <a href="/document/api/215/15784">查询子网列表</a>。</p>
                     * @param _uniqSubnetId <p>私有网络下的子网 ID，如果设置了 UniqVpcId，则 UniqSubnetId 必填，请使用 <a href="/document/api/215/15784">查询子网列表</a>。</p>
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
                     * 获取<p>实例内存大小，单位：MB，需要不低于克隆源实例，默认和源实例相同。</p>
                     * @return Memory <p>实例内存大小，单位：MB，需要不低于克隆源实例，默认和源实例相同。</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>实例内存大小，单位：MB，需要不低于克隆源实例，默认和源实例相同。</p>
                     * @param _memory <p>实例内存大小，单位：MB，需要不低于克隆源实例，默认和源实例相同。</p>
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
                     * 获取<p>实例硬盘大小，单位：GB，需要不低于克隆源实例，默认和源实例相同。</p>
                     * @return Volume <p>实例硬盘大小，单位：GB，需要不低于克隆源实例，默认和源实例相同。</p>
                     * 
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置<p>实例硬盘大小，单位：GB，需要不低于克隆源实例，默认和源实例相同。</p>
                     * @param _volume <p>实例硬盘大小，单位：GB，需要不低于克隆源实例，默认和源实例相同。</p>
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
                     * 获取<p>新产生的克隆实例名称。支持输入最大60个字符。</p>
                     * @return InstanceName <p>新产生的克隆实例名称。支持输入最大60个字符。</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>新产生的克隆实例名称。支持输入最大60个字符。</p>
                     * @param _instanceName <p>新产生的克隆实例名称。支持输入最大60个字符。</p>
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
                     * 获取<p>安全组参数，可使用 <a href="https://cloud.tencent.com/document/api/236/15850">查询项目安全组信息</a> 接口查询某个项目的安全组详情。</p>
                     * @return SecurityGroup <p>安全组参数，可使用 <a href="https://cloud.tencent.com/document/api/236/15850">查询项目安全组信息</a> 接口查询某个项目的安全组详情。</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroup() const;

                    /**
                     * 设置<p>安全组参数，可使用 <a href="https://cloud.tencent.com/document/api/236/15850">查询项目安全组信息</a> 接口查询某个项目的安全组详情。</p>
                     * @param _securityGroup <p>安全组参数，可使用 <a href="https://cloud.tencent.com/document/api/236/15850">查询项目安全组信息</a> 接口查询某个项目的安全组详情。</p>
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
                     * 获取<p>实例标签信息。</p>
                     * @return ResourceTags <p>实例标签信息。</p>
                     * 
                     */
                    std::vector<TagInfo> GetResourceTags() const;

                    /**
                     * 设置<p>实例标签信息。</p>
                     * @param _resourceTags <p>实例标签信息。</p>
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
                     * 获取<p>实例Cpu核数，需要不低于克隆源实例，默认和源实例相同。</p>
                     * @return Cpu <p>实例Cpu核数，需要不低于克隆源实例，默认和源实例相同。</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>实例Cpu核数，需要不低于克隆源实例，默认和源实例相同。</p>
                     * @param _cpu <p>实例Cpu核数，需要不低于克隆源实例，默认和源实例相同。</p>
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
                     * 获取<p>数据复制方式，默认为 0，支持值包括：0 - 表示异步复制，1 - 表示半同步复制，2 - 表示强同步复制。</p>
                     * @return ProtectMode <p>数据复制方式，默认为 0，支持值包括：0 - 表示异步复制，1 - 表示半同步复制，2 - 表示强同步复制。</p>
                     * 
                     */
                    int64_t GetProtectMode() const;

                    /**
                     * 设置<p>数据复制方式，默认为 0，支持值包括：0 - 表示异步复制，1 - 表示半同步复制，2 - 表示强同步复制。</p>
                     * @param _protectMode <p>数据复制方式，默认为 0，支持值包括：0 - 表示异步复制，1 - 表示半同步复制，2 - 表示强同步复制。</p>
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
                     * 获取<p>多可用区域，默认为 0，支持值包括：0 - 表示单可用区，1 - 表示多可用区。</p>
                     * @return DeployMode <p>多可用区域，默认为 0，支持值包括：0 - 表示单可用区，1 - 表示多可用区。</p>
                     * 
                     */
                    int64_t GetDeployMode() const;

                    /**
                     * 设置<p>多可用区域，默认为 0，支持值包括：0 - 表示单可用区，1 - 表示多可用区。</p>
                     * @param _deployMode <p>多可用区域，默认为 0，支持值包括：0 - 表示单可用区，1 - 表示多可用区。</p>
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
                     * 获取<p>新产生的克隆实例备库 1 的可用区信息，默认同源实例 Zone 的值。</p>
                     * @return SlaveZone <p>新产生的克隆实例备库 1 的可用区信息，默认同源实例 Zone 的值。</p>
                     * 
                     */
                    std::string GetSlaveZone() const;

                    /**
                     * 设置<p>新产生的克隆实例备库 1 的可用区信息，默认同源实例 Zone 的值。</p>
                     * @param _slaveZone <p>新产生的克隆实例备库 1 的可用区信息，默认同源实例 Zone 的值。</p>
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
                     * 获取<p>备库 2 的可用区信息，默认为空，克隆强同步主实例时可指定该参数。</p>
                     * @return BackupZone <p>备库 2 的可用区信息，默认为空，克隆强同步主实例时可指定该参数。</p>
                     * 
                     */
                    std::string GetBackupZone() const;

                    /**
                     * 设置<p>备库 2 的可用区信息，默认为空，克隆强同步主实例时可指定该参数。</p>
                     * @param _backupZone <p>备库 2 的可用区信息，默认为空，克隆强同步主实例时可指定该参数。</p>
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
                     * 获取<p>克隆实例类型。支持值包括：&quot;UNIVERSAL&quot; - 通用型实例，&quot;EXCLUSIVE&quot; - 独享型实例，&quot;CLOUD_NATIVE_CLUSTER&quot; - 云盘版标准型，&quot;CLOUD_NATIVE_CLUSTER_EXCLUSIVE&quot; - 云盘版加强型。不指定则默认为通用型。</p>
                     * @return DeviceType <p>克隆实例类型。支持值包括：&quot;UNIVERSAL&quot; - 通用型实例，&quot;EXCLUSIVE&quot; - 独享型实例，&quot;CLOUD_NATIVE_CLUSTER&quot; - 云盘版标准型，&quot;CLOUD_NATIVE_CLUSTER_EXCLUSIVE&quot; - 云盘版加强型。不指定则默认为通用型。</p>
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置<p>克隆实例类型。支持值包括：&quot;UNIVERSAL&quot; - 通用型实例，&quot;EXCLUSIVE&quot; - 独享型实例，&quot;CLOUD_NATIVE_CLUSTER&quot; - 云盘版标准型，&quot;CLOUD_NATIVE_CLUSTER_EXCLUSIVE&quot; - 云盘版加强型。不指定则默认为通用型。</p>
                     * @param _deviceType <p>克隆实例类型。支持值包括：&quot;UNIVERSAL&quot; - 通用型实例，&quot;EXCLUSIVE&quot; - 独享型实例，&quot;CLOUD_NATIVE_CLUSTER&quot; - 云盘版标准型，&quot;CLOUD_NATIVE_CLUSTER_EXCLUSIVE&quot; - 云盘版加强型。不指定则默认为通用型。</p>
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
                     * 获取<p>新克隆实例节点数。如果需要克隆出三节点实例， 请将该值设置为3 或指定 BackupZone 参数。如果需要克隆出两节点实例，请将该值设置为2。默认克隆出两节点实例。</p>
                     * @return InstanceNodes <p>新克隆实例节点数。如果需要克隆出三节点实例， 请将该值设置为3 或指定 BackupZone 参数。如果需要克隆出两节点实例，请将该值设置为2。默认克隆出两节点实例。</p>
                     * 
                     */
                    int64_t GetInstanceNodes() const;

                    /**
                     * 设置<p>新克隆实例节点数。如果需要克隆出三节点实例， 请将该值设置为3 或指定 BackupZone 参数。如果需要克隆出两节点实例，请将该值设置为2。默认克隆出两节点实例。</p>
                     * @param _instanceNodes <p>新克隆实例节点数。如果需要克隆出三节点实例， 请将该值设置为3 或指定 BackupZone 参数。如果需要克隆出两节点实例，请将该值设置为2。默认克隆出两节点实例。</p>
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
                     * 获取<p>置放群组 ID。</p>
                     * @return DeployGroupId <p>置放群组 ID。</p>
                     * 
                     */
                    std::string GetDeployGroupId() const;

                    /**
                     * 设置<p>置放群组 ID。</p>
                     * @param _deployGroupId <p>置放群组 ID。</p>
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
                     * 获取<p>是否只预检此次请求。true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制等。如果检查不通过，则返回对应错误码；如果检查通过，则返回RequestId.默认为false：发送正常请求，通过检查后直接创建实例。</p>
                     * @return DryRun <p>是否只预检此次请求。true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制等。如果检查不通过，则返回对应错误码；如果检查通过，则返回RequestId.默认为false：发送正常请求，通过检查后直接创建实例。</p>
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置<p>是否只预检此次请求。true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制等。如果检查不通过，则返回对应错误码；如果检查通过，则返回RequestId.默认为false：发送正常请求，通过检查后直接创建实例。</p>
                     * @param _dryRun <p>是否只预检此次请求。true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制等。如果检查不通过，则返回对应错误码；如果检查通过，则返回RequestId.默认为false：发送正常请求，通过检查后直接创建实例。</p>
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
                     * 获取<p>金融围拢 ID 。</p>
                     * @return CageId <p>金融围拢 ID 。</p>
                     * 
                     */
                    std::string GetCageId() const;

                    /**
                     * 设置<p>金融围拢 ID 。</p>
                     * @param _cageId <p>金融围拢 ID 。</p>
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
                     * 获取<p>项目ID，默认项目ID0</p>
                     * @return ProjectId <p>项目ID，默认项目ID0</p>
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置<p>项目ID，默认项目ID0</p>
                     * @param _projectId <p>项目ID，默认项目ID0</p>
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
                     * 获取<p>付费类型，PRE_PAID：包年包月，USED_PAID：按量计费。默认为按量计费</p>
                     * @return PayType <p>付费类型，PRE_PAID：包年包月，USED_PAID：按量计费。默认为按量计费</p>
                     * 
                     */
                    std::string GetPayType() const;

                    /**
                     * 设置<p>付费类型，PRE_PAID：包年包月，USED_PAID：按量计费。默认为按量计费</p>
                     * @param _payType <p>付费类型，PRE_PAID：包年包月，USED_PAID：按量计费。默认为按量计费</p>
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
                     * 获取<p>实例时长，PayType为PRE_PAID时必传，单位：月，可选值包括 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。</p>
                     * @return Period <p>实例时长，PayType为PRE_PAID时必传，单位：月，可选值包括 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。</p>
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置<p>实例时长，PayType为PRE_PAID时必传，单位：月，可选值包括 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。</p>
                     * @param _period <p>实例时长，PayType为PRE_PAID时必传，单位：月，可选值包括 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。</p>
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
                     * 获取<p>云盘版节点拓扑配置。</p>
                     * @return ClusterTopology <p>云盘版节点拓扑配置。</p>
                     * 
                     */
                    ClusterTopology GetClusterTopology() const;

                    /**
                     * 设置<p>云盘版节点拓扑配置。</p>
                     * @param _clusterTopology <p>云盘版节点拓扑配置。</p>
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
                     * 获取<p>原实例所在地域名，当传入异地备份时为必选项，例：ap-guangzhou</p>
                     * @return SrcRegion <p>原实例所在地域名，当传入异地备份时为必选项，例：ap-guangzhou</p>
                     * 
                     */
                    std::string GetSrcRegion() const;

                    /**
                     * 设置<p>原实例所在地域名，当传入异地备份时为必选项，例：ap-guangzhou</p>
                     * @param _srcRegion <p>原实例所在地域名，当传入异地备份时为必选项，例：ap-guangzhou</p>
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
                     * 获取<p>异地数据备份id</p>
                     * @return SpecifiedSubBackupId <p>异地数据备份id</p>
                     * 
                     */
                    int64_t GetSpecifiedSubBackupId() const;

                    /**
                     * 设置<p>异地数据备份id</p>
                     * @param _specifiedSubBackupId <p>异地数据备份id</p>
                     * 
                     */
                    void SetSpecifiedSubBackupId(const int64_t& _specifiedSubBackupId);

                    /**
                     * 判断参数 SpecifiedSubBackupId 是否已赋值
                     * @return SpecifiedSubBackupId 是否已赋值
                     * 
                     */
                    bool SpecifiedSubBackupIdHasBeenSet() const;

                    /**
                     * 获取<p>新产生的克隆实例主库的可用区信息，默认同源实例 Zone 的值。</p>
                     * @return MasterZone <p>新产生的克隆实例主库的可用区信息，默认同源实例 Zone 的值。</p>
                     * @deprecated
                     */
                    std::string GetMasterZone() const;

                    /**
                     * 设置<p>新产生的克隆实例主库的可用区信息，默认同源实例 Zone 的值。</p>
                     * @param _masterZone <p>新产生的克隆实例主库的可用区信息，默认同源实例 Zone 的值。</p>
                     * @deprecated
                     */
                    void SetMasterZone(const std::string& _masterZone);

                    /**
                     * 判断参数 MasterZone 是否已赋值
                     * @return MasterZone 是否已赋值
                     * @deprecated
                     */
                    bool MasterZoneHasBeenSet() const;

                    /**
                     * 获取<p>新产生的克隆实例主库的可用区信息，默认同源实例 Zone 的值。</p>
                     * @return Zone <p>新产生的克隆实例主库的可用区信息，默认同源实例 Zone 的值。</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>新产生的克隆实例主库的可用区信息，默认同源实例 Zone 的值。</p>
                     * @param _zone <p>新产生的克隆实例主库的可用区信息，默认同源实例 Zone 的值。</p>
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                private:

                    /**
                     * <p>克隆源实例 ID。可通过 <a href="https://cloud.tencent.com/document/api/236/15872">DescribeDBInstances</a> 接口获取。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>如果需要克隆实例回档到指定时间，则指定该值。时间格式为：yyyy-mm-dd hh:mm:ss。<br>说明：此参数和 SpecifiedBackupId 参数需要2选1进行设置。</p>
                     */
                    std::string m_specifiedRollbackTime;
                    bool m_specifiedRollbackTimeHasBeenSet;

                    /**
                     * <p>如果需要克隆实例回档到指定备份集，则指定该值为备份文件的 Id。请使用 <a href="/document/api/236/15842">查询数据备份文件列表</a>。<br>说明：如果是克隆双节点、三节点实例，备份文件为物理备份，如果是克隆单节点、云盘版实例，备份文件为快照备份。</p>
                     */
                    int64_t m_specifiedBackupId;
                    bool m_specifiedBackupIdHasBeenSet;

                    /**
                     * <p>私有网络 ID，请使用 <a href="/document/api/215/15778">查询私有网络列表</a>。</p>
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * <p>私有网络下的子网 ID，如果设置了 UniqVpcId，则 UniqSubnetId 必填，请使用 <a href="/document/api/215/15784">查询子网列表</a>。</p>
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * <p>实例内存大小，单位：MB，需要不低于克隆源实例，默认和源实例相同。</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>实例硬盘大小，单位：GB，需要不低于克隆源实例，默认和源实例相同。</p>
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * <p>新产生的克隆实例名称。支持输入最大60个字符。</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>安全组参数，可使用 <a href="https://cloud.tencent.com/document/api/236/15850">查询项目安全组信息</a> 接口查询某个项目的安全组详情。</p>
                     */
                    std::vector<std::string> m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * <p>实例标签信息。</p>
                     */
                    std::vector<TagInfo> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>实例Cpu核数，需要不低于克隆源实例，默认和源实例相同。</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>数据复制方式，默认为 0，支持值包括：0 - 表示异步复制，1 - 表示半同步复制，2 - 表示强同步复制。</p>
                     */
                    int64_t m_protectMode;
                    bool m_protectModeHasBeenSet;

                    /**
                     * <p>多可用区域，默认为 0，支持值包括：0 - 表示单可用区，1 - 表示多可用区。</p>
                     */
                    int64_t m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * <p>新产生的克隆实例备库 1 的可用区信息，默认同源实例 Zone 的值。</p>
                     */
                    std::string m_slaveZone;
                    bool m_slaveZoneHasBeenSet;

                    /**
                     * <p>备库 2 的可用区信息，默认为空，克隆强同步主实例时可指定该参数。</p>
                     */
                    std::string m_backupZone;
                    bool m_backupZoneHasBeenSet;

                    /**
                     * <p>克隆实例类型。支持值包括：&quot;UNIVERSAL&quot; - 通用型实例，&quot;EXCLUSIVE&quot; - 独享型实例，&quot;CLOUD_NATIVE_CLUSTER&quot; - 云盘版标准型，&quot;CLOUD_NATIVE_CLUSTER_EXCLUSIVE&quot; - 云盘版加强型。不指定则默认为通用型。</p>
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * <p>新克隆实例节点数。如果需要克隆出三节点实例， 请将该值设置为3 或指定 BackupZone 参数。如果需要克隆出两节点实例，请将该值设置为2。默认克隆出两节点实例。</p>
                     */
                    int64_t m_instanceNodes;
                    bool m_instanceNodesHasBeenSet;

                    /**
                     * <p>置放群组 ID。</p>
                     */
                    std::string m_deployGroupId;
                    bool m_deployGroupIdHasBeenSet;

                    /**
                     * <p>是否只预检此次请求。true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制等。如果检查不通过，则返回对应错误码；如果检查通过，则返回RequestId.默认为false：发送正常请求，通过检查后直接创建实例。</p>
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * <p>金融围拢 ID 。</p>
                     */
                    std::string m_cageId;
                    bool m_cageIdHasBeenSet;

                    /**
                     * <p>项目ID，默认项目ID0</p>
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>付费类型，PRE_PAID：包年包月，USED_PAID：按量计费。默认为按量计费</p>
                     */
                    std::string m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * <p>实例时长，PayType为PRE_PAID时必传，单位：月，可选值包括 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。</p>
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>云盘版节点拓扑配置。</p>
                     */
                    ClusterTopology m_clusterTopology;
                    bool m_clusterTopologyHasBeenSet;

                    /**
                     * <p>原实例所在地域名，当传入异地备份时为必选项，例：ap-guangzhou</p>
                     */
                    std::string m_srcRegion;
                    bool m_srcRegionHasBeenSet;

                    /**
                     * <p>异地数据备份id</p>
                     */
                    int64_t m_specifiedSubBackupId;
                    bool m_specifiedSubBackupIdHasBeenSet;

                    /**
                     * <p>新产生的克隆实例主库的可用区信息，默认同源实例 Zone 的值。</p>
                     */
                    std::string m_masterZone;
                    bool m_masterZoneHasBeenSet;

                    /**
                     * <p>新产生的克隆实例主库的可用区信息，默认同源实例 Zone 的值。</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CREATECLONEINSTANCEREQUEST_H_
