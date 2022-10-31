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
    m_conclusionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_totalTablesHasBeenSet(false),
    m_checkedTablesHasBeenSet(false),
    m_differentTablesHasBeenSet(false),
    m_skippedTablesHasBeenSet(false),
    m_differentRowsHasBeenSet(false)
{
}

CoreInternalOutcome CompareAbstractInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


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

    if (value.HasMember("DifferentRows") && !value["DifferentRows"].IsNull())
    {
        if (!value["DifferentRows"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CompareAbstractInfo.DifferentRows` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_differentRows = value["DifferentRows"].GetUint64();
        m_differentRowsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CompareAbstractInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_differentRowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DifferentRows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_differentRows, allocator);
    }

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

