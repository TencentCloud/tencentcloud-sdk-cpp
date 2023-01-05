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

#include <tencentcloud/dts/v20211206/model/CompareAbstractInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

CompareAbstractInfo::CompareAbstractInfo() :
    m_optionsHasBeenSet(false),
    m_objectsHasBeenSet(false),
    m_conclusionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_totalTablesHasBeenSet(false),
    m_checkedTablesHasBeenSet(false),
    m_differentTablesHasBeenSet(false),
    m_skippedTablesHasBeenSet(false),
    m_nearlyTableCountHasBeenSet(false),
    m_differentRowsHasBeenSet(false),
    m_srcSampleRowsHasBeenSet(false),
    m_dstSampleRowsHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_finishedAtHasBeenSet(false)
{
}

CoreInternalOutcome CompareAbstractInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Options") && !value["Options"].IsNull())
    {
        if (!value["Options"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CompareAbstractInfo.Options` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_options.Deserialize(value["Options"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_optionsHasBeenSet = true;
    }

    if (value.HasMember("Objects") && !value["Objects"].IsNull())
    {
        if (!value["Objects"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CompareAbstractInfo.Objects` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_objects.Deserialize(value["Objects"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_objectsHasBeenSet = true;
    }

    if (value.HasMember("Conclusion") && !value["Conclusion"].IsNull())
    {
        if (!value["Conclusion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareAbstractInfo.Conclusion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_conclusion = string(value["Conclusion"].GetString());
        m_conclusionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareAbstractInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TotalTables") && !value["TotalTables"].IsNull())
    {
        if (!value["TotalTables"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CompareAbstractInfo.TotalTables` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTables = value["TotalTables"].GetUint64();
        m_totalTablesHasBeenSet = true;
    }

    if (value.HasMember("CheckedTables") && !value["CheckedTables"].IsNull())
    {
        if (!value["CheckedTables"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CompareAbstractInfo.CheckedTables` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_checkedTables = value["CheckedTables"].GetUint64();
        m_checkedTablesHasBeenSet = true;
    }

    if (value.HasMember("DifferentTables") && !value["DifferentTables"].IsNull())
    {
        if (!value["DifferentTables"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CompareAbstractInfo.DifferentTables` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_differentTables = value["DifferentTables"].GetUint64();
        m_differentTablesHasBeenSet = true;
    }

    if (value.HasMember("SkippedTables") && !value["SkippedTables"].IsNull())
    {
        if (!value["SkippedTables"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CompareAbstractInfo.SkippedTables` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_skippedTables = value["SkippedTables"].GetUint64();
        m_skippedTablesHasBeenSet = true;
    }

    if (value.HasMember("NearlyTableCount") && !value["NearlyTableCount"].IsNull())
    {
        if (!value["NearlyTableCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CompareAbstractInfo.NearlyTableCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nearlyTableCount = value["NearlyTableCount"].GetUint64();
        m_nearlyTableCountHasBeenSet = true;
    }

    if (value.HasMember("DifferentRows") && !value["DifferentRows"].IsNull())
    {
        if (!value["DifferentRows"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CompareAbstractInfo.DifferentRows` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_differentRows = value["DifferentRows"].GetUint64();
        m_differentRowsHasBeenSet = true;
    }

    if (value.HasMember("SrcSampleRows") && !value["SrcSampleRows"].IsNull())
    {
        if (!value["SrcSampleRows"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CompareAbstractInfo.SrcSampleRows` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_srcSampleRows = value["SrcSampleRows"].GetUint64();
        m_srcSampleRowsHasBeenSet = true;
    }

    if (value.HasMember("DstSampleRows") && !value["DstSampleRows"].IsNull())
    {
        if (!value["DstSampleRows"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CompareAbstractInfo.DstSampleRows` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dstSampleRows = value["DstSampleRows"].GetUint64();
        m_dstSampleRowsHasBeenSet = true;
    }

    if (value.HasMember("StartedAt") && !value["StartedAt"].IsNull())
    {
        if (!value["StartedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareAbstractInfo.StartedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startedAt = string(value["StartedAt"].GetString());
        m_startedAtHasBeenSet = true;
    }

    if (value.HasMember("FinishedAt") && !value["FinishedAt"].IsNull())
    {
        if (!value["FinishedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareAbstractInfo.FinishedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishedAt = string(value["FinishedAt"].GetString());
        m_finishedAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CompareAbstractInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_optionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Options";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_options.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_objectsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Objects";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_objects.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_conclusionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Conclusion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_conclusion.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_totalTablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTables";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTables, allocator);
    }

    if (m_checkedTablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckedTables";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkedTables, allocator);
    }

    if (m_differentTablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DifferentTables";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_differentTables, allocator);
    }

    if (m_skippedTablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkippedTables";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_skippedTables, allocator);
    }

    if (m_nearlyTableCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NearlyTableCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nearlyTableCount, allocator);
    }

    if (m_differentRowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DifferentRows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_differentRows, allocator);
    }

    if (m_srcSampleRowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcSampleRows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_srcSampleRows, allocator);
    }

    if (m_dstSampleRowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstSampleRows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dstSampleRows, allocator);
    }

    if (m_startedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_finishedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishedAt.c_str(), allocator).Move(), allocator);
    }

}


CompareOptions CompareAbstractInfo::GetOptions() const
{
    return m_options;
}

void CompareAbstractInfo::SetOptions(const CompareOptions& _options)
{
    m_options = _options;
    m_optionsHasBeenSet = true;
}

bool CompareAbstractInfo::OptionsHasBeenSet() const
{
    return m_optionsHasBeenSet;
}

CompareObject CompareAbstractInfo::GetObjects() const
{
    return m_objects;
}

void CompareAbstractInfo::SetObjects(const CompareObject& _objects)
{
    m_objects = _objects;
    m_objectsHasBeenSet = true;
}

bool CompareAbstractInfo::ObjectsHasBeenSet() const
{
    return m_objectsHasBeenSet;
}

string CompareAbstractInfo::GetConclusion() const
{
    return m_conclusion;
}

void CompareAbstractInfo::SetConclusion(const string& _conclusion)
{
    m_conclusion = _conclusion;
    m_conclusionHasBeenSet = true;
}

bool CompareAbstractInfo::ConclusionHasBeenSet() const
{
    return m_conclusionHasBeenSet;
}

string CompareAbstractInfo::GetStatus() const
{
    return m_status;
}

void CompareAbstractInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CompareAbstractInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t CompareAbstractInfo::GetTotalTables() const
{
    return m_totalTables;
}

void CompareAbstractInfo::SetTotalTables(const uint64_t& _totalTables)
{
    m_totalTables = _totalTables;
    m_totalTablesHasBeenSet = true;
}

bool CompareAbstractInfo::TotalTablesHasBeenSet() const
{
    return m_totalTablesHasBeenSet;
}

uint64_t CompareAbstractInfo::GetCheckedTables() const
{
    return m_checkedTables;
}

void CompareAbstractInfo::SetCheckedTables(const uint64_t& _checkedTables)
{
    m_checkedTables = _checkedTables;
    m_checkedTablesHasBeenSet = true;
}

bool CompareAbstractInfo::CheckedTablesHasBeenSet() const
{
    return m_checkedTablesHasBeenSet;
}

uint64_t CompareAbstractInfo::GetDifferentTables() const
{
    return m_differentTables;
}

void CompareAbstractInfo::SetDifferentTables(const uint64_t& _differentTables)
{
    m_differentTables = _differentTables;
    m_differentTablesHasBeenSet = true;
}

bool CompareAbstractInfo::DifferentTablesHasBeenSet() const
{
    return m_differentTablesHasBeenSet;
}

uint64_t CompareAbstractInfo::GetSkippedTables() const
{
    return m_skippedTables;
}

void CompareAbstractInfo::SetSkippedTables(const uint64_t& _skippedTables)
{
    m_skippedTables = _skippedTables;
    m_skippedTablesHasBeenSet = true;
}

bool CompareAbstractInfo::SkippedTablesHasBeenSet() const
{
    return m_skippedTablesHasBeenSet;
}

uint64_t CompareAbstractInfo::GetNearlyTableCount() const
{
    return m_nearlyTableCount;
}

void CompareAbstractInfo::SetNearlyTableCount(const uint64_t& _nearlyTableCount)
{
    m_nearlyTableCount = _nearlyTableCount;
    m_nearlyTableCountHasBeenSet = true;
}

bool CompareAbstractInfo::NearlyTableCountHasBeenSet() const
{
    return m_nearlyTableCountHasBeenSet;
}

uint64_t CompareAbstractInfo::GetDifferentRows() const
{
    return m_differentRows;
}

void CompareAbstractInfo::SetDifferentRows(const uint64_t& _differentRows)
{
    m_differentRows = _differentRows;
    m_differentRowsHasBeenSet = true;
}

bool CompareAbstractInfo::DifferentRowsHasBeenSet() const
{
    return m_differentRowsHasBeenSet;
}

uint64_t CompareAbstractInfo::GetSrcSampleRows() const
{
    return m_srcSampleRows;
}

void CompareAbstractInfo::SetSrcSampleRows(const uint64_t& _srcSampleRows)
{
    m_srcSampleRows = _srcSampleRows;
    m_srcSampleRowsHasBeenSet = true;
}

bool CompareAbstractInfo::SrcSampleRowsHasBeenSet() const
{
    return m_srcSampleRowsHasBeenSet;
}

uint64_t CompareAbstractInfo::GetDstSampleRows() const
{
    return m_dstSampleRows;
}

void CompareAbstractInfo::SetDstSampleRows(const uint64_t& _dstSampleRows)
{
    m_dstSampleRows = _dstSampleRows;
    m_dstSampleRowsHasBeenSet = true;
}

bool CompareAbstractInfo::DstSampleRowsHasBeenSet() const
{
    return m_dstSampleRowsHasBeenSet;
}

string CompareAbstractInfo::GetStartedAt() const
{
    return m_startedAt;
}

void CompareAbstractInfo::SetStartedAt(const string& _startedAt)
{
    m_startedAt = _startedAt;
    m_startedAtHasBeenSet = true;
}

bool CompareAbstractInfo::StartedAtHasBeenSet() const
{
    return m_startedAtHasBeenSet;
}

string CompareAbstractInfo::GetFinishedAt() const
{
    return m_finishedAt;
}

void CompareAbstractInfo::SetFinishedAt(const string& _finishedAt)
{
    m_finishedAt = _finishedAt;
    m_finishedAtHasBeenSet = true;
}

bool CompareAbstractInfo::FinishedAtHasBeenSet() const
{
    return m_finishedAtHasBeenSet;
}

