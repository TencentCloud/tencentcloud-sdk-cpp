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

#include <tencentcloud/databuddy/v20260715/model/ListLocationsRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

ListLocationsRsp::ListLocationsRsp() :
    m_locationsHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_snapshotIdHasBeenSet(false)
{
}

CoreInternalOutcome ListLocationsRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Locations") && !value["Locations"].IsNull())
    {
        if (!value["Locations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ListLocationsRsp.Locations` is not array type"));

        const rapidjson::Value &tmpValue = value["Locations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LocationInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_locations.push_back(item);
        }
        m_locationsHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListLocationsRsp.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("SnapshotId") && !value["SnapshotId"].IsNull())
    {
        if (!value["SnapshotId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListLocationsRsp.SnapshotId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotId = string(value["SnapshotId"].GetString());
        m_snapshotIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ListLocationsRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_locationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Locations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_locations.begin(); itr != m_locations.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_snapshotIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotId.c_str(), allocator).Move(), allocator);
    }

}


vector<LocationInfo> ListLocationsRsp::GetLocations() const
{
    return m_locations;
}

void ListLocationsRsp::SetLocations(const vector<LocationInfo>& _locations)
{
    m_locations = _locations;
    m_locationsHasBeenSet = true;
}

bool ListLocationsRsp::LocationsHasBeenSet() const
{
    return m_locationsHasBeenSet;
}

int64_t ListLocationsRsp::GetTotalCount() const
{
    return m_totalCount;
}

void ListLocationsRsp::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool ListLocationsRsp::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

string ListLocationsRsp::GetSnapshotId() const
{
    return m_snapshotId;
}

void ListLocationsRsp::SetSnapshotId(const string& _snapshotId)
{
    m_snapshotId = _snapshotId;
    m_snapshotIdHasBeenSet = true;
}

bool ListLocationsRsp::SnapshotIdHasBeenSet() const
{
    return m_snapshotIdHasBeenSet;
}

