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

#include <tencentcloud/cdn/v20180606/model/MaxAgeRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

MaxAgeRule::MaxAgeRule() :
    m_maxAgeTypeHasBeenSet(false),
    m_maxAgeContentsHasBeenSet(false),
    m_maxAgeTimeHasBeenSet(false),
    m_followOriginHasBeenSet(false)
{
}

CoreInternalOutcome MaxAgeRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxAgeType") && !value["MaxAgeType"].IsNull())
    {
        if (!value["MaxAgeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaxAgeRule.MaxAgeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maxAgeType = string(value["MaxAgeType"].GetString());
        m_maxAgeTypeHasBeenSet = true;
    }

    if (value.HasMember("MaxAgeContents") && !value["MaxAgeContents"].IsNull())
    {
        if (!value["MaxAgeContents"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MaxAgeRule.MaxAgeContents` is not array type"));

        const rapidjson::Value &tmpValue = value["MaxAgeContents"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_maxAgeContents.push_back((*itr).GetString());
        }
        m_maxAgeContentsHasBeenSet = true;
    }

    if (value.HasMember("MaxAgeTime") && !value["MaxAgeTime"].IsNull())
    {
        if (!value["MaxAgeTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxAgeRule.MaxAgeTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxAgeTime = value["MaxAgeTime"].GetInt64();
        m_maxAgeTimeHasBeenSet = true;
    }

    if (value.HasMember("FollowOrigin") && !value["FollowOrigin"].IsNull())
    {
        if (!value["FollowOrigin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaxAgeRule.FollowOrigin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_followOrigin = string(value["FollowOrigin"].GetString());
        m_followOriginHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MaxAgeRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxAgeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxAgeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maxAgeType.c_str(), allocator).Move(), allocator);
    }

    if (m_maxAgeContentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxAgeContents";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_maxAgeContents.begin(); itr != m_maxAgeContents.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_maxAgeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxAgeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxAgeTime, allocator);
    }

    if (m_followOriginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FollowOrigin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_followOrigin.c_str(), allocator).Move(), allocator);
    }

}


string MaxAgeRule::GetMaxAgeType() const
{
    return m_maxAgeType;
}

void MaxAgeRule::SetMaxAgeType(const string& _maxAgeType)
{
    m_maxAgeType = _maxAgeType;
    m_maxAgeTypeHasBeenSet = true;
}

bool MaxAgeRule::MaxAgeTypeHasBeenSet() const
{
    return m_maxAgeTypeHasBeenSet;
}

vector<string> MaxAgeRule::GetMaxAgeContents() const
{
    return m_maxAgeContents;
}

void MaxAgeRule::SetMaxAgeContents(const vector<string>& _maxAgeContents)
{
    m_maxAgeContents = _maxAgeContents;
    m_maxAgeContentsHasBeenSet = true;
}

bool MaxAgeRule::MaxAgeContentsHasBeenSet() const
{
    return m_maxAgeContentsHasBeenSet;
}

int64_t MaxAgeRule::GetMaxAgeTime() const
{
    return m_maxAgeTime;
}

void MaxAgeRule::SetMaxAgeTime(const int64_t& _maxAgeTime)
{
    m_maxAgeTime = _maxAgeTime;
    m_maxAgeTimeHasBeenSet = true;
}

bool MaxAgeRule::MaxAgeTimeHasBeenSet() const
{
    return m_maxAgeTimeHasBeenSet;
}

string MaxAgeRule::GetFollowOrigin() const
{
    return m_followOrigin;
}

void MaxAgeRule::SetFollowOrigin(const string& _followOrigin)
{
    m_followOrigin = _followOrigin;
    m_followOriginHasBeenSet = true;
}

bool MaxAgeRule::FollowOriginHasBeenSet() const
{
    return m_followOriginHasBeenSet;
}

