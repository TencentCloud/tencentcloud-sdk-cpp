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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATETASK_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATETASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/MigrateDetail.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 查询迁移任务列表类型
                */
                class MigrateTask : public AbstractModel
                {
                public:
                    MigrateTask();
                    ~MigrateTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取迁移任务ID
                     * @return MigrateId 迁移任务ID
                     * 
                     */
                    uint64_t GetMigrateId() const;

                    /**
                     * 设置迁移任务ID
                     * @param _migrateId 迁移任务ID
                     * 
                     */
                    void SetMigrateId(const uint64_t& _migrateId);

                    /**
                     * 判断参数 MigrateId 是否已赋值
                     * @return MigrateId 是否已赋值
                     * 
                     */
                    bool MigrateIdHasBeenSet() const;

                    /**
                     * 获取迁移任务名称
                     * @return MigrateName 迁移任务名称
                     * 
                     */
                    std::string GetMigrateName() const;

                    /**
                     * 设置迁移任务名称
                     * @param _migrateName 迁移任务名称
                     * 
                     */
                    void SetMigrateName(const std::string& _migrateName);

                    /**
                     * 判断参数 MigrateName 是否已赋值
                     * @return MigrateName 是否已赋值
                     * 
                     */
                    bool MigrateNameHasBeenSet() const;

                    /**
                     * 获取迁移任务所属的用户ID
                     * @return AppId 迁移任务所属的用户ID
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置迁移任务所属的用户ID
                     * @param _appId 迁移任务所属的用户ID
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
                     * 获取迁移任务所属的地域
                     * @return Region 迁移任务所属的地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置迁移任务所属的地域
                     * @param _region 迁移任务所属的地域
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
                     * 获取迁移源的类型 1:TencentDB for SQLServer 2:云服务器自建SQLServer数据库 4:SQLServer备份还原 5:SQLServer备份还原（COS方式）
                     * @return SourceType 迁移源的类型 1:TencentDB for SQLServer 2:云服务器自建SQLServer数据库 4:SQLServer备份还原 5:SQLServer备份还原（COS方式）
                     * 
                     */
                    int64_t GetSourceType() const;

                    /**
                     * 设置迁移源的类型 1:TencentDB for SQLServer 2:云服务器自建SQLServer数据库 4:SQLServer备份还原 5:SQLServer备份还原（COS方式）
                     * @param _sourceType 迁移源的类型 1:TencentDB for SQLServer 2:云服务器自建SQLServer数据库 4:SQLServer备份还原 5:SQLServer备份还原（COS方式）
                     * 
                     */
                    void SetSourceType(const int64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取迁移任务的创建时间
                     * @return CreateTime 迁移任务的创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置迁移任务的创建时间
                     * @param _createTime 迁移任务的创建时间
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
                     * 获取迁移任务的开始时间
                     * @return StartTime 迁移任务的开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置迁移任务的开始时间
                     * @param _startTime 迁移任务的开始时间
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
                     * 获取迁移任务的结束时间
                     * @return EndTime 迁移任务的结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置迁移任务的结束时间
                     * @param _endTime 迁移任务的结束时间
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
                     * 获取迁移任务的状态（1:初始化,4:迁移中,5.迁移失败,6.迁移成功,7已中止,8已删除,9中止中,10完成中,11中止失败,12完成失败）
                     * @return Status 迁移任务的状态（1:初始化,4:迁移中,5.迁移失败,6.迁移成功,7已中止,8已删除,9中止中,10完成中,11中止失败,12完成失败）
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置迁移任务的状态（1:初始化,4:迁移中,5.迁移失败,6.迁移成功,7已中止,8已删除,9中止中,10完成中,11中止失败,12完成失败）
                     * @param _status 迁移任务的状态（1:初始化,4:迁移中,5.迁移失败,6.迁移成功,7已中止,8已删除,9中止中,10完成中,11中止失败,12完成失败）
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取信息
                     * @return Message 信息
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置信息
                     * @param _message 信息
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
                     * 获取是否迁移任务经过检查（0:未校验,1:校验成功,2:校验失败,3:校验中）
                     * @return CheckFlag 是否迁移任务经过检查（0:未校验,1:校验成功,2:校验失败,3:校验中）
                     * 
                     */
                    uint64_t GetCheckFlag() const;

                    /**
                     * 设置是否迁移任务经过检查（0:未校验,1:校验成功,2:校验失败,3:校验中）
                     * @param _checkFlag 是否迁移任务经过检查（0:未校验,1:校验成功,2:校验失败,3:校验中）
                     * 
                     */
                    void SetCheckFlag(const uint64_t& _checkFlag);

                    /**
                     * 判断参数 CheckFlag 是否已赋值
                     * @return CheckFlag 是否已赋值
                     * 
                     */
                    bool CheckFlagHasBeenSet() const;

                    /**
                     * 获取迁移任务当前进度（单位%）
                     * @return Progress 迁移任务当前进度（单位%）
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置迁移任务当前进度（单位%）
                     * @param _progress 迁移任务当前进度（单位%）
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取迁移任务进度细节
                     * @return MigrateDetail 迁移任务进度细节
                     * 
                     */
                    MigrateDetail GetMigrateDetail() const;

                    /**
                     * 设置迁移任务进度细节
                     * @param _migrateDetail 迁移任务进度细节
                     * 
                     */
                    void SetMigrateDetail(const MigrateDetail& _migrateDetail);

                    /**
                     * 判断参数 MigrateDetail 是否已赋值
                     * @return MigrateDetail 是否已赋值
                     * 
                     */
                    bool MigrateDetailHasBeenSet() const;

                private:

                    /**
                     * 迁移任务ID
                     */
                    uint64_t m_migrateId;
                    bool m_migrateIdHasBeenSet;

                    /**
                     * 迁移任务名称
                     */
                    std::string m_migrateName;
                    bool m_migrateNameHasBeenSet;

                    /**
                     * 迁移任务所属的用户ID
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 迁移任务所属的地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 迁移源的类型 1:TencentDB for SQLServer 2:云服务器自建SQLServer数据库 4:SQLServer备份还原 5:SQLServer备份还原（COS方式）
                     */
                    int64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 迁移任务的创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 迁移任务的开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 迁移任务的结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 迁移任务的状态（1:初始化,4:迁移中,5.迁移失败,6.迁移成功,7已中止,8已删除,9中止中,10完成中,11中止失败,12完成失败）
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 信息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 是否迁移任务经过检查（0:未校验,1:校验成功,2:校验失败,3:校验中）
                     */
                    uint64_t m_checkFlag;
                    bool m_checkFlagHasBeenSet;

                    /**
                     * 迁移任务当前进度（单位%）
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 迁移任务进度细节
                     */
                    MigrateDetail m_migrateDetail;
                    bool m_migrateDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATETASK_H_
