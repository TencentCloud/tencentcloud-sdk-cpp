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

#include <tencentcloud/cdn/v20180606/model/MaxAgeCodeRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

MaxAgeCodeRule::MaxAgeCodeRule() :
    m_actionHasBeenSet(false),
    m_statusCodesHasBeenSet(false)
{
}

CoreInternalOutcome MaxAgeCodeRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaxAgeCodeRule.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("StatusCodes") && !value["StatusCodes"].IsNull())
    {
        if (!value["StatusCodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MaxAgeCodeRule.StatusCodes` is not array type"));

        const rapidjson::Value &tmpValue = value["StatusCodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_statusCodes.push_back((*itr).GetString());
        }
        m_statusCodesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MaxAgeCodeRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_statusCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusCodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_statusCodes.begin(); itr != m_statusCodes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string MaxAgeCodeRule::GetAction() const
{
    return m_action;
}

void MaxAgeCodeRule::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool MaxAgeCodeRule::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

vector<string> MaxAgeCodeRule::GetStatusCodes() const
{
    return m_statusCodes;
}

void MaxAgeCodeRule::SetStatusCodes(const vector<string>& _statusCodes)
{
    m_statusCodes = _statusCodes;
    m_statusCodesHasBeenSet = true;
}

bool MaxAgeCodeRule::StatusCodesHasBeenSet() const
{
    return m_statusCodesHasBeenSet;
}

