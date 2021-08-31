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

#include <tencentcloud/cwp/v20180228/model/VulTopInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

VulTopInfo::VulTopInfo() :
    m_vulNameHasBeenSet(false),
    m_vulLevelHasBeenSet(false),
    m_vulCountHasBeenSet(false),
    m_vulIdHasBeenSet(false)
{
}

CoreInternalOutcome VulTopInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VulName") && !value["VulName"].IsNull())
    {
        if (!value["VulName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulTopInfo.VulName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulName = string(value["VulName"].GetString());
        m_vulNameHasBeenSet = true;
    }

    if (value.HasMember("VulLevel") && !value["VulLevel"].IsNull())
    {
        if (!value["VulLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulTopInfo.VulLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulLevel = value["VulLevel"].GetUint64();
        m_vulLevelHasBeenSet = true;
    }

    if (value.HasMember("VulCount") && !value["VulCount"].IsNull())
    {
        if (!value["VulCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulTopInfo.VulCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulCount = value["VulCount"].GetUint64();
        m_vulCountHasBeenSet = true;
    }

    if (value.HasMember("VulId") && !value["VulId"].IsNull())
    {
        if (!value["VulId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulTopInfo.VulId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulId = value["VulId"].GetUint64();
        m_vulIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulTopInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vulNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulName.c_str(), allocator).Move(), allocator);
    }

    if (m_vulLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulLevel, allocator);
    }

    if (m_vulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulCount, allocator);
    }

    if (m_vulIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulId, allocator);
    }

}


string VulTopInfo::GetVulName() const
{
    return m_vulName;
}

void VulTopInfo::SetVulName(const string& _vulName)
{
    m_vulName = _vulName;
    m_vulNameHasBeenSet = true;
}

bool VulTopInfo::VulNameHasBeenSet() const
{
    return m_vulNameHasBeenSet;
}

uint64_t VulTopInfo::GetVulLevel() const
{
    return m_vulLevel;
}

void VulTopInfo::SetVulLevel(const uint64_t& _vulLevel)
{
    m_vulLevel = _vulLevel;
    m_vulLevelHasBeenSet = true;
}

bool VulTopInfo::VulLevelHasBeenSet() const
{
    return m_vulLevelHasBeenSet;
}

uint64_t VulTopInfo::GetVulCount() const
{
    return m_vulCount;
}

void VulTopInfo::SetVulCount(const uint64_t& _vulCount)
{
    m_vulCount = _vulCount;
    m_vulCountHasBeenSet = true;
}

bool VulTopInfo::VulCountHasBeenSet() const
{
    return m_vulCountHasBeenSet;
}

uint64_t VulTopInfo::GetVulId() const
{
    return m_vulId;
}

void VulTopInfo::SetVulId(const uint64_t& _vulId)
{
    m_vulId = _vulId;
    m_vulIdHasBeenSet = true;
}

bool VulTopInfo::VulIdHasBeenSet() const
{
    return m_vulIdHasBeenSet;
}

