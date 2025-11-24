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

#include <tencentcloud/dts/v20211206/model/IncCompareAbstractInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

IncCompareAbstractInfo::IncCompareAbstractInfo() :
    m_startPositionHasBeenSet(false),
    m_currentPositionHasBeenSet(false),
    m_checkedRecordHasBeenSet(false),
    m_diffRecordHasBeenSet(false),
    m_diffTableHasBeenSet(false)
{
}

CoreInternalOutcome IncCompareAbstractInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartPosition") && !value["StartPosition"].IsNull())
    {
        if (!value["StartPosition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IncCompareAbstractInfo.StartPosition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startPosition = string(value["StartPosition"].GetString());
        m_startPositionHasBeenSet = true;
    }

    if (value.HasMember("CurrentPosition") && !value["CurrentPosition"].IsNull())
    {
        if (!value["CurrentPosition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IncCompareAbstractInfo.CurrentPosition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentPosition = string(value["CurrentPosition"].GetString());
        m_currentPositionHasBeenSet = true;
    }

    if (value.HasMember("CheckedRecord") && !value["CheckedRecord"].IsNull())
    {
        if (!value["CheckedRecord"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IncCompareAbstractInfo.CheckedRecord` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_checkedRecord = value["CheckedRecord"].GetUint64();
        m_checkedRecordHasBeenSet = true;
    }

    if (value.HasMember("DiffRecord") && !value["DiffRecord"].IsNull())
    {
        if (!value["DiffRecord"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IncCompareAbstractInfo.DiffRecord` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_diffRecord = value["DiffRecord"].GetUint64();
        m_diffRecordHasBeenSet = true;
    }

    if (value.HasMember("DiffTable") && !value["DiffTable"].IsNull())
    {
        if (!value["DiffTable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IncCompareAbstractInfo.DiffTable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_diffTable = value["DiffTable"].GetUint64();
        m_diffTableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IncCompareAbstractInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startPositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartPosition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startPosition.c_str(), allocator).Move(), allocator);
    }

    if (m_currentPositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentPosition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentPosition.c_str(), allocator).Move(), allocator);
    }

    if (m_checkedRecordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckedRecord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkedRecord, allocator);
    }

    if (m_diffRecordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiffRecord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diffRecord, allocator);
    }

    if (m_diffTableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiffTable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diffTable, allocator);
    }

}


string IncCompareAbstractInfo::GetStartPosition() const
{
    return m_startPosition;
}

void IncCompareAbstractInfo::SetStartPosition(const string& _startPosition)
{
    m_startPosition = _startPosition;
    m_startPositionHasBeenSet = true;
}

bool IncCompareAbstractInfo::StartPositionHasBeenSet() const
{
    return m_startPositionHasBeenSet;
}

string IncCompareAbstractInfo::GetCurrentPosition() const
{
    return m_currentPosition;
}

void IncCompareAbstractInfo::SetCurrentPosition(const string& _currentPosition)
{
    m_currentPosition = _currentPosition;
    m_currentPositionHasBeenSet = true;
}

bool IncCompareAbstractInfo::CurrentPositionHasBeenSet() const
{
    return m_currentPositionHasBeenSet;
}

uint64_t IncCompareAbstractInfo::GetCheckedRecord() const
{
    return m_checkedRecord;
}

void IncCompareAbstractInfo::SetCheckedRecord(const uint64_t& _checkedRecord)
{
    m_checkedRecord = _checkedRecord;
    m_checkedRecordHasBeenSet = true;
}

bool IncCompareAbstractInfo::CheckedRecordHasBeenSet() const
{
    return m_checkedRecordHasBeenSet;
}

uint64_t IncCompareAbstractInfo::GetDiffRecord() const
{
    return m_diffRecord;
}

void IncCompareAbstractInfo::SetDiffRecord(const uint64_t& _diffRecord)
{
    m_diffRecord = _diffRecord;
    m_diffRecordHasBeenSet = true;
}

bool IncCompareAbstractInfo::DiffRecordHasBeenSet() const
{
    return m_diffRecordHasBeenSet;
}

uint64_t IncCompareAbstractInfo::GetDiffTable() const
{
    return m_diffTable;
}

void IncCompareAbstractInfo::SetDiffTable(const uint64_t& _diffTable)
{
    m_diffTable = _diffTable;
    m_diffTableHasBeenSet = true;
}

bool IncCompareAbstractInfo::DiffTableHasBeenSet() const
{
    return m_diffTableHasBeenSet;
}

