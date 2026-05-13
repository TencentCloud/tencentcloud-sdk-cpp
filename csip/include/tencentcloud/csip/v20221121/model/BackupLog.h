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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BACKUPLOG_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BACKUPLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 日志备份
                */
                class BackupLog : public AbstractModel
                {
                public:
                    BackupLog();
                    ~BackupLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取索引
                     * @return Id 索引
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置索引
                     * @param _id 索引
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取索引开始时间
                     * @return IndexStartTime 索引开始时间
                     * 
                     */
                    int64_t GetIndexStartTime() const;

                    /**
                     * 设置索引开始时间
                     * @param _indexStartTime 索引开始时间
                     * 
                     */
                    void SetIndexStartTime(const int64_t& _indexStartTime);

                    /**
                     * 判断参数 IndexStartTime 是否已赋值
                     * @return IndexStartTime 是否已赋值
                     * 
                     */
                    bool IndexStartTimeHasBeenSet() const;

                    /**
                     * 获取索引结束时间
                     * @return IndexEndTime 索引结束时间
                     * 
                     */
                    int64_t GetIndexEndTime() const;

                    /**
                     * 设置索引结束时间
                     * @param _indexEndTime 索引结束时间
                     * 
                     */
                    void SetIndexEndTime(const int64_t& _indexEndTime);

                    /**
                     * 判断参数 IndexEndTime 是否已赋值
                     * @return IndexEndTime 是否已赋值
                     * 
                     */
                    bool IndexEndTimeHasBeenSet() const;

                    /**
                     * 获取备份后压缩的大小，单位M
                     * @return BackupSize 备份后压缩的大小，单位M
                     * 
                     */
                    int64_t GetBackupSize() const;

                    /**
                     * 设置备份后压缩的大小，单位M
                     * @param _backupSize 备份后压缩的大小，单位M
                     * 
                     */
                    void SetBackupSize(const int64_t& _backupSize);

                    /**
                     * 判断参数 BackupSize 是否已赋值
                     * @return BackupSize 是否已赋值
                     * 
                     */
                    bool BackupSizeHasBeenSet() const;

                    /**
                     * 获取日志状态 0备份未完成， 1备份文件，2恢复中，3已恢复，4.已删除
                     * @return Status 日志状态 0备份未完成， 1备份文件，2恢复中，3已恢复，4.已删除
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置日志状态 0备份未完成， 1备份文件，2恢复中，3已恢复，4.已删除
                     * @param _status 日志状态 0备份未完成， 1备份文件，2恢复中，3已恢复，4.已删除
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
                     * 获取恢复剩余的分钟数，分钟，需要前端转换
                     * @return RestoreProcessRemindTime 恢复剩余的分钟数，分钟，需要前端转换
                     * 
                     */
                    int64_t GetRestoreProcessRemindTime() const;

                    /**
                     * 设置恢复剩余的分钟数，分钟，需要前端转换
                     * @param _restoreProcessRemindTime 恢复剩余的分钟数，分钟，需要前端转换
                     * 
                     */
                    void SetRestoreProcessRemindTime(const int64_t& _restoreProcessRemindTime);

                    /**
                     * 判断参数 RestoreProcessRemindTime 是否已赋值
                     * @return RestoreProcessRemindTime 是否已赋值
                     * 
                     */
                    bool RestoreProcessRemindTimeHasBeenSet() const;

                    /**
                     * 获取恢复日志保留的时间
                     * @return RestoreRemindTime 恢复日志保留的时间
                     * 
                     */
                    int64_t GetRestoreRemindTime() const;

                    /**
                     * 设置恢复日志保留的时间
                     * @param _restoreRemindTime 恢复日志保留的时间
                     * 
                     */
                    void SetRestoreRemindTime(const int64_t& _restoreRemindTime);

                    /**
                     * 判断参数 RestoreRemindTime 是否已赋值
                     * @return RestoreRemindTime 是否已赋值
                     * 
                     */
                    bool RestoreRemindTimeHasBeenSet() const;

                    /**
                     * 获取恢复索引大小
                     * @return RestoreIndexSize 恢复索引大小
                     * 
                     */
                    int64_t GetRestoreIndexSize() const;

                    /**
                     * 设置恢复索引大小
                     * @param _restoreIndexSize 恢复索引大小
                     * 
                     */
                    void SetRestoreIndexSize(const int64_t& _restoreIndexSize);

                    /**
                     * 判断参数 RestoreIndexSize 是否已赋值
                     * @return RestoreIndexSize 是否已赋值
                     * 
                     */
                    bool RestoreIndexSizeHasBeenSet() const;

                    /**
                     * 获取恢复日志执行结束时间
                     * @return RestoreEndTime 恢复日志执行结束时间
                     * 
                     */
                    int64_t GetRestoreEndTime() const;

                    /**
                     * 设置恢复日志执行结束时间
                     * @param _restoreEndTime 恢复日志执行结束时间
                     * 
                     */
                    void SetRestoreEndTime(const int64_t& _restoreEndTime);

                    /**
                     * 判断参数 RestoreEndTime 是否已赋值
                     * @return RestoreEndTime 是否已赋值
                     * 
                     */
                    bool RestoreEndTimeHasBeenSet() const;

                    /**
                     * 获取备份所属的appId
                     * @return AppId 备份所属的appId
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置备份所属的appId
                     * @param _appId 备份所属的appId
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取备份所属的资产ID
                     * @return AssetId 备份所属的资产ID
                     * 
                     */
                    uint64_t GetAssetId() const;

                    /**
                     * 设置备份所属的资产ID
                     * @param _assetId 备份所属的资产ID
                     * 
                     */
                    void SetAssetId(const uint64_t& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取账号昵称
                     * @return NickName 账号昵称
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置账号昵称
                     * @param _nickName 账号昵称
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取资产所属账号uin
                     * @return Uin 资产所属账号uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置资产所属账号uin
                     * @param _uin 资产所属账号uin
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                private:

                    /**
                     * 索引
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 索引开始时间
                     */
                    int64_t m_indexStartTime;
                    bool m_indexStartTimeHasBeenSet;

                    /**
                     * 索引结束时间
                     */
                    int64_t m_indexEndTime;
                    bool m_indexEndTimeHasBeenSet;

                    /**
                     * 备份后压缩的大小，单位M
                     */
                    int64_t m_backupSize;
                    bool m_backupSizeHasBeenSet;

                    /**
                     * 日志状态 0备份未完成， 1备份文件，2恢复中，3已恢复，4.已删除
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 恢复剩余的分钟数，分钟，需要前端转换
                     */
                    int64_t m_restoreProcessRemindTime;
                    bool m_restoreProcessRemindTimeHasBeenSet;

                    /**
                     * 恢复日志保留的时间
                     */
                    int64_t m_restoreRemindTime;
                    bool m_restoreRemindTimeHasBeenSet;

                    /**
                     * 恢复索引大小
                     */
                    int64_t m_restoreIndexSize;
                    bool m_restoreIndexSizeHasBeenSet;

                    /**
                     * 恢复日志执行结束时间
                     */
                    int64_t m_restoreEndTime;
                    bool m_restoreEndTimeHasBeenSet;

                    /**
                     * 备份所属的appId
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 备份所属的资产ID
                     */
                    uint64_t m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 账号昵称
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * 资产所属账号uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BACKUPLOG_H_
