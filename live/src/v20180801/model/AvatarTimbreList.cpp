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

#include <tencentcloud/live/v20180801/model/AvatarTimbreList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

AvatarTimbreList::AvatarTimbreList() :
    m_timbreTypeHasBeenSet(false),
    m_timbreInfoListHasBeenSet(false)
{
}

CoreInternalOutcome AvatarTimbreList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TimbreType") && !value["TimbreType"].IsNull())
    {
        if (!value["TimbreType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarTimbreList.TimbreType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timbreType = string(value["TimbreType"].GetString());
        m_timbreTypeHasBeenSet = true;
    }

    if (value.HasMember("TimbreInfoList") && !value["TimbreInfoList"].IsNull())
    {
        if (!value["TimbreInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AvatarTimbreList.TimbreInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["TimbreInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AvatarTimbreInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_timbreInfoList.push_back(item);
        }
        m_timbreInfoListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AvatarTimbreList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timbreTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimbreType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timbreType.c_str(), allocator).Move(), allocator);
    }

    if (m_timbreInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimbreInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_timbreInfoList.begin(); itr != m_timbreInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AvatarTimbreList::GetTimbreType() const
{
    return m_timbreType;
}

void AvatarTimbreList::SetTimbreType(const string& _timbreType)
{
    m_timbreType = _timbreType;
    m_timbreTypeHasBeenSet = true;
}

bool AvatarTimbreList::TimbreTypeHasBeenSet() const
{
    return m_timbreTypeHasBeenSet;
}

vector<AvatarTimbreInfo> AvatarTimbreList::GetTimbreInfoList() const
{
    return m_timbreInfoList;
}

void AvatarTimbreList::SetTimbreInfoList(const vector<AvatarTimbreInfo>& _timbreInfoList)
{
    m_timbreInfoList = _timbreInfoList;
    m_timbreInfoListHasBeenSet = true;
}

bool AvatarTimbreList::TimbreInfoListHasBeenSet() const
{
    return m_timbreInfoListHasBeenSet;
}

