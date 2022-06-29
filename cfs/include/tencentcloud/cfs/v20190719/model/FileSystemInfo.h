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
                     * 获取创建时间
                     * @return CreationTime 创建时间
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置创建时间
                     * @param CreationTime 创建时间
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取用户自定义名称
                     * @return CreationToken 用户自定义名称
                     */
                    std::string GetCreationToken() const;

                    /**
                     * 设置用户自定义名称
                     * @param CreationToken 用户自定义名称
                     */
                    void SetCreationToken(const std::string& _creationToken);

                    /**
                     * 判断参数 CreationToken 是否已赋值
                     * @return CreationToken 是否已赋值
                     */
                    bool CreationTokenHasBeenSet() const;

                    /**
                     * 获取文件系统 ID
                     * @return FileSystemId 文件系统 ID
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置文件系统 ID
                     * @param FileSystemId 文件系统 ID
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取文件系统状态
                     * @return LifeCycleState 文件系统状态
                     */
                    std::string GetLifeCycleState() const;

                    /**
                     * 设置文件系统状态
                     * @param LifeCycleState 文件系统状态
                     */
                    void SetLifeCycleState(const std::string& _lifeCycleState);

                    /**
                     * 判断参数 LifeCycleState 是否已赋值
                     * @return LifeCycleState 是否已赋值
                     */
                    bool LifeCycleStateHasBeenSet() const;

                    /**
                     * 获取文件系统已使用容量
                     * @return SizeByte 文件系统已使用容量
                     */
                    uint64_t GetSizeByte() const;

                    /**
                     * 设置文件系统已使用容量
                     * @param SizeByte 文件系统已使用容量
                     */
                    void SetSizeByte(const uint64_t& _sizeByte);

                    /**
                     * 判断参数 SizeByte 是否已赋值
                     * @return SizeByte 是否已赋值
                     */
                    bool SizeByteHasBeenSet() const;

                    /**
                     * 获取文件系统最大空间限制
                     * @return SizeLimit 文件系统最大空间限制
                     */
                    uint64_t GetSizeLimit() const;

                    /**
                     * 设置文件系统最大空间限制
                     * @param SizeLimit 文件系统最大空间限制
                     */
                    void SetSizeLimit(const uint64_t& _sizeLimit);

                    /**
                     * 判断参数 SizeLimit 是否已赋值
                     * @return SizeLimit 是否已赋值
                     */
                    bool SizeLimitHasBeenSet() const;

                    /**
                     * 获取区域 ID
                     * @return ZoneId 区域 ID
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置区域 ID
                     * @param ZoneId 区域 ID
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取区域名称
                     * @return Zone 区域名称
                     */
                    std::string GetZone() const;

                    /**
                     * 设置区域名称
                     * @param Zone 区域名称
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取文件系统协议类型
                     * @return Protocol 文件系统协议类型
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置文件系统协议类型
                     * @param Protocol 文件系统协议类型
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取文件系统存储类型
                     * @return StorageType 文件系统存储类型
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置文件系统存储类型
                     * @param StorageType 文件系统存储类型
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取文件系统绑定的预付费存储包
                     * @return StorageResourcePkg 文件系统绑定的预付费存储包
                     */
                    std::string GetStorageResourcePkg() const;

                    /**
                     * 设置文件系统绑定的预付费存储包
                     * @param StorageResourcePkg 文件系统绑定的预付费存储包
                     */
                    void SetStorageResourcePkg(const std::string& _storageResourcePkg);

                    /**
                     * 判断参数 StorageResourcePkg 是否已赋值
                     * @return StorageResourcePkg 是否已赋值
                     */
                    bool StorageResourcePkgHasBeenSet() const;

                    /**
                     * 获取文件系统绑定的预付费带宽包（暂未支持）
                     * @return BandwidthResourcePkg 文件系统绑定的预付费带宽包（暂未支持）
                     */
                    std::string GetBandwidthResourcePkg() const;

                    /**
                     * 设置文件系统绑定的预付费带宽包（暂未支持）
                     * @param BandwidthResourcePkg 文件系统绑定的预付费带宽包（暂未支持）
                     */
                    void SetBandwidthResourcePkg(const std::string& _bandwidthResourcePkg);

                    /**
                     * 判断参数 BandwidthResourcePkg 是否已赋值
                     * @return BandwidthResourcePkg 是否已赋值
                     */
                    bool BandwidthResourcePkgHasBeenSet() const;

                    /**
                     * 获取文件系统绑定权限组信息
                     * @return PGroup 文件系统绑定权限组信息
                     */
                    PGroup GetPGroup() const;

                    /**
                     * 设置文件系统绑定权限组信息
                     * @param PGroup 文件系统绑定权限组信息
                     */
                    void SetPGroup(const PGroup& _pGroup);

                    /**
                     * 判断参数 PGroup 是否已赋值
                     * @return PGroup 是否已赋值
                     */
                    bool PGroupHasBeenSet() const;

                    /**
                     * 获取用户自定义名称
                     * @return FsName 用户自定义名称
                     */
                    std::string GetFsName() const;

                    /**
                     * 设置用户自定义名称
                     * @param FsName 用户自定义名称
                     */
                    void SetFsName(const std::string& _fsName);

                    /**
                     * 判断参数 FsName 是否已赋值
                     * @return FsName 是否已赋值
                     */
                    bool FsNameHasBeenSet() const;

                    /**
                     * 获取文件系统是否加密
                     * @return Encrypted 文件系统是否加密
                     */
                    bool GetEncrypted() const;

                    /**
                     * 设置文件系统是否加密
                     * @param Encrypted 文件系统是否加密
                     */
                    void SetEncrypted(const bool& _encrypted);

                    /**
                     * 判断参数 Encrypted 是否已赋值
                     * @return Encrypted 是否已赋值
                     */
                    bool EncryptedHasBeenSet() const;

                    /**
                     * 获取加密所使用的密钥，可以为密钥的 ID 或者 ARN
                     * @return KmsKeyId 加密所使用的密钥，可以为密钥的 ID 或者 ARN
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置加密所使用的密钥，可以为密钥的 ID 或者 ARN
                     * @param KmsKeyId 加密所使用的密钥，可以为密钥的 ID 或者 ARN
                     */
                    void SetKmsKeyId(const std::string& _kmsKeyId);

                    /**
                     * 判断参数 KmsKeyId 是否已赋值
                     * @return KmsKeyId 是否已赋值
                     */
                    bool KmsKeyIdHasBeenSet() const;

                    /**
                     * 获取应用ID
                     * @return AppId 应用ID
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置应用ID
                     * @param AppId 应用ID
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取文件系统吞吐上限，吞吐上限是根据文件系统当前已使用存储量、绑定的存储资源包以及吞吐资源包一同确定
                     * @return BandwidthLimit 文件系统吞吐上限，吞吐上限是根据文件系统当前已使用存储量、绑定的存储资源包以及吞吐资源包一同确定
                     */
                    double GetBandwidthLimit() const;

                    /**
                     * 设置文件系统吞吐上限，吞吐上限是根据文件系统当前已使用存储量、绑定的存储资源包以及吞吐资源包一同确定
                     * @param BandwidthLimit 文件系统吞吐上限，吞吐上限是根据文件系统当前已使用存储量、绑定的存储资源包以及吞吐资源包一同确定
                     */
                    void SetBandwidthLimit(const double& _bandwidthLimit);

                    /**
                     * 判断参数 BandwidthLimit 是否已赋值
                     * @return BandwidthLimit 是否已赋值
                     */
                    bool BandwidthLimitHasBeenSet() const;

                    /**
                     * 获取文件系统总容量
                     * @return Capacity 文件系统总容量
                     */
                    uint64_t GetCapacity() const;

                    /**
                     * 设置文件系统总容量
                     * @param Capacity 文件系统总容量
                     */
                    void SetCapacity(const uint64_t& _capacity);

                    /**
                     * 判断参数 Capacity 是否已赋值
                     * @return Capacity 是否已赋值
                     */
                    bool CapacityHasBeenSet() const;

                    /**
                     * 获取文件系统标签列表
                     * @return Tags 文件系统标签列表
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置文件系统标签列表
                     * @param Tags 文件系统标签列表
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 创建时间
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 用户自定义名称
                     */
                    std::string m_creationToken;
                    bool m_creationTokenHasBeenSet;

                    /**
                     * 文件系统 ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 文件系统状态
                     */
                    std::string m_lifeCycleState;
                    bool m_lifeCycleStateHasBeenSet;

                    /**
                     * 文件系统已使用容量
                     */
                    uint64_t m_sizeByte;
                    bool m_sizeByteHasBeenSet;

                    /**
                     * 文件系统最大空间限制
                     */
                    uint64_t m_sizeLimit;
                    bool m_sizeLimitHasBeenSet;

                    /**
                     * 区域 ID
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 区域名称
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 文件系统协议类型
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 文件系统存储类型
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 文件系统绑定的预付费存储包
                     */
                    std::string m_storageResourcePkg;
                    bool m_storageResourcePkgHasBeenSet;

                    /**
                     * 文件系统绑定的预付费带宽包（暂未支持）
                     */
                    std::string m_bandwidthResourcePkg;
                    bool m_bandwidthResourcePkgHasBeenSet;

                    /**
                     * 文件系统绑定权限组信息
                     */
                    PGroup m_pGroup;
                    bool m_pGroupHasBeenSet;

                    /**
                     * 用户自定义名称
                     */
                    std::string m_fsName;
                    bool m_fsNameHasBeenSet;

                    /**
                     * 文件系统是否加密
                     */
                    bool m_encrypted;
                    bool m_encryptedHasBeenSet;

                    /**
                     * 加密所使用的密钥，可以为密钥的 ID 或者 ARN
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                    /**
                     * 应用ID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 文件系统吞吐上限，吞吐上限是根据文件系统当前已使用存储量、绑定的存储资源包以及吞吐资源包一同确定
                     */
                    double m_bandwidthLimit;
                    bool m_bandwidthLimitHasBeenSet;

                    /**
                     * 文件系统总容量
                     */
                    uint64_t m_capacity;
                    bool m_capacityHasBeenSet;

                    /**
                     * 文件系统标签列表
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_FILESYSTEMINFO_H_
