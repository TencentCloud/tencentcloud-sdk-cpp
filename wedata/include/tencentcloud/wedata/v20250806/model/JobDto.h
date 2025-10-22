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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_JOBDTO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_JOBDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/JobExecutionDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 数据探索任务JOB
                */
                class JobDto : public AbstractModel
                {
                public:
                    JobDto();
                    ~JobDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据探索任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobId 数据探索任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置数据探索任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobId 数据探索任务ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取数据探索任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobName 数据探索任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置数据探索任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobName 数据探索任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobType 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJobType() const;

                    /**
                     * 设置任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobType 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobType(const std::string& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     * 
                     */
                    bool JobTypeHasBeenSet() const;

                    /**
                     * 获取脚本ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScriptId 脚本ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScriptId() const;

                    /**
                     * 设置脚本ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scriptId 脚本ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScriptId(const std::string& _scriptId);

                    /**
                     * 判断参数 ScriptId 是否已赋值
                     * @return ScriptId 是否已赋值
                     * 
                     */
                    bool ScriptIdHasBeenSet() const;

                    /**
                     * 获取子任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobExecutionList 子任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<JobExecutionDto> GetJobExecutionList() const;

                    /**
                     * 设置子任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobExecutionList 子任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobExecutionList(const std::vector<JobExecutionDto>& _jobExecutionList);

                    /**
                     * 判断参数 JobExecutionList 是否已赋值
                     * @return JobExecutionList 是否已赋值
                     * 
                     */
                    bool JobExecutionListHasBeenSet() const;

                    /**
                     * 获取脚本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScriptContent 脚本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScriptContent() const;

                    /**
                     * 设置脚本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scriptContent 脚本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScriptContent(const std::string& _scriptContent);

                    /**
                     * 判断参数 ScriptContent 是否已赋值
                     * @return ScriptContent 是否已赋值
                     * 
                     */
                    bool ScriptContentHasBeenSet() const;

                    /**
                     * 获取任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 任务状态
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取任务创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 任务创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 任务创建时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 结束时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取云主账号UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUin 云主账号UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置云主账号UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUin 云主账号UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取账号UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserUin 账号UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserUin() const;

                    /**
                     * 设置账号UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userUin 账号UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserUin(const std::string& _userUin);

                    /**
                     * 判断参数 UserUin 是否已赋值
                     * @return UserUin 是否已赋值
                     * 
                     */
                    bool UserUinHasBeenSet() const;

                    /**
                     * 获取耗时
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeCost 耗时
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimeCost() const;

                    /**
                     * 设置耗时
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeCost 耗时
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeCost(const int64_t& _timeCost);

                    /**
                     * 判断参数 TimeCost 是否已赋值
                     * @return TimeCost 是否已赋值
                     * 
                     */
                    bool TimeCostHasBeenSet() const;

                    /**
                     * 获取是否脚本内容被截断
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScriptContentTruncate 是否脚本内容被截断
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetScriptContentTruncate() const;

                    /**
                     * 设置是否脚本内容被截断
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scriptContentTruncate 是否脚本内容被截断
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScriptContentTruncate(const bool& _scriptContentTruncate);

                    /**
                     * 判断参数 ScriptContentTruncate 是否已赋值
                     * @return ScriptContentTruncate 是否已赋值
                     * 
                     */
                    bool ScriptContentTruncateHasBeenSet() const;

                private:

                    /**
                     * 数据探索任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 数据探索任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * 脚本ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scriptId;
                    bool m_scriptIdHasBeenSet;

                    /**
                     * 子任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<JobExecutionDto> m_jobExecutionList;
                    bool m_jobExecutionListHasBeenSet;

                    /**
                     * 脚本内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scriptContent;
                    bool m_scriptContentHasBeenSet;

                    /**
                     * 任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 云主账号UIN
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 账号UIN
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userUin;
                    bool m_userUinHasBeenSet;

                    /**
                     * 耗时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timeCost;
                    bool m_timeCostHasBeenSet;

                    /**
                     * 是否脚本内容被截断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_scriptContentTruncate;
                    bool m_scriptContentTruncateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_JOBDTO_H_
