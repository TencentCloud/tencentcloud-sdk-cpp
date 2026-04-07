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

#include <tencentcloud/mps/v20190612/model/SourceAlert.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SourceAlert::SourceAlert() :
    m_sourceIdHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
}

CoreInternalOutcome SourceAlert::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceId") && !value["SourceId"].IsNull())
    {
        if (!value["SourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceAlert.SourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceId = string(value["SourceId"].GetString());
        m_sourceIdHasBeenSet = true;
    }

    if (value.HasMember("SourceName") && !value["SourceName"].IsNull())
    {
        if (!value["SourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceAlert.SourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceName = string(value["SourceName"].GetString());
        m_sourceNameHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SourceAlert.Code` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_code = value["Code"].GetUint64();
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceAlert.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceAlert.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("LastModifiedTime") && !value["LastModifiedTime"].IsNull())
    {
        if (!value["LastModifiedTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SourceAlert.LastModifiedTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifiedTime = value["LastModifiedTime"].GetUint64();
        m_lastModifiedTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SourceAlert::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_code, allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_lastModifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastModifiedTime, allocator);
    }

}


string SourceAlert::GetSourceId() const
{
    return m_sourceId;
}

void SourceAlert::SetSourceId(const string& _sourceId)
{
    m_sourceId = _sourceId;
    m_sourceIdHasBeenSet = true;
}

bool SourceAlert::SourceIdHasBeenSet() const
{
    return m_sourceIdHasBeenSet;
}

string SourceAlert::GetSourceName() const
{
    return m_sourceName;
}

void SourceAlert::SetSourceName(const string& _sourceName)
{
    m_sourceName = _sourceName;
    m_sourceNameHasBeenSet = true;
}

bool SourceAlert::SourceNameHasBeenSet() const
{
    return m_sourceNameHasBeenSet;
}

uint64_t SourceAlert::GetCode() const
{
    return m_code;
}

void SourceAlert::SetCode(const uint64_t& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool SourceAlert::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string SourceAlert::GetCategory() const
{
    return m_category;
}

void SourceAlert::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool SourceAlert::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string SourceAlert::GetMessage() const
{
    return m_message;
}

void SourceAlert::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool SourceAlert::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

uint64_t SourceAlert::GetLastModifiedTime() const
{
    return m_lastModifiedTime;
}

void SourceAlert::SetLastModifiedTime(const uint64_t& _lastModifiedTime)
{
    m_lastModifiedTime = _lastModifiedTime;
    m_lastModifiedTimeHasBeenSet = true;
}

bool SourceAlert::LastModifiedTimeHasBeenSet() const
{
    return m_lastModifiedTimeHasBeenSet;
}

