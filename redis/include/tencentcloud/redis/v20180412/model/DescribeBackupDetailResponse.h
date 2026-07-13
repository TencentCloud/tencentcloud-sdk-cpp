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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBACKUPDETAILRESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBACKUPDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeBackupDetail返回参数结构体
                */
                class DescribeBackupDetailResponse : public AbstractModel
                {
                public:
                    DescribeBackupDetailResponse();
                    ~DescribeBackupDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>备份 ID。</p>
                     * @return BackupId <p>备份 ID。</p>
                     * 
                     */
                    std::string GetBackupId() const;

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取<p>备份开始时间。</p>
                     * @return StartTime <p>备份开始时间。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>备份结束时间。</p>
                     * @return EndTime <p>备份结束时间。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>备份方式。 </p><ul><li>1：手动备份。</li><li>0：自动备份。</li></ul>
                     * @return BackupType <p>备份方式。 </p><ul><li>1：手动备份。</li><li>0：自动备份。</li></ul>
                     * 
                     */
                    std::string GetBackupType() const;

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     * 
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取<p>备份状态。 </p><ul><li>1：备份被其它流程锁定。</li><li>2：备份正常，没有被任何流程锁定。</li><li>-1：备份已过期。</li><li>3：备份正在被导出。</li><li>4：备份导出成功。</li></ul>
                     * @return Status <p>备份状态。 </p><ul><li>1：备份被其它流程锁定。</li><li>2：备份正常，没有被任何流程锁定。</li><li>-1：备份已过期。</li><li>3：备份正在被导出。</li><li>4：备份导出成功。</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>备份的备注信息。</p>
                     * @return Remark <p>备份的备注信息。</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>备份是否被锁定。</p><ul><li>0：未被锁定。</li><li>1：已被锁定。</li></ul>
                     * @return Locked <p>备份是否被锁定。</p><ul><li>0：未被锁定。</li><li>1：已被锁定。</li></ul>
                     * 
                     */
                    int64_t GetLocked() const;

                    /**
                     * 判断参数 Locked 是否已赋值
                     * @return Locked 是否已赋值
                     * 
                     */
                    bool LockedHasBeenSet() const;

                    /**
                     * 获取<p>备份文件大小。单位：Byte。</p>
                     * @return BackupSize <p>备份文件大小。单位：Byte。</p>
                     * 
                     */
                    int64_t GetBackupSize() const;

                    /**
                     * 判断参数 BackupSize 是否已赋值
                     * @return BackupSize 是否已赋值
                     * 
                     */
                    bool BackupSizeHasBeenSet() const;

                    /**
                     * 获取<p>实例类型。</p>
                     * @return InstanceType <p>实例类型。</p>
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>单分片内存规格大小，单位：MB。</p>
                     * @return MemSize <p>单分片内存规格大小，单位：MB。</p>
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取<p>分片数量。</p>
                     * @return ShardNum <p>分片数量。</p>
                     * 
                     */
                    int64_t GetShardNum() const;

                    /**
                     * 判断参数 ShardNum 是否已赋值
                     * @return ShardNum 是否已赋值
                     * 
                     */
                    bool ShardNumHasBeenSet() const;

                    /**
                     * 获取<p>副本数量。</p>
                     * @return ReplicasNum <p>副本数量。</p>
                     * 
                     */
                    int64_t GetReplicasNum() const;

                    /**
                     * 判断参数 ReplicasNum 是否已赋值
                     * @return ReplicasNum 是否已赋值
                     * 
                     */
                    bool ReplicasNumHasBeenSet() const;

                    /**
                     * 获取<p>是否已加密。</p><p>枚举值：</p><ul><li>true： 已加密</li><li>false： 未加密</li></ul>
                     * @return Encrypted <p>是否已加密。</p><p>枚举值：</p><ul><li>true： 已加密</li><li>false： 未加密</li></ul>
                     * 
                     */
                    bool GetEncrypted() const;

                    /**
                     * 判断参数 Encrypted 是否已赋值
                     * @return Encrypted 是否已赋值
                     * 
                     */
                    bool EncryptedHasBeenSet() const;

                    /**
                     * 获取<p>解密密钥。</p>
                     * @return DecryptKey <p>解密密钥。</p>
                     * 
                     */
                    std::string GetDecryptKey() const;

                    /**
                     * 判断参数 DecryptKey 是否已赋值
                     * @return DecryptKey 是否已赋值
                     * 
                     */
                    bool DecryptKeyHasBeenSet() const;

                    /**
                     * 获取<p>KMS的密钥ID。</p>
                     * @return KmsKeyId <p>KMS的密钥ID。</p>
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 判断参数 KmsKeyId 是否已赋值
                     * @return KmsKeyId 是否已赋值
                     * 
                     */
                    bool KmsKeyIdHasBeenSet() const;

                    /**
                     * 获取<p>加密该备份文件的加密算法。</p><p>枚举值：</p><ul><li>AES-256-CBC： 当前仅支持AES-256-CBC</li></ul>
                     * @return KeyAlgorithm <p>加密该备份文件的加密算法。</p><p>枚举值：</p><ul><li>AES-256-CBC： 当前仅支持AES-256-CBC</li></ul>
                     * 
                     */
                    std::string GetKeyAlgorithm() const;

                    /**
                     * 判断参数 KeyAlgorithm 是否已赋值
                     * @return KeyAlgorithm 是否已赋值
                     * 
                     */
                    bool KeyAlgorithmHasBeenSet() const;

                private:

                    /**
                     * <p>备份 ID。</p>
                     */
                    std::string m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * <p>备份开始时间。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>备份结束时间。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>备份方式。 </p><ul><li>1：手动备份。</li><li>0：自动备份。</li></ul>
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * <p>备份状态。 </p><ul><li>1：备份被其它流程锁定。</li><li>2：备份正常，没有被任何流程锁定。</li><li>-1：备份已过期。</li><li>3：备份正在被导出。</li><li>4：备份导出成功。</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>备份的备注信息。</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>备份是否被锁定。</p><ul><li>0：未被锁定。</li><li>1：已被锁定。</li></ul>
                     */
                    int64_t m_locked;
                    bool m_lockedHasBeenSet;

                    /**
                     * <p>备份文件大小。单位：Byte。</p>
                     */
                    int64_t m_backupSize;
                    bool m_backupSizeHasBeenSet;

                    /**
                     * <p>实例类型。</p>
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>单分片内存规格大小，单位：MB。</p>
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * <p>分片数量。</p>
                     */
                    int64_t m_shardNum;
                    bool m_shardNumHasBeenSet;

                    /**
                     * <p>副本数量。</p>
                     */
                    int64_t m_replicasNum;
                    bool m_replicasNumHasBeenSet;

                    /**
                     * <p>是否已加密。</p><p>枚举值：</p><ul><li>true： 已加密</li><li>false： 未加密</li></ul>
                     */
                    bool m_encrypted;
                    bool m_encryptedHasBeenSet;

                    /**
                     * <p>解密密钥。</p>
                     */
                    std::string m_decryptKey;
                    bool m_decryptKeyHasBeenSet;

                    /**
                     * <p>KMS的密钥ID。</p>
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                    /**
                     * <p>加密该备份文件的加密算法。</p><p>枚举值：</p><ul><li>AES-256-CBC： 当前仅支持AES-256-CBC</li></ul>
                     */
                    std::string m_keyAlgorithm;
                    bool m_keyAlgorithmHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBACKUPDETAILRESPONSE_H_
