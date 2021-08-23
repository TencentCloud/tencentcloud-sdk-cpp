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

#include <tencentcloud/cdn/v20180606/model/RegionMapRelation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

RegionMapRelation::RegionMapRelation() :
    m_regionIdHasBeenSet(false),
    m_subRegionIdListHasBeenSet(false)
{
}

CoreInternalOutcome RegionMapRelation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegionMapRelation.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("SubRegionIdList") && !value["SubRegionIdList"].IsNull())
    {
        if (!value["SubRegionIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RegionMapRelation.SubRegionIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["SubRegionIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subRegionIdList.push_back((*itr).GetInt64());
        }
        m_subRegionIdListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegionMapRelation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_subRegionIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubRegionIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subRegionIdList.begin(); itr != m_subRegionIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


int64_t RegionMapRelation::GetRegionId() const
{
    return m_regionId;
}

void RegionMapRelation::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool RegionMapRelation::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

vector<int64_t> RegionMapRelation::GetSubRegionIdList() const
{
    return m_subRegionIdList;
}

void RegionMapRelation::SetSubRegionIdList(const vector<int64_t>& _subRegionIdList)
{
    m_subRegionIdList = _subRegionIdList;
    m_subRegionIdListHasBeenSet = true;
}

bool RegionMapRelation::SubRegionIdListHasBeenSet() const
{
    return m_subRegionIdListHasBeenSet;
}

