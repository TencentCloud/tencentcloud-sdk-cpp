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
                     * 获取<p>索引</p>
                     * @return Id <p>索引</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>索引</p>
                     * @param _id <p>索引</p>
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
                     * 获取<p>索引开始时间</p>
                     * @return IndexStartTime <p>索引开始时间</p>
                     * 
                     */
                    int64_t GetIndexStartTime() const;

                    /**
                     * 设置<p>索引开始时间</p>
                     * @param _indexStartTime <p>索引开始时间</p>
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
                     * 获取<p>索引结束时间</p>
                     * @return IndexEndTime <p>索引结束时间</p>
                     * 
                     */
                    int64_t GetIndexEndTime() const;

                    /**
                     * 设置<p>索引结束时间</p>
                     * @param _indexEndTime <p>索引结束时间</p>
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
                     * 获取<p>备份后压缩的大小，单位M</p>
                     * @return BackupSize <p>备份后压缩的大小，单位M</p>
                     * 
                     */
                    int64_t GetBackupSize() const;

                    /**
                     * 设置<p>备份后压缩的大小，单位M</p>
                     * @param _backupSize <p>备份后压缩的大小，单位M</p>
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
                     * 获取<p>日志状态 0备份未完成， 1备份文件，2恢复中，3已恢复，4.已删除</p>
                     * @return Status <p>日志状态 0备份未完成， 1备份文件，2恢复中，3已恢复，4.已删除</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>日志状态 0备份未完成， 1备份文件，2恢复中，3已恢复，4.已删除</p>
                     * @param _status <p>日志状态 0备份未完成， 1备份文件，2恢复中，3已恢复，4.已删除</p>
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
                     * 获取<p>恢复剩余的分钟数，分钟，需要前端转换</p>
                     * @return RestoreProcessRemindTime <p>恢复剩余的分钟数，分钟，需要前端转换</p>
                     * 
                     */
                    int64_t GetRestoreProcessRemindTime() const;

                    /**
                     * 设置<p>恢复剩余的分钟数，分钟，需要前端转换</p>
                     * @param _restoreProcessRemindTime <p>恢复剩余的分钟数，分钟，需要前端转换</p>
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
                     * 获取<p>恢复日志保留的时间</p>
                     * @return RestoreRemindTime <p>恢复日志保留的时间</p>
                     * 
                     */
                    int64_t GetRestoreRemindTime() const;

                    /**
                     * 设置<p>恢复日志保留的时间</p>
                     * @param _restoreRemindTime <p>恢复日志保留的时间</p>
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
                     * 获取<p>恢复索引大小</p>
                     * @return RestoreIndexSize <p>恢复索引大小</p>
                     * 
                     */
                    int64_t GetRestoreIndexSize() const;

                    /**
                     * 设置<p>恢复索引大小</p>
                     * @param _restoreIndexSize <p>恢复索引大小</p>
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
                     * 获取<p>恢复日志执行结束时间</p>
                     * @return RestoreEndTime <p>恢复日志执行结束时间</p>
                     * 
                     */
                    int64_t GetRestoreEndTime() const;

                    /**
                     * 设置<p>恢复日志执行结束时间</p>
                     * @param _restoreEndTime <p>恢复日志执行结束时间</p>
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
                     * 获取<p>备份所属的appId</p>
                     * @return AppId <p>备份所属的appId</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>备份所属的appId</p>
                     * @param _appId <p>备份所属的appId</p>
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
                     * 获取<p>备份所属的资产ID</p>
                     * @return AssetId <p>备份所属的资产ID</p>
                     * 
                     */
                    uint64_t GetAssetId() const;

                    /**
                     * 设置<p>备份所属的资产ID</p>
                     * @param _assetId <p>备份所属的资产ID</p>
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
                     * 获取<p>账号昵称</p>
                     * @return NickName <p>账号昵称</p>
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置<p>账号昵称</p>
                     * @param _nickName <p>账号昵称</p>
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
                     * 获取<p>资产所属账号uin</p>
                     * @return Uin <p>资产所属账号uin</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>资产所属账号uin</p>
                     * @param _uin <p>资产所属账号uin</p>
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>实例名称</p>
                     * @return InstanceName <p>实例名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _instanceName <p>实例名称</p>
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
                     * 获取<p>实例类型</p><p>枚举值：</p><ul><li>cdb：  cdb</li><li>mariadb： mariadb</li></ul>
                     * @return AssetType <p>实例类型</p><p>枚举值：</p><ul><li>cdb：  cdb</li><li>mariadb： mariadb</li></ul>
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置<p>实例类型</p><p>枚举值：</p><ul><li>cdb：  cdb</li><li>mariadb： mariadb</li></ul>
                     * @param _assetType <p>实例类型</p><p>枚举值：</p><ul><li>cdb：  cdb</li><li>mariadb： mariadb</li></ul>
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                private:

                    /**
                     * <p>索引</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>索引开始时间</p>
                     */
                    int64_t m_indexStartTime;
                    bool m_indexStartTimeHasBeenSet;

                    /**
                     * <p>索引结束时间</p>
                     */
                    int64_t m_indexEndTime;
                    bool m_indexEndTimeHasBeenSet;

                    /**
                     * <p>备份后压缩的大小，单位M</p>
                     */
                    int64_t m_backupSize;
                    bool m_backupSizeHasBeenSet;

                    /**
                     * <p>日志状态 0备份未完成， 1备份文件，2恢复中，3已恢复，4.已删除</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>恢复剩余的分钟数，分钟，需要前端转换</p>
                     */
                    int64_t m_restoreProcessRemindTime;
                    bool m_restoreProcessRemindTimeHasBeenSet;

                    /**
                     * <p>恢复日志保留的时间</p>
                     */
                    int64_t m_restoreRemindTime;
                    bool m_restoreRemindTimeHasBeenSet;

                    /**
                     * <p>恢复索引大小</p>
                     */
                    int64_t m_restoreIndexSize;
                    bool m_restoreIndexSizeHasBeenSet;

                    /**
                     * <p>恢复日志执行结束时间</p>
                     */
                    int64_t m_restoreEndTime;
                    bool m_restoreEndTimeHasBeenSet;

                    /**
                     * <p>备份所属的appId</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>备份所属的资产ID</p>
                     */
                    uint64_t m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * <p>账号昵称</p>
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * <p>资产所属账号uin</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>实例类型</p><p>枚举值：</p><ul><li>cdb：  cdb</li><li>mariadb： mariadb</li></ul>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BACKUPLOG_H_
