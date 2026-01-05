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

#include <tencentcloud/cwp/v20180228/model/IPAnalyse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

IPAnalyse::IPAnalyse() :
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_familyHasBeenSet(false),
    m_profileHasBeenSet(false),
    m_ispHasBeenSet(false)
{
}

CoreInternalOutcome IPAnalyse::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IPAnalyse.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IPAnalyse.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("Family") && !value["Family"].IsNull())
    {
        if (!value["Family"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IPAnalyse.Family` is not array type"));

        const rapidjson::Value &tmpValue = value["Family"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_family.push_back((*itr).GetString());
        }
        m_familyHasBeenSet = true;
    }

    if (value.HasMember("Profile") && !value["Profile"].IsNull())
    {
        if (!value["Profile"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IPAnalyse.Profile` is not array type"));

        const rapidjson::Value &tmpValue = value["Profile"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_profile.push_back((*itr).GetString());
        }
        m_profileHasBeenSet = true;
    }

    if (value.HasMember("Isp") && !value["Isp"].IsNull())
    {
        if (!value["Isp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPAnalyse.Isp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isp = string(value["Isp"].GetString());
        m_ispHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IPAnalyse::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_familyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Family";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_family.begin(); itr != m_family.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_profile.begin(); itr != m_profile.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ispHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Isp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isp.c_str(), allocator).Move(), allocator);
    }

}


uint64_t IPAnalyse::GetStatus() const
{
    return m_status;
}

void IPAnalyse::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool IPAnalyse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> IPAnalyse::GetTags() const
{
    return m_tags;
}

void IPAnalyse::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool IPAnalyse::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<string> IPAnalyse::GetFamily() const
{
    return m_family;
}

void IPAnalyse::SetFamily(const vector<string>& _family)
{
    m_family = _family;
    m_familyHasBeenSet = true;
}

bool IPAnalyse::FamilyHasBeenSet() const
{
    return m_familyHasBeenSet;
}

vector<string> IPAnalyse::GetProfile() const
{
    return m_profile;
}

void IPAnalyse::SetProfile(const vector<string>& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool IPAnalyse::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}

string IPAnalyse::GetIsp() const
{
    return m_isp;
}

void IPAnalyse::SetIsp(const string& _isp)
{
    m_isp = _isp;
    m_ispHasBeenSet = true;
}

bool IPAnalyse::IspHasBeenSet() const
{
    return m_ispHasBeenSet;
}

