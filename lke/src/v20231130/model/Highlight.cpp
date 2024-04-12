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

#include <tencentcloud/lke/v20231130/model/Highlight.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

Highlight::Highlight() :
    m_startPosHasBeenSet(false),
    m_endPosHasBeenSet(false),
    m_textHasBeenSet(false)
{
}

CoreInternalOutcome Highlight::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartPos") && !value["StartPos"].IsNull())
    {
        if (!value["StartPos"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Highlight.StartPos` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startPos = string(value["StartPos"].GetString());
        m_startPosHasBeenSet = true;
    }

    if (value.HasMember("EndPos") && !value["EndPos"].IsNull())
    {
        if (!value["EndPos"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Highlight.EndPos` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endPos = string(value["EndPos"].GetString());
        m_endPosHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Highlight.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Highlight::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startPosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartPos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startPos.c_str(), allocator).Move(), allocator);
    }

    if (m_endPosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endPos.c_str(), allocator).Move(), allocator);
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

}


string Highlight::GetStartPos() const
{
    return m_startPos;
}

void Highlight::SetStartPos(const string& _startPos)
{
    m_startPos = _startPos;
    m_startPosHasBeenSet = true;
}

bool Highlight::StartPosHasBeenSet() const
{
    return m_startPosHasBeenSet;
}

string Highlight::GetEndPos() const
{
    return m_endPos;
}

void Highlight::SetEndPos(const string& _endPos)
{
    m_endPos = _endPos;
    m_endPosHasBeenSet = true;
}

bool Highlight::EndPosHasBeenSet() const
{
    return m_endPosHasBeenSet;
}

string Highlight::GetText() const
{
    return m_text;
}

void Highlight::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool Highlight::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

