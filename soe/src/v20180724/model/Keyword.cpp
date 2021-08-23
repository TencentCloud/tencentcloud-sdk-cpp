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

#include <tencentcloud/soe/v20180724/model/Keyword.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Soe::V20180724::Model;
using namespace std;

Keyword::Keyword() :
    m_refTextHasBeenSet(false),
    m_evalModeHasBeenSet(false),
    m_scoreCoeffHasBeenSet(false),
    m_serverTypeHasBeenSet(false),
    m_textModeHasBeenSet(false)
{
}

CoreInternalOutcome Keyword::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RefText") && !value["RefText"].IsNull())
    {
        if (!value["RefText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Keyword.RefText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_refText = string(value["RefText"].GetString());
        m_refTextHasBeenSet = true;
    }

    if (value.HasMember("EvalMode") && !value["EvalMode"].IsNull())
    {
        if (!value["EvalMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Keyword.EvalMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_evalMode = value["EvalMode"].GetUint64();
        m_evalModeHasBeenSet = true;
    }

    if (value.HasMember("ScoreCoeff") && !value["ScoreCoeff"].IsNull())
    {
        if (!value["ScoreCoeff"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Keyword.ScoreCoeff` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_scoreCoeff = value["ScoreCoeff"].GetDouble();
        m_scoreCoeffHasBeenSet = true;
    }

    if (value.HasMember("ServerType") && !value["ServerType"].IsNull())
    {
        if (!value["ServerType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Keyword.ServerType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_serverType = value["ServerType"].GetUint64();
        m_serverTypeHasBeenSet = true;
    }

    if (value.HasMember("TextMode") && !value["TextMode"].IsNull())
    {
        if (!value["TextMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Keyword.TextMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_textMode = value["TextMode"].GetUint64();
        m_textModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Keyword::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_refTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_refText.c_str(), allocator).Move(), allocator);
    }

    if (m_evalModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvalMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_evalMode, allocator);
    }

    if (m_scoreCoeffHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScoreCoeff";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scoreCoeff, allocator);
    }

    if (m_serverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serverType, allocator);
    }

    if (m_textModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_textMode, allocator);
    }

}


string Keyword::GetRefText() const
{
    return m_refText;
}

void Keyword::SetRefText(const string& _refText)
{
    m_refText = _refText;
    m_refTextHasBeenSet = true;
}

bool Keyword::RefTextHasBeenSet() const
{
    return m_refTextHasBeenSet;
}

uint64_t Keyword::GetEvalMode() const
{
    return m_evalMode;
}

void Keyword::SetEvalMode(const uint64_t& _evalMode)
{
    m_evalMode = _evalMode;
    m_evalModeHasBeenSet = true;
}

bool Keyword::EvalModeHasBeenSet() const
{
    return m_evalModeHasBeenSet;
}

double Keyword::GetScoreCoeff() const
{
    return m_scoreCoeff;
}

void Keyword::SetScoreCoeff(const double& _scoreCoeff)
{
    m_scoreCoeff = _scoreCoeff;
    m_scoreCoeffHasBeenSet = true;
}

bool Keyword::ScoreCoeffHasBeenSet() const
{
    return m_scoreCoeffHasBeenSet;
}

uint64_t Keyword::GetServerType() const
{
    return m_serverType;
}

void Keyword::SetServerType(const uint64_t& _serverType)
{
    m_serverType = _serverType;
    m_serverTypeHasBeenSet = true;
}

bool Keyword::ServerTypeHasBeenSet() const
{
    return m_serverTypeHasBeenSet;
}

uint64_t Keyword::GetTextMode() const
{
    return m_textMode;
}

void Keyword::SetTextMode(const uint64_t& _textMode)
{
    m_textMode = _textMode;
    m_textModeHasBeenSet = true;
}

bool Keyword::TextModeHasBeenSet() const
{
    return m_textModeHasBeenSet;
}

