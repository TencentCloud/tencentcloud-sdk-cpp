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

#include <tencentcloud/csip/v20221121/model/UebaUserSummaryElement.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

UebaUserSummaryElement::UebaUserSummaryElement() :
    m_memberIDHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_userIDHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome UebaUserSummaryElement::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MemberID") && !value["MemberID"].IsNull())
    {
        if (!value["MemberID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UebaUserSummaryElement.MemberID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memberID = string(value["MemberID"].GetString());
        m_memberIDHasBeenSet = true;
    }

    if (value.HasMember("LogType") && !value["LogType"].IsNull())
    {
        if (!value["LogType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UebaUserSummaryElement.LogType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logType = string(value["LogType"].GetString());
        m_logTypeHasBeenSet = true;
    }

    if (value.HasMember("UserID") && !value["UserID"].IsNull())
    {
        if (!value["UserID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UebaUserSummaryElement.UserID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userID = string(value["UserID"].GetString());
        m_userIDHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UebaUserSummaryElement.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UebaUserSummaryElement::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_memberIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memberID.c_str(), allocator).Move(), allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_userIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userID.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


string UebaUserSummaryElement::GetMemberID() const
{
    return m_memberID;
}

void UebaUserSummaryElement::SetMemberID(const string& _memberID)
{
    m_memberID = _memberID;
    m_memberIDHasBeenSet = true;
}

bool UebaUserSummaryElement::MemberIDHasBeenSet() const
{
    return m_memberIDHasBeenSet;
}

string UebaUserSummaryElement::GetLogType() const
{
    return m_logType;
}

void UebaUserSummaryElement::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool UebaUserSummaryElement::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

string UebaUserSummaryElement::GetUserID() const
{
    return m_userID;
}

void UebaUserSummaryElement::SetUserID(const string& _userID)
{
    m_userID = _userID;
    m_userIDHasBeenSet = true;
}

bool UebaUserSummaryElement::UserIDHasBeenSet() const
{
    return m_userIDHasBeenSet;
}

uint64_t UebaUserSummaryElement::GetCount() const
{
    return m_count;
}

void UebaUserSummaryElement::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool UebaUserSummaryElement::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

