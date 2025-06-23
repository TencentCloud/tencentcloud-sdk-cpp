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

#include <tencentcloud/ssl/v20191205/model/DeployRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

DeployRecord::DeployRecord() :
    m_totalCountHasBeenSet(false),
    m_successTotalCountHasBeenSet(false),
    m_failedTotalCountHasBeenSet(false),
    m_runningTotalCountHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_recordDetailListHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome DeployRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeployRecord.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("SuccessTotalCount") && !value["SuccessTotalCount"].IsNull())
    {
        if (!value["SuccessTotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeployRecord.SuccessTotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_successTotalCount = value["SuccessTotalCount"].GetInt64();
        m_successTotalCountHasBeenSet = true;
    }

    if (value.HasMember("FailedTotalCount") && !value["FailedTotalCount"].IsNull())
    {
        if (!value["FailedTotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeployRecord.FailedTotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failedTotalCount = value["FailedTotalCount"].GetInt64();
        m_failedTotalCountHasBeenSet = true;
    }

    if (value.HasMember("RunningTotalCount") && !value["RunningTotalCount"].IsNull())
    {
        if (!value["RunningTotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeployRecord.RunningTotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runningTotalCount = value["RunningTotalCount"].GetInt64();
        m_runningTotalCountHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeployRecord.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("RecordDetailList") && !value["RecordDetailList"].IsNull())
    {
        if (!value["RecordDetailList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeployRecord.RecordDetailList` is not array type"));

        const rapidjson::Value &tmpValue = value["RecordDetailList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeployRecordList item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_recordDetailList.push_back(item);
        }
        m_recordDetailListHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeployRecord.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeployRecord.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeployRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_successTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successTotalCount, allocator);
    }

    if (m_failedTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failedTotalCount, allocator);
    }

    if (m_runningTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningTotalCount, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_recordDetailListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordDetailList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_recordDetailList.begin(); itr != m_recordDetailList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t DeployRecord::GetTotalCount() const
{
    return m_totalCount;
}

void DeployRecord::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool DeployRecord::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

int64_t DeployRecord::GetSuccessTotalCount() const
{
    return m_successTotalCount;
}

void DeployRecord::SetSuccessTotalCount(const int64_t& _successTotalCount)
{
    m_successTotalCount = _successTotalCount;
    m_successTotalCountHasBeenSet = true;
}

bool DeployRecord::SuccessTotalCountHasBeenSet() const
{
    return m_successTotalCountHasBeenSet;
}

int64_t DeployRecord::GetFailedTotalCount() const
{
    return m_failedTotalCount;
}

void DeployRecord::SetFailedTotalCount(const int64_t& _failedTotalCount)
{
    m_failedTotalCount = _failedTotalCount;
    m_failedTotalCountHasBeenSet = true;
}

bool DeployRecord::FailedTotalCountHasBeenSet() const
{
    return m_failedTotalCountHasBeenSet;
}

int64_t DeployRecord::GetRunningTotalCount() const
{
    return m_runningTotalCount;
}

void DeployRecord::SetRunningTotalCount(const int64_t& _runningTotalCount)
{
    m_runningTotalCount = _runningTotalCount;
    m_runningTotalCountHasBeenSet = true;
}

bool DeployRecord::RunningTotalCountHasBeenSet() const
{
    return m_runningTotalCountHasBeenSet;
}

int64_t DeployRecord::GetType() const
{
    return m_type;
}

void DeployRecord::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DeployRecord::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<DeployRecordList> DeployRecord::GetRecordDetailList() const
{
    return m_recordDetailList;
}

void DeployRecord::SetRecordDetailList(const vector<DeployRecordList>& _recordDetailList)
{
    m_recordDetailList = _recordDetailList;
    m_recordDetailListHasBeenSet = true;
}

bool DeployRecord::RecordDetailListHasBeenSet() const
{
    return m_recordDetailListHasBeenSet;
}

int64_t DeployRecord::GetStatus() const
{
    return m_status;
}

void DeployRecord::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DeployRecord::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DeployRecord::GetCreateTime() const
{
    return m_createTime;
}

void DeployRecord::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DeployRecord::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

