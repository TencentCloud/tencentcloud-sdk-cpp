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

#include <tencentcloud/tse/v20201207/model/KongServiceRouteList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

KongServiceRouteList::KongServiceRouteList() :
    m_routeListHasBeenSet(false),
    m_totalCountHasBeenSet(false)
{
}

CoreInternalOutcome KongServiceRouteList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RouteList") && !value["RouteList"].IsNull())
    {
        if (!value["RouteList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KongServiceRouteList.RouteList` is not array type"));

        const rapidjson::Value &tmpValue = value["RouteList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KongRoutePreview item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_routeList.push_back(item);
        }
        m_routeListHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KongServiceRouteList.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KongServiceRouteList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_routeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_routeList.begin(); itr != m_routeList.end(); ++itr, ++i)
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

}


vector<KongRoutePreview> KongServiceRouteList::GetRouteList() const
{
    return m_routeList;
}

void KongServiceRouteList::SetRouteList(const vector<KongRoutePreview>& _routeList)
{
    m_routeList = _routeList;
    m_routeListHasBeenSet = true;
}

bool KongServiceRouteList::RouteListHasBeenSet() const
{
    return m_routeListHasBeenSet;
}

int64_t KongServiceRouteList::GetTotalCount() const
{
    return m_totalCount;
}

void KongServiceRouteList::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool KongServiceRouteList::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

