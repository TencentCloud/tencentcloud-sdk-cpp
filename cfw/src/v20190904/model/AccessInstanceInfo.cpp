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

#include <tencentcloud/cfw/v20190904/model/AccessInstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

AccessInstanceInfo::AccessInstanceInfo() :
    m_instanceIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceRegionHasBeenSet(false),
    m_accessCidrModeHasBeenSet(false),
    m_accessCidrListHasBeenSet(false)
{
}

CoreInternalOutcome AccessInstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessInstanceInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessInstanceInfo.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceRegion") && !value["InstanceRegion"].IsNull())
    {
        if (!value["InstanceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessInstanceInfo.InstanceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceRegion = string(value["InstanceRegion"].GetString());
        m_instanceRegionHasBeenSet = true;
    }

    if (value.HasMember("AccessCidrMode") && !value["AccessCidrMode"].IsNull())
    {
        if (!value["AccessCidrMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessInstanceInfo.AccessCidrMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accessCidrMode = value["AccessCidrMode"].GetInt64();
        m_accessCidrModeHasBeenSet = true;
    }

    if (value.HasMember("AccessCidrList") && !value["AccessCidrList"].IsNull())
    {
        if (!value["AccessCidrList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccessInstanceInfo.AccessCidrList` is not array type"));

        const rapidjson::Value &tmpValue = value["AccessCidrList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_accessCidrList.push_back((*itr).GetString());
        }
        m_accessCidrListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessInstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_accessCidrModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessCidrMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessCidrMode, allocator);
    }

    if (m_accessCidrListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessCidrList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_accessCidrList.begin(); itr != m_accessCidrList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string AccessInstanceInfo::GetInstanceId() const
{
    return m_instanceId;
}

void AccessInstanceInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AccessInstanceInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string AccessInstanceInfo::GetInstanceType() const
{
    return m_instanceType;
}

void AccessInstanceInfo::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool AccessInstanceInfo::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string AccessInstanceInfo::GetInstanceRegion() const
{
    return m_instanceRegion;
}

void AccessInstanceInfo::SetInstanceRegion(const string& _instanceRegion)
{
    m_instanceRegion = _instanceRegion;
    m_instanceRegionHasBeenSet = true;
}

bool AccessInstanceInfo::InstanceRegionHasBeenSet() const
{
    return m_instanceRegionHasBeenSet;
}

int64_t AccessInstanceInfo::GetAccessCidrMode() const
{
    return m_accessCidrMode;
}

void AccessInstanceInfo::SetAccessCidrMode(const int64_t& _accessCidrMode)
{
    m_accessCidrMode = _accessCidrMode;
    m_accessCidrModeHasBeenSet = true;
}

bool AccessInstanceInfo::AccessCidrModeHasBeenSet() const
{
    return m_accessCidrModeHasBeenSet;
}

vector<string> AccessInstanceInfo::GetAccessCidrList() const
{
    return m_accessCidrList;
}

void AccessInstanceInfo::SetAccessCidrList(const vector<string>& _accessCidrList)
{
    m_accessCidrList = _accessCidrList;
    m_accessCidrListHasBeenSet = true;
}

bool AccessInstanceInfo::AccessCidrListHasBeenSet() const
{
    return m_accessCidrListHasBeenSet;
}

