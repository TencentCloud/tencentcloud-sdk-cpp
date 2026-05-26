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
查询执行日志 可调用DownloadLogByLine接口
                */
                class TestRunningRecord : public AbstractModel
                {
                public:
                    TestRunningRecord();
                    ~TestRunningRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime <p>开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime <p>开始时间</p>
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
                     * 获取<p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime <p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime <p>结束时间</p>
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
                     * 获取<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime <p>更新时间</p>
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
                     * 获取<p>试运行记录id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordId <p>试运行记录id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRecordId() const;

                    /**
                     * 设置<p>试运行记录id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recordId <p>试运行记录id</p>
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
                     * 获取<p>开发侧提交的jobid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobId <p>开发侧提交的jobid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetJobId() const;

                    /**
                     * 设置<p>开发侧提交的jobid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobId <p>开发侧提交的jobid</p>
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
                     * 获取<p>执行平台jobid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionJobId <p>执行平台jobid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionJobId() const;

                    /**
                     * 设置<p>执行平台jobid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionJobId <p>执行平台jobid</p>
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
                     * 获取<p>试运行记录名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordName <p>试运行记录名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRecordName() const;

                    /**
                     * 设置<p>试运行记录名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recordName <p>试运行记录名称</p>
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
                     * 获取<p>脚本内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScriptContent <p>脚本内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScriptContent() const;

                    /**
                     * 设置<p>脚本内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scriptContent <p>脚本内容</p>
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
                     * 获取<p>状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>状态</p>
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
                     * 获取<p>耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeCost <p>耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimeCost() const;

                    /**
                     * 设置<p>耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeCost <p>耗时</p>
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
                     * 获取<p>用户uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserUin <p>用户uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserUin() const;

                    /**
                     * 设置<p>用户uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userUin <p>用户uin</p>
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
                     * 获取<p>主账户uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUin <p>主账户uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>主账户uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUin <p>主账户uin</p>
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
                     * 获取<p>子记录信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubRecordList <p>子记录信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TestRunningSubRecord> GetSubRecordList() const;

                    /**
                     * 设置<p>子记录信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subRecordList <p>子记录信息</p>
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
                     * 获取<p>结果或日志地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region <p>结果或日志地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>结果或日志地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region <p>结果或日志地域</p>
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
                     * 获取<p>结果或日志桶名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BucketName <p>结果或日志桶名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置<p>结果或日志桶名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bucketName <p>结果或日志桶名</p>
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
                     * 获取<p>错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorMessage <p>错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置<p>错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorMessage <p>错误信息</p>
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

                    /**
                     * 获取<p>脚本内容是否被截断</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScriptContentTruncated <p>脚本内容是否被截断</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetScriptContentTruncated() const;

                    /**
                     * 设置<p>脚本内容是否被截断</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scriptContentTruncated <p>脚本内容是否被截断</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScriptContentTruncated(const bool& _scriptContentTruncated);

                    /**
                     * 判断参数 ScriptContentTruncated 是否已赋值
                     * @return ScriptContentTruncated 是否已赋值
                     * 
                     */
                    bool ScriptContentTruncatedHasBeenSet() const;

                private:

                    /**
                     * <p>开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>试运行记录id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * <p>开发侧提交的jobid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>执行平台jobid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionJobId;
                    bool m_executionJobIdHasBeenSet;

                    /**
                     * <p>试运行记录名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recordName;
                    bool m_recordNameHasBeenSet;

                    /**
                     * <p>脚本内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scriptContent;
                    bool m_scriptContentHasBeenSet;

                    /**
                     * <p>状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timeCost;
                    bool m_timeCostHasBeenSet;

                    /**
                     * <p>用户uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userUin;
                    bool m_userUinHasBeenSet;

                    /**
                     * <p>主账户uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>子记录信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TestRunningSubRecord> m_subRecordList;
                    bool m_subRecordListHasBeenSet;

                    /**
                     * <p>结果或日志地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>结果或日志桶名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * <p>错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * <p>脚本内容是否被截断</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_scriptContentTruncated;
                    bool m_scriptContentTruncatedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TESTRUNNINGRECORD_H_
