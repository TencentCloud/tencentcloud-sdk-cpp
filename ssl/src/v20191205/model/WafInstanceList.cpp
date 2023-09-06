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

#include <tencentcloud/ssl/v20191205/model/WafInstanceList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

WafInstanceList::WafInstanceList() :
    m_regionHasBeenSet(false),
    m_instanceListHasBeenSet(false),
    m_totalCountHasBeenSet(false)
{
}

CoreInternalOutcome WafInstanceList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WafInstanceList.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("InstanceList") && !value["InstanceList"].IsNull())
    {
        if (!value["InstanceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WafInstanceList.InstanceList` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WafInstanceDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceList.push_back(item);
        }
        m_instanceListHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WafInstanceList.TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WafInstanceList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceList.begin(); itr != m_instanceList.end(); ++itr, ++i)
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


string WafInstanceList::GetRegion() const
{
    return m_region;
}

void WafInstanceList::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool WafInstanceList::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

vector<WafInstanceDetail> WafInstanceList::GetInstanceList() const
{
    return m_instanceList;
}

void WafInstanceList::SetInstanceList(const vector<WafInstanceDetail>& _instanceList)
{
    m_instanceList = _instanceList;
    m_instanceListHasBeenSet = true;
}

bool WafInstanceList::InstanceListHasBeenSet() const
{
    return m_instanceListHasBeenSet;
}

uint64_t WafInstanceList::GetTotalCount() const
{
    return m_totalCount;
}

void WafInstanceList::SetTotalCount(const uint64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool WafInstanceList::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

