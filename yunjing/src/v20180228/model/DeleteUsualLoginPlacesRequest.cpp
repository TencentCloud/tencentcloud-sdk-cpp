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

#include <tencentcloud/yunjing/v20180228/model/DeleteUsualLoginPlacesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace rapidjson;
using namespace std;

DeleteUsualLoginPlacesRequest::DeleteUsualLoginPlacesRequest() :
    m_uuidHasBeenSet(false),
    m_cityIdsHasBeenSet(false)
{
}

string DeleteUsualLoginPlacesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_uuidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_cityIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CityIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_cityIds.begin(); itr != m_cityIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetUint64(*itr), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
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


