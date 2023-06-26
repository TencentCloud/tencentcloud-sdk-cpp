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

#include <tencentcloud/trp/v20210515/model/TraceData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

TraceData::TraceData() :
    m_traceIdHasBeenSet(false),
    m_corpIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_rankHasBeenSet(false),
    m_phaseHasBeenSet(false),
    m_phaseNameHasBeenSet(false),
    m_traceTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_chainStatusHasBeenSet(false),
    m_chainTimeHasBeenSet(false),
    m_chainDataHasBeenSet(false),
    m_phaseDataHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_traceItemsHasBeenSet(false)
{
}

CoreInternalOutcome TraceData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TraceId") && !value["TraceId"].IsNull())
    {
        if (!value["TraceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TraceData.TraceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_traceId = string(value["TraceId"].GetString());
        m_traceIdHasBeenSet = true;
    }

    if (value.HasMember("CorpId") && !value["CorpId"].IsNull())
    {
        if (!value["CorpId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TraceData.CorpId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_corpId = value["CorpId"].GetUint64();
        m_corpIdHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TraceData.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TraceData.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Rank") && !value["Rank"].IsNull())
    {
        if (!value["Rank"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TraceData.Rank` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rank = value["Rank"].GetUint64();
        m_rankHasBeenSet = true;
    }

    if (value.HasMember("Phase") && !value["Phase"].IsNull())
    {
        if (!value["Phase"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TraceData.Phase` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_phase = value["Phase"].GetUint64();
        m_phaseHasBeenSet = true;
    }

    if (value.HasMember("PhaseName") && !value["PhaseName"].IsNull())
    {
        if (!value["PhaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TraceData.PhaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phaseName = string(value["PhaseName"].GetString());
        m_phaseNameHasBeenSet = true;
    }

    if (value.HasMember("TraceTime") && !value["TraceTime"].IsNull())
    {
        if (!value["TraceTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TraceData.TraceTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_traceTime = string(value["TraceTime"].GetString());
        m_traceTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TraceData.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ChainStatus") && !value["ChainStatus"].IsNull())
    {
        if (!value["ChainStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TraceData.ChainStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_chainStatus = value["ChainStatus"].GetUint64();
        m_chainStatusHasBeenSet = true;
    }

    if (value.HasMember("ChainTime") && !value["ChainTime"].IsNull())
    {
        if (!value["ChainTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TraceData.ChainTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chainTime = string(value["ChainTime"].GetString());
        m_chainTimeHasBeenSet = true;
    }

    if (value.HasMember("ChainData") && !value["ChainData"].IsNull())
    {
        if (!value["ChainData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TraceData.ChainData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_chainData.Deserialize(value["ChainData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_chainDataHasBeenSet = true;
    }

    if (value.HasMember("PhaseData") && !value["PhaseData"].IsNull())
    {
        if (!value["PhaseData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TraceData.PhaseData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_phaseData.Deserialize(value["PhaseData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_phaseDataHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TraceData.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TraceItems") && !value["TraceItems"].IsNull())
    {
        if (!value["TraceItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TraceData.TraceItems` is not array type"));

        const rapidjson::Value &tmpValue = value["TraceItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TraceItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_traceItems.push_back(item);
        }
        m_traceItemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TraceData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_traceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_traceId.c_str(), allocator).Move(), allocator);
    }

    if (m_corpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_corpId, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_rankHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rank";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rank, allocator);
    }

    if (m_phaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phase";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_phase, allocator);
    }

    if (m_phaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_traceTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_traceTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_chainStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChainStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chainStatus, allocator);
    }

    if (m_chainTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChainTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chainTime.c_str(), allocator).Move(), allocator);
    }

    if (m_chainDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChainData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_chainData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_phaseDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhaseData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_phaseData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_traceItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_traceItems.begin(); itr != m_traceItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string TraceData::GetTraceId() const
{
    return m_traceId;
}

void TraceData::SetTraceId(const string& _traceId)
{
    m_traceId = _traceId;
    m_traceIdHasBeenSet = true;
}

bool TraceData::TraceIdHasBeenSet() const
{
    return m_traceIdHasBeenSet;
}

uint64_t TraceData::GetCorpId() const
{
    return m_corpId;
}

void TraceData::SetCorpId(const uint64_t& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool TraceData::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

uint64_t TraceData::GetType() const
{
    return m_type;
}

void TraceData::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TraceData::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string TraceData::GetCode() const
{
    return m_code;
}

void TraceData::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool TraceData::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

uint64_t TraceData::GetRank() const
{
    return m_rank;
}

void TraceData::SetRank(const uint64_t& _rank)
{
    m_rank = _rank;
    m_rankHasBeenSet = true;
}

bool TraceData::RankHasBeenSet() const
{
    return m_rankHasBeenSet;
}

uint64_t TraceData::GetPhase() const
{
    return m_phase;
}

void TraceData::SetPhase(const uint64_t& _phase)
{
    m_phase = _phase;
    m_phaseHasBeenSet = true;
}

bool TraceData::PhaseHasBeenSet() const
{
    return m_phaseHasBeenSet;
}

string TraceData::GetPhaseName() const
{
    return m_phaseName;
}

void TraceData::SetPhaseName(const string& _phaseName)
{
    m_phaseName = _phaseName;
    m_phaseNameHasBeenSet = true;
}

bool TraceData::PhaseNameHasBeenSet() const
{
    return m_phaseNameHasBeenSet;
}

string TraceData::GetTraceTime() const
{
    return m_traceTime;
}

void TraceData::SetTraceTime(const string& _traceTime)
{
    m_traceTime = _traceTime;
    m_traceTimeHasBeenSet = true;
}

bool TraceData::TraceTimeHasBeenSet() const
{
    return m_traceTimeHasBeenSet;
}

string TraceData::GetCreateTime() const
{
    return m_createTime;
}

void TraceData::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TraceData::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t TraceData::GetChainStatus() const
{
    return m_chainStatus;
}

void TraceData::SetChainStatus(const uint64_t& _chainStatus)
{
    m_chainStatus = _chainStatus;
    m_chainStatusHasBeenSet = true;
}

bool TraceData::ChainStatusHasBeenSet() const
{
    return m_chainStatusHasBeenSet;
}

string TraceData::GetChainTime() const
{
    return m_chainTime;
}

void TraceData::SetChainTime(const string& _chainTime)
{
    m_chainTime = _chainTime;
    m_chainTimeHasBeenSet = true;
}

bool TraceData::ChainTimeHasBeenSet() const
{
    return m_chainTimeHasBeenSet;
}

ChainData TraceData::GetChainData() const
{
    return m_chainData;
}

void TraceData::SetChainData(const ChainData& _chainData)
{
    m_chainData = _chainData;
    m_chainDataHasBeenSet = true;
}

bool TraceData::ChainDataHasBeenSet() const
{
    return m_chainDataHasBeenSet;
}

PhaseData TraceData::GetPhaseData() const
{
    return m_phaseData;
}

void TraceData::SetPhaseData(const PhaseData& _phaseData)
{
    m_phaseData = _phaseData;
    m_phaseDataHasBeenSet = true;
}

bool TraceData::PhaseDataHasBeenSet() const
{
    return m_phaseDataHasBeenSet;
}

int64_t TraceData::GetStatus() const
{
    return m_status;
}

void TraceData::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TraceData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<TraceItem> TraceData::GetTraceItems() const
{
    return m_traceItems;
}

void TraceData::SetTraceItems(const vector<TraceItem>& _traceItems)
{
    m_traceItems = _traceItems;
    m_traceItemsHasBeenSet = true;
}

bool TraceData::TraceItemsHasBeenSet() const
{
    return m_traceItemsHasBeenSet;
}

