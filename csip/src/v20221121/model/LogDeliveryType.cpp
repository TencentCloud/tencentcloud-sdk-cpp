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

#include <tencentcloud/csip/v20221121/model/LogDeliveryType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

LogDeliveryType::LogDeliveryType() :
    m_logTypeHasBeenSet(false),
    m_logTypeNameHasBeenSet(false),
    m_logTypeDescHasBeenSet(false)
{
}

CoreInternalOutcome LogDeliveryType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogType") && !value["LogType"].IsNull())
    {
        if (!value["LogType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogDeliveryType.LogType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logType = value["LogType"].GetInt64();
        m_logTypeHasBeenSet = true;
    }

    if (value.HasMember("LogTypeName") && !value["LogTypeName"].IsNull())
    {
        if (!value["LogTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogDeliveryType.LogTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logTypeName = string(value["LogTypeName"].GetString());
        m_logTypeNameHasBeenSet = true;
    }

    if (value.HasMember("LogTypeDesc") && !value["LogTypeDesc"].IsNull())
    {
        if (!value["LogTypeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogDeliveryType.LogTypeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logTypeDesc = string(value["LogTypeDesc"].GetString());
        m_logTypeDescHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogDeliveryType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logType, allocator);
    }

    if (m_logTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_logTypeDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTypeDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logTypeDesc.c_str(), allocator).Move(), allocator);
    }

}


int64_t LogDeliveryType::GetLogType() const
{
    return m_logType;
}

void LogDeliveryType::SetLogType(const int64_t& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool LogDeliveryType::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

string LogDeliveryType::GetLogTypeName() const
{
    return m_logTypeName;
}

void LogDeliveryType::SetLogTypeName(const string& _logTypeName)
{
    m_logTypeName = _logTypeName;
    m_logTypeNameHasBeenSet = true;
}

bool LogDeliveryType::LogTypeNameHasBeenSet() const
{
    return m_logTypeNameHasBeenSet;
}

string LogDeliveryType::GetLogTypeDesc() const
{
    return m_logTypeDesc;
}

void LogDeliveryType::SetLogTypeDesc(const string& _logTypeDesc)
{
    m_logTypeDesc = _logTypeDesc;
    m_logTypeDescHasBeenSet = true;
}

bool LogDeliveryType::LogTypeDescHasBeenSet() const
{
    return m_logTypeDescHasBeenSet;
}

