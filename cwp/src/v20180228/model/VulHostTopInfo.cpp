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

#include <tencentcloud/cwp/v20180228/model/VulHostTopInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

VulHostTopInfo::VulHostTopInfo() :
    m_hostNameHasBeenSet(false),
    m_vulLevelListHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_scoreHasBeenSet(false)
{
}

CoreInternalOutcome VulHostTopInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulHostTopInfo.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("VulLevelList") && !value["VulLevelList"].IsNull())
    {
        if (!value["VulLevelList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulHostTopInfo.VulLevelList` is not array type"));

        const rapidjson::Value &tmpValue = value["VulLevelList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VulLevelCountInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vulLevelList.push_back(item);
        }
        m_vulLevelListHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulHostTopInfo.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulHostTopInfo.Score` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetUint64();
        m_scoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulHostTopInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_vulLevelListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulLevelList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vulLevelList.begin(); itr != m_vulLevelList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

}


string VulHostTopInfo::GetHostName() const
{
    return m_hostName;
}

void VulHostTopInfo::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool VulHostTopInfo::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

vector<VulLevelCountInfo> VulHostTopInfo::GetVulLevelList() const
{
    return m_vulLevelList;
}

void VulHostTopInfo::SetVulLevelList(const vector<VulLevelCountInfo>& _vulLevelList)
{
    m_vulLevelList = _vulLevelList;
    m_vulLevelListHasBeenSet = true;
}

bool VulHostTopInfo::VulLevelListHasBeenSet() const
{
    return m_vulLevelListHasBeenSet;
}

string VulHostTopInfo::GetQuuid() const
{
    return m_quuid;
}

void VulHostTopInfo::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool VulHostTopInfo::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

uint64_t VulHostTopInfo::GetScore() const
{
    return m_score;
}

void VulHostTopInfo::SetScore(const uint64_t& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool VulHostTopInfo::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

