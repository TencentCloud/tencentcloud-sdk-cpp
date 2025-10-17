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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TESTRUNNINGRECORD_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TESTRUNNINGRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TestRunningSubRecord.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 编排空间试运行记录
                */
                class TestRunningRecord : public AbstractModel
                {
                public:
                    TestRunningRecord();
                    ~TestRunningRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 开始时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取试运行记录id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordId 试运行记录id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRecordId() const;

                    /**
                     * 设置试运行记录id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recordId 试运行记录id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecordId(const int64_t& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取开发侧提交的jobid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobId 开发侧提交的jobid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetJobId() const;

                    /**
                     * 设置开发侧提交的jobid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobId 开发侧提交的jobid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobId(const int64_t& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取执行平台jobid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionJobId 执行平台jobid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionJobId() const;

                    /**
                     * 设置执行平台jobid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionJobId 执行平台jobid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutionJobId(const std::string& _executionJobId);

                    /**
                     * 判断参数 ExecutionJobId 是否已赋值
                     * @return ExecutionJobId 是否已赋值
                     * 
                     */
                    bool ExecutionJobIdHasBeenSet() const;

                    /**
                     * 获取试运行记录名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordName 试运行记录名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRecordName() const;

                    /**
                     * 设置试运行记录名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recordName 试运行记录名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecordName(const std::string& _recordName);

                    /**
                     * 判断参数 RecordName 是否已赋值
                     * @return RecordName 是否已赋值
                     * 
                     */
                    bool RecordNameHasBeenSet() const;

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
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态
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
                     * 获取用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserUin 用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserUin() const;

                    /**
                     * 设置用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userUin 用户uin
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
                     * 获取主账户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUin 主账户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置主账户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUin 主账户uin
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
                     * 获取子记录信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubRecordList 子记录信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TestRunningSubRecord> GetSubRecordList() const;

                    /**
                     * 设置子记录信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subRecordList 子记录信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubRecordList(const std::vector<TestRunningSubRecord>& _subRecordList);

                    /**
                     * 判断参数 SubRecordList 是否已赋值
                     * @return SubRecordList 是否已赋值
                     * 
                     */
                    bool SubRecordListHasBeenSet() const;

                    /**
                     * 获取结果或日志地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 结果或日志地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置结果或日志地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 结果或日志地域
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取结果或日志桶名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BucketName 结果或日志桶名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置结果或日志桶名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bucketName 结果或日志桶名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     * 
                     */
                    bool BucketNameHasBeenSet() const;

                    /**
                     * 获取错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorMessage 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorMessage 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                private:

                    /**
                     * 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 试运行记录id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 开发侧提交的jobid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 执行平台jobid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionJobId;
                    bool m_executionJobIdHasBeenSet;

                    /**
                     * 试运行记录名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recordName;
                    bool m_recordNameHasBeenSet;

                    /**
                     * 脚本内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scriptContent;
                    bool m_scriptContentHasBeenSet;

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 耗时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timeCost;
                    bool m_timeCostHasBeenSet;

                    /**
                     * 用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userUin;
                    bool m_userUinHasBeenSet;

                    /**
                     * 主账户uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 子记录信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TestRunningSubRecord> m_subRecordList;
                    bool m_subRecordListHasBeenSet;

                    /**
                     * 结果或日志地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 结果或日志桶名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TESTRUNNINGRECORD_H_
