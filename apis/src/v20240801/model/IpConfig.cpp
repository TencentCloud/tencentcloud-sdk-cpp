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

#include <tencentcloud/apis/v20240801/model/IpConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

IpConfig::IpConfig() :
    m_ipsHasBeenSet(false),
    m_effectTypeHasBeenSet(false),
    m_effectTimesHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

CoreInternalOutcome IpConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ips") && !value["Ips"].IsNull())
    {
        if (!value["Ips"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IpConfig.Ips` is not array type"));

        const rapidjson::Value &tmpValue = value["Ips"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ips.push_back((*itr).GetString());
        }
        m_ipsHasBeenSet = true;
    }

    if (value.HasMember("EffectType") && !value["EffectType"].IsNull())
    {
        if (!value["EffectType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpConfig.EffectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_effectType = string(value["EffectType"].GetString());
        m_effectTypeHasBeenSet = true;
    }

    if (value.HasMember("EffectTimes") && !value["EffectTimes"].IsNull())
    {
        if (!value["EffectTimes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IpConfig.EffectTimes` is not array type"));

        const rapidjson::Value &tmpValue = value["EffectTimes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StartEndTime item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_effectTimes.push_back(item);
        }
        m_effectTimesHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpConfig.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IpConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ips.begin(); itr != m_ips.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_effectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_effectType.c_str(), allocator).Move(), allocator);
    }

    if (m_effectTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_effectTimes.begin(); itr != m_effectTimes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

}


vector<string> IpConfig::GetIps() const
{
    return m_ips;
}

void IpConfig::SetIps(const vector<string>& _ips)
{
    m_ips = _ips;
    m_ipsHasBeenSet = true;
}

bool IpConfig::IpsHasBeenSet() const
{
    return m_ipsHasBeenSet;
}

string IpConfig::GetEffectType() const
{
    return m_effectType;
}

void IpConfig::SetEffectType(const string& _effectType)
{
    m_effectType = _effectType;
    m_effectTypeHasBeenSet = true;
}

bool IpConfig::EffectTypeHasBeenSet() const
{
    return m_effectTypeHasBeenSet;
}

vector<StartEndTime> IpConfig::GetEffectTimes() const
{
    return m_effectTimes;
}

void IpConfig::SetEffectTimes(const vector<StartEndTime>& _effectTimes)
{
    m_effectTimes = _effectTimes;
    m_effectTimesHasBeenSet = true;
}

bool IpConfig::EffectTimesHasBeenSet() const
{
    return m_effectTimesHasBeenSet;
}

string IpConfig::GetComment() const
{
    return m_comment;
}

void IpConfig::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool IpConfig::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

