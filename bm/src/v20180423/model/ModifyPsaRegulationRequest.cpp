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

#include <tencentcloud/bm/v20180423/model/ModifyPsaRegulationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bm::V20180423::Model;
using namespace std;

ModifyPsaRegulationRequest::ModifyPsaRegulationRequest() :
    m_psaIdHasBeenSet(false),
    m_psaNameHasBeenSet(false),
    m_repairLimitHasBeenSet(false),
    m_psaDescriptionHasBeenSet(false),
    m_taskTypeIdsHasBeenSet(false)
{
}

string ModifyPsaRegulationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_psaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PsaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_psaId.c_str(), allocator).Move(), allocator);
    }

    if (m_psaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PsaName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_psaName.c_str(), allocator).Move(), allocator);
    }

    if (m_repairLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepairLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_repairLimit, allocator);
    }

    if (m_psaDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PsaDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_psaDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskTypeIds.begin(); itr != m_taskTypeIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyPsaRegulationRequest::GetPsaId() const
{
    return m_psaId;
}

void ModifyPsaRegulationRequest::SetPsaId(const string& _psaId)
{
    m_psaId = _psaId;
    m_psaIdHasBeenSet = true;
}

bool ModifyPsaRegulationRequest::PsaIdHasBeenSet() const
{
    return m_psaIdHasBeenSet;
}

string ModifyPsaRegulationRequest::GetPsaName() const
{
    return m_psaName;
}

void ModifyPsaRegulationRequest::SetPsaName(const string& _psaName)
{
    m_psaName = _psaName;
    m_psaNameHasBeenSet = true;
}

bool ModifyPsaRegulationRequest::PsaNameHasBeenSet() const
{
    return m_psaNameHasBeenSet;
}

uint64_t ModifyPsaRegulationRequest::GetRepairLimit() const
{
    return m_repairLimit;
}

void ModifyPsaRegulationRequest::SetRepairLimit(const uint64_t& _repairLimit)
{
    m_repairLimit = _repairLimit;
    m_repairLimitHasBeenSet = true;
}

bool ModifyPsaRegulationRequest::RepairLimitHasBeenSet() const
{
    return m_repairLimitHasBeenSet;
}

string ModifyPsaRegulationRequest::GetPsaDescription() const
{
    return m_psaDescription;
}

void ModifyPsaRegulationRequest::SetPsaDescription(const string& _psaDescription)
{
    m_psaDescription = _psaDescription;
    m_psaDescriptionHasBeenSet = true;
}

bool ModifyPsaRegulationRequest::PsaDescriptionHasBeenSet() const
{
    return m_psaDescriptionHasBeenSet;
}

vector<uint64_t> ModifyPsaRegulationRequest::GetTaskTypeIds() const
{
    return m_taskTypeIds;
}

void ModifyPsaRegulationRequest::SetTaskTypeIds(const vector<uint64_t>& _taskTypeIds)
{
    m_taskTypeIds = _taskTypeIds;
    m_taskTypeIdsHasBeenSet = true;
}

bool ModifyPsaRegulationRequest::TaskTypeIdsHasBeenSet() const
{
    return m_taskTypeIdsHasBeenSet;
}


