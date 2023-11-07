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

#include <tencentcloud/teo/v20220901/model/BindSharedCNAMERequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

BindSharedCNAMERequest::BindSharedCNAMERequest() :
    m_zoneIdHasBeenSet(false),
    m_bindTypeHasBeenSet(false),
    m_bindSharedCNAMEMapsHasBeenSet(false)
{
}

string BindSharedCNAMERequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_bindTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bindType.c_str(), allocator).Move(), allocator);
    }

    if (m_bindSharedCNAMEMapsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindSharedCNAMEMaps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bindSharedCNAMEMaps.begin(); itr != m_bindSharedCNAMEMaps.end(); ++itr, ++i)
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


string BindSharedCNAMERequest::GetZoneId() const
{
    return m_zoneId;
}

void BindSharedCNAMERequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool BindSharedCNAMERequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string BindSharedCNAMERequest::GetBindType() const
{
    return m_bindType;
}

void BindSharedCNAMERequest::SetBindType(const string& _bindType)
{
    m_bindType = _bindType;
    m_bindTypeHasBeenSet = true;
}

bool BindSharedCNAMERequest::BindTypeHasBeenSet() const
{
    return m_bindTypeHasBeenSet;
}

vector<BindSharedCNAMEMap> BindSharedCNAMERequest::GetBindSharedCNAMEMaps() const
{
    return m_bindSharedCNAMEMaps;
}

void BindSharedCNAMERequest::SetBindSharedCNAMEMaps(const vector<BindSharedCNAMEMap>& _bindSharedCNAMEMaps)
{
    m_bindSharedCNAMEMaps = _bindSharedCNAMEMaps;
    m_bindSharedCNAMEMapsHasBeenSet = true;
}

bool BindSharedCNAMERequest::BindSharedCNAMEMapsHasBeenSet() const
{
    return m_bindSharedCNAMEMapsHasBeenSet;
}


