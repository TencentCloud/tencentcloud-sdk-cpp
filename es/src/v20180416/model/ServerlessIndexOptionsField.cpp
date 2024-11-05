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

#include <tencentcloud/es/v20180416/model/ServerlessIndexOptionsField.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

ServerlessIndexOptionsField::ServerlessIndexOptionsField() :
    m_expireMaxAgeHasBeenSet(false),
    m_timestampFieldHasBeenSet(false),
    m_sinkCycleAgeHasBeenSet(false),
    m_standardStorageAgeHasBeenSet(false)
{
}

CoreInternalOutcome ServerlessIndexOptionsField::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExpireMaxAge") && !value["ExpireMaxAge"].IsNull())
    {
        if (!value["ExpireMaxAge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessIndexOptionsField.ExpireMaxAge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireMaxAge = string(value["ExpireMaxAge"].GetString());
        m_expireMaxAgeHasBeenSet = true;
    }

    if (value.HasMember("TimestampField") && !value["TimestampField"].IsNull())
    {
        if (!value["TimestampField"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessIndexOptionsField.TimestampField` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timestampField = string(value["TimestampField"].GetString());
        m_timestampFieldHasBeenSet = true;
    }

    if (value.HasMember("SinkCycleAge") && !value["SinkCycleAge"].IsNull())
    {
        if (!value["SinkCycleAge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessIndexOptionsField.SinkCycleAge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sinkCycleAge = string(value["SinkCycleAge"].GetString());
        m_sinkCycleAgeHasBeenSet = true;
    }

    if (value.HasMember("StandardStorageAge") && !value["StandardStorageAge"].IsNull())
    {
        if (!value["StandardStorageAge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessIndexOptionsField.StandardStorageAge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_standardStorageAge = string(value["StandardStorageAge"].GetString());
        m_standardStorageAgeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServerlessIndexOptionsField::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_expireMaxAgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireMaxAge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireMaxAge.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimestampField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timestampField.c_str(), allocator).Move(), allocator);
    }

    if (m_sinkCycleAgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SinkCycleAge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sinkCycleAge.c_str(), allocator).Move(), allocator);
    }

    if (m_standardStorageAgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandardStorageAge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_standardStorageAge.c_str(), allocator).Move(), allocator);
    }

}


string ServerlessIndexOptionsField::GetExpireMaxAge() const
{
    return m_expireMaxAge;
}

void ServerlessIndexOptionsField::SetExpireMaxAge(const string& _expireMaxAge)
{
    m_expireMaxAge = _expireMaxAge;
    m_expireMaxAgeHasBeenSet = true;
}

bool ServerlessIndexOptionsField::ExpireMaxAgeHasBeenSet() const
{
    return m_expireMaxAgeHasBeenSet;
}

string ServerlessIndexOptionsField::GetTimestampField() const
{
    return m_timestampField;
}

void ServerlessIndexOptionsField::SetTimestampField(const string& _timestampField)
{
    m_timestampField = _timestampField;
    m_timestampFieldHasBeenSet = true;
}

bool ServerlessIndexOptionsField::TimestampFieldHasBeenSet() const
{
    return m_timestampFieldHasBeenSet;
}

string ServerlessIndexOptionsField::GetSinkCycleAge() const
{
    return m_sinkCycleAge;
}

void ServerlessIndexOptionsField::SetSinkCycleAge(const string& _sinkCycleAge)
{
    m_sinkCycleAge = _sinkCycleAge;
    m_sinkCycleAgeHasBeenSet = true;
}

bool ServerlessIndexOptionsField::SinkCycleAgeHasBeenSet() const
{
    return m_sinkCycleAgeHasBeenSet;
}

string ServerlessIndexOptionsField::GetStandardStorageAge() const
{
    return m_standardStorageAge;
}

void ServerlessIndexOptionsField::SetStandardStorageAge(const string& _standardStorageAge)
{
    m_standardStorageAge = _standardStorageAge;
    m_standardStorageAgeHasBeenSet = true;
}

bool ServerlessIndexOptionsField::StandardStorageAgeHasBeenSet() const
{
    return m_standardStorageAgeHasBeenSet;
}

