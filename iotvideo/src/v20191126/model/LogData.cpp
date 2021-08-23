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

#include <tencentcloud/iotvideo/v20191126/model/LogData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

LogData::LogData() :
    m_occurtimeHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_dataObjectHasBeenSet(false),
    m_oldValueHasBeenSet(false),
    m_newValueHasBeenSet(false)
{
}

CoreInternalOutcome LogData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Occurtime") && !value["Occurtime"].IsNull())
    {
        if (!value["Occurtime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogData.Occurtime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_occurtime = value["Occurtime"].GetUint64();
        m_occurtimeHasBeenSet = true;
    }

    if (value.HasMember("LogType") && !value["LogType"].IsNull())
    {
        if (!value["LogType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogData.LogType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_logType = value["LogType"].GetUint64();
        m_logTypeHasBeenSet = true;
    }

    if (value.HasMember("DataObject") && !value["DataObject"].IsNull())
    {
        if (!value["DataObject"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogData.DataObject` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataObject = string(value["DataObject"].GetString());
        m_dataObjectHasBeenSet = true;
    }

    if (value.HasMember("OldValue") && !value["OldValue"].IsNull())
    {
        if (!value["OldValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogData.OldValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldValue = string(value["OldValue"].GetString());
        m_oldValueHasBeenSet = true;
    }

    if (value.HasMember("NewValue") && !value["NewValue"].IsNull())
    {
        if (!value["NewValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogData.NewValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newValue = string(value["NewValue"].GetString());
        m_newValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_occurtimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Occurtime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_occurtime, allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logType, allocator);
    }

    if (m_dataObjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataObject";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataObject.c_str(), allocator).Move(), allocator);
    }

    if (m_oldValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldValue.c_str(), allocator).Move(), allocator);
    }

    if (m_newValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newValue.c_str(), allocator).Move(), allocator);
    }

}


uint64_t LogData::GetOccurtime() const
{
    return m_occurtime;
}

void LogData::SetOccurtime(const uint64_t& _occurtime)
{
    m_occurtime = _occurtime;
    m_occurtimeHasBeenSet = true;
}

bool LogData::OccurtimeHasBeenSet() const
{
    return m_occurtimeHasBeenSet;
}

uint64_t LogData::GetLogType() const
{
    return m_logType;
}

void LogData::SetLogType(const uint64_t& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool LogData::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

string LogData::GetDataObject() const
{
    return m_dataObject;
}

void LogData::SetDataObject(const string& _dataObject)
{
    m_dataObject = _dataObject;
    m_dataObjectHasBeenSet = true;
}

bool LogData::DataObjectHasBeenSet() const
{
    return m_dataObjectHasBeenSet;
}

string LogData::GetOldValue() const
{
    return m_oldValue;
}

void LogData::SetOldValue(const string& _oldValue)
{
    m_oldValue = _oldValue;
    m_oldValueHasBeenSet = true;
}

bool LogData::OldValueHasBeenSet() const
{
    return m_oldValueHasBeenSet;
}

string LogData::GetNewValue() const
{
    return m_newValue;
}

void LogData::SetNewValue(const string& _newValue)
{
    m_newValue = _newValue;
    m_newValueHasBeenSet = true;
}

bool LogData::NewValueHasBeenSet() const
{
    return m_newValueHasBeenSet;
}

