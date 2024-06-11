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

#include <tencentcloud/cam/v20190116/model/AuthToken.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

AuthToken::AuthToken() :
    m_tokenHasBeenSet(false),
    m_currentTimeHasBeenSet(false),
    m_nextRotationTimeHasBeenSet(false),
    m_lastRotationTimeCostHasBeenSet(false),
    m_rotationStatusHasBeenSet(false),
    m_rotationMessageHasBeenSet(false)
{
}

CoreInternalOutcome AuthToken::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Token") && !value["Token"].IsNull())
    {
        if (!value["Token"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthToken.Token` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_token = string(value["Token"].GetString());
        m_tokenHasBeenSet = true;
    }

    if (value.HasMember("CurrentTime") && !value["CurrentTime"].IsNull())
    {
        if (!value["CurrentTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthToken.CurrentTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentTime = value["CurrentTime"].GetInt64();
        m_currentTimeHasBeenSet = true;
    }

    if (value.HasMember("NextRotationTime") && !value["NextRotationTime"].IsNull())
    {
        if (!value["NextRotationTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthToken.NextRotationTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nextRotationTime = value["NextRotationTime"].GetInt64();
        m_nextRotationTimeHasBeenSet = true;
    }

    if (value.HasMember("LastRotationTimeCost") && !value["LastRotationTimeCost"].IsNull())
    {
        if (!value["LastRotationTimeCost"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthToken.LastRotationTimeCost` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastRotationTimeCost = value["LastRotationTimeCost"].GetInt64();
        m_lastRotationTimeCostHasBeenSet = true;
    }

    if (value.HasMember("RotationStatus") && !value["RotationStatus"].IsNull())
    {
        if (!value["RotationStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthToken.RotationStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rotationStatus = string(value["RotationStatus"].GetString());
        m_rotationStatusHasBeenSet = true;
    }

    if (value.HasMember("RotationMessage") && !value["RotationMessage"].IsNull())
    {
        if (!value["RotationMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthToken.RotationMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rotationMessage = string(value["RotationMessage"].GetString());
        m_rotationMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuthToken::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Token";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_token.c_str(), allocator).Move(), allocator);
    }

    if (m_currentTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentTime, allocator);
    }

    if (m_nextRotationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextRotationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nextRotationTime, allocator);
    }

    if (m_lastRotationTimeCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastRotationTimeCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastRotationTimeCost, allocator);
    }

    if (m_rotationStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RotationStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rotationStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_rotationMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RotationMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rotationMessage.c_str(), allocator).Move(), allocator);
    }

}


string AuthToken::GetToken() const
{
    return m_token;
}

void AuthToken::SetToken(const string& _token)
{
    m_token = _token;
    m_tokenHasBeenSet = true;
}

bool AuthToken::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}

int64_t AuthToken::GetCurrentTime() const
{
    return m_currentTime;
}

void AuthToken::SetCurrentTime(const int64_t& _currentTime)
{
    m_currentTime = _currentTime;
    m_currentTimeHasBeenSet = true;
}

bool AuthToken::CurrentTimeHasBeenSet() const
{
    return m_currentTimeHasBeenSet;
}

int64_t AuthToken::GetNextRotationTime() const
{
    return m_nextRotationTime;
}

void AuthToken::SetNextRotationTime(const int64_t& _nextRotationTime)
{
    m_nextRotationTime = _nextRotationTime;
    m_nextRotationTimeHasBeenSet = true;
}

bool AuthToken::NextRotationTimeHasBeenSet() const
{
    return m_nextRotationTimeHasBeenSet;
}

int64_t AuthToken::GetLastRotationTimeCost() const
{
    return m_lastRotationTimeCost;
}

void AuthToken::SetLastRotationTimeCost(const int64_t& _lastRotationTimeCost)
{
    m_lastRotationTimeCost = _lastRotationTimeCost;
    m_lastRotationTimeCostHasBeenSet = true;
}

bool AuthToken::LastRotationTimeCostHasBeenSet() const
{
    return m_lastRotationTimeCostHasBeenSet;
}

string AuthToken::GetRotationStatus() const
{
    return m_rotationStatus;
}

void AuthToken::SetRotationStatus(const string& _rotationStatus)
{
    m_rotationStatus = _rotationStatus;
    m_rotationStatusHasBeenSet = true;
}

bool AuthToken::RotationStatusHasBeenSet() const
{
    return m_rotationStatusHasBeenSet;
}

string AuthToken::GetRotationMessage() const
{
    return m_rotationMessage;
}

void AuthToken::SetRotationMessage(const string& _rotationMessage)
{
    m_rotationMessage = _rotationMessage;
    m_rotationMessageHasBeenSet = true;
}

bool AuthToken::RotationMessageHasBeenSet() const
{
    return m_rotationMessageHasBeenSet;
}

