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

#include <tencentcloud/ccc/v20200210/model/AICallExtractResultInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

AICallExtractResultInfo::AICallExtractResultInfo() :
    m_textHasBeenSet(false),
    m_chosenHasBeenSet(false),
    m_booleanHasBeenSet(false),
    m_numberHasBeenSet(false)
{
}

CoreInternalOutcome AICallExtractResultInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AICallExtractResultInfo.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("Chosen") && !value["Chosen"].IsNull())
    {
        if (!value["Chosen"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AICallExtractResultInfo.Chosen` is not array type"));

        const rapidjson::Value &tmpValue = value["Chosen"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_chosen.push_back((*itr).GetString());
        }
        m_chosenHasBeenSet = true;
    }

    if (value.HasMember("Boolean") && !value["Boolean"].IsNull())
    {
        if (!value["Boolean"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AICallExtractResultInfo.Boolean` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_boolean = value["Boolean"].GetBool();
        m_booleanHasBeenSet = true;
    }

    if (value.HasMember("Number") && !value["Number"].IsNull())
    {
        if (!value["Number"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AICallExtractResultInfo.Number` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_number = value["Number"].GetDouble();
        m_numberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AICallExtractResultInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_chosenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Chosen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_chosen.begin(); itr != m_chosen.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_booleanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Boolean";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_boolean, allocator);
    }

    if (m_numberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_number, allocator);
    }

}


string AICallExtractResultInfo::GetText() const
{
    return m_text;
}

void AICallExtractResultInfo::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool AICallExtractResultInfo::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

vector<string> AICallExtractResultInfo::GetChosen() const
{
    return m_chosen;
}

void AICallExtractResultInfo::SetChosen(const vector<string>& _chosen)
{
    m_chosen = _chosen;
    m_chosenHasBeenSet = true;
}

bool AICallExtractResultInfo::ChosenHasBeenSet() const
{
    return m_chosenHasBeenSet;
}

bool AICallExtractResultInfo::GetBoolean() const
{
    return m_boolean;
}

void AICallExtractResultInfo::SetBoolean(const bool& _boolean)
{
    m_boolean = _boolean;
    m_booleanHasBeenSet = true;
}

bool AICallExtractResultInfo::BooleanHasBeenSet() const
{
    return m_booleanHasBeenSet;
}

double AICallExtractResultInfo::GetNumber() const
{
    return m_number;
}

void AICallExtractResultInfo::SetNumber(const double& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool AICallExtractResultInfo::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

