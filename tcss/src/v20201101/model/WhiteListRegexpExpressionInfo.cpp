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

#include <tencentcloud/tcss/v20201101/model/WhiteListRegexpExpressionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

WhiteListRegexpExpressionInfo::WhiteListRegexpExpressionInfo() :
    m_logicSymbolHasBeenSet(false),
    m_matchFieldHasBeenSet(false),
    m_matchContentHasBeenSet(false)
{
}

CoreInternalOutcome WhiteListRegexpExpressionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogicSymbol") && !value["LogicSymbol"].IsNull())
    {
        if (!value["LogicSymbol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteListRegexpExpressionInfo.LogicSymbol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logicSymbol = string(value["LogicSymbol"].GetString());
        m_logicSymbolHasBeenSet = true;
    }

    if (value.HasMember("MatchField") && !value["MatchField"].IsNull())
    {
        if (!value["MatchField"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteListRegexpExpressionInfo.MatchField` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchField = string(value["MatchField"].GetString());
        m_matchFieldHasBeenSet = true;
    }

    if (value.HasMember("MatchContent") && !value["MatchContent"].IsNull())
    {
        if (!value["MatchContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteListRegexpExpressionInfo.MatchContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchContent = string(value["MatchContent"].GetString());
        m_matchContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WhiteListRegexpExpressionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logicSymbolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogicSymbol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logicSymbol.c_str(), allocator).Move(), allocator);
    }

    if (m_matchFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchField.c_str(), allocator).Move(), allocator);
    }

    if (m_matchContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchContent.c_str(), allocator).Move(), allocator);
    }

}


string WhiteListRegexpExpressionInfo::GetLogicSymbol() const
{
    return m_logicSymbol;
}

void WhiteListRegexpExpressionInfo::SetLogicSymbol(const string& _logicSymbol)
{
    m_logicSymbol = _logicSymbol;
    m_logicSymbolHasBeenSet = true;
}

bool WhiteListRegexpExpressionInfo::LogicSymbolHasBeenSet() const
{
    return m_logicSymbolHasBeenSet;
}

string WhiteListRegexpExpressionInfo::GetMatchField() const
{
    return m_matchField;
}

void WhiteListRegexpExpressionInfo::SetMatchField(const string& _matchField)
{
    m_matchField = _matchField;
    m_matchFieldHasBeenSet = true;
}

bool WhiteListRegexpExpressionInfo::MatchFieldHasBeenSet() const
{
    return m_matchFieldHasBeenSet;
}

string WhiteListRegexpExpressionInfo::GetMatchContent() const
{
    return m_matchContent;
}

void WhiteListRegexpExpressionInfo::SetMatchContent(const string& _matchContent)
{
    m_matchContent = _matchContent;
    m_matchContentHasBeenSet = true;
}

bool WhiteListRegexpExpressionInfo::MatchContentHasBeenSet() const
{
    return m_matchContentHasBeenSet;
}

