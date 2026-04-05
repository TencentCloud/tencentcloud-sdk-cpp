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

#include <tencentcloud/ga2/v20250115/model/ModifyAccelerateAreasRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

ModifyAccelerateAreasRequest::ModifyAccelerateAreasRequest() :
    m_globalAcceleratorIdHasBeenSet(false),
    m_acceleratorAreasHasBeenSet(false)
{
}

string ModifyAccelerateAreasRequest::ToJsonString() const
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

    if (m_acceleratorAreasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AcceleratorAreas";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_acceleratorAreas.begin(); itr != m_acceleratorAreas.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAccelerateAreasRequest::GetGlobalAcceleratorId() const
{
    return m_globalAcceleratorId;
}

void ModifyAccelerateAreasRequest::SetGlobalAcceleratorId(const string& _globalAcceleratorId)
{
    m_globalAcceleratorId = _globalAcceleratorId;
    m_globalAcceleratorIdHasBeenSet = true;
}

bool ModifyAccelerateAreasRequest::GlobalAcceleratorIdHasBeenSet() const
{
    return m_globalAcceleratorIdHasBeenSet;
}

vector<AcceleratorAreas> ModifyAccelerateAreasRequest::GetAcceleratorAreas() const
{
    return m_acceleratorAreas;
}

void ModifyAccelerateAreasRequest::SetAcceleratorAreas(const vector<AcceleratorAreas>& _acceleratorAreas)
{
    m_acceleratorAreas = _acceleratorAreas;
    m_acceleratorAreasHasBeenSet = true;
}

bool ModifyAccelerateAreasRequest::AcceleratorAreasHasBeenSet() const
{
    return m_acceleratorAreasHasBeenSet;
}


