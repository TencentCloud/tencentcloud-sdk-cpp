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

#include <tencentcloud/omics/v20221128/model/NotificationType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

NotificationType::NotificationType() :
    m_stationMessageHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_currentUserEmailHasBeenSet(false)
{
}

CoreInternalOutcome NotificationType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StationMessage") && !value["StationMessage"].IsNull())
    {
        if (!value["StationMessage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NotificationType.StationMessage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_stationMessage = value["StationMessage"].GetBool();
        m_stationMessageHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NotificationType.Email` is not array type"));

        const rapidjson::Value &tmpValue = value["Email"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_email.push_back((*itr).GetString());
        }
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("CurrentUserEmail") && !value["CurrentUserEmail"].IsNull())
    {
        if (!value["CurrentUserEmail"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NotificationType.CurrentUserEmail` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_currentUserEmail = value["CurrentUserEmail"].GetBool();
        m_currentUserEmailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NotificationType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_stationMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StationMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stationMessage, allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_email.begin(); itr != m_email.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_currentUserEmailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentUserEmail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentUserEmail, allocator);
    }

}


bool NotificationType::GetStationMessage() const
{
    return m_stationMessage;
}

void NotificationType::SetStationMessage(const bool& _stationMessage)
{
    m_stationMessage = _stationMessage;
    m_stationMessageHasBeenSet = true;
}

bool NotificationType::StationMessageHasBeenSet() const
{
    return m_stationMessageHasBeenSet;
}

vector<string> NotificationType::GetEmail() const
{
    return m_email;
}

void NotificationType::SetEmail(const vector<string>& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool NotificationType::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

bool NotificationType::GetCurrentUserEmail() const
{
    return m_currentUserEmail;
}

void NotificationType::SetCurrentUserEmail(const bool& _currentUserEmail)
{
    m_currentUserEmail = _currentUserEmail;
    m_currentUserEmailHasBeenSet = true;
}

bool NotificationType::CurrentUserEmailHasBeenSet() const
{
    return m_currentUserEmailHasBeenSet;
}

