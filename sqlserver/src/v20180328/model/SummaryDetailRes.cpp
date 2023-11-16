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

#include <tencentcloud/sqlserver/v20180328/model/SummaryDetailRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

SummaryDetailRes::SummaryDetailRes() :
    m_regionIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_actualUsedSpaceHasBeenSet(false),
    m_dataBackupSpaceHasBeenSet(false),
    m_dataBackupCountHasBeenSet(false),
    m_logBackupSpaceHasBeenSet(false),
    m_logBackupCountHasBeenSet(false),
    m_autoBackupSpaceHasBeenSet(false),
    m_autoBackupCountHasBeenSet(false),
    m_manualBackupSpaceHasBeenSet(false),
    m_manualBackupCountHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

CoreInternalOutcome SummaryDetailRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SummaryDetailRes.RegionId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetUint64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SummaryDetailRes.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SummaryDetailRes.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SummaryDetailRes.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ActualUsedSpace") && !value["ActualUsedSpace"].IsNull())
    {
        if (!value["ActualUsedSpace"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SummaryDetailRes.ActualUsedSpace` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_actualUsedSpace = value["ActualUsedSpace"].GetUint64();
        m_actualUsedSpaceHasBeenSet = true;
    }

    if (value.HasMember("DataBackupSpace") && !value["DataBackupSpace"].IsNull())
    {
        if (!value["DataBackupSpace"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SummaryDetailRes.DataBackupSpace` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dataBackupSpace = value["DataBackupSpace"].GetUint64();
        m_dataBackupSpaceHasBeenSet = true;
    }

    if (value.HasMember("DataBackupCount") && !value["DataBackupCount"].IsNull())
    {
        if (!value["DataBackupCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SummaryDetailRes.DataBackupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dataBackupCount = value["DataBackupCount"].GetUint64();
        m_dataBackupCountHasBeenSet = true;
    }

    if (value.HasMember("LogBackupSpace") && !value["LogBackupSpace"].IsNull())
    {
        if (!value["LogBackupSpace"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SummaryDetailRes.LogBackupSpace` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_logBackupSpace = value["LogBackupSpace"].GetUint64();
        m_logBackupSpaceHasBeenSet = true;
    }

    if (value.HasMember("LogBackupCount") && !value["LogBackupCount"].IsNull())
    {
        if (!value["LogBackupCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SummaryDetailRes.LogBackupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_logBackupCount = value["LogBackupCount"].GetUint64();
        m_logBackupCountHasBeenSet = true;
    }

    if (value.HasMember("AutoBackupSpace") && !value["AutoBackupSpace"].IsNull())
    {
        if (!value["AutoBackupSpace"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SummaryDetailRes.AutoBackupSpace` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoBackupSpace = value["AutoBackupSpace"].GetUint64();
        m_autoBackupSpaceHasBeenSet = true;
    }

    if (value.HasMember("AutoBackupCount") && !value["AutoBackupCount"].IsNull())
    {
        if (!value["AutoBackupCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SummaryDetailRes.AutoBackupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoBackupCount = value["AutoBackupCount"].GetUint64();
        m_autoBackupCountHasBeenSet = true;
    }

    if (value.HasMember("ManualBackupSpace") && !value["ManualBackupSpace"].IsNull())
    {
        if (!value["ManualBackupSpace"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SummaryDetailRes.ManualBackupSpace` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_manualBackupSpace = value["ManualBackupSpace"].GetUint64();
        m_manualBackupSpaceHasBeenSet = true;
    }

    if (value.HasMember("ManualBackupCount") && !value["ManualBackupCount"].IsNull())
    {
        if (!value["ManualBackupCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SummaryDetailRes.ManualBackupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_manualBackupCount = value["ManualBackupCount"].GetUint64();
        m_manualBackupCountHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SummaryDetailRes.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SummaryDetailRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
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

    if (m_actualUsedSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActualUsedSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_actualUsedSpace, allocator);
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

    if (m_autoBackupSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoBackupSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoBackupSpace, allocator);
    }

    if (m_autoBackupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoBackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoBackupCount, allocator);
    }

    if (m_manualBackupSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManualBackupSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_manualBackupSpace, allocator);
    }

    if (m_manualBackupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManualBackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_manualBackupCount, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

}


uint64_t SummaryDetailRes::GetRegionId() const
{
    return m_regionId;
}

void SummaryDetailRes::SetRegionId(const uint64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool SummaryDetailRes::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

int64_t SummaryDetailRes::GetStatus() const
{
    return m_status;
}

void SummaryDetailRes::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SummaryDetailRes::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SummaryDetailRes::GetInstanceId() const
{
    return m_instanceId;
}

void SummaryDetailRes::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool SummaryDetailRes::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string SummaryDetailRes::GetName() const
{
    return m_name;
}

void SummaryDetailRes::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SummaryDetailRes::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t SummaryDetailRes::GetActualUsedSpace() const
{
    return m_actualUsedSpace;
}

void SummaryDetailRes::SetActualUsedSpace(const uint64_t& _actualUsedSpace)
{
    m_actualUsedSpace = _actualUsedSpace;
    m_actualUsedSpaceHasBeenSet = true;
}

bool SummaryDetailRes::ActualUsedSpaceHasBeenSet() const
{
    return m_actualUsedSpaceHasBeenSet;
}

uint64_t SummaryDetailRes::GetDataBackupSpace() const
{
    return m_dataBackupSpace;
}

void SummaryDetailRes::SetDataBackupSpace(const uint64_t& _dataBackupSpace)
{
    m_dataBackupSpace = _dataBackupSpace;
    m_dataBackupSpaceHasBeenSet = true;
}

bool SummaryDetailRes::DataBackupSpaceHasBeenSet() const
{
    return m_dataBackupSpaceHasBeenSet;
}

uint64_t SummaryDetailRes::GetDataBackupCount() const
{
    return m_dataBackupCount;
}

void SummaryDetailRes::SetDataBackupCount(const uint64_t& _dataBackupCount)
{
    m_dataBackupCount = _dataBackupCount;
    m_dataBackupCountHasBeenSet = true;
}

bool SummaryDetailRes::DataBackupCountHasBeenSet() const
{
    return m_dataBackupCountHasBeenSet;
}

uint64_t SummaryDetailRes::GetLogBackupSpace() const
{
    return m_logBackupSpace;
}

void SummaryDetailRes::SetLogBackupSpace(const uint64_t& _logBackupSpace)
{
    m_logBackupSpace = _logBackupSpace;
    m_logBackupSpaceHasBeenSet = true;
}

bool SummaryDetailRes::LogBackupSpaceHasBeenSet() const
{
    return m_logBackupSpaceHasBeenSet;
}

uint64_t SummaryDetailRes::GetLogBackupCount() const
{
    return m_logBackupCount;
}

void SummaryDetailRes::SetLogBackupCount(const uint64_t& _logBackupCount)
{
    m_logBackupCount = _logBackupCount;
    m_logBackupCountHasBeenSet = true;
}

bool SummaryDetailRes::LogBackupCountHasBeenSet() const
{
    return m_logBackupCountHasBeenSet;
}

uint64_t SummaryDetailRes::GetAutoBackupSpace() const
{
    return m_autoBackupSpace;
}

void SummaryDetailRes::SetAutoBackupSpace(const uint64_t& _autoBackupSpace)
{
    m_autoBackupSpace = _autoBackupSpace;
    m_autoBackupSpaceHasBeenSet = true;
}

bool SummaryDetailRes::AutoBackupSpaceHasBeenSet() const
{
    return m_autoBackupSpaceHasBeenSet;
}

uint64_t SummaryDetailRes::GetAutoBackupCount() const
{
    return m_autoBackupCount;
}

void SummaryDetailRes::SetAutoBackupCount(const uint64_t& _autoBackupCount)
{
    m_autoBackupCount = _autoBackupCount;
    m_autoBackupCountHasBeenSet = true;
}

bool SummaryDetailRes::AutoBackupCountHasBeenSet() const
{
    return m_autoBackupCountHasBeenSet;
}

uint64_t SummaryDetailRes::GetManualBackupSpace() const
{
    return m_manualBackupSpace;
}

void SummaryDetailRes::SetManualBackupSpace(const uint64_t& _manualBackupSpace)
{
    m_manualBackupSpace = _manualBackupSpace;
    m_manualBackupSpaceHasBeenSet = true;
}

bool SummaryDetailRes::ManualBackupSpaceHasBeenSet() const
{
    return m_manualBackupSpaceHasBeenSet;
}

uint64_t SummaryDetailRes::GetManualBackupCount() const
{
    return m_manualBackupCount;
}

void SummaryDetailRes::SetManualBackupCount(const uint64_t& _manualBackupCount)
{
    m_manualBackupCount = _manualBackupCount;
    m_manualBackupCountHasBeenSet = true;
}

bool SummaryDetailRes::ManualBackupCountHasBeenSet() const
{
    return m_manualBackupCountHasBeenSet;
}

string SummaryDetailRes::GetRegion() const
{
    return m_region;
}

void SummaryDetailRes::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool SummaryDetailRes::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

