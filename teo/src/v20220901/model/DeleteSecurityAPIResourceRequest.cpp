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

#include <tencentcloud/teo/v20220901/model/DeleteSecurityAPIResourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

DeleteSecurityAPIResourceRequest::DeleteSecurityAPIResourceRequest() :
    m_zoneIdHasBeenSet(false),
    m_aPIResourceIdsHasBeenSet(false)
{
}

string DeleteSecurityAPIResourceRequest::ToJsonString() const
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

    if (m_aPIResourceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIResourceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_aPIResourceIds.begin(); itr != m_aPIResourceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteSecurityAPIResourceRequest::GetZoneId() const
{
    return m_zoneId;
}

void DeleteSecurityAPIResourceRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool DeleteSecurityAPIResourceRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

vector<string> DeleteSecurityAPIResourceRequest::GetAPIResourceIds() const
{
    return m_aPIResourceIds;
}

void DeleteSecurityAPIResourceRequest::SetAPIResourceIds(const vector<string>& _aPIResourceIds)
{
    m_aPIResourceIds = _aPIResourceIds;
    m_aPIResourceIdsHasBeenSet = true;
}

bool DeleteSecurityAPIResourceRequest::APIResourceIdsHasBeenSet() const
{
    return m_aPIResourceIdsHasBeenSet;
}


