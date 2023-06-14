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

#ifndef TENCENTCLOUD_MSP_V20180319_MODEL_TASK_H_
#define TENCENTCLOUD_MSP_V20180319_MODEL_TASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/msp/v20180319/model/SrcInfo.h>
#include <tencentcloud/msp/v20180319/model/TimeObj.h>
#include <tencentcloud/msp/v20180319/model/DstInfo.h>


namespace TencentCloud
{
    namespace Msp
    {
        namespace V20180319
        {
            namespace Model
            {
                /**
                * 迁移任务类别
                */
                class Task : public AbstractModel
                {
                public:
                    Task();
                    ~Task() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务Id
                     * @return TaskId 任务Id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务Id
                     * @param _taskId 任务Id
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务名称
                     * @return TaskName 任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
                     * @param _taskName 任务名称
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取迁移类型
                     * @return MigrationType 迁移类型
                     * 
                     */
                    std::string GetMigrationType() const;

                    /**
                     * 设置迁移类型
                     * @param _migrationType 迁移类型
                     * 
                     */
                    void SetMigrationType(const std::string& _migrationType);

                    /**
                     * 判断参数 MigrationType 是否已赋值
                     * @return MigrationType 是否已赋值
                     * 
                     */
                    bool MigrationTypeHasBeenSet() const;

                    /**
                     * 获取迁移状态
                     * @return Status 迁移状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置迁移状态
                     * @param _status 迁移状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param _projectId 项目Id
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取项目名称
                     * @return ProjectName 项目名称
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名称
                     * @param _projectName 项目名称
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取迁移源信息
                     * @return SrcInfo 迁移源信息
                     * 
                     */
                    SrcInfo GetSrcInfo() const;

                    /**
                     * 设置迁移源信息
                     * @param _srcInfo 迁移源信息
                     * 
                     */
                    void SetSrcInfo(const SrcInfo& _srcInfo);

                    /**
                     * 判断参数 SrcInfo 是否已赋值
                     * @return SrcInfo 是否已赋值
                     * 
                     */
                    bool SrcInfoHasBeenSet() const;

                    /**
                     * 获取迁移时间信息
                     * @return MigrationTimeLine 迁移时间信息
                     * 
                     */
                    TimeObj GetMigrationTimeLine() const;

                    /**
                     * 设置迁移时间信息
                     * @param _migrationTimeLine 迁移时间信息
                     * 
                     */
                    void SetMigrationTimeLine(const TimeObj& _migrationTimeLine);

                    /**
                     * 判断参数 MigrationTimeLine 是否已赋值
                     * @return MigrationTimeLine 是否已赋值
                     * 
                     */
                    bool MigrationTimeLineHasBeenSet() const;

                    /**
                     * 获取状态更新时间
                     * @return Updated 状态更新时间
                     * 
                     */
                    std::string GetUpdated() const;

                    /**
                     * 设置状态更新时间
                     * @param _updated 状态更新时间
                     * 
                     */
                    void SetUpdated(const std::string& _updated);

                    /**
                     * 判断参数 Updated 是否已赋值
                     * @return Updated 是否已赋值
                     * 
                     */
                    bool UpdatedHasBeenSet() const;

                    /**
                     * 获取迁移目的信息
                     * @return DstInfo 迁移目的信息
                     * 
                     */
                    DstInfo GetDstInfo() const;

                    /**
                     * 设置迁移目的信息
                     * @param _dstInfo 迁移目的信息
                     * 
                     */
                    void SetDstInfo(const DstInfo& _dstInfo);

                    /**
                     * 判断参数 DstInfo 是否已赋值
                     * @return DstInfo 是否已赋值
                     * 
                     */
                    bool DstInfoHasBeenSet() const;

                private:

                    /**
                     * 任务Id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 迁移类型
                     */
                    std::string m_migrationType;
                    bool m_migrationTypeHasBeenSet;

                    /**
                     * 迁移状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 项目Id
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 项目名称
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 迁移源信息
                     */
                    SrcInfo m_srcInfo;
                    bool m_srcInfoHasBeenSet;

                    /**
                     * 迁移时间信息
                     */
                    TimeObj m_migrationTimeLine;
                    bool m_migrationTimeLineHasBeenSet;

                    /**
                     * 状态更新时间
                     */
                    std::string m_updated;
                    bool m_updatedHasBeenSet;

                    /**
                     * 迁移目的信息
                     */
                    DstInfo m_dstInfo;
                    bool m_dstInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MSP_V20180319_MODEL_TASK_H_
