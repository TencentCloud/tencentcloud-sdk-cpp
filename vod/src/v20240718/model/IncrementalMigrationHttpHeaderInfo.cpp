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

#include <tencentcloud/vod/v20240718/model/IncrementalMigrationHttpHeaderInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20240718::Model;
using namespace std;

IncrementalMigrationHttpHeaderInfo::IncrementalMigrationHttpHeaderInfo() :
    m_headerFollowModeHasBeenSet(false),
    m_followHttpHeaderKeySetHasBeenSet(false),
    m_newHttpHeaderSetHasBeenSet(false)
{
}

CoreInternalOutcome IncrementalMigrationHttpHeaderInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HeaderFollowMode") && !value["HeaderFollowMode"].IsNull())
    {
        if (!value["HeaderFollowMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementalMigrationHttpHeaderInfo.HeaderFollowMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_headerFollowMode = string(value["HeaderFollowMode"].GetString());
        m_headerFollowModeHasBeenSet = true;
    }

    if (value.HasMember("FollowHttpHeaderKeySet") && !value["FollowHttpHeaderKeySet"].IsNull())
    {
        if (!value["FollowHttpHeaderKeySet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IncrementalMigrationHttpHeaderInfo.FollowHttpHeaderKeySet` is not array type"));

        const rapidjson::Value &tmpValue = value["FollowHttpHeaderKeySet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_followHttpHeaderKeySet.push_back((*itr).GetString());
        }
        m_followHttpHeaderKeySetHasBeenSet = true;
    }

    if (value.HasMember("NewHttpHeaderSet") && !value["NewHttpHeaderSet"].IsNull())
    {
        if (!value["NewHttpHeaderSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IncrementalMigrationHttpHeaderInfo.NewHttpHeaderSet` is not array type"));

        const rapidjson::Value &tmpValue = value["NewHttpHeaderSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IncrementalMigrationHttpHeader item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_newHttpHeaderSet.push_back(item);
        }
        m_newHttpHeaderSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IncrementalMigrationHttpHeaderInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_headerFollowModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeaderFollowMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_headerFollowMode.c_str(), allocator).Move(), allocator);
    }

    if (m_followHttpHeaderKeySetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FollowHttpHeaderKeySet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_followHttpHeaderKeySet.begin(); itr != m_followHttpHeaderKeySet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_newHttpHeaderSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewHttpHeaderSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_newHttpHeaderSet.begin(); itr != m_newHttpHeaderSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string IncrementalMigrationHttpHeaderInfo::GetHeaderFollowMode() const
{
    return m_headerFollowMode;
}

void IncrementalMigrationHttpHeaderInfo::SetHeaderFollowMode(const string& _headerFollowMode)
{
    m_headerFollowMode = _headerFollowMode;
    m_headerFollowModeHasBeenSet = true;
}

bool IncrementalMigrationHttpHeaderInfo::HeaderFollowModeHasBeenSet() const
{
    return m_headerFollowModeHasBeenSet;
}

vector<string> IncrementalMigrationHttpHeaderInfo::GetFollowHttpHeaderKeySet() const
{
    return m_followHttpHeaderKeySet;
}

void IncrementalMigrationHttpHeaderInfo::SetFollowHttpHeaderKeySet(const vector<string>& _followHttpHeaderKeySet)
{
    m_followHttpHeaderKeySet = _followHttpHeaderKeySet;
    m_followHttpHeaderKeySetHasBeenSet = true;
}

bool IncrementalMigrationHttpHeaderInfo::FollowHttpHeaderKeySetHasBeenSet() const
{
    return m_followHttpHeaderKeySetHasBeenSet;
}

vector<IncrementalMigrationHttpHeader> IncrementalMigrationHttpHeaderInfo::GetNewHttpHeaderSet() const
{
    return m_newHttpHeaderSet;
}

void IncrementalMigrationHttpHeaderInfo::SetNewHttpHeaderSet(const vector<IncrementalMigrationHttpHeader>& _newHttpHeaderSet)
{
    m_newHttpHeaderSet = _newHttpHeaderSet;
    m_newHttpHeaderSetHasBeenSet = true;
}

bool IncrementalMigrationHttpHeaderInfo::NewHttpHeaderSetHasBeenSet() const
{
    return m_newHttpHeaderSetHasBeenSet;
}

