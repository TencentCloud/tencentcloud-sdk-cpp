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

#include <tencentcloud/tci/v20190318/model/HighlightsInfomation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

HighlightsInfomation::HighlightsInfomation() :
    m_concentrationHasBeenSet(false),
    m_smileHasBeenSet(false),
    m_highlightsUrlHasBeenSet(false),
    m_personIdHasBeenSet(false)
{
}

CoreInternalOutcome HighlightsInfomation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Concentration") && !value["Concentration"].IsNull())
    {
        if (!value["Concentration"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HighlightsInfomation.Concentration` is not array type"));

        const rapidjson::Value &tmpValue = value["Concentration"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TimeType item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_concentration.push_back(item);
        }
        m_concentrationHasBeenSet = true;
    }

    if (value.HasMember("Smile") && !value["Smile"].IsNull())
    {
        if (!value["Smile"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HighlightsInfomation.Smile` is not array type"));

        const rapidjson::Value &tmpValue = value["Smile"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TimeType item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_smile.push_back(item);
        }
        m_smileHasBeenSet = true;
    }

    if (value.HasMember("HighlightsUrl") && !value["HighlightsUrl"].IsNull())
    {
        if (!value["HighlightsUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighlightsInfomation.HighlightsUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_highlightsUrl = string(value["HighlightsUrl"].GetString());
        m_highlightsUrlHasBeenSet = true;
    }

    if (value.HasMember("PersonId") && !value["PersonId"].IsNull())
    {
        if (!value["PersonId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighlightsInfomation.PersonId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personId = string(value["PersonId"].GetString());
        m_personIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HighlightsInfomation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_concentrationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Concentration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_concentration.begin(); itr != m_concentration.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_smileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Smile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_smile.begin(); itr != m_smile.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_highlightsUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighlightsUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_highlightsUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_personIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personId.c_str(), allocator).Move(), allocator);
    }

}


vector<TimeType> HighlightsInfomation::GetConcentration() const
{
    return m_concentration;
}

void HighlightsInfomation::SetConcentration(const vector<TimeType>& _concentration)
{
    m_concentration = _concentration;
    m_concentrationHasBeenSet = true;
}

bool HighlightsInfomation::ConcentrationHasBeenSet() const
{
    return m_concentrationHasBeenSet;
}

vector<TimeType> HighlightsInfomation::GetSmile() const
{
    return m_smile;
}

void HighlightsInfomation::SetSmile(const vector<TimeType>& _smile)
{
    m_smile = _smile;
    m_smileHasBeenSet = true;
}

bool HighlightsInfomation::SmileHasBeenSet() const
{
    return m_smileHasBeenSet;
}

string HighlightsInfomation::GetHighlightsUrl() const
{
    return m_highlightsUrl;
}

void HighlightsInfomation::SetHighlightsUrl(const string& _highlightsUrl)
{
    m_highlightsUrl = _highlightsUrl;
    m_highlightsUrlHasBeenSet = true;
}

bool HighlightsInfomation::HighlightsUrlHasBeenSet() const
{
    return m_highlightsUrlHasBeenSet;
}

string HighlightsInfomation::GetPersonId() const
{
    return m_personId;
}

void HighlightsInfomation::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool HighlightsInfomation::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

