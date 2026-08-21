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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_FILESYSTEMINFO_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_FILESYSTEMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/PGroup.h>
#include <tencentcloud/cfs/v20190719/model/TagInfo.h>
#include <tencentcloud/cfs/v20190719/model/TieringDetailInfo.h>
#include <tencentcloud/cfs/v20190719/model/AutoScaleUpRule.h>
#include <tencentcloud/cfs/v20190719/model/ExstraPerformanceInfo.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 文件系统基本信息
                */
                class FileSystemInfo : public AbstractModel
                {
                public:
                    FileSystemInfo();
                    ~FileSystemInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>创建时间</p>
                     * @return CreationTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _creationTime <p>创建时间</p>
                     * 
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取<p>用户自定义名称</p>
                     * @return CreationToken <p>用户自定义名称</p>
                     * 
                     */
                    std::string GetCreationToken() const;

                    /**
                     * 设置<p>用户自定义名称</p>
                     * @param _creationToken <p>用户自定义名称</p>
                     * 
                     */
                    void SetCreationToken(const std::string& _creationToken);

                    /**
                     * 判断参数 CreationToken 是否已赋值
                     * @return CreationToken 是否已赋值
                     * 
                     */
                    bool CreationTokenHasBeenSet() const;

                    /**
                     * 获取<p>文件系统 ID</p>
                     * @return FileSystemId <p>文件系统 ID</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>文件系统 ID</p>
                     * @param _fileSystemId <p>文件系统 ID</p>
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取<p>文件系统状态。取值范围：</p><ul><li>creating:创建中</li><li>mounting:挂载中</li><li>create_failed:创建失败</li><li>available:可使用</li><li>unserviced:停服中</li><li>upgrading:升级中</li></ul>
                     * @return LifeCycleState <p>文件系统状态。取值范围：</p><ul><li>creating:创建中</li><li>mounting:挂载中</li><li>create_failed:创建失败</li><li>available:可使用</li><li>unserviced:停服中</li><li>upgrading:升级中</li></ul>
                     * 
                     */
                    std::string GetLifeCycleState() const;

                    /**
                     * 设置<p>文件系统状态。取值范围：</p><ul><li>creating:创建中</li><li>mounting:挂载中</li><li>create_failed:创建失败</li><li>available:可使用</li><li>unserviced:停服中</li><li>upgrading:升级中</li></ul>
                     * @param _lifeCycleState <p>文件系统状态。取值范围：</p><ul><li>creating:创建中</li><li>mounting:挂载中</li><li>create_failed:创建失败</li><li>available:可使用</li><li>unserviced:停服中</li><li>upgrading:升级中</li></ul>
                     * 
                     */
                    void SetLifeCycleState(const std::string& _lifeCycleState);

                    /**
                     * 判断参数 LifeCycleState 是否已赋值
                     * @return LifeCycleState 是否已赋值
                     * 
                     */
                    bool LifeCycleStateHasBeenSet() const;

                    /**
                     * 获取<p>文件系统已使用容量。单位：Byte</p>
                     * @return SizeByte <p>文件系统已使用容量。单位：Byte</p>
                     * 
                     */
                    uint64_t GetSizeByte() const;

                    /**
                     * 设置<p>文件系统已使用容量。单位：Byte</p>
                     * @param _sizeByte <p>文件系统已使用容量。单位：Byte</p>
                     * 
                     */
                    void SetSizeByte(const uint64_t& _sizeByte);

                    /**
                     * 判断参数 SizeByte 是否已赋值
                     * @return SizeByte 是否已赋值
                     * 
                     */
                    bool SizeByteHasBeenSet() const;

                    /**
                     * 获取<p>文件系统空间限制。单位:GiB</p>
                     * @return SizeLimit <p>文件系统空间限制。单位:GiB</p>
                     * 
                     */
                    uint64_t GetSizeLimit() const;

                    /**
                     * 设置<p>文件系统空间限制。单位:GiB</p>
                     * @param _sizeLimit <p>文件系统空间限制。单位:GiB</p>
                     * 
                     */
                    void SetSizeLimit(const uint64_t& _sizeLimit);

                    /**
                     * 判断参数 SizeLimit 是否已赋值
                     * @return SizeLimit 是否已赋值
                     * 
                     */
                    bool SizeLimitHasBeenSet() const;

                    /**
                     * 获取<p>区域 ID</p>
                     * @return ZoneId <p>区域 ID</p>
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置<p>区域 ID</p>
                     * @param _zoneId <p>区域 ID</p>
                     * 
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>区域名称</p>
                     * @return Zone <p>区域名称</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>区域名称</p>
                     * @param _zone <p>区域名称</p>
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>文件系统协议类型, 支持 NFS,CIFS,TURBO</p>
                     * @return Protocol <p>文件系统协议类型, 支持 NFS,CIFS,TURBO</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>文件系统协议类型, 支持 NFS,CIFS,TURBO</p>
                     * @param _protocol <p>文件系统协议类型, 支持 NFS,CIFS,TURBO</p>
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取<p>存储类型，HP：通用性能型；SD：通用标准型；TP:turbo性能型；TB：turbo标准型；THP：吞吐型</p>
                     * @return StorageType <p>存储类型，HP：通用性能型；SD：通用标准型；TP:turbo性能型；TB：turbo标准型；THP：吞吐型</p>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>存储类型，HP：通用性能型；SD：通用标准型；TP:turbo性能型；TB：turbo标准型；THP：吞吐型</p>
                     * @param _storageType <p>存储类型，HP：通用性能型；SD：通用标准型；TP:turbo性能型；TB：turbo标准型；THP：吞吐型</p>
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取<p>文件系统绑定的预付费存储包</p>
                     * @return StorageResourcePkg <p>文件系统绑定的预付费存储包</p>
                     * 
                     */
                    std::string GetStorageResourcePkg() const;

                    /**
                     * 设置<p>文件系统绑定的预付费存储包</p>
                     * @param _storageResourcePkg <p>文件系统绑定的预付费存储包</p>
                     * 
                     */
                    void SetStorageResourcePkg(const std::string& _storageResourcePkg);

                    /**
                     * 判断参数 StorageResourcePkg 是否已赋值
                     * @return StorageResourcePkg 是否已赋值
                     * 
                     */
                    bool StorageResourcePkgHasBeenSet() const;

                    /**
                     * 获取<p>文件系统绑定的预付费带宽包（暂未支持）</p>
                     * @return BandwidthResourcePkg <p>文件系统绑定的预付费带宽包（暂未支持）</p>
                     * 
                     */
                    std::string GetBandwidthResourcePkg() const;

                    /**
                     * 设置<p>文件系统绑定的预付费带宽包（暂未支持）</p>
                     * @param _bandwidthResourcePkg <p>文件系统绑定的预付费带宽包（暂未支持）</p>
                     * 
                     */
                    void SetBandwidthResourcePkg(const std::string& _bandwidthResourcePkg);

                    /**
                     * 判断参数 BandwidthResourcePkg 是否已赋值
                     * @return BandwidthResourcePkg 是否已赋值
                     * 
                     */
                    bool BandwidthResourcePkgHasBeenSet() const;

                    /**
                     * 获取<p>文件系统绑定权限组信息</p>
                     * @return PGroup <p>文件系统绑定权限组信息</p>
                     * 
                     */
                    PGroup GetPGroup() const;

                    /**
                     * 设置<p>文件系统绑定权限组信息</p>
                     * @param _pGroup <p>文件系统绑定权限组信息</p>
                     * 
                     */
                    void SetPGroup(const PGroup& _pGroup);

                    /**
                     * 判断参数 PGroup 是否已赋值
                     * @return PGroup 是否已赋值
                     * 
                     */
                    bool PGroupHasBeenSet() const;

                    /**
                     * 获取<p>用户自定义名称</p>
                     * @return FsName <p>用户自定义名称</p>
                     * 
                     */
                    std::string GetFsName() const;

                    /**
                     * 设置<p>用户自定义名称</p>
                     * @param _fsName <p>用户自定义名称</p>
                     * 
                     */
                    void SetFsName(const std::string& _fsName);

                    /**
                     * 判断参数 FsName 是否已赋值
                     * @return FsName 是否已赋值
                     * 
                     */
                    bool FsNameHasBeenSet() const;

                    /**
                     * 获取<p>文件系统是否加密,true：代表加密，false：非加密</p>
                     * @return Encrypted <p>文件系统是否加密,true：代表加密，false：非加密</p>
                     * 
                     */
                    bool GetEncrypted() const;

                    /**
                     * 设置<p>文件系统是否加密,true：代表加密，false：非加密</p>
                     * @param _encrypted <p>文件系统是否加密,true：代表加密，false：非加密</p>
                     * 
                     */
                    void SetEncrypted(const bool& _encrypted);

                    /**
                     * 判断参数 Encrypted 是否已赋值
                     * @return Encrypted 是否已赋值
                     * 
                     */
                    bool EncryptedHasBeenSet() const;

                    /**
                     * 获取<p>加密所使用的密钥，可以为密钥的 ID 或者 ARN</p>
                     * @return KmsKeyId <p>加密所使用的密钥，可以为密钥的 ID 或者 ARN</p>
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置<p>加密所使用的密钥，可以为密钥的 ID 或者 ARN</p>
                     * @param _kmsKeyId <p>加密所使用的密钥，可以为密钥的 ID 或者 ARN</p>
                     * 
                     */
                    void SetKmsKeyId(const std::string& _kmsKeyId);

                    /**
                     * 判断参数 KmsKeyId 是否已赋值
                     * @return KmsKeyId 是否已赋值
                     * 
                     */
                    bool KmsKeyIdHasBeenSet() const;

                    /**
                     * 获取<p>应用ID</p>
                     * @return AppId <p>应用ID</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>应用ID</p>
                     * @param _appId <p>应用ID</p>
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>文件系统吞吐上限，吞吐上限是根据文件系统当前已使用存储量、绑定的存储资源包以及吞吐资源包一同确定. 单位MiB/s</p>
                     * @return BandwidthLimit <p>文件系统吞吐上限，吞吐上限是根据文件系统当前已使用存储量、绑定的存储资源包以及吞吐资源包一同确定. 单位MiB/s</p>
                     * 
                     */
                    double GetBandwidthLimit() const;

                    /**
                     * 设置<p>文件系统吞吐上限，吞吐上限是根据文件系统当前已使用存储量、绑定的存储资源包以及吞吐资源包一同确定. 单位MiB/s</p>
                     * @param _bandwidthLimit <p>文件系统吞吐上限，吞吐上限是根据文件系统当前已使用存储量、绑定的存储资源包以及吞吐资源包一同确定. 单位MiB/s</p>
                     * 
                     */
                    void SetBandwidthLimit(const double& _bandwidthLimit);

                    /**
                     * 判断参数 BandwidthLimit 是否已赋值
                     * @return BandwidthLimit 是否已赋值
                     * 
                     */
                    bool BandwidthLimitHasBeenSet() const;

                    /**
                     * 获取<p>文件系统关联的快照策略</p>
                     * @return AutoSnapshotPolicyId <p>文件系统关联的快照策略</p>
                     * 
                     */
                    std::string GetAutoSnapshotPolicyId() const;

                    /**
                     * 设置<p>文件系统关联的快照策略</p>
                     * @param _autoSnapshotPolicyId <p>文件系统关联的快照策略</p>
                     * 
                     */
                    void SetAutoSnapshotPolicyId(const std::string& _autoSnapshotPolicyId);

                    /**
                     * 判断参数 AutoSnapshotPolicyId 是否已赋值
                     * @return AutoSnapshotPolicyId 是否已赋值
                     * 
                     */
                    bool AutoSnapshotPolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>文件系统处理快照状态,snapping：快照中，normal：正常状态</p>
                     * @return SnapStatus <p>文件系统处理快照状态,snapping：快照中，normal：正常状态</p>
                     * 
                     */
                    std::string GetSnapStatus() const;

                    /**
                     * 设置<p>文件系统处理快照状态,snapping：快照中，normal：正常状态</p>
                     * @param _snapStatus <p>文件系统处理快照状态,snapping：快照中，normal：正常状态</p>
                     * 
                     */
                    void SetSnapStatus(const std::string& _snapStatus);

                    /**
                     * 判断参数 SnapStatus 是否已赋值
                     * @return SnapStatus 是否已赋值
                     * 
                     */
                    bool SnapStatusHasBeenSet() const;

                    /**
                     * 获取<p>文件系统容量规格上限<br>单位:GiB</p>
                     * @return Capacity <p>文件系统容量规格上限<br>单位:GiB</p>
                     * 
                     */
                    uint64_t GetCapacity() const;

                    /**
                     * 设置<p>文件系统容量规格上限<br>单位:GiB</p>
                     * @param _capacity <p>文件系统容量规格上限<br>单位:GiB</p>
                     * 
                     */
                    void SetCapacity(const uint64_t& _capacity);

                    /**
                     * 判断参数 Capacity 是否已赋值
                     * @return Capacity 是否已赋值
                     * 
                     */
                    bool CapacityHasBeenSet() const;

                    /**
                     * 获取<p>文件系统标签列表</p>
                     * @return Tags <p>文件系统标签列表</p>
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置<p>文件系统标签列表</p>
                     * @param _tags <p>文件系统标签列表</p>
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
                     * 获取<p>文件系统生命周期管理状态<br>NotAvailable：不可用<br>Available:可用</p>
                     * @return TieringState <p>文件系统生命周期管理状态<br>NotAvailable：不可用<br>Available:可用</p>
                     * 
                     */
                    std::string GetTieringState() const;

                    /**
                     * 设置<p>文件系统生命周期管理状态<br>NotAvailable：不可用<br>Available:可用</p>
                     * @param _tieringState <p>文件系统生命周期管理状态<br>NotAvailable：不可用<br>Available:可用</p>
                     * 
                     */
                    void SetTieringState(const std::string& _tieringState);

                    /**
                     * 判断参数 TieringState 是否已赋值
                     * @return TieringState 是否已赋值
                     * 
                     */
                    bool TieringStateHasBeenSet() const;

                    /**
                     * 获取<p>分层存储详情</p>
                     * @return TieringDetail <p>分层存储详情</p>
                     * 
                     */
                    TieringDetailInfo GetTieringDetail() const;

                    /**
                     * 设置<p>分层存储详情</p>
                     * @param _tieringDetail <p>分层存储详情</p>
                     * 
                     */
                    void SetTieringDetail(const TieringDetailInfo& _tieringDetail);

                    /**
                     * 判断参数 TieringDetail 是否已赋值
                     * @return TieringDetail 是否已赋值
                     * 
                     */
                    bool TieringDetailHasBeenSet() const;

                    /**
                     * 获取<p>文件系统自动扩容策略</p>
                     * @return AutoScaleUpRule <p>文件系统自动扩容策略</p>
                     * 
                     */
                    AutoScaleUpRule GetAutoScaleUpRule() const;

                    /**
                     * 设置<p>文件系统自动扩容策略</p>
                     * @param _autoScaleUpRule <p>文件系统自动扩容策略</p>
                     * 
                     */
                    void SetAutoScaleUpRule(const AutoScaleUpRule& _autoScaleUpRule);

                    /**
                     * 判断参数 AutoScaleUpRule 是否已赋值
                     * @return AutoScaleUpRule 是否已赋值
                     * 
                     */
                    bool AutoScaleUpRuleHasBeenSet() const;

                    /**
                     * 获取<p>文件系统版本</p>
                     * @return Version <p>文件系统版本</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>文件系统版本</p>
                     * @param _version <p>文件系统版本</p>
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>额外性能信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExstraPerformanceInfo <p>额外性能信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ExstraPerformanceInfo> GetExstraPerformanceInfo() const;

                    /**
                     * 设置<p>额外性能信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _exstraPerformanceInfo <p>额外性能信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExstraPerformanceInfo(const std::vector<ExstraPerformanceInfo>& _exstraPerformanceInfo);

                    /**
                     * 判断参数 ExstraPerformanceInfo 是否已赋值
                     * @return ExstraPerformanceInfo 是否已赋值
                     * 
                     */
                    bool ExstraPerformanceInfoHasBeenSet() const;

                    /**
                     * 获取<p>basic：标准版元数据类型<br>enhanced：增项版元数据类型</p>
                     * @return MetaType <p>basic：标准版元数据类型<br>enhanced：增项版元数据类型</p>
                     * 
                     */
                    std::string GetMetaType() const;

                    /**
                     * 设置<p>basic：标准版元数据类型<br>enhanced：增项版元数据类型</p>
                     * @param _metaType <p>basic：标准版元数据类型<br>enhanced：增项版元数据类型</p>
                     * 
                     */
                    void SetMetaType(const std::string& _metaType);

                    /**
                     * 判断参数 MetaType 是否已赋值
                     * @return MetaType 是否已赋值
                     * 
                     */
                    bool MetaTypeHasBeenSet() const;

                    /**
                     * 获取<p>业务场景。</p><p>枚举值：</p><ul><li>AgentSandbox： 创建 AgentCFS</li></ul>
                     * @return Scenario <p>业务场景。</p><p>枚举值：</p><ul><li>AgentSandbox： 创建 AgentCFS</li></ul>
                     * 
                     */
                    std::string GetScenario() const;

                    /**
                     * 设置<p>业务场景。</p><p>枚举值：</p><ul><li>AgentSandbox： 创建 AgentCFS</li></ul>
                     * @param _scenario <p>业务场景。</p><p>枚举值：</p><ul><li>AgentSandbox： 创建 AgentCFS</li></ul>
                     * 
                     */
                    void SetScenario(const std::string& _scenario);

                    /**
                     * 判断参数 Scenario 是否已赋值
                     * @return Scenario 是否已赋值
                     * 
                     */
                    bool ScenarioHasBeenSet() const;

                private:

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * <p>用户自定义名称</p>
                     */
                    std::string m_creationToken;
                    bool m_creationTokenHasBeenSet;

                    /**
                     * <p>文件系统 ID</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>文件系统状态。取值范围：</p><ul><li>creating:创建中</li><li>mounting:挂载中</li><li>create_failed:创建失败</li><li>available:可使用</li><li>unserviced:停服中</li><li>upgrading:升级中</li></ul>
                     */
                    std::string m_lifeCycleState;
                    bool m_lifeCycleStateHasBeenSet;

                    /**
                     * <p>文件系统已使用容量。单位：Byte</p>
                     */
                    uint64_t m_sizeByte;
                    bool m_sizeByteHasBeenSet;

                    /**
                     * <p>文件系统空间限制。单位:GiB</p>
                     */
                    uint64_t m_sizeLimit;
                    bool m_sizeLimitHasBeenSet;

                    /**
                     * <p>区域 ID</p>
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>区域名称</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>文件系统协议类型, 支持 NFS,CIFS,TURBO</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>存储类型，HP：通用性能型；SD：通用标准型；TP:turbo性能型；TB：turbo标准型；THP：吞吐型</p>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>文件系统绑定的预付费存储包</p>
                     */
                    std::string m_storageResourcePkg;
                    bool m_storageResourcePkgHasBeenSet;

                    /**
                     * <p>文件系统绑定的预付费带宽包（暂未支持）</p>
                     */
                    std::string m_bandwidthResourcePkg;
                    bool m_bandwidthResourcePkgHasBeenSet;

                    /**
                     * <p>文件系统绑定权限组信息</p>
                     */
                    PGroup m_pGroup;
                    bool m_pGroupHasBeenSet;

                    /**
                     * <p>用户自定义名称</p>
                     */
                    std::string m_fsName;
                    bool m_fsNameHasBeenSet;

                    /**
                     * <p>文件系统是否加密,true：代表加密，false：非加密</p>
                     */
                    bool m_encrypted;
                    bool m_encryptedHasBeenSet;

                    /**
                     * <p>加密所使用的密钥，可以为密钥的 ID 或者 ARN</p>
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                    /**
                     * <p>应用ID</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>文件系统吞吐上限，吞吐上限是根据文件系统当前已使用存储量、绑定的存储资源包以及吞吐资源包一同确定. 单位MiB/s</p>
                     */
                    double m_bandwidthLimit;
                    bool m_bandwidthLimitHasBeenSet;

                    /**
                     * <p>文件系统关联的快照策略</p>
                     */
                    std::string m_autoSnapshotPolicyId;
                    bool m_autoSnapshotPolicyIdHasBeenSet;

                    /**
                     * <p>文件系统处理快照状态,snapping：快照中，normal：正常状态</p>
                     */
                    std::string m_snapStatus;
                    bool m_snapStatusHasBeenSet;

                    /**
                     * <p>文件系统容量规格上限<br>单位:GiB</p>
                     */
                    uint64_t m_capacity;
                    bool m_capacityHasBeenSet;

                    /**
                     * <p>文件系统标签列表</p>
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>文件系统生命周期管理状态<br>NotAvailable：不可用<br>Available:可用</p>
                     */
                    std::string m_tieringState;
                    bool m_tieringStateHasBeenSet;

                    /**
                     * <p>分层存储详情</p>
                     */
                    TieringDetailInfo m_tieringDetail;
                    bool m_tieringDetailHasBeenSet;

                    /**
                     * <p>文件系统自动扩容策略</p>
                     */
                    AutoScaleUpRule m_autoScaleUpRule;
                    bool m_autoScaleUpRuleHasBeenSet;

                    /**
                     * <p>文件系统版本</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>额外性能信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ExstraPerformanceInfo> m_exstraPerformanceInfo;
                    bool m_exstraPerformanceInfoHasBeenSet;

                    /**
                     * <p>basic：标准版元数据类型<br>enhanced：增项版元数据类型</p>
                     */
                    std::string m_metaType;
                    bool m_metaTypeHasBeenSet;

                    /**
                     * <p>业务场景。</p><p>枚举值：</p><ul><li>AgentSandbox： 创建 AgentCFS</li></ul>
                     */
                    std::string m_scenario;
                    bool m_scenarioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_FILESYSTEMINFO_H_
