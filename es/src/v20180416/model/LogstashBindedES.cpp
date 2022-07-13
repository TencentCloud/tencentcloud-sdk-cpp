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

#include <tencentcloud/es/v20180416/model/LogstashBindedES.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

LogstashBindedES::LogstashBindedES() :
    m_eSInstanceIdHasBeenSet(false),
    m_eSUserNameHasBeenSet(false),
    m_eSPasswordHasBeenSet(false)
{
}

CoreInternalOutcome LogstashBindedES::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ESInstanceId") && !value["ESInstanceId"].IsNull())
    {
        if (!value["ESInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashBindedES.ESInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eSInstanceId = string(value["ESInstanceId"].GetString());
        m_eSInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("ESUserName") && !value["ESUserName"].IsNull())
    {
        if (!value["ESUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashBindedES.ESUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eSUserName = string(value["ESUserName"].GetString());
        m_eSUserNameHasBeenSet = true;
    }

    if (value.HasMember("ESPassword") && !value["ESPassword"].IsNull())
    {
        if (!value["ESPassword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashBindedES.ESPassword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eSPassword = string(value["ESPassword"].GetString());
        m_eSPasswordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogstashBindedES::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eSInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ESInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eSInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_eSUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ESUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eSUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_eSPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ESPassword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eSPassword.c_str(), allocator).Move(), allocator);
    }

}


string LogstashBindedES::GetESInstanceId() const
{
    return m_eSInstanceId;
}

void LogstashBindedES::SetESInstanceId(const string& _eSInstanceId)
{
    m_eSInstanceId = _eSInstanceId;
    m_eSInstanceIdHasBeenSet = true;
}

bool LogstashBindedES::ESInstanceIdHasBeenSet() const
{
    return m_eSInstanceIdHasBeenSet;
}

string LogstashBindedES::GetESUserName() const
{
    return m_eSUserName;
}

void LogstashBindedES::SetESUserName(const string& _eSUserName)
{
    m_eSUserName = _eSUserName;
    m_eSUserNameHasBeenSet = true;
}

bool LogstashBindedES::ESUserNameHasBeenSet() const
{
    return m_eSUserNameHasBeenSet;
}

string LogstashBindedES::GetESPassword() const
{
    return m_eSPassword;
}

void LogstashBindedES::SetESPassword(const string& _eSPassword)
{
    m_eSPassword = _eSPassword;
    m_eSPasswordHasBeenSet = true;
}

bool LogstashBindedES::ESPasswordHasBeenSet() const
{
    return m_eSPasswordHasBeenSet;
}

