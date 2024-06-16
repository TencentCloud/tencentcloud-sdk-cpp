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

#include <tencentcloud/tse/v20201207/model/ZookeeperRegionMyIdInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

ZookeeperRegionMyIdInfo::ZookeeperRegionMyIdInfo() :
    m_regionHasBeenSet(false),
    m_myIdStartHasBeenSet(false),
    m_myIdEndHasBeenSet(false)
{
}

CoreInternalOutcome ZookeeperRegionMyIdInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZookeeperRegionMyIdInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("MyIdStart") && !value["MyIdStart"].IsNull())
    {
        if (!value["MyIdStart"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ZookeeperRegionMyIdInfo.MyIdStart` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_myIdStart = value["MyIdStart"].GetInt64();
        m_myIdStartHasBeenSet = true;
    }

    if (value.HasMember("MyIdEnd") && !value["MyIdEnd"].IsNull())
    {
        if (!value["MyIdEnd"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ZookeeperRegionMyIdInfo.MyIdEnd` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_myIdEnd = value["MyIdEnd"].GetInt64();
        m_myIdEndHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZookeeperRegionMyIdInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_myIdStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MyIdStart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_myIdStart, allocator);
    }

    if (m_myIdEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MyIdEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_myIdEnd, allocator);
    }

}


string ZookeeperRegionMyIdInfo::GetRegion() const
{
    return m_region;
}

void ZookeeperRegionMyIdInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ZookeeperRegionMyIdInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t ZookeeperRegionMyIdInfo::GetMyIdStart() const
{
    return m_myIdStart;
}

void ZookeeperRegionMyIdInfo::SetMyIdStart(const int64_t& _myIdStart)
{
    m_myIdStart = _myIdStart;
    m_myIdStartHasBeenSet = true;
}

bool ZookeeperRegionMyIdInfo::MyIdStartHasBeenSet() const
{
    return m_myIdStartHasBeenSet;
}

int64_t ZookeeperRegionMyIdInfo::GetMyIdEnd() const
{
    return m_myIdEnd;
}

void ZookeeperRegionMyIdInfo::SetMyIdEnd(const int64_t& _myIdEnd)
{
    m_myIdEnd = _myIdEnd;
    m_myIdEndHasBeenSet = true;
}

bool ZookeeperRegionMyIdInfo::MyIdEndHasBeenSet() const
{
    return m_myIdEndHasBeenSet;
}

