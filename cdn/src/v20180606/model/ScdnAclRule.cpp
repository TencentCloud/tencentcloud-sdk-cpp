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

#include <tencentcloud/cdn/v20180606/model/ScdnAclRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

ScdnAclRule::ScdnAclRule() :
    m_matchKeyHasBeenSet(false),
    m_logiOperatorHasBeenSet(false),
    m_matchValueHasBeenSet(false)
{
}

CoreInternalOutcome ScdnAclRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MatchKey") && !value["MatchKey"].IsNull())
    {
        if (!value["MatchKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnAclRule.MatchKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchKey = string(value["MatchKey"].GetString());
        m_matchKeyHasBeenSet = true;
    }

    if (value.HasMember("LogiOperator") && !value["LogiOperator"].IsNull())
    {
        if (!value["LogiOperator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnAclRule.LogiOperator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logiOperator = string(value["LogiOperator"].GetString());
        m_logiOperatorHasBeenSet = true;
    }

    if (value.HasMember("MatchValue") && !value["MatchValue"].IsNull())
    {
        if (!value["MatchValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnAclRule.MatchValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchValue = string(value["MatchValue"].GetString());
        m_matchValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScdnAclRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_matchKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchKey.c_str(), allocator).Move(), allocator);
    }

    if (m_logiOperatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogiOperator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logiOperator.c_str(), allocator).Move(), allocator);
    }

    if (m_matchValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchValue.c_str(), allocator).Move(), allocator);
    }

}


string ScdnAclRule::GetMatchKey() const
{
    return m_matchKey;
}

void ScdnAclRule::SetMatchKey(const string& _matchKey)
{
    m_matchKey = _matchKey;
    m_matchKeyHasBeenSet = true;
}

bool ScdnAclRule::MatchKeyHasBeenSet() const
{
    return m_matchKeyHasBeenSet;
}

string ScdnAclRule::GetLogiOperator() const
{
    return m_logiOperator;
}

void ScdnAclRule::SetLogiOperator(const string& _logiOperator)
{
    m_logiOperator = _logiOperator;
    m_logiOperatorHasBeenSet = true;
}

bool ScdnAclRule::LogiOperatorHasBeenSet() const
{
    return m_logiOperatorHasBeenSet;
}

string ScdnAclRule::GetMatchValue() const
{
    return m_matchValue;
}

void ScdnAclRule::SetMatchValue(const string& _matchValue)
{
    m_matchValue = _matchValue;
    m_matchValueHasBeenSet = true;
}

bool ScdnAclRule::MatchValueHasBeenSet() const
{
    return m_matchValueHasBeenSet;
}

