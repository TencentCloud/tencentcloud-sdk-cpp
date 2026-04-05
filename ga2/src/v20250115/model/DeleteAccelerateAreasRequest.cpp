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

#include <tencentcloud/ga2/v20250115/model/DeleteAccelerateAreasRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

DeleteAccelerateAreasRequest::DeleteAccelerateAreasRequest() :
    m_globalAcceleratorIdHasBeenSet(false),
    m_acceleratorAreaIdsHasBeenSet(false)
{
}

string DeleteAccelerateAreasRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_globalAcceleratorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalAcceleratorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_globalAcceleratorId.c_str(), allocator).Move(), allocator);
    }

    if (m_acceleratorAreaIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AcceleratorAreaIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_acceleratorAreaIds.begin(); itr != m_acceleratorAreaIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteAccelerateAreasRequest::GetGlobalAcceleratorId() const
{
    return m_globalAcceleratorId;
}

void DeleteAccelerateAreasRequest::SetGlobalAcceleratorId(const string& _globalAcceleratorId)
{
    m_globalAcceleratorId = _globalAcceleratorId;
    m_globalAcceleratorIdHasBeenSet = true;
}

bool DeleteAccelerateAreasRequest::GlobalAcceleratorIdHasBeenSet() const
{
    return m_globalAcceleratorIdHasBeenSet;
}

vector<string> DeleteAccelerateAreasRequest::GetAcceleratorAreaIds() const
{
    return m_acceleratorAreaIds;
}

void DeleteAccelerateAreasRequest::SetAcceleratorAreaIds(const vector<string>& _acceleratorAreaIds)
{
    m_acceleratorAreaIds = _acceleratorAreaIds;
    m_acceleratorAreaIdsHasBeenSet = true;
}

bool DeleteAccelerateAreasRequest::AcceleratorAreaIdsHasBeenSet() const
{
    return m_acceleratorAreaIdsHasBeenSet;
}


