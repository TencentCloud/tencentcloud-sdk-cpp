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

#include <tencentcloud/teo/v20220106/model/ACLCondition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

ACLCondition::ACLCondition() :
    m_matchFromHasBeenSet(false),
    m_matchParamHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_matchContentHasBeenSet(false)
{
}

CoreInternalOutcome ACLCondition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MatchFrom") && !value["MatchFrom"].IsNull())
    {
        if (!value["MatchFrom"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ACLCondition.MatchFrom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchFrom = string(value["MatchFrom"].GetString());
        m_matchFromHasBeenSet = true;
    }

    if (value.HasMember("MatchParam") && !value["MatchParam"].IsNull())
    {
        if (!value["MatchParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ACLCondition.MatchParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchParam = string(value["MatchParam"].GetString());
        m_matchParamHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ACLCondition.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("MatchContent") && !value["MatchContent"].IsNull())
    {
        if (!value["MatchContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ACLCondition.MatchContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchContent = string(value["MatchContent"].GetString());
        m_matchContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ACLCondition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_matchFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_matchParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchParam.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_matchContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchContent.c_str(), allocator).Move(), allocator);
    }

}


string ACLCondition::GetMatchFrom() const
{
    return m_matchFrom;
}

void ACLCondition::SetMatchFrom(const string& _matchFrom)
{
    m_matchFrom = _matchFrom;
    m_matchFromHasBeenSet = true;
}

bool ACLCondition::MatchFromHasBeenSet() const
{
    return m_matchFromHasBeenSet;
}

string ACLCondition::GetMatchParam() const
{
    return m_matchParam;
}

void ACLCondition::SetMatchParam(const string& _matchParam)
{
    m_matchParam = _matchParam;
    m_matchParamHasBeenSet = true;
}

bool ACLCondition::MatchParamHasBeenSet() const
{
    return m_matchParamHasBeenSet;
}

string ACLCondition::GetOperator() const
{
    return m_operator;
}

void ACLCondition::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ACLCondition::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string ACLCondition::GetMatchContent() const
{
    return m_matchContent;
}

void ACLCondition::SetMatchContent(const string& _matchContent)
{
    m_matchContent = _matchContent;
    m_matchContentHasBeenSet = true;
}

bool ACLCondition::MatchContentHasBeenSet() const
{
    return m_matchContentHasBeenSet;
}

