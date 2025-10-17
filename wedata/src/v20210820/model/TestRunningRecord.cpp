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

#include <tencentcloud/wedata/v20210820/model/TestRunningRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TestRunningRecord::TestRunningRecord() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_executionJobIdHasBeenSet(false),
    m_recordNameHasBeenSet(false),
    m_scriptContentHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_timeCostHasBeenSet(false),
    m_userUinHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_subRecordListHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

CoreInternalOutcome TestRunningRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestRunningRecord.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestRunningRecord.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestRunningRecord.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("RecordId") && !value["RecordId"].IsNull())
    {
        if (!value["RecordId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TestRunningRecord.RecordId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recordId = value["RecordId"].GetInt64();
        m_recordIdHasBeenSet = true;
    }

    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TestRunningRecord.JobId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = value["JobId"].GetInt64();
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("ExecutionJobId") && !value["ExecutionJobId"].IsNull())
    {
        if (!value["ExecutionJobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestRunningRecord.ExecutionJobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionJobId = string(value["ExecutionJobId"].GetString());
        m_executionJobIdHasBeenSet = true;
    }

    if (value.HasMember("RecordName") && !value["RecordName"].IsNull())
    {
        if (!value["RecordName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestRunningRecord.RecordName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordName = string(value["RecordName"].GetString());
        m_recordNameHasBeenSet = true;
    }

    if (value.HasMember("ScriptContent") && !value["ScriptContent"].IsNull())
    {
        if (!value["ScriptContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestRunningRecord.ScriptContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scriptContent = string(value["ScriptContent"].GetString());
        m_scriptContentHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestRunningRecord.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TimeCost") && !value["TimeCost"].IsNull())
    {
        if (!value["TimeCost"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TestRunningRecord.TimeCost` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeCost = value["TimeCost"].GetInt64();
        m_timeCostHasBeenSet = true;
    }

    if (value.HasMember("UserUin") && !value["UserUin"].IsNull())
    {
        if (!value["UserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestRunningRecord.UserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userUin = string(value["UserUin"].GetString());
        m_userUinHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestRunningRecord.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("SubRecordList") && !value["SubRecordList"].IsNull())
    {
        if (!value["SubRecordList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TestRunningRecord.SubRecordList` is not array type"));

        const rapidjson::Value &tmpValue = value["SubRecordList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TestRunningSubRecord item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subRecordList.push_back(item);
        }
        m_subRecordListHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestRunningRecord.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("BucketName") && !value["BucketName"].IsNull())
    {
        if (!value["BucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestRunningRecord.BucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketName = string(value["BucketName"].GetString());
        m_bucketNameHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestRunningRecord.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TestRunningRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordId, allocator);
    }

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobId, allocator);
    }

    if (m_executionJobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionJobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionJobId.c_str(), allocator).Move(), allocator);
    }

    if (m_recordNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordName.c_str(), allocator).Move(), allocator);
    }

    if (m_scriptContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scriptContent.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_timeCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeCost, allocator);
    }

    if (m_userUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userUin.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_subRecordListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubRecordList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subRecordList.begin(); itr != m_subRecordList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

}


string TestRunningRecord::GetStartTime() const
{
    return m_startTime;
}

void TestRunningRecord::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool TestRunningRecord::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string TestRunningRecord::GetEndTime() const
{
    return m_endTime;
}

void TestRunningRecord::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool TestRunningRecord::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string TestRunningRecord::GetUpdateTime() const
{
    return m_updateTime;
}

void TestRunningRecord::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TestRunningRecord::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t TestRunningRecord::GetRecordId() const
{
    return m_recordId;
}

void TestRunningRecord::SetRecordId(const int64_t& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool TestRunningRecord::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

int64_t TestRunningRecord::GetJobId() const
{
    return m_jobId;
}

void TestRunningRecord::SetJobId(const int64_t& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool TestRunningRecord::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string TestRunningRecord::GetExecutionJobId() const
{
    return m_executionJobId;
}

void TestRunningRecord::SetExecutionJobId(const string& _executionJobId)
{
    m_executionJobId = _executionJobId;
    m_executionJobIdHasBeenSet = true;
}

bool TestRunningRecord::ExecutionJobIdHasBeenSet() const
{
    return m_executionJobIdHasBeenSet;
}

string TestRunningRecord::GetRecordName() const
{
    return m_recordName;
}

void TestRunningRecord::SetRecordName(const string& _recordName)
{
    m_recordName = _recordName;
    m_recordNameHasBeenSet = true;
}

bool TestRunningRecord::RecordNameHasBeenSet() const
{
    return m_recordNameHasBeenSet;
}

string TestRunningRecord::GetScriptContent() const
{
    return m_scriptContent;
}

void TestRunningRecord::SetScriptContent(const string& _scriptContent)
{
    m_scriptContent = _scriptContent;
    m_scriptContentHasBeenSet = true;
}

bool TestRunningRecord::ScriptContentHasBeenSet() const
{
    return m_scriptContentHasBeenSet;
}

string TestRunningRecord::GetStatus() const
{
    return m_status;
}

void TestRunningRecord::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TestRunningRecord::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t TestRunningRecord::GetTimeCost() const
{
    return m_timeCost;
}

void TestRunningRecord::SetTimeCost(const int64_t& _timeCost)
{
    m_timeCost = _timeCost;
    m_timeCostHasBeenSet = true;
}

bool TestRunningRecord::TimeCostHasBeenSet() const
{
    return m_timeCostHasBeenSet;
}

string TestRunningRecord::GetUserUin() const
{
    return m_userUin;
}

void TestRunningRecord::SetUserUin(const string& _userUin)
{
    m_userUin = _userUin;
    m_userUinHasBeenSet = true;
}

bool TestRunningRecord::UserUinHasBeenSet() const
{
    return m_userUinHasBeenSet;
}

string TestRunningRecord::GetOwnerUin() const
{
    return m_ownerUin;
}

void TestRunningRecord::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool TestRunningRecord::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

vector<TestRunningSubRecord> TestRunningRecord::GetSubRecordList() const
{
    return m_subRecordList;
}

void TestRunningRecord::SetSubRecordList(const vector<TestRunningSubRecord>& _subRecordList)
{
    m_subRecordList = _subRecordList;
    m_subRecordListHasBeenSet = true;
}

bool TestRunningRecord::SubRecordListHasBeenSet() const
{
    return m_subRecordListHasBeenSet;
}

string TestRunningRecord::GetRegion() const
{
    return m_region;
}

void TestRunningRecord::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool TestRunningRecord::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string TestRunningRecord::GetBucketName() const
{
    return m_bucketName;
}

void TestRunningRecord::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool TestRunningRecord::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

string TestRunningRecord::GetErrorMessage() const
{
    return m_errorMessage;
}

void TestRunningRecord::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool TestRunningRecord::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

