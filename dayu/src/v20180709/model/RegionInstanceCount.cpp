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

#include <tencentcloud/dayu/v20180709/model/RegionInstanceCount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

RegionInstanceCount::RegionInstanceCount() :
    m_regionHasBeenSet(false),
    m_regionV3HasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome RegionInstanceCount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInstanceCount.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("RegionV3") && !value["RegionV3"].IsNull())
    {
        if (!value["RegionV3"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInstanceCount.RegionV3` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionV3 = string(value["RegionV3"].GetString());
        m_regionV3HasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInstanceCount.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegionInstanceCount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_regionV3HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionV3";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionV3.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


string RegionInstanceCount::GetRegion() const
{
    return m_region;
}

void RegionInstanceCount::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool RegionInstanceCount::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string RegionInstanceCount::GetRegionV3() const
{
    return m_regionV3;
}

void RegionInstanceCount::SetRegionV3(const string& _regionV3)
{
    m_regionV3 = _regionV3;
    m_regionV3HasBeenSet = true;
}

bool RegionInstanceCount::RegionV3HasBeenSet() const
{
    return m_regionV3HasBeenSet;
}

uint64_t RegionInstanceCount::GetCount() const
{
    return m_count;
}

void RegionInstanceCount::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool RegionInstanceCount::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

