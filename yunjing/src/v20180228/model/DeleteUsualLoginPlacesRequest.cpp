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

#include <tencentcloud/yunjing/v20180228/model/DeleteUsualLoginPlacesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace std;

DeleteUsualLoginPlacesRequest::DeleteUsualLoginPlacesRequest() :
    m_uuidHasBeenSet(false),
    m_cityIdsHasBeenSet(false)
{
}

string DeleteUsualLoginPlacesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_cityIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CityIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cityIds.begin(); itr != m_cityIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteUsualLoginPlacesRequest::GetUuid() const
{
    return m_uuid;
}

void DeleteUsualLoginPlacesRequest::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool DeleteUsualLoginPlacesRequest::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

vector<uint64_t> DeleteUsualLoginPlacesRequest::GetCityIds() const
{
    return m_cityIds;
}

void DeleteUsualLoginPlacesRequest::SetCityIds(const vector<uint64_t>& _cityIds)
{
    m_cityIds = _cityIds;
    m_cityIdsHasBeenSet = true;
}

bool DeleteUsualLoginPlacesRequest::CityIdsHasBeenSet() const
{
    return m_cityIdsHasBeenSet;
}


