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

#include <tencentcloud/sqlserver/v20180328/model/CrossSummaryDetailRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

CrossSummaryDetailRes::CrossSummaryDetailRes() :
    m_statusHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_crossBackupEnabledHasBeenSet(false),
    m_crossRegionsHasBeenSet(false),
    m_lastBackupStartTimeHasBeenSet(false),
    m_crossBackupSaveDaysHasBeenSet(false),
    m_dataBackupSpaceHasBeenSet(false),
    m_dataBackupCountHasBeenSet(false),
    m_logBackupSpaceHasBeenSet(false),
    m_logBackupCountHasBeenSet(false),
    m_actualUsedSpaceHasBeenSet(false),
    m_actualUsedCountHasBeenSet(false)
{
}

CoreInternalOutcome CrossSummaryDetailRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CrossSummaryDetailRes.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossSummaryDetailRes.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossSummaryDetailRes.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossSummaryDetailRes.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("CrossBackupEnabled") && !value["CrossBackupEnabled"].IsNull())
    {
        if (!value["CrossBackupEnabled"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossSummaryDetailRes.CrossBackupEnabled` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_crossBackupEnabled = string(value["CrossBackupEnabled"].GetString());
        m_crossBackupEnabledHasBeenSet = true;
    }

    if (value.HasMember("CrossRegions") && !value["CrossRegions"].IsNull())
    {
        if (!value["CrossRegions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CrossSummaryDetailRes.CrossRegions` is not array type"));

        const rapidjson::Value &tmpValue = value["CrossRegions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_crossRegions.push_back((*itr).GetString());
        }
        m_crossRegionsHasBeenSet = true;
    }

    if (value.HasMember("LastBackupStartTime") && !value["LastBackupStartTime"].IsNull())
    {
        if (!value["LastBackupStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossSummaryDetailRes.LastBackupStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastBackupStartTime = string(value["LastBackupStartTime"].GetString());
        m_lastBackupStartTimeHasBeenSet = true;
    }

    if (value.HasMember("CrossBackupSaveDays") && !value["CrossBackupSaveDays"].IsNull())
    {
        if (!value["CrossBackupSaveDays"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CrossSummaryDetailRes.CrossBackupSaveDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_crossBackupSaveDays = value["CrossBackupSaveDays"].GetInt64();
        m_crossBackupSaveDaysHasBeenSet = true;
    }

    if (value.HasMember("DataBackupSpace") && !value["DataBackupSpace"].IsNull())
    {
        if (!value["DataBackupSpace"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CrossSummaryDetailRes.DataBackupSpace` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dataBackupSpace = value["DataBackupSpace"].GetUint64();
        m_dataBackupSpaceHasBeenSet = true;
    }

    if (value.HasMember("DataBackupCount") && !value["DataBackupCount"].IsNull())
    {
        if (!value["DataBackupCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CrossSummaryDetailRes.DataBackupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dataBackupCount = value["DataBackupCount"].GetUint64();
        m_dataBackupCountHasBeenSet = true;
    }

    if (value.HasMember("LogBackupSpace") && !value["LogBackupSpace"].IsNull())
    {
        if (!value["LogBackupSpace"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CrossSummaryDetailRes.LogBackupSpace` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_logBackupSpace = value["LogBackupSpace"].GetUint64();
        m_logBackupSpaceHasBeenSet = true;
    }

    if (value.HasMember("LogBackupCount") && !value["LogBackupCount"].IsNull())
    {
        if (!value["LogBackupCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CrossSummaryDetailRes.LogBackupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_logBackupCount = value["LogBackupCount"].GetUint64();
        m_logBackupCountHasBeenSet = true;
    }

    if (value.HasMember("ActualUsedSpace") && !value["ActualUsedSpace"].IsNull())
    {
        if (!value["ActualUsedSpace"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CrossSummaryDetailRes.ActualUsedSpace` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_actualUsedSpace = value["ActualUsedSpace"].GetUint64();
        m_actualUsedSpaceHasBeenSet = true;
    }

    if (value.HasMember("ActualUsedCount") && !value["ActualUsedCount"].IsNull())
    {
        if (!value["ActualUsedCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CrossSummaryDetailRes.ActualUsedCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_actualUsedCount = value["ActualUsedCount"].GetUint64();
        m_actualUsedCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CrossSummaryDetailRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_crossBackupEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossBackupEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_crossBackupEnabled.c_str(), allocator).Move(), allocator);
    }

    if (m_crossRegionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossRegions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_crossRegions.begin(); itr != m_crossRegions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_lastBackupStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastBackupStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastBackupStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_crossBackupSaveDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossBackupSaveDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_crossBackupSaveDays, allocator);
    }

    if (m_dataBackupSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataBackupSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataBackupSpace, allocator);
    }

    if (m_dataBackupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataBackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataBackupCount, allocator);
    }

    if (m_logBackupSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogBackupSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logBackupSpace, allocator);
    }

    if (m_logBackupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogBackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logBackupCount, allocator);
    }

    if (m_actualUsedSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActualUsedSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_actualUsedSpace, allocator);
    }

    if (m_actualUsedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActualUsedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_actualUsedCount, allocator);
    }

}


int64_t CrossSummaryDetailRes::GetStatus() const
{
    return m_status;
}

void CrossSummaryDetailRes::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CrossSummaryDetailRes::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CrossSummaryDetailRes::GetRegion() const
{
    return m_region;
}

void CrossSummaryDetailRes::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool CrossSummaryDetailRes::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string CrossSummaryDetailRes::GetInstanceId() const
{
    return m_instanceId;
}

void CrossSummaryDetailRes::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CrossSummaryDetailRes::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CrossSummaryDetailRes::GetName() const
{
    return m_name;
}

void CrossSummaryDetailRes::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CrossSummaryDetailRes::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CrossSummaryDetailRes::GetCrossBackupEnabled() const
{
    return m_crossBackupEnabled;
}

void CrossSummaryDetailRes::SetCrossBackupEnabled(const string& _crossBackupEnabled)
{
    m_crossBackupEnabled = _crossBackupEnabled;
    m_crossBackupEnabledHasBeenSet = true;
}

bool CrossSummaryDetailRes::CrossBackupEnabledHasBeenSet() const
{
    return m_crossBackupEnabledHasBeenSet;
}

vector<string> CrossSummaryDetailRes::GetCrossRegions() const
{
    return m_crossRegions;
}

void CrossSummaryDetailRes::SetCrossRegions(const vector<string>& _crossRegions)
{
    m_crossRegions = _crossRegions;
    m_crossRegionsHasBeenSet = true;
}

bool CrossSummaryDetailRes::CrossRegionsHasBeenSet() const
{
    return m_crossRegionsHasBeenSet;
}

string CrossSummaryDetailRes::GetLastBackupStartTime() const
{
    return m_lastBackupStartTime;
}

void CrossSummaryDetailRes::SetLastBackupStartTime(const string& _lastBackupStartTime)
{
    m_lastBackupStartTime = _lastBackupStartTime;
    m_lastBackupStartTimeHasBeenSet = true;
}

bool CrossSummaryDetailRes::LastBackupStartTimeHasBeenSet() const
{
    return m_lastBackupStartTimeHasBeenSet;
}

int64_t CrossSummaryDetailRes::GetCrossBackupSaveDays() const
{
    return m_crossBackupSaveDays;
}

void CrossSummaryDetailRes::SetCrossBackupSaveDays(const int64_t& _crossBackupSaveDays)
{
    m_crossBackupSaveDays = _crossBackupSaveDays;
    m_crossBackupSaveDaysHasBeenSet = true;
}

bool CrossSummaryDetailRes::CrossBackupSaveDaysHasBeenSet() const
{
    return m_crossBackupSaveDaysHasBeenSet;
}

uint64_t CrossSummaryDetailRes::GetDataBackupSpace() const
{
    return m_dataBackupSpace;
}

void CrossSummaryDetailRes::SetDataBackupSpace(const uint64_t& _dataBackupSpace)
{
    m_dataBackupSpace = _dataBackupSpace;
    m_dataBackupSpaceHasBeenSet = true;
}

bool CrossSummaryDetailRes::DataBackupSpaceHasBeenSet() const
{
    return m_dataBackupSpaceHasBeenSet;
}

uint64_t CrossSummaryDetailRes::GetDataBackupCount() const
{
    return m_dataBackupCount;
}

void CrossSummaryDetailRes::SetDataBackupCount(const uint64_t& _dataBackupCount)
{
    m_dataBackupCount = _dataBackupCount;
    m_dataBackupCountHasBeenSet = true;
}

bool CrossSummaryDetailRes::DataBackupCountHasBeenSet() const
{
    return m_dataBackupCountHasBeenSet;
}

uint64_t CrossSummaryDetailRes::GetLogBackupSpace() const
{
    return m_logBackupSpace;
}

void CrossSummaryDetailRes::SetLogBackupSpace(const uint64_t& _logBackupSpace)
{
    m_logBackupSpace = _logBackupSpace;
    m_logBackupSpaceHasBeenSet = true;
}

bool CrossSummaryDetailRes::LogBackupSpaceHasBeenSet() const
{
    return m_logBackupSpaceHasBeenSet;
}

uint64_t CrossSummaryDetailRes::GetLogBackupCount() const
{
    return m_logBackupCount;
}

void CrossSummaryDetailRes::SetLogBackupCount(const uint64_t& _logBackupCount)
{
    m_logBackupCount = _logBackupCount;
    m_logBackupCountHasBeenSet = true;
}

bool CrossSummaryDetailRes::LogBackupCountHasBeenSet() const
{
    return m_logBackupCountHasBeenSet;
}

uint64_t CrossSummaryDetailRes::GetActualUsedSpace() const
{
    return m_actualUsedSpace;
}

void CrossSummaryDetailRes::SetActualUsedSpace(const uint64_t& _actualUsedSpace)
{
    m_actualUsedSpace = _actualUsedSpace;
    m_actualUsedSpaceHasBeenSet = true;
}

bool CrossSummaryDetailRes::ActualUsedSpaceHasBeenSet() const
{
    return m_actualUsedSpaceHasBeenSet;
}

uint64_t CrossSummaryDetailRes::GetActualUsedCount() const
{
    return m_actualUsedCount;
}

void CrossSummaryDetailRes::SetActualUsedCount(const uint64_t& _actualUsedCount)
{
    m_actualUsedCount = _actualUsedCount;
    m_actualUsedCountHasBeenSet = true;
}

bool CrossSummaryDetailRes::ActualUsedCountHasBeenSet() const
{
    return m_actualUsedCountHasBeenSet;
}

