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

#include <tencentcloud/gaap/v20180529/model/AccessRegionDetial.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace rapidjson;
using namespace std;

AccessRegionDetial::AccessRegionDetial() :
    m_regionIdHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_concurrentListHasBeenSet(false),
    m_bandwidthListHasBeenSet(false)
{
}

CoreInternalOutcome AccessRegionDetial::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AccessRegionDetial.RegionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = string(value["RegionId"].GetString());
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Error("response `AccessRegionDetial.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("ConcurrentList") && !value["ConcurrentList"].IsNull())
    {
        if (!value["ConcurrentList"].IsArray())
            return CoreInternalOutcome(Error("response `AccessRegionDetial.ConcurrentList` is not array type"));

        const Value &tmpValue = value["ConcurrentList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_concurrentList.push_back((*itr).GetInt64());
        }
        m_concurrentListHasBeenSet = true;
    }

    if (value.HasMember("BandwidthList") && !value["BandwidthList"].IsNull())
    {
        if (!value["BandwidthList"].IsArray())
            return CoreInternalOutcome(Error("response `AccessRegionDetial.BandwidthList` is not array type"));

        const Value &tmpValue = value["BandwidthList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_bandwidthList.push_back((*itr).GetInt64());
        }
        m_bandwidthListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessRegionDetial::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_regionIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_regionId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_concurrentListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ConcurrentList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_concurrentList.begin(); itr != m_concurrentList.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetInt64(*itr), allocator);
        }
    }

    if (m_bandwidthListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BandwidthList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_bandwidthList.begin(); itr != m_bandwidthList.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetInt64(*itr), allocator);
        }
    }

}


string AccessRegionDetial::GetRegionId() const
{
    return m_regionId;
}

void AccessRegionDetial::SetRegionId(const string& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool AccessRegionDetial::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string AccessRegionDetial::GetRegionName() const
{
    return m_regionName;
}

void AccessRegionDetial::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool AccessRegionDetial::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

vector<int64_t> AccessRegionDetial::GetConcurrentList() const
{
    return m_concurrentList;
}

void AccessRegionDetial::SetConcurrentList(const vector<int64_t>& _concurrentList)
{
    m_concurrentList = _concurrentList;
    m_concurrentListHasBeenSet = true;
}

bool AccessRegionDetial::ConcurrentListHasBeenSet() const
{
    return m_concurrentListHasBeenSet;
}

vector<int64_t> AccessRegionDetial::GetBandwidthList() const
{
    return m_bandwidthList;
}

void AccessRegionDetial::SetBandwidthList(const vector<int64_t>& _bandwidthList)
{
    m_bandwidthList = _bandwidthList;
    m_bandwidthListHasBeenSet = true;
}

bool AccessRegionDetial::BandwidthListHasBeenSet() const
{
    return m_bandwidthListHasBeenSet;
}

