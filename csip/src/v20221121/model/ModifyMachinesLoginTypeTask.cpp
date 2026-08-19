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

#include <tencentcloud/csip/v20221121/model/ModifyMachinesLoginTypeTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyMachinesLoginTypeTask::ModifyMachinesLoginTypeTask() :
    m_idHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_successCountHasBeenSet(false),
    m_failListHasBeenSet(false),
    m_successInstancesHasBeenSet(false),
    m_progressingInstancesHasBeenSet(false),
    m_failedHostCountHasBeenSet(false)
{
}

CoreInternalOutcome ModifyMachinesLoginTypeTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyMachinesLoginTypeTask.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyMachinesLoginTypeTask.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SuccessCount") && !value["SuccessCount"].IsNull())
    {
        if (!value["SuccessCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyMachinesLoginTypeTask.SuccessCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_successCount = value["SuccessCount"].GetUint64();
        m_successCountHasBeenSet = true;
    }

    if (value.HasMember("FailList") && !value["FailList"].IsNull())
    {
        if (!value["FailList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModifyMachinesLoginTypeTask.FailList` is not array type"));

        const rapidjson::Value &tmpValue = value["FailList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ModifyLoginTypeFailInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_failList.push_back(item);
        }
        m_failListHasBeenSet = true;
    }

    if (value.HasMember("SuccessInstances") && !value["SuccessInstances"].IsNull())
    {
        if (!value["SuccessInstances"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModifyMachinesLoginTypeTask.SuccessInstances` is not array type"));

        const rapidjson::Value &tmpValue = value["SuccessInstances"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_successInstances.push_back((*itr).GetString());
        }
        m_successInstancesHasBeenSet = true;
    }

    if (value.HasMember("ProgressingInstances") && !value["ProgressingInstances"].IsNull())
    {
        if (!value["ProgressingInstances"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModifyMachinesLoginTypeTask.ProgressingInstances` is not array type"));

        const rapidjson::Value &tmpValue = value["ProgressingInstances"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_progressingInstances.push_back((*itr).GetString());
        }
        m_progressingInstancesHasBeenSet = true;
    }

    if (value.HasMember("FailedHostCount") && !value["FailedHostCount"].IsNull())
    {
        if (!value["FailedHostCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyMachinesLoginTypeTask.FailedHostCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failedHostCount = value["FailedHostCount"].GetUint64();
        m_failedHostCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyMachinesLoginTypeTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_successCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successCount, allocator);
    }

    if (m_failListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_failList.begin(); itr != m_failList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_successInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_successInstances.begin(); itr != m_successInstances.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_progressingInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgressingInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_progressingInstances.begin(); itr != m_progressingInstances.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_failedHostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedHostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failedHostCount, allocator);
    }

}


uint64_t ModifyMachinesLoginTypeTask::GetId() const
{
    return m_id;
}

void ModifyMachinesLoginTypeTask::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyMachinesLoginTypeTask::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t ModifyMachinesLoginTypeTask::GetStatus() const
{
    return m_status;
}

void ModifyMachinesLoginTypeTask::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyMachinesLoginTypeTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t ModifyMachinesLoginTypeTask::GetSuccessCount() const
{
    return m_successCount;
}

void ModifyMachinesLoginTypeTask::SetSuccessCount(const uint64_t& _successCount)
{
    m_successCount = _successCount;
    m_successCountHasBeenSet = true;
}

bool ModifyMachinesLoginTypeTask::SuccessCountHasBeenSet() const
{
    return m_successCountHasBeenSet;
}

vector<ModifyLoginTypeFailInfo> ModifyMachinesLoginTypeTask::GetFailList() const
{
    return m_failList;
}

void ModifyMachinesLoginTypeTask::SetFailList(const vector<ModifyLoginTypeFailInfo>& _failList)
{
    m_failList = _failList;
    m_failListHasBeenSet = true;
}

bool ModifyMachinesLoginTypeTask::FailListHasBeenSet() const
{
    return m_failListHasBeenSet;
}

vector<string> ModifyMachinesLoginTypeTask::GetSuccessInstances() const
{
    return m_successInstances;
}

void ModifyMachinesLoginTypeTask::SetSuccessInstances(const vector<string>& _successInstances)
{
    m_successInstances = _successInstances;
    m_successInstancesHasBeenSet = true;
}

bool ModifyMachinesLoginTypeTask::SuccessInstancesHasBeenSet() const
{
    return m_successInstancesHasBeenSet;
}

vector<string> ModifyMachinesLoginTypeTask::GetProgressingInstances() const
{
    return m_progressingInstances;
}

void ModifyMachinesLoginTypeTask::SetProgressingInstances(const vector<string>& _progressingInstances)
{
    m_progressingInstances = _progressingInstances;
    m_progressingInstancesHasBeenSet = true;
}

bool ModifyMachinesLoginTypeTask::ProgressingInstancesHasBeenSet() const
{
    return m_progressingInstancesHasBeenSet;
}

uint64_t ModifyMachinesLoginTypeTask::GetFailedHostCount() const
{
    return m_failedHostCount;
}

void ModifyMachinesLoginTypeTask::SetFailedHostCount(const uint64_t& _failedHostCount)
{
    m_failedHostCount = _failedHostCount;
    m_failedHostCountHasBeenSet = true;
}

bool ModifyMachinesLoginTypeTask::FailedHostCountHasBeenSet() const
{
    return m_failedHostCountHasBeenSet;
}

