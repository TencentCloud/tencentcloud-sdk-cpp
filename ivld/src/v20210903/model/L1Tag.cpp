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

#include <tencentcloud/ivld/v20210903/model/L1Tag.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

L1Tag::L1Tag() :
    m_nameHasBeenSet(false),
    m_l2TagSetHasBeenSet(false),
    m_appearIndexPairSetHasBeenSet(false),
    m_firstAppearHasBeenSet(false)
{
}

CoreInternalOutcome L1Tag::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L1Tag.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("L2TagSet") && !value["L2TagSet"].IsNull())
    {
        if (!value["L2TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `L1Tag.L2TagSet` is not array type"));

        const rapidjson::Value &tmpValue = value["L2TagSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            L2Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_l2TagSet.push_back(item);
        }
        m_l2TagSetHasBeenSet = true;
    }

    if (value.HasMember("AppearIndexPairSet") && !value["AppearIndexPairSet"].IsNull())
    {
        if (!value["AppearIndexPairSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `L1Tag.AppearIndexPairSet` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `L1Tag.FirstAppear` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_firstAppear = value["FirstAppear"].GetInt64();
        m_firstAppearHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void L1Tag::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_l2TagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "L2TagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_l2TagSet.begin(); itr != m_l2TagSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


string L1Tag::GetName() const
{
    return m_name;
}

void L1Tag::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool L1Tag::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<L2Tag> L1Tag::GetL2TagSet() const
{
    return m_l2TagSet;
}

void L1Tag::SetL2TagSet(const vector<L2Tag>& _l2TagSet)
{
    m_l2TagSet = _l2TagSet;
    m_l2TagSetHasBeenSet = true;
}

bool L1Tag::L2TagSetHasBeenSet() const
{
    return m_l2TagSetHasBeenSet;
}

vector<AppearIndexPair> L1Tag::GetAppearIndexPairSet() const
{
    return m_appearIndexPairSet;
}

void L1Tag::SetAppearIndexPairSet(const vector<AppearIndexPair>& _appearIndexPairSet)
{
    m_appearIndexPairSet = _appearIndexPairSet;
    m_appearIndexPairSetHasBeenSet = true;
}

bool L1Tag::AppearIndexPairSetHasBeenSet() const
{
    return m_appearIndexPairSetHasBeenSet;
}

int64_t L1Tag::GetFirstAppear() const
{
    return m_firstAppear;
}

void L1Tag::SetFirstAppear(const int64_t& _firstAppear)
{
    m_firstAppear = _firstAppear;
    m_firstAppearHasBeenSet = true;
}

bool L1Tag::FirstAppearHasBeenSet() const
{
    return m_firstAppearHasBeenSet;
}

