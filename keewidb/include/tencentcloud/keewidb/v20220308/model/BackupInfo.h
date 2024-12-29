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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_BACKUPINFO_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_BACKUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Keewidb
    {
        namespace V20220308
        {
            namespace Model
            {
                /**
                * 实例的备份信息
                */
                class BackupInfo : public AbstractModel
                {
                public:
                    BackupInfo();
                    ~BackupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取备份开始时间。
                     * @return StartTime 备份开始时间。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置备份开始时间。
                     * @param _startTime 备份开始时间。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取备份 ID。
                     * @return BackupId 备份 ID。
                     * 
                     */
                    std::string GetBackupId() const;

                    /**
                     * 设置备份 ID。
                     * @param _backupId 备份 ID。
                     * 
                     */
                    void SetBackupId(const std::string& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取备份类型。<ul><li>1：手动备份，指根据业务运维排障需求，立即执行备份任务的操作。</li> <li>0：自动备份，指根据自动备份策略定时自动发起的备份任务。</li><li>2：生成RDB，指根据业务需求，发起的生成文件为rdb类型的备份任务。</li></ul>
                     * @return BackupType 备份类型。<ul><li>1：手动备份，指根据业务运维排障需求，立即执行备份任务的操作。</li> <li>0：自动备份，指根据自动备份策略定时自动发起的备份任务。</li><li>2：生成RDB，指根据业务需求，发起的生成文件为rdb类型的备份任务。</li></ul>
                     * 
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置备份类型。<ul><li>1：手动备份，指根据业务运维排障需求，立即执行备份任务的操作。</li> <li>0：自动备份，指根据自动备份策略定时自动发起的备份任务。</li><li>2：生成RDB，指根据业务需求，发起的生成文件为rdb类型的备份任务。</li></ul>
                     * @param _backupType 备份类型。<ul><li>1：手动备份，指根据业务运维排障需求，立即执行备份任务的操作。</li> <li>0：自动备份，指根据自动备份策略定时自动发起的备份任务。</li><li>2：生成RDB，指根据业务需求，发起的生成文件为rdb类型的备份任务。</li></ul>
                     * 
                     */
                    void SetBackupType(const std::string& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     * 
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取备份的备注信息.
                     * @return Remark 备份的备注信息.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备份的备注信息.
                     * @param _remark 备份的备注信息.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取备份状态。  <ul><li>1：备份任务被其它流程锁定。</li><li>2：备份正常，没有被任何流程锁定。</li> <li>-1：备份已过期。</li><li>3：备份正在被导出。</li> <li>4：备份导出成功。</li></ul>
                     * @return Status 备份状态。  <ul><li>1：备份任务被其它流程锁定。</li><li>2：备份正常，没有被任何流程锁定。</li> <li>-1：备份已过期。</li><li>3：备份正在被导出。</li> <li>4：备份导出成功。</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置备份状态。  <ul><li>1：备份任务被其它流程锁定。</li><li>2：备份正常，没有被任何流程锁定。</li> <li>-1：备份已过期。</li><li>3：备份正在被导出。</li> <li>4：备份导出成功。</li></ul>
                     * @param _status 备份状态。  <ul><li>1：备份任务被其它流程锁定。</li><li>2：备份正常，没有被任何流程锁定。</li> <li>-1：备份已过期。</li><li>3：备份正在被导出。</li> <li>4：备份导出成功。</li></ul>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取备份是否被锁定。<ul><li>0：未被锁定。</li><li>1：已被锁定。</li></ul>
                     * @return Locked 备份是否被锁定。<ul><li>0：未被锁定。</li><li>1：已被锁定。</li></ul>
                     * 
                     */
                    int64_t GetLocked() const;

                    /**
                     * 设置备份是否被锁定。<ul><li>0：未被锁定。</li><li>1：已被锁定。</li></ul>
                     * @param _locked 备份是否被锁定。<ul><li>0：未被锁定。</li><li>1：已被锁定。</li></ul>
                     * 
                     */
                    void SetLocked(const int64_t& _locked);

                    /**
                     * 判断参数 Locked 是否已赋值
                     * @return Locked 是否已赋值
                     * 
                     */
                    bool LockedHasBeenSet() const;

                private:

                    /**
                     * 备份开始时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 备份 ID。
                     */
                    std::string m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * 备份类型。<ul><li>1：手动备份，指根据业务运维排障需求，立即执行备份任务的操作。</li> <li>0：自动备份，指根据自动备份策略定时自动发起的备份任务。</li><li>2：生成RDB，指根据业务需求，发起的生成文件为rdb类型的备份任务。</li></ul>
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * 备份的备注信息.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 备份状态。  <ul><li>1：备份任务被其它流程锁定。</li><li>2：备份正常，没有被任何流程锁定。</li> <li>-1：备份已过期。</li><li>3：备份正在被导出。</li> <li>4：备份导出成功。</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 备份是否被锁定。<ul><li>0：未被锁定。</li><li>1：已被锁定。</li></ul>
                     */
                    int64_t m_locked;
                    bool m_lockedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_BACKUPINFO_H_
