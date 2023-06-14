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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEMIGRATIONDETAILRESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEMIGRATIONDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/MigrateSource.h>
#include <tencentcloud/sqlserver/v20180328/model/MigrateTarget.h>
#include <tencentcloud/sqlserver/v20180328/model/MigrateDB.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeMigrationDetail返回参数结构体
                */
                class DescribeMigrationDetailResponse : public AbstractModel
                {
                public:
                    DescribeMigrationDetailResponse();
                    ~DescribeMigrationDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取迁移任务ID
                     * @return MigrateId 迁移任务ID
                     * 
                     */
                    uint64_t GetMigrateId() const;

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
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取迁移任务的状态（1:初始化,4:迁移中,5.迁移失败,6.迁移成功）
                     * @return Status 迁移任务的状态（1:初始化,4:迁移中,5.迁移失败,6.迁移成功）
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取迁移任务当前进度
                     * @return Progress 迁移任务当前进度
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取迁移类型（1:结构迁移 2:数据迁移 3:增量同步）
                     * @return MigrateType 迁移类型（1:结构迁移 2:数据迁移 3:增量同步）
                     * 
                     */
                    int64_t GetMigrateType() const;

                    /**
                     * 判断参数 MigrateType 是否已赋值
                     * @return MigrateType 是否已赋值
                     * 
                     */
                    bool MigrateTypeHasBeenSet() const;

                    /**
                     * 获取迁移源
                     * @return Source 迁移源
                     * 
                     */
                    MigrateSource GetSource() const;

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取迁移目标
                     * @return Target 迁移目标
                     * 
                     */
                    MigrateTarget GetTarget() const;

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取迁移DB对象 ，离线迁移（SourceType=4或SourceType=5）不使用。
                     * @return MigrateDBSet 迁移DB对象 ，离线迁移（SourceType=4或SourceType=5）不使用。
                     * 
                     */
                    std::vector<MigrateDB> GetMigrateDBSet() const;

                    /**
                     * 判断参数 MigrateDBSet 是否已赋值
                     * @return MigrateDBSet 是否已赋值
                     * 
                     */
                    bool MigrateDBSetHasBeenSet() const;

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
                     * 迁移任务的状态（1:初始化,4:迁移中,5.迁移失败,6.迁移成功）
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 迁移任务当前进度
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 迁移类型（1:结构迁移 2:数据迁移 3:增量同步）
                     */
                    int64_t m_migrateType;
                    bool m_migrateTypeHasBeenSet;

                    /**
                     * 迁移源
                     */
                    MigrateSource m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 迁移目标
                     */
                    MigrateTarget m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * 迁移DB对象 ，离线迁移（SourceType=4或SourceType=5）不使用。
                     */
                    std::vector<MigrateDB> m_migrateDBSet;
                    bool m_migrateDBSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEMIGRATIONDETAILRESPONSE_H_
