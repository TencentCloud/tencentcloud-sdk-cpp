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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_ALERTRECORD_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_ALERTRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/AlertRecordStatus.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * 告警历史记录项
                */
                class AlertRecord : public AbstractModel
                {
                public:
                    AlertRecord();
                    ~AlertRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警历史记录项 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlertRecordId 告警历史记录项 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlertRecordId() const;

                    /**
                     * 设置告警历史记录项 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alertRecordId 告警历史记录项 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlertRecordId(const std::string& _alertRecordId);

                    /**
                     * 判断参数 AlertRecordId 是否已赋值
                     * @return AlertRecordId 是否已赋值
                     * 
                     */
                    bool AlertRecordIdHasBeenSet() const;

                    /**
                     * 获取项目 ID
                     * @return ProjectId 项目 ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目 ID
                     * @param _projectId 项目 ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取场景 ID
                     * @return ScenarioId 场景 ID
                     * 
                     */
                    std::string GetScenarioId() const;

                    /**
                     * 设置场景 ID
                     * @param _scenarioId 场景 ID
                     * 
                     */
                    void SetScenarioId(const std::string& _scenarioId);

                    /**
                     * 判断参数 ScenarioId 是否已赋值
                     * @return ScenarioId 是否已赋值
                     * 
                     */
                    bool ScenarioIdHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    AlertRecordStatus GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
                     * 
                     */
                    void SetStatus(const AlertRecordStatus& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedAt 创建时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间
                     * @param _createdAt 创建时间
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return UpdatedAt 修改时间
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置修改时间
                     * @param _updatedAt 修改时间
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取任务 ID
                     * @return JobId 任务 ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置任务 ID
                     * @param _jobId 任务 ID
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取App ID
                     * @return AppId App ID
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置App ID
                     * @param _appId App ID
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取主账号
                     * @return Uin 主账号
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置主账号
                     * @param _uin 主账号
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
                     * 获取子账号
                     * @return SubAccountUin 子账号
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置子账号
                     * @param _subAccountUin 子账号
                     * 
                     */
                    void SetSubAccountUin(const std::string& _subAccountUin);

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                    /**
                     * 获取场景名称
                     * @return ScenarioName 场景名称
                     * 
                     */
                    std::string GetScenarioName() const;

                    /**
                     * 设置场景名称
                     * @param _scenarioName 场景名称
                     * 
                     */
                    void SetScenarioName(const std::string& _scenarioName);

                    /**
                     * 判断参数 ScenarioName 是否已赋值
                     * @return ScenarioName 是否已赋值
                     * 
                     */
                    bool ScenarioNameHasBeenSet() const;

                    /**
                     * 获取告警对象
                     * @return Target 告警对象
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置告警对象
                     * @param _target 告警对象
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取告警规则 ID
                     * @return JobSLAId 告警规则 ID
                     * 
                     */
                    std::string GetJobSLAId() const;

                    /**
                     * 设置告警规则 ID
                     * @param _jobSLAId 告警规则 ID
                     * 
                     */
                    void SetJobSLAId(const std::string& _jobSLAId);

                    /**
                     * 判断参数 JobSLAId 是否已赋值
                     * @return JobSLAId 是否已赋值
                     * 
                     */
                    bool JobSLAIdHasBeenSet() const;

                    /**
                     * 获取告警规则描述
                     * @return JobSLADescription 告警规则描述
                     * 
                     */
                    std::string GetJobSLADescription() const;

                    /**
                     * 设置告警规则描述
                     * @param _jobSLADescription 告警规则描述
                     * 
                     */
                    void SetJobSLADescription(const std::string& _jobSLADescription);

                    /**
                     * 判断参数 JobSLADescription 是否已赋值
                     * @return JobSLADescription 是否已赋值
                     * 
                     */
                    bool JobSLADescriptionHasBeenSet() const;

                private:

                    /**
                     * 告警历史记录项 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alertRecordId;
                    bool m_alertRecordIdHasBeenSet;

                    /**
                     * 项目 ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 场景 ID
                     */
                    std::string m_scenarioId;
                    bool m_scenarioIdHasBeenSet;

                    /**
                     * 状态
                     */
                    AlertRecordStatus m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * 任务 ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * App ID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 主账号
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 子账号
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * 场景名称
                     */
                    std::string m_scenarioName;
                    bool m_scenarioNameHasBeenSet;

                    /**
                     * 告警对象
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * 告警规则 ID
                     */
                    std::string m_jobSLAId;
                    bool m_jobSLAIdHasBeenSet;

                    /**
                     * 告警规则描述
                     */
                    std::string m_jobSLADescription;
                    bool m_jobSLADescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_ALERTRECORD_H_
