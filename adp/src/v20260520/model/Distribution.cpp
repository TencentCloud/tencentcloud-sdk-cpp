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

#include <tencentcloud/adp/v20260520/model/Distribution.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

Distribution::Distribution() :
    m_callCountHasBeenSet(false),
    m_percentageHasBeenSet(false),
    m_replyNameHasBeenSet(false)
{
}

CoreInternalOutcome Distribution::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CallCount") && !value["CallCount"].IsNull())
    {
        if (!value["CallCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Distribution.CallCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callCount = string(value["CallCount"].GetString());
        m_callCountHasBeenSet = true;
    }

    if (value.HasMember("Percentage") && !value["Percentage"].IsNull())
    {
        if (!value["Percentage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Distribution.Percentage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_percentage = value["Percentage"].GetDouble();
        m_percentageHasBeenSet = true;
    }

    if (value.HasMember("ReplyName") && !value["ReplyName"].IsNull())
    {
        if (!value["ReplyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Distribution.ReplyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replyName = string(value["ReplyName"].GetString());
        m_replyNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Distribution::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_callCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callCount.c_str(), allocator).Move(), allocator);
    }

    if (m_percentageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percentage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percentage, allocator);
    }

    if (m_replyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replyName.c_str(), allocator).Move(), allocator);
    }

}


string Distribution::GetCallCount() const
{
    return m_callCount;
}

void Distribution::SetCallCount(const string& _callCount)
{
    m_callCount = _callCount;
    m_callCountHasBeenSet = true;
}

bool Distribution::CallCountHasBeenSet() const
{
    return m_callCountHasBeenSet;
}

double Distribution::GetPercentage() const
{
    return m_percentage;
}

void Distribution::SetPercentage(const double& _percentage)
{
    m_percentage = _percentage;
    m_percentageHasBeenSet = true;
}

bool Distribution::PercentageHasBeenSet() const
{
    return m_percentageHasBeenSet;
}

string Distribution::GetReplyName() const
{
    return m_replyName;
}

void Distribution::SetReplyName(const string& _replyName)
{
    m_replyName = _replyName;
    m_replyNameHasBeenSet = true;
}

bool Distribution::ReplyNameHasBeenSet() const
{
    return m_replyNameHasBeenSet;
}

