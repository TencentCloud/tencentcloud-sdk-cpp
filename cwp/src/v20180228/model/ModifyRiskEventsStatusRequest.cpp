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

#include <tencentcloud/cwp/v20180228/model/ModifyRiskEventsStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ModifyRiskEventsStatusRequest::ModifyRiskEventsStatusRequest() :
    m_operateHasBeenSet(false),
    m_riskTypeHasBeenSet(false),
    m_idsHasBeenSet(false),
    m_updateAllHasBeenSet(false),
    m_excludeIdHasBeenSet(false),
    m_killProcessHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_doCleanHasBeenSet(false)
{
}

string ModifyRiskEventsStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_operateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_operate, allocator);
    }

    if (m_riskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_riskType.c_str(), allocator).Move(), allocator);
    }

    if (m_idsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ids.begin(); itr != m_ids.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_updateAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateAll";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_updateAll, allocator);
    }

    if (m_excludeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeId.begin(); itr != m_excludeId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_killProcessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KillProcess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_killProcess, allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ip.begin(); itr != m_ip.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_doCleanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DoClean";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_doClean, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyRiskEventsStatusRequest::GetOperate() const
{
    return m_operate;
}

void ModifyRiskEventsStatusRequest::SetOperate(const uint64_t& _operate)
{
    m_operate = _operate;
    m_operateHasBeenSet = true;
}

bool ModifyRiskEventsStatusRequest::OperateHasBeenSet() const
{
    return m_operateHasBeenSet;
}

string ModifyRiskEventsStatusRequest::GetRiskType() const
{
    return m_riskType;
}

void ModifyRiskEventsStatusRequest::SetRiskType(const string& _riskType)
{
    m_riskType = _riskType;
    m_riskTypeHasBeenSet = true;
}

bool ModifyRiskEventsStatusRequest::RiskTypeHasBeenSet() const
{
    return m_riskTypeHasBeenSet;
}

vector<uint64_t> ModifyRiskEventsStatusRequest::GetIds() const
{
    return m_ids;
}

void ModifyRiskEventsStatusRequest::SetIds(const vector<uint64_t>& _ids)
{
    m_ids = _ids;
    m_idsHasBeenSet = true;
}

bool ModifyRiskEventsStatusRequest::IdsHasBeenSet() const
{
    return m_idsHasBeenSet;
}

bool ModifyRiskEventsStatusRequest::GetUpdateAll() const
{
    return m_updateAll;
}

void ModifyRiskEventsStatusRequest::SetUpdateAll(const bool& _updateAll)
{
    m_updateAll = _updateAll;
    m_updateAllHasBeenSet = true;
}

bool ModifyRiskEventsStatusRequest::UpdateAllHasBeenSet() const
{
    return m_updateAllHasBeenSet;
}

vector<uint64_t> ModifyRiskEventsStatusRequest::GetExcludeId() const
{
    return m_excludeId;
}

void ModifyRiskEventsStatusRequest::SetExcludeId(const vector<uint64_t>& _excludeId)
{
    m_excludeId = _excludeId;
    m_excludeIdHasBeenSet = true;
}

bool ModifyRiskEventsStatusRequest::ExcludeIdHasBeenSet() const
{
    return m_excludeIdHasBeenSet;
}

bool ModifyRiskEventsStatusRequest::GetKillProcess() const
{
    return m_killProcess;
}

void ModifyRiskEventsStatusRequest::SetKillProcess(const bool& _killProcess)
{
    m_killProcess = _killProcess;
    m_killProcessHasBeenSet = true;
}

bool ModifyRiskEventsStatusRequest::KillProcessHasBeenSet() const
{
    return m_killProcessHasBeenSet;
}

vector<string> ModifyRiskEventsStatusRequest::GetIp() const
{
    return m_ip;
}

void ModifyRiskEventsStatusRequest::SetIp(const vector<string>& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool ModifyRiskEventsStatusRequest::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

vector<Filters> ModifyRiskEventsStatusRequest::GetFilters() const
{
    return m_filters;
}

void ModifyRiskEventsStatusRequest::SetFilters(const vector<Filters>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool ModifyRiskEventsStatusRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

bool ModifyRiskEventsStatusRequest::GetDoClean() const
{
    return m_doClean;
}

void ModifyRiskEventsStatusRequest::SetDoClean(const bool& _doClean)
{
    m_doClean = _doClean;
    m_doCleanHasBeenSet = true;
}

bool ModifyRiskEventsStatusRequest::DoCleanHasBeenSet() const
{
    return m_doCleanHasBeenSet;
}


