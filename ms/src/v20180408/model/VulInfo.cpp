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

#include <tencentcloud/ms/v20180408/model/VulInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

VulInfo::VulInfo() :
    m_vulListHasBeenSet(false),
    m_vulFileScoreHasBeenSet(false)
{
}

CoreInternalOutcome VulInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VulList") && !value["VulList"].IsNull())
    {
        if (!value["VulList"].IsArray())
            return CoreInternalOutcome(Error("response `VulInfo.VulList` is not array type"));

        const rapidjson::Value &tmpValue = value["VulList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VulList item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vulList.push_back(item);
        }
        m_vulListHasBeenSet = true;
    }

    if (value.HasMember("VulFileScore") && !value["VulFileScore"].IsNull())
    {
        if (!value["VulFileScore"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `VulInfo.VulFileScore` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulFileScore = value["VulFileScore"].GetUint64();
        m_vulFileScoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vulListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vulList.begin(); itr != m_vulList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_vulFileScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulFileScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulFileScore, allocator);
    }

}


vector<VulList> VulInfo::GetVulList() const
{
    return m_vulList;
}

void VulInfo::SetVulList(const vector<VulList>& _vulList)
{
    m_vulList = _vulList;
    m_vulListHasBeenSet = true;
}

bool VulInfo::VulListHasBeenSet() const
{
    return m_vulListHasBeenSet;
}

uint64_t VulInfo::GetVulFileScore() const
{
    return m_vulFileScore;
}

void VulInfo::SetVulFileScore(const uint64_t& _vulFileScore)
{
    m_vulFileScore = _vulFileScore;
    m_vulFileScoreHasBeenSet = true;
}

bool VulInfo::VulFileScoreHasBeenSet() const
{
    return m_vulFileScoreHasBeenSet;
}

