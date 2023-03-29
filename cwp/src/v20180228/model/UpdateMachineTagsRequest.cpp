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

#include <tencentcloud/cwp/v20180228/model/UpdateMachineTagsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

UpdateMachineTagsRequest::UpdateMachineTagsRequest() :
    m_quuidHasBeenSet(false),
    m_tagIdsHasBeenSet(false),
    m_machineRegionHasBeenSet(false),
    m_machineAreaHasBeenSet(false)
{
}

string UpdateMachineTagsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_tagIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagIds.begin(); itr != m_tagIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_machineRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_machineRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_machineAreaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineArea";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_machineArea.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateMachineTagsRequest::GetQuuid() const
{
    return m_quuid;
}

void UpdateMachineTagsRequest::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool UpdateMachineTagsRequest::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

vector<uint64_t> UpdateMachineTagsRequest::GetTagIds() const
{
    return m_tagIds;
}

void UpdateMachineTagsRequest::SetTagIds(const vector<uint64_t>& _tagIds)
{
    m_tagIds = _tagIds;
    m_tagIdsHasBeenSet = true;
}

bool UpdateMachineTagsRequest::TagIdsHasBeenSet() const
{
    return m_tagIdsHasBeenSet;
}

string UpdateMachineTagsRequest::GetMachineRegion() const
{
    return m_machineRegion;
}

void UpdateMachineTagsRequest::SetMachineRegion(const string& _machineRegion)
{
    m_machineRegion = _machineRegion;
    m_machineRegionHasBeenSet = true;
}

bool UpdateMachineTagsRequest::MachineRegionHasBeenSet() const
{
    return m_machineRegionHasBeenSet;
}

string UpdateMachineTagsRequest::GetMachineArea() const
{
    return m_machineArea;
}

void UpdateMachineTagsRequest::SetMachineArea(const string& _machineArea)
{
    m_machineArea = _machineArea;
    m_machineAreaHasBeenSet = true;
}

bool UpdateMachineTagsRequest::MachineAreaHasBeenSet() const
{
    return m_machineAreaHasBeenSet;
}


