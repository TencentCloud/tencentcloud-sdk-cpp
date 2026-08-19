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

#include <tencentcloud/csip/v20221121/model/AssetViewFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AssetViewFilter::AssetViewFilter() :
    m_viewIDHasBeenSet(false),
    m_viewNameHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

CoreInternalOutcome AssetViewFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ViewID") && !value["ViewID"].IsNull())
    {
        if (!value["ViewID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewFilter.ViewID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_viewID = value["ViewID"].GetUint64();
        m_viewIDHasBeenSet = true;
    }

    if (value.HasMember("ViewName") && !value["ViewName"].IsNull())
    {
        if (!value["ViewName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewFilter.ViewName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_viewName = string(value["ViewName"].GetString());
        m_viewNameHasBeenSet = true;
    }

    if (value.HasMember("Filters") && !value["Filters"].IsNull())
    {
        if (!value["Filters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetViewFilter.Filters` is not array type"));

        const rapidjson::Value &tmpValue = value["Filters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Filters item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_filters.push_back(item);
        }
        m_filtersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetViewFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_viewIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_viewID, allocator);
    }

    if (m_viewNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_viewName.c_str(), allocator).Move(), allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t AssetViewFilter::GetViewID() const
{
    return m_viewID;
}

void AssetViewFilter::SetViewID(const uint64_t& _viewID)
{
    m_viewID = _viewID;
    m_viewIDHasBeenSet = true;
}

bool AssetViewFilter::ViewIDHasBeenSet() const
{
    return m_viewIDHasBeenSet;
}

string AssetViewFilter::GetViewName() const
{
    return m_viewName;
}

void AssetViewFilter::SetViewName(const string& _viewName)
{
    m_viewName = _viewName;
    m_viewNameHasBeenSet = true;
}

bool AssetViewFilter::ViewNameHasBeenSet() const
{
    return m_viewNameHasBeenSet;
}

vector<Filters> AssetViewFilter::GetFilters() const
{
    return m_filters;
}

void AssetViewFilter::SetFilters(const vector<Filters>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool AssetViewFilter::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

