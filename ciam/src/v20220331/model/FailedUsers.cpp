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

#include <tencentcloud/ciam/v20220331/model/FailedUsers.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ciam::V20220331::Model;
using namespace std;

FailedUsers::FailedUsers() :
    m_failedUserIdentificationHasBeenSet(false),
    m_failedReasonHasBeenSet(false)
{
}

CoreInternalOutcome FailedUsers::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FailedUserIdentification") && !value["FailedUserIdentification"].IsNull())
    {
        if (!value["FailedUserIdentification"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FailedUsers.FailedUserIdentification` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failedUserIdentification = string(value["FailedUserIdentification"].GetString());
        m_failedUserIdentificationHasBeenSet = true;
    }

    if (value.HasMember("FailedReason") && !value["FailedReason"].IsNull())
    {
        if (!value["FailedReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FailedUsers.FailedReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failedReason = string(value["FailedReason"].GetString());
        m_failedReasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FailedUsers::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_failedUserIdentificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedUserIdentification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failedUserIdentification.c_str(), allocator).Move(), allocator);
    }

    if (m_failedReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failedReason.c_str(), allocator).Move(), allocator);
    }

}


string FailedUsers::GetFailedUserIdentification() const
{
    return m_failedUserIdentification;
}

void FailedUsers::SetFailedUserIdentification(const string& _failedUserIdentification)
{
    m_failedUserIdentification = _failedUserIdentification;
    m_failedUserIdentificationHasBeenSet = true;
}

bool FailedUsers::FailedUserIdentificationHasBeenSet() const
{
    return m_failedUserIdentificationHasBeenSet;
}

string FailedUsers::GetFailedReason() const
{
    return m_failedReason;
}

void FailedUsers::SetFailedReason(const string& _failedReason)
{
    m_failedReason = _failedReason;
    m_failedReasonHasBeenSet = true;
}

bool FailedUsers::FailedReasonHasBeenSet() const
{
    return m_failedReasonHasBeenSet;
}

