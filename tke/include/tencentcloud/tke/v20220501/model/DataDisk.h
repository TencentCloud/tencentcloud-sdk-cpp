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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_DATADISK_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_DATADISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * 描述了k8s节点数据盘相关配置与信息。
                */
                class DataDisk : public AbstractModel
                {
                public:
                    DataDisk();
                    ~DataDisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>云盘类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskType <p>云盘类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置<p>云盘类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diskType <p>云盘类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取<p>文件系统(ext3/ext4/xfs)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileSystem <p>文件系统(ext3/ext4/xfs)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileSystem() const;

                    /**
                     * 设置<p>文件系统(ext3/ext4/xfs)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileSystem <p>文件系统(ext3/ext4/xfs)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileSystem(const std::string& _fileSystem);

                    /**
                     * 判断参数 FileSystem 是否已赋值
                     * @return FileSystem 是否已赋值
                     * 
                     */
                    bool FileSystemHasBeenSet() const;

                    /**
                     * 获取<p>云盘大小(G）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskSize <p>云盘大小(G）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置<p>云盘大小(G）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diskSize <p>云盘大小(G）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取<p>是否自动化格式盘并挂载</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoFormatAndMount <p>是否自动化格式盘并挂载</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAutoFormatAndMount() const;

                    /**
                     * 设置<p>是否自动化格式盘并挂载</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoFormatAndMount <p>是否自动化格式盘并挂载</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoFormatAndMount(const bool& _autoFormatAndMount);

                    /**
                     * 判断参数 AutoFormatAndMount 是否已赋值
                     * @return AutoFormatAndMount 是否已赋值
                     * 
                     */
                    bool AutoFormatAndMountHasBeenSet() const;

                    /**
                     * 获取<p>挂载设备名或分区名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskPartition <p>挂载设备名或分区名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDiskPartition() const;

                    /**
                     * 设置<p>挂载设备名或分区名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diskPartition <p>挂载设备名或分区名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiskPartition(const std::string& _diskPartition);

                    /**
                     * 判断参数 DiskPartition 是否已赋值
                     * @return DiskPartition 是否已赋值
                     * 
                     */
                    bool DiskPartitionHasBeenSet() const;

                    /**
                     * 获取<p>挂载目录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MountTarget <p>挂载目录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMountTarget() const;

                    /**
                     * 设置<p>挂载目录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mountTarget <p>挂载目录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMountTarget(const std::string& _mountTarget);

                    /**
                     * 判断参数 MountTarget 是否已赋值
                     * @return MountTarget 是否已赋值
                     * 
                     */
                    bool MountTargetHasBeenSet() const;

                    /**
                     * 获取<p>传入该参数用于创建加密云盘，取值固定为ENCRYPT</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Encrypt <p>传入该参数用于创建加密云盘，取值固定为ENCRYPT</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEncrypt() const;

                    /**
                     * 设置<p>传入该参数用于创建加密云盘，取值固定为ENCRYPT</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _encrypt <p>传入该参数用于创建加密云盘，取值固定为ENCRYPT</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEncrypt(const std::string& _encrypt);

                    /**
                     * 判断参数 Encrypt 是否已赋值
                     * @return Encrypt 是否已赋值
                     * 
                     */
                    bool EncryptHasBeenSet() const;

                    /**
                     * 获取<p>购买加密盘时自定义密钥，当传入该参数时, Encrypt入参不为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KmsKeyId <p>购买加密盘时自定义密钥，当传入该参数时, Encrypt入参不为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置<p>购买加密盘时自定义密钥，当传入该参数时, Encrypt入参不为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kmsKeyId <p>购买加密盘时自定义密钥，当传入该参数时, Encrypt入参不为空</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>快照ID，如果传入则根据此快照创建云硬盘，快照类型必须为数据盘快照</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SnapshotId <p>快照ID，如果传入则根据此快照创建云硬盘，快照类型必须为数据盘快照</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置<p>快照ID，如果传入则根据此快照创建云硬盘，快照类型必须为数据盘快照</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _snapshotId <p>快照ID，如果传入则根据此快照创建云硬盘，快照类型必须为数据盘快照</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     * 
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取<p>云硬盘性能，单位：MB/s。使用此参数可给云硬盘购买额外的性能</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ThroughputPerformance <p>云硬盘性能，单位：MB/s。使用此参数可给云硬盘购买额外的性能</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetThroughputPerformance() const;

                    /**
                     * 设置<p>云硬盘性能，单位：MB/s。使用此参数可给云硬盘购买额外的性能</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _throughputPerformance <p>云硬盘性能，单位：MB/s。使用此参数可给云硬盘购买额外的性能</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetThroughputPerformance(const uint64_t& _throughputPerformance);

                    /**
                     * 判断参数 ThroughputPerformance 是否已赋值
                     * @return ThroughputPerformance 是否已赋值
                     * 
                     */
                    bool ThroughputPerformanceHasBeenSet() const;

                private:

                    /**
                     * <p>云盘类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * <p>文件系统(ext3/ext4/xfs)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileSystem;
                    bool m_fileSystemHasBeenSet;

                    /**
                     * <p>云盘大小(G）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>是否自动化格式盘并挂载</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_autoFormatAndMount;
                    bool m_autoFormatAndMountHasBeenSet;

                    /**
                     * <p>挂载设备名或分区名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_diskPartition;
                    bool m_diskPartitionHasBeenSet;

                    /**
                     * <p>挂载目录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mountTarget;
                    bool m_mountTargetHasBeenSet;

                    /**
                     * <p>传入该参数用于创建加密云盘，取值固定为ENCRYPT</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_encrypt;
                    bool m_encryptHasBeenSet;

                    /**
                     * <p>购买加密盘时自定义密钥，当传入该参数时, Encrypt入参不为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                    /**
                     * <p>快照ID，如果传入则根据此快照创建云硬盘，快照类型必须为数据盘快照</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * <p>云硬盘性能，单位：MB/s。使用此参数可给云硬盘购买额外的性能</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_throughputPerformance;
                    bool m_throughputPerformanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_DATADISK_H_
