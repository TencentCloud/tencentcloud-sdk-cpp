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

#include <tencentcloud/emr/v20190103/model/SparkQuery.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

SparkQuery::SparkQuery() :
    m_statementHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_idHasBeenSet(false),
    m_scanPartitionNumHasBeenSet(false),
    m_scanRowNumHasBeenSet(false),
    m_scanFileNumHasBeenSet(false),
    m_scanTotalDataHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_outputRowNumHasBeenSet(false),
    m_outputFileNumHasBeenSet(false),
    m_outputPartitionNumHasBeenSet(false),
    m_outputTotalDataHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome SparkQuery::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Statement") && !value["Statement"].IsNull())
    {
        if (!value["Statement"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkQuery.Statement` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statement = string(value["Statement"].GetString());
        m_statementHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkQuery.Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkQuery.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkQuery.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ScanPartitionNum") && !value["ScanPartitionNum"].IsNull())
    {
        if (!value["ScanPartitionNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkQuery.ScanPartitionNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scanPartitionNum = value["ScanPartitionNum"].GetInt64();
        m_scanPartitionNumHasBeenSet = true;
    }

    if (value.HasMember("ScanRowNum") && !value["ScanRowNum"].IsNull())
    {
        if (!value["ScanRowNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkQuery.ScanRowNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scanRowNum = value["ScanRowNum"].GetInt64();
        m_scanRowNumHasBeenSet = true;
    }

    if (value.HasMember("ScanFileNum") && !value["ScanFileNum"].IsNull())
    {
        if (!value["ScanFileNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkQuery.ScanFileNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scanFileNum = value["ScanFileNum"].GetInt64();
        m_scanFileNumHasBeenSet = true;
    }

    if (value.HasMember("ScanTotalData") && !value["ScanTotalData"].IsNull())
    {
        if (!value["ScanTotalData"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkQuery.ScanTotalData` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scanTotalData = value["ScanTotalData"].GetInt64();
        m_scanTotalDataHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SparkQuery.ApplicationId` is not array type"));

        const rapidjson::Value &tmpValue = value["ApplicationId"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_applicationId.push_back((*itr).GetString());
        }
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("OutputRowNum") && !value["OutputRowNum"].IsNull())
    {
        if (!value["OutputRowNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkQuery.OutputRowNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outputRowNum = value["OutputRowNum"].GetInt64();
        m_outputRowNumHasBeenSet = true;
    }

    if (value.HasMember("OutputFileNum") && !value["OutputFileNum"].IsNull())
    {
        if (!value["OutputFileNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkQuery.OutputFileNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outputFileNum = value["OutputFileNum"].GetInt64();
        m_outputFileNumHasBeenSet = true;
    }

    if (value.HasMember("OutputPartitionNum") && !value["OutputPartitionNum"].IsNull())
    {
        if (!value["OutputPartitionNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkQuery.OutputPartitionNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outputPartitionNum = value["OutputPartitionNum"].GetInt64();
        m_outputPartitionNumHasBeenSet = true;
    }

    if (value.HasMember("OutputTotalData") && !value["OutputTotalData"].IsNull())
    {
        if (!value["OutputTotalData"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkQuery.OutputTotalData` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outputTotalData = value["OutputTotalData"].GetInt64();
        m_outputTotalDataHasBeenSet = true;
    }

    if (value.HasMember("BeginTime") && !value["BeginTime"].IsNull())
    {
        if (!value["BeginTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkQuery.BeginTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = value["BeginTime"].GetInt64();
        m_beginTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkQuery.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SparkQuery::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Statement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statement.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_scanPartitionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanPartitionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanPartitionNum, allocator);
    }

    if (m_scanRowNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanRowNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanRowNum, allocator);
    }

    if (m_scanFileNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanFileNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanFileNum, allocator);
    }

    if (m_scanTotalDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanTotalData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanTotalData, allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_applicationId.begin(); itr != m_applicationId.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_outputRowNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputRowNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputRowNum, allocator);
    }

    if (m_outputFileNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputFileNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputFileNum, allocator);
    }

    if (m_outputPartitionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputPartitionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputPartitionNum, allocator);
    }

    if (m_outputTotalDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputTotalData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputTotalData, allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_beginTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

}


string SparkQuery::GetStatement() const
{
    return m_statement;
}

void SparkQuery::SetStatement(const string& _statement)
{
    m_statement = _statement;
    m_statementHasBeenSet = true;
}

bool SparkQuery::StatementHasBeenSet() const
{
    return m_statementHasBeenSet;
}

int64_t SparkQuery::GetDuration() const
{
    return m_duration;
}

void SparkQuery::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool SparkQuery::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string SparkQuery::GetStatus() const
{
    return m_status;
}

void SparkQuery::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SparkQuery::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SparkQuery::GetId() const
{
    return m_id;
}

void SparkQuery::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool SparkQuery::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t SparkQuery::GetScanPartitionNum() const
{
    return m_scanPartitionNum;
}

void SparkQuery::SetScanPartitionNum(const int64_t& _scanPartitionNum)
{
    m_scanPartitionNum = _scanPartitionNum;
    m_scanPartitionNumHasBeenSet = true;
}

bool SparkQuery::ScanPartitionNumHasBeenSet() const
{
    return m_scanPartitionNumHasBeenSet;
}

int64_t SparkQuery::GetScanRowNum() const
{
    return m_scanRowNum;
}

void SparkQuery::SetScanRowNum(const int64_t& _scanRowNum)
{
    m_scanRowNum = _scanRowNum;
    m_scanRowNumHasBeenSet = true;
}

bool SparkQuery::ScanRowNumHasBeenSet() const
{
    return m_scanRowNumHasBeenSet;
}

int64_t SparkQuery::GetScanFileNum() const
{
    return m_scanFileNum;
}

void SparkQuery::SetScanFileNum(const int64_t& _scanFileNum)
{
    m_scanFileNum = _scanFileNum;
    m_scanFileNumHasBeenSet = true;
}

bool SparkQuery::ScanFileNumHasBeenSet() const
{
    return m_scanFileNumHasBeenSet;
}

int64_t SparkQuery::GetScanTotalData() const
{
    return m_scanTotalData;
}

void SparkQuery::SetScanTotalData(const int64_t& _scanTotalData)
{
    m_scanTotalData = _scanTotalData;
    m_scanTotalDataHasBeenSet = true;
}

bool SparkQuery::ScanTotalDataHasBeenSet() const
{
    return m_scanTotalDataHasBeenSet;
}

vector<string> SparkQuery::GetApplicationId() const
{
    return m_applicationId;
}

void SparkQuery::SetApplicationId(const vector<string>& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool SparkQuery::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

int64_t SparkQuery::GetOutputRowNum() const
{
    return m_outputRowNum;
}

void SparkQuery::SetOutputRowNum(const int64_t& _outputRowNum)
{
    m_outputRowNum = _outputRowNum;
    m_outputRowNumHasBeenSet = true;
}

bool SparkQuery::OutputRowNumHasBeenSet() const
{
    return m_outputRowNumHasBeenSet;
}

int64_t SparkQuery::GetOutputFileNum() const
{
    return m_outputFileNum;
}

void SparkQuery::SetOutputFileNum(const int64_t& _outputFileNum)
{
    m_outputFileNum = _outputFileNum;
    m_outputFileNumHasBeenSet = true;
}

bool SparkQuery::OutputFileNumHasBeenSet() const
{
    return m_outputFileNumHasBeenSet;
}

int64_t SparkQuery::GetOutputPartitionNum() const
{
    return m_outputPartitionNum;
}

void SparkQuery::SetOutputPartitionNum(const int64_t& _outputPartitionNum)
{
    m_outputPartitionNum = _outputPartitionNum;
    m_outputPartitionNumHasBeenSet = true;
}

bool SparkQuery::OutputPartitionNumHasBeenSet() const
{
    return m_outputPartitionNumHasBeenSet;
}

int64_t SparkQuery::GetOutputTotalData() const
{
    return m_outputTotalData;
}

void SparkQuery::SetOutputTotalData(const int64_t& _outputTotalData)
{
    m_outputTotalData = _outputTotalData;
    m_outputTotalDataHasBeenSet = true;
}

bool SparkQuery::OutputTotalDataHasBeenSet() const
{
    return m_outputTotalDataHasBeenSet;
}

int64_t SparkQuery::GetBeginTime() const
{
    return m_beginTime;
}

void SparkQuery::SetBeginTime(const int64_t& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool SparkQuery::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

int64_t SparkQuery::GetEndTime() const
{
    return m_endTime;
}

void SparkQuery::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool SparkQuery::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

