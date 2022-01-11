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
using namespace std;

AccessRegionDetial::AccessRegionDetial() :
    m_regionIdHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_concurrentListHasBeenSet(false),
    m_bandwidthListHasBeenSet(false),
    m_regionAreaHasBeenSet(false),
    m_regionAreaNameHasBeenSet(false),
    m_iDCTypeHasBeenSet(false),
    m_featureBitmapHasBeenSet(false)
{
}

CoreInternalOutcome AccessRegionDetial::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessRegionDetial.RegionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = string(value["RegionId"].GetString());
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessRegionDetial.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("ConcurrentList") && !value["ConcurrentList"].IsNull())
    {
        if (!value["ConcurrentList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccessRegionDetial.ConcurrentList` is not array type"));

        const rapidjson::Value &tmpValue = value["ConcurrentList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_concurrentList.push_back((*itr).GetInt64());
        }
        m_concurrentListHasBeenSet = true;
    }

    if (value.HasMember("BandwidthList") && !value["BandwidthList"].IsNull())
    {
        if (!value["BandwidthList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccessRegionDetial.BandwidthList` is not array type"));

        const rapidjson::Value &tmpValue = value["BandwidthList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_bandwidthList.push_back((*itr).GetInt64());
        }
        m_bandwidthListHasBeenSet = true;
    }

    if (value.HasMember("RegionArea") && !value["RegionArea"].IsNull())
    {
        if (!value["RegionArea"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessRegionDetial.RegionArea` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionArea = string(value["RegionArea"].GetString());
        m_regionAreaHasBeenSet = true;
    }

    if (value.HasMember("RegionAreaName") && !value["RegionAreaName"].IsNull())
    {
        if (!value["RegionAreaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessRegionDetial.RegionAreaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionAreaName = string(value["RegionAreaName"].GetString());
        m_regionAreaNameHasBeenSet = true;
    }

    if (value.HasMember("IDCType") && !value["IDCType"].IsNull())
    {
        if (!value["IDCType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessRegionDetial.IDCType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iDCType = string(value["IDCType"].GetString());
        m_iDCTypeHasBeenSet = true;
    }

    if (value.HasMember("FeatureBitmap") && !value["FeatureBitmap"].IsNull())
    {
        if (!value["FeatureBitmap"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessRegionDetial.FeatureBitmap` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_featureBitmap = value["FeatureBitmap"].GetInt64();
        m_featureBitmapHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessRegionDetial::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_concurrentListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConcurrentList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_concurrentList.begin(); itr != m_concurrentList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_bandwidthListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bandwidthList.begin(); itr != m_bandwidthList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_regionAreaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionArea";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionArea.c_str(), allocator).Move(), allocator);
    }

    if (m_regionAreaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionAreaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionAreaName.c_str(), allocator).Move(), allocator);
    }

    if (m_iDCTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IDCType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iDCType.c_str(), allocator).Move(), allocator);
    }

    if (m_featureBitmapHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeatureBitmap";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_featureBitmap, allocator);
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

string AccessRegionDetial::GetRegionArea() const
{
    return m_regionArea;
}

void AccessRegionDetial::SetRegionArea(const string& _regionArea)
{
    m_regionArea = _regionArea;
    m_regionAreaHasBeenSet = true;
}

bool AccessRegionDetial::RegionAreaHasBeenSet() const
{
    return m_regionAreaHasBeenSet;
}

string AccessRegionDetial::GetRegionAreaName() const
{
    return m_regionAreaName;
}

void AccessRegionDetial::SetRegionAreaName(const string& _regionAreaName)
{
    m_regionAreaName = _regionAreaName;
    m_regionAreaNameHasBeenSet = true;
}

bool AccessRegionDetial::RegionAreaNameHasBeenSet() const
{
    return m_regionAreaNameHasBeenSet;
}

string AccessRegionDetial::GetIDCType() const
{
    return m_iDCType;
}

void AccessRegionDetial::SetIDCType(const string& _iDCType)
{
    m_iDCType = _iDCType;
    m_iDCTypeHasBeenSet = true;
}

bool AccessRegionDetial::IDCTypeHasBeenSet() const
{
    return m_iDCTypeHasBeenSet;
}

int64_t AccessRegionDetial::GetFeatureBitmap() const
{
    return m_featureBitmap;
}

void AccessRegionDetial::SetFeatureBitmap(const int64_t& _featureBitmap)
{
    m_featureBitmap = _featureBitmap;
    m_featureBitmapHasBeenSet = true;
}

bool AccessRegionDetial::FeatureBitmapHasBeenSet() const
{
    return m_featureBitmapHasBeenSet;
}

