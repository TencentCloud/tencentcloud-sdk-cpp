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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATION_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/MigrationDetail.h>
#include <tencentcloud/sqlserver/v20180328/model/MigrationAction.h>
#include <tencentcloud/sqlserver/v20180328/model/DBRenameRes.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 冷备迁移导入
                */
                class Migration : public AbstractModel
                {
                public:
                    Migration();
                    ~Migration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取备份导入任务ID 或 增量导入任务ID
                     * @return MigrationId 备份导入任务ID 或 增量导入任务ID
                     * 
                     */
                    std::string GetMigrationId() const;

                    /**
                     * 设置备份导入任务ID 或 增量导入任务ID
                     * @param _migrationId 备份导入任务ID 或 增量导入任务ID
                     * 
                     */
                    void SetMigrationId(const std::string& _migrationId);

                    /**
                     * 判断参数 MigrationId 是否已赋值
                     * @return MigrationId 是否已赋值
                     * 
                     */
                    bool MigrationIdHasBeenSet() const;

                    /**
                     * 获取备份导入名称，增量导入任务该字段为空
                     * @return MigrationName 备份导入名称，增量导入任务该字段为空
                     * 
                     */
                    std::string GetMigrationName() const;

                    /**
                     * 设置备份导入名称，增量导入任务该字段为空
                     * @param _migrationName 备份导入名称，增量导入任务该字段为空
                     * 
                     */
                    void SetMigrationName(const std::string& _migrationName);

                    /**
                     * 判断参数 MigrationName 是否已赋值
                     * @return MigrationName 是否已赋值
                     * 
                     */
                    bool MigrationNameHasBeenSet() const;

                    /**
                     * 获取应用ID
                     * @return AppId 应用ID
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置应用ID
                     * @param _appId 应用ID
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
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取迁移目标实例ID
                     * @return InstanceId 迁移目标实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置迁移目标实例ID
                     * @param _instanceId 迁移目标实例ID
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
                     * 获取迁移任务恢复类型
                     * @return RecoveryType 迁移任务恢复类型
                     * 
                     */
                    std::string GetRecoveryType() const;

                    /**
                     * 设置迁移任务恢复类型
                     * @param _recoveryType 迁移任务恢复类型
                     * 
                     */
                    void SetRecoveryType(const std::string& _recoveryType);

                    /**
                     * 判断参数 RecoveryType 是否已赋值
                     * @return RecoveryType 是否已赋值
                     * 
                     */
                    bool RecoveryTypeHasBeenSet() const;

                    /**
                     * 获取备份用户上传类型，COS_URL-备份放在用户的对象存储上，提供URL。COS_UPLOAD-备份放在业务的对象存储上，用户上传
                     * @return UploadType 备份用户上传类型，COS_URL-备份放在用户的对象存储上，提供URL。COS_UPLOAD-备份放在业务的对象存储上，用户上传
                     * 
                     */
                    std::string GetUploadType() const;

                    /**
                     * 设置备份用户上传类型，COS_URL-备份放在用户的对象存储上，提供URL。COS_UPLOAD-备份放在业务的对象存储上，用户上传
                     * @param _uploadType 备份用户上传类型，COS_URL-备份放在用户的对象存储上，提供URL。COS_UPLOAD-备份放在业务的对象存储上，用户上传
                     * 
                     */
                    void SetUploadType(const std::string& _uploadType);

                    /**
                     * 判断参数 UploadType 是否已赋值
                     * @return UploadType 是否已赋值
                     * 
                     */
                    bool UploadTypeHasBeenSet() const;

                    /**
                     * 获取备份文件列表，UploadType确定，COS_URL则保存URL，COS_UPLOAD则保存备份名称
                     * @return BackupFiles 备份文件列表，UploadType确定，COS_URL则保存URL，COS_UPLOAD则保存备份名称
                     * 
                     */
                    std::vector<std::string> GetBackupFiles() const;

                    /**
                     * 设置备份文件列表，UploadType确定，COS_URL则保存URL，COS_UPLOAD则保存备份名称
                     * @param _backupFiles 备份文件列表，UploadType确定，COS_URL则保存URL，COS_UPLOAD则保存备份名称
                     * 
                     */
                    void SetBackupFiles(const std::vector<std::string>& _backupFiles);

                    /**
                     * 判断参数 BackupFiles 是否已赋值
                     * @return BackupFiles 是否已赋值
                     * 
                     */
                    bool BackupFilesHasBeenSet() const;

                    /**
                     * 获取迁移任务状态，2-创建完成，7-全量导入中，8-等待增量，9-导入成功，10-导入失败，12-增量导入中
                     * @return Status 迁移任务状态，2-创建完成，7-全量导入中，8-等待增量，9-导入成功，10-导入失败，12-增量导入中
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置迁移任务状态，2-创建完成，7-全量导入中，8-等待增量，9-导入成功，10-导入失败，12-增量导入中
                     * @param _status 迁移任务状态，2-创建完成，7-全量导入中，8-等待增量，9-导入成功，10-导入失败，12-增量导入中
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
                     * 获取迁移任务创建时间
                     * @return CreateTime 迁移任务创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置迁移任务创建时间
                     * @param _createTime 迁移任务创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取迁移任务开始时间
                     * @return StartTime 迁移任务开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置迁移任务开始时间
                     * @param _startTime 迁移任务开始时间
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
                     * 获取迁移任务结束时间
                     * @return EndTime 迁移任务结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置迁移任务结束时间
                     * @param _endTime 迁移任务结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取说明信息
                     * @return Message 说明信息
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置说明信息
                     * @param _message 说明信息
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取迁移细节
                     * @return Detail 迁移细节
                     * 
                     */
                    MigrationDetail GetDetail() const;

                    /**
                     * 设置迁移细节
                     * @param _detail 迁移细节
                     * 
                     */
                    void SetDetail(const MigrationDetail& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取当前状态允许的操作
                     * @return Action 当前状态允许的操作
                     * 
                     */
                    MigrationAction GetAction() const;

                    /**
                     * 设置当前状态允许的操作
                     * @param _action 当前状态允许的操作
                     * 
                     */
                    void SetAction(const MigrationAction& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取是否是最终恢复，全量导入任务该字段为空
                     * @return IsRecovery 是否是最终恢复，全量导入任务该字段为空
                     * 
                     */
                    std::string GetIsRecovery() const;

                    /**
                     * 设置是否是最终恢复，全量导入任务该字段为空
                     * @param _isRecovery 是否是最终恢复，全量导入任务该字段为空
                     * 
                     */
                    void SetIsRecovery(const std::string& _isRecovery);

                    /**
                     * 判断参数 IsRecovery 是否已赋值
                     * @return IsRecovery 是否已赋值
                     * 
                     */
                    bool IsRecoveryHasBeenSet() const;

                    /**
                     * 获取重命名的数据库名称集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DBRename 重命名的数据库名称集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DBRenameRes> GetDBRename() const;

                    /**
                     * 设置重命名的数据库名称集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dBRename 重命名的数据库名称集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDBRename(const std::vector<DBRenameRes>& _dBRename);

                    /**
                     * 判断参数 DBRename 是否已赋值
                     * @return DBRename 是否已赋值
                     * 
                     */
                    bool DBRenameHasBeenSet() const;

                private:

                    /**
                     * 备份导入任务ID 或 增量导入任务ID
                     */
                    std::string m_migrationId;
                    bool m_migrationIdHasBeenSet;

                    /**
                     * 备份导入名称，增量导入任务该字段为空
                     */
                    std::string m_migrationName;
                    bool m_migrationNameHasBeenSet;

                    /**
                     * 应用ID
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 迁移目标实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 迁移任务恢复类型
                     */
                    std::string m_recoveryType;
                    bool m_recoveryTypeHasBeenSet;

                    /**
                     * 备份用户上传类型，COS_URL-备份放在用户的对象存储上，提供URL。COS_UPLOAD-备份放在业务的对象存储上，用户上传
                     */
                    std::string m_uploadType;
                    bool m_uploadTypeHasBeenSet;

                    /**
                     * 备份文件列表，UploadType确定，COS_URL则保存URL，COS_UPLOAD则保存备份名称
                     */
                    std::vector<std::string> m_backupFiles;
                    bool m_backupFilesHasBeenSet;

                    /**
                     * 迁移任务状态，2-创建完成，7-全量导入中，8-等待增量，9-导入成功，10-导入失败，12-增量导入中
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 迁移任务创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 迁移任务开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 迁移任务结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 说明信息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 迁移细节
                     */
                    MigrationDetail m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * 当前状态允许的操作
                     */
                    MigrationAction m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 是否是最终恢复，全量导入任务该字段为空
                     */
                    std::string m_isRecovery;
                    bool m_isRecoveryHasBeenSet;

                    /**
                     * 重命名的数据库名称集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DBRenameRes> m_dBRename;
                    bool m_dBRenameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATION_H_
