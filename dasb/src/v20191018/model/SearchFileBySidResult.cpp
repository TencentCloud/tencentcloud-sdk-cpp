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

#include <tencentcloud/dasb/v20191018/model/SearchFileBySidResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dasb::V20191018::Model;
using namespace std;

SearchFileBySidResult::SearchFileBySidResult() :
    m_timeHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_fileCurrHasBeenSet(false),
    m_fileNewHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_signValueHasBeenSet(false)
{
}

CoreInternalOutcome SearchFileBySidResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileBySidResult.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileBySidResult.Method` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_method = value["Method"].GetInt64();
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileBySidResult.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("FileCurr") && !value["FileCurr"].IsNull())
    {
        if (!value["FileCurr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileBySidResult.FileCurr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileCurr = string(value["FileCurr"].GetString());
        m_fileCurrHasBeenSet = true;
    }

    if (value.HasMember("FileNew") && !value["FileNew"].IsNull())
    {
        if (!value["FileNew"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileBySidResult.FileNew` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileNew = string(value["FileNew"].GetString());
        m_fileNewHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileBySidResult.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileBySidResult.Action` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_action = value["Action"].GetInt64();
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("SignValue") && !value["SignValue"].IsNull())
    {
        if (!value["SignValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileBySidResult.SignValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signValue = string(value["SignValue"].GetString());
        m_signValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchFileBySidResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_method, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_fileCurrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileCurr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileCurr.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileNew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileNew.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_action, allocator);
    }

    if (m_signValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signValue.c_str(), allocator).Move(), allocator);
    }

}


string SearchFileBySidResult::GetTime() const
{
    return m_time;
}

void SearchFileBySidResult::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool SearchFileBySidResult::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

int64_t SearchFileBySidResult::GetMethod() const
{
    return m_method;
}

void SearchFileBySidResult::SetMethod(const int64_t& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool SearchFileBySidResult::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string SearchFileBySidResult::GetProtocol() const
{
    return m_protocol;
}

void SearchFileBySidResult::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool SearchFileBySidResult::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string SearchFileBySidResult::GetFileCurr() const
{
    return m_fileCurr;
}

void SearchFileBySidResult::SetFileCurr(const string& _fileCurr)
{
    m_fileCurr = _fileCurr;
    m_fileCurrHasBeenSet = true;
}

bool SearchFileBySidResult::FileCurrHasBeenSet() const
{
    return m_fileCurrHasBeenSet;
}

string SearchFileBySidResult::GetFileNew() const
{
    return m_fileNew;
}

void SearchFileBySidResult::SetFileNew(const string& _fileNew)
{
    m_fileNew = _fileNew;
    m_fileNewHasBeenSet = true;
}

bool SearchFileBySidResult::FileNewHasBeenSet() const
{
    return m_fileNewHasBeenSet;
}

int64_t SearchFileBySidResult::GetSize() const
{
    return m_size;
}

void SearchFileBySidResult::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool SearchFileBySidResult::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

int64_t SearchFileBySidResult::GetAction() const
{
    return m_action;
}

void SearchFileBySidResult::SetAction(const int64_t& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool SearchFileBySidResult::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string SearchFileBySidResult::GetSignValue() const
{
    return m_signValue;
}

void SearchFileBySidResult::SetSignValue(const string& _signValue)
{
    m_signValue = _signValue;
    m_signValueHasBeenSet = true;
}

bool SearchFileBySidResult::SignValueHasBeenSet() const
{
    return m_signValueHasBeenSet;
}

