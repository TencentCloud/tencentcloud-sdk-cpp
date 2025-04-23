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

#include <tencentcloud/mps/v20190612/model/WordResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

WordResult::WordResult() :
    m_wordHasBeenSet(false),
    m_startHasBeenSet(false),
    m_endHasBeenSet(false),
    m_transHasBeenSet(false)
{
}

CoreInternalOutcome WordResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Word") && !value["Word"].IsNull())
    {
        if (!value["Word"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WordResult.Word` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_word = string(value["Word"].GetString());
        m_wordHasBeenSet = true;
    }

    if (value.HasMember("Start") && !value["Start"].IsNull())
    {
        if (!value["Start"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `WordResult.Start` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_start = value["Start"].GetDouble();
        m_startHasBeenSet = true;
    }

    if (value.HasMember("End") && !value["End"].IsNull())
    {
        if (!value["End"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `WordResult.End` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_end = value["End"].GetDouble();
        m_endHasBeenSet = true;
    }

    if (value.HasMember("Trans") && !value["Trans"].IsNull())
    {
        if (!value["Trans"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WordResult.Trans` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trans = string(value["Trans"].GetString());
        m_transHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WordResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_wordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Word";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_word.c_str(), allocator).Move(), allocator);
    }

    if (m_startHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Start";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_start, allocator);
    }

    if (m_endHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "End";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_end, allocator);
    }

    if (m_transHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trans";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trans.c_str(), allocator).Move(), allocator);
    }

}


string WordResult::GetWord() const
{
    return m_word;
}

void WordResult::SetWord(const string& _word)
{
    m_word = _word;
    m_wordHasBeenSet = true;
}

bool WordResult::WordHasBeenSet() const
{
    return m_wordHasBeenSet;
}

double WordResult::GetStart() const
{
    return m_start;
}

void WordResult::SetStart(const double& _start)
{
    m_start = _start;
    m_startHasBeenSet = true;
}

bool WordResult::StartHasBeenSet() const
{
    return m_startHasBeenSet;
}

double WordResult::GetEnd() const
{
    return m_end;
}

void WordResult::SetEnd(const double& _end)
{
    m_end = _end;
    m_endHasBeenSet = true;
}

bool WordResult::EndHasBeenSet() const
{
    return m_endHasBeenSet;
}

string WordResult::GetTrans() const
{
    return m_trans;
}

void WordResult::SetTrans(const string& _trans)
{
    m_trans = _trans;
    m_transHasBeenSet = true;
}

bool WordResult::TransHasBeenSet() const
{
    return m_transHasBeenSet;
}

