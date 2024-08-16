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

#include <tencentcloud/cwp/v20180228/model/CanFixVulInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

CanFixVulInfo::CanFixVulInfo() :
    m_vulIdHasBeenSet(false),
    m_vulNameHasBeenSet(false),
    m_hostListHasBeenSet(false),
    m_fixTagHasBeenSet(false),
    m_vulCategoryHasBeenSet(false)
{
}

CoreInternalOutcome CanFixVulInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VulId") && !value["VulId"].IsNull())
    {
        if (!value["VulId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CanFixVulInfo.VulId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulId = value["VulId"].GetUint64();
        m_vulIdHasBeenSet = true;
    }

    if (value.HasMember("VulName") && !value["VulName"].IsNull())
    {
        if (!value["VulName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CanFixVulInfo.VulName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulName = string(value["VulName"].GetString());
        m_vulNameHasBeenSet = true;
    }

    if (value.HasMember("HostList") && !value["HostList"].IsNull())
    {
        if (!value["HostList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CanFixVulInfo.HostList` is not array type"));

        const rapidjson::Value &tmpValue = value["HostList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VulInfoHostInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_hostList.push_back(item);
        }
        m_hostListHasBeenSet = true;
    }

    if (value.HasMember("FixTag") && !value["FixTag"].IsNull())
    {
        if (!value["FixTag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CanFixVulInfo.FixTag` is not array type"));

        const rapidjson::Value &tmpValue = value["FixTag"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fixTag.push_back((*itr).GetString());
        }
        m_fixTagHasBeenSet = true;
    }

    if (value.HasMember("VulCategory") && !value["VulCategory"].IsNull())
    {
        if (!value["VulCategory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CanFixVulInfo.VulCategory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulCategory = value["VulCategory"].GetUint64();
        m_vulCategoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CanFixVulInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vulIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulId, allocator);
    }

    if (m_vulNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_hostList.begin(); itr != m_hostList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_fixTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fixTag.begin(); itr != m_fixTag.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vulCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulCategory, allocator);
    }

}


uint64_t CanFixVulInfo::GetVulId() const
{
    return m_vulId;
}

void CanFixVulInfo::SetVulId(const uint64_t& _vulId)
{
    m_vulId = _vulId;
    m_vulIdHasBeenSet = true;
}

bool CanFixVulInfo::VulIdHasBeenSet() const
{
    return m_vulIdHasBeenSet;
}

string CanFixVulInfo::GetVulName() const
{
    return m_vulName;
}

void CanFixVulInfo::SetVulName(const string& _vulName)
{
    m_vulName = _vulName;
    m_vulNameHasBeenSet = true;
}

bool CanFixVulInfo::VulNameHasBeenSet() const
{
    return m_vulNameHasBeenSet;
}

vector<VulInfoHostInfo> CanFixVulInfo::GetHostList() const
{
    return m_hostList;
}

void CanFixVulInfo::SetHostList(const vector<VulInfoHostInfo>& _hostList)
{
    m_hostList = _hostList;
    m_hostListHasBeenSet = true;
}

bool CanFixVulInfo::HostListHasBeenSet() const
{
    return m_hostListHasBeenSet;
}

vector<string> CanFixVulInfo::GetFixTag() const
{
    return m_fixTag;
}

void CanFixVulInfo::SetFixTag(const vector<string>& _fixTag)
{
    m_fixTag = _fixTag;
    m_fixTagHasBeenSet = true;
}

bool CanFixVulInfo::FixTagHasBeenSet() const
{
    return m_fixTagHasBeenSet;
}

uint64_t CanFixVulInfo::GetVulCategory() const
{
    return m_vulCategory;
}

void CanFixVulInfo::SetVulCategory(const uint64_t& _vulCategory)
{
    m_vulCategory = _vulCategory;
    m_vulCategoryHasBeenSet = true;
}

bool CanFixVulInfo::VulCategoryHasBeenSet() const
{
    return m_vulCategoryHasBeenSet;
}

