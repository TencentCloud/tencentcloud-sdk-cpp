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

#include <tencentcloud/ivld/v20210903/model/L3Tag.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

L3Tag::L3Tag() :
    m_nameHasBeenSet(false),
    m_appearIndexPairSetHasBeenSet(false),
    m_firstAppearHasBeenSet(false)
{
}

CoreInternalOutcome L3Tag::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L3Tag.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("AppearIndexPairSet") && !value["AppearIndexPairSet"].IsNull())
    {
        if (!value["AppearIndexPairSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `L3Tag.AppearIndexPairSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AppearIndexPairSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AppearIndexPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_appearIndexPairSet.push_back(item);
        }
        m_appearIndexPairSetHasBeenSet = true;
    }

    if (value.HasMember("FirstAppear") && !value["FirstAppear"].IsNull())
    {
        if (!value["FirstAppear"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L3Tag.FirstAppear` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_firstAppear = value["FirstAppear"].GetInt64();
        m_firstAppearHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void L3Tag::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_appearIndexPairSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppearIndexPairSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_appearIndexPairSet.begin(); itr != m_appearIndexPairSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_firstAppearHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstAppear";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_firstAppear, allocator);
    }

}


string L3Tag::GetName() const
{
    return m_name;
}

void L3Tag::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool L3Tag::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<AppearIndexPair> L3Tag::GetAppearIndexPairSet() const
{
    return m_appearIndexPairSet;
}

void L3Tag::SetAppearIndexPairSet(const vector<AppearIndexPair>& _appearIndexPairSet)
{
    m_appearIndexPairSet = _appearIndexPairSet;
    m_appearIndexPairSetHasBeenSet = true;
}

bool L3Tag::AppearIndexPairSetHasBeenSet() const
{
    return m_appearIndexPairSetHasBeenSet;
}

int64_t L3Tag::GetFirstAppear() const
{
    return m_firstAppear;
}

void L3Tag::SetFirstAppear(const int64_t& _firstAppear)
{
    m_firstAppear = _firstAppear;
    m_firstAppearHasBeenSet = true;
}

bool L3Tag::FirstAppearHasBeenSet() const
{
    return m_firstAppearHasBeenSet;
}

