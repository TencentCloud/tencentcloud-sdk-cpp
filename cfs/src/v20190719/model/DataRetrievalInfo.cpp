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

#include <tencentcloud/cfs/v20190719/model/DataRetrievalInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

DataRetrievalInfo::DataRetrievalInfo() :
    m_dataRetrievalNameHasBeenSet(false),
    m_dataRetrievalIdHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_compoundConditionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_dayOfWeekHasBeenSet(false),
    m_dayOfMonthHasBeenSet(false),
    m_hourHasBeenSet(false),
    m_queryConditionHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome DataRetrievalInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataRetrievalName") && !value["DataRetrievalName"].IsNull())
    {
        if (!value["DataRetrievalName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataRetrievalInfo.DataRetrievalName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataRetrievalName = string(value["DataRetrievalName"].GetString());
        m_dataRetrievalNameHasBeenSet = true;
    }

    if (value.HasMember("DataRetrievalId") && !value["DataRetrievalId"].IsNull())
    {
        if (!value["DataRetrievalId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataRetrievalInfo.DataRetrievalId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataRetrievalId = string(value["DataRetrievalId"].GetString());
        m_dataRetrievalIdHasBeenSet = true;
    }

    if (value.HasMember("FileSystemId") && !value["FileSystemId"].IsNull())
    {
        if (!value["FileSystemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataRetrievalInfo.FileSystemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSystemId = string(value["FileSystemId"].GetString());
        m_fileSystemIdHasBeenSet = true;
    }

    if (value.HasMember("CompoundCondition") && !value["CompoundCondition"].IsNull())
    {
        if (!value["CompoundCondition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataRetrievalInfo.CompoundCondition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compoundCondition = string(value["CompoundCondition"].GetString());
        m_compoundConditionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataRetrievalInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("DayOfWeek") && !value["DayOfWeek"].IsNull())
    {
        if (!value["DayOfWeek"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataRetrievalInfo.DayOfWeek` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dayOfWeek = string(value["DayOfWeek"].GetString());
        m_dayOfWeekHasBeenSet = true;
    }

    if (value.HasMember("DayOfMonth") && !value["DayOfMonth"].IsNull())
    {
        if (!value["DayOfMonth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataRetrievalInfo.DayOfMonth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dayOfMonth = string(value["DayOfMonth"].GetString());
        m_dayOfMonthHasBeenSet = true;
    }

    if (value.HasMember("Hour") && !value["Hour"].IsNull())
    {
        if (!value["Hour"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataRetrievalInfo.Hour` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hour = string(value["Hour"].GetString());
        m_hourHasBeenSet = true;
    }

    if (value.HasMember("QueryCondition") && !value["QueryCondition"].IsNull())
    {
        if (!value["QueryCondition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataRetrievalInfo.QueryCondition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queryCondition = string(value["QueryCondition"].GetString());
        m_queryConditionHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataRetrievalInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataRetrievalInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataRetrievalNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataRetrievalName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataRetrievalName.c_str(), allocator).Move(), allocator);
    }

    if (m_dataRetrievalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataRetrievalId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataRetrievalId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_compoundConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompoundCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compoundCondition.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dayOfWeekHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DayOfWeek";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dayOfWeek.c_str(), allocator).Move(), allocator);
    }

    if (m_dayOfMonthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DayOfMonth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dayOfMonth.c_str(), allocator).Move(), allocator);
    }

    if (m_hourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hour";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hour.c_str(), allocator).Move(), allocator);
    }

    if (m_queryConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queryCondition.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string DataRetrievalInfo::GetDataRetrievalName() const
{
    return m_dataRetrievalName;
}

void DataRetrievalInfo::SetDataRetrievalName(const string& _dataRetrievalName)
{
    m_dataRetrievalName = _dataRetrievalName;
    m_dataRetrievalNameHasBeenSet = true;
}

bool DataRetrievalInfo::DataRetrievalNameHasBeenSet() const
{
    return m_dataRetrievalNameHasBeenSet;
}

string DataRetrievalInfo::GetDataRetrievalId() const
{
    return m_dataRetrievalId;
}

void DataRetrievalInfo::SetDataRetrievalId(const string& _dataRetrievalId)
{
    m_dataRetrievalId = _dataRetrievalId;
    m_dataRetrievalIdHasBeenSet = true;
}

bool DataRetrievalInfo::DataRetrievalIdHasBeenSet() const
{
    return m_dataRetrievalIdHasBeenSet;
}

string DataRetrievalInfo::GetFileSystemId() const
{
    return m_fileSystemId;
}

void DataRetrievalInfo::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool DataRetrievalInfo::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

string DataRetrievalInfo::GetCompoundCondition() const
{
    return m_compoundCondition;
}

void DataRetrievalInfo::SetCompoundCondition(const string& _compoundCondition)
{
    m_compoundCondition = _compoundCondition;
    m_compoundConditionHasBeenSet = true;
}

bool DataRetrievalInfo::CompoundConditionHasBeenSet() const
{
    return m_compoundConditionHasBeenSet;
}

string DataRetrievalInfo::GetCreateTime() const
{
    return m_createTime;
}

void DataRetrievalInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DataRetrievalInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DataRetrievalInfo::GetDayOfWeek() const
{
    return m_dayOfWeek;
}

void DataRetrievalInfo::SetDayOfWeek(const string& _dayOfWeek)
{
    m_dayOfWeek = _dayOfWeek;
    m_dayOfWeekHasBeenSet = true;
}

bool DataRetrievalInfo::DayOfWeekHasBeenSet() const
{
    return m_dayOfWeekHasBeenSet;
}

string DataRetrievalInfo::GetDayOfMonth() const
{
    return m_dayOfMonth;
}

void DataRetrievalInfo::SetDayOfMonth(const string& _dayOfMonth)
{
    m_dayOfMonth = _dayOfMonth;
    m_dayOfMonthHasBeenSet = true;
}

bool DataRetrievalInfo::DayOfMonthHasBeenSet() const
{
    return m_dayOfMonthHasBeenSet;
}

string DataRetrievalInfo::GetHour() const
{
    return m_hour;
}

void DataRetrievalInfo::SetHour(const string& _hour)
{
    m_hour = _hour;
    m_hourHasBeenSet = true;
}

bool DataRetrievalInfo::HourHasBeenSet() const
{
    return m_hourHasBeenSet;
}

string DataRetrievalInfo::GetQueryCondition() const
{
    return m_queryCondition;
}

void DataRetrievalInfo::SetQueryCondition(const string& _queryCondition)
{
    m_queryCondition = _queryCondition;
    m_queryConditionHasBeenSet = true;
}

bool DataRetrievalInfo::QueryConditionHasBeenSet() const
{
    return m_queryConditionHasBeenSet;
}

string DataRetrievalInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void DataRetrievalInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DataRetrievalInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

