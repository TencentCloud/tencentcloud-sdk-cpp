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

#include <tencentcloud/lke/v20231130/model/Procedure.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

Procedure::Procedure() :
    m_nameHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_countHasBeenSet(false),
    m_debuggingHasBeenSet(false),
    m_resourceStatusHasBeenSet(false)
{
}

CoreInternalOutcome Procedure::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Procedure.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Procedure.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Procedure.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Procedure.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("Debugging") && !value["Debugging"].IsNull())
    {
        if (!value["Debugging"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Procedure.Debugging` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_debugging.Deserialize(value["Debugging"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_debuggingHasBeenSet = true;
    }

    if (value.HasMember("ResourceStatus") && !value["ResourceStatus"].IsNull())
    {
        if (!value["ResourceStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Procedure.ResourceStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceStatus = value["ResourceStatus"].GetUint64();
        m_resourceStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Procedure::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_debuggingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Debugging";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_debugging.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_resourceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceStatus, allocator);
    }

}


string Procedure::GetName() const
{
    return m_name;
}

void Procedure::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Procedure::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Procedure::GetTitle() const
{
    return m_title;
}

void Procedure::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool Procedure::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string Procedure::GetStatus() const
{
    return m_status;
}

void Procedure::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Procedure::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t Procedure::GetCount() const
{
    return m_count;
}

void Procedure::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool Procedure::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

ProcedureDebugging Procedure::GetDebugging() const
{
    return m_debugging;
}

void Procedure::SetDebugging(const ProcedureDebugging& _debugging)
{
    m_debugging = _debugging;
    m_debuggingHasBeenSet = true;
}

bool Procedure::DebuggingHasBeenSet() const
{
    return m_debuggingHasBeenSet;
}

uint64_t Procedure::GetResourceStatus() const
{
    return m_resourceStatus;
}

void Procedure::SetResourceStatus(const uint64_t& _resourceStatus)
{
    m_resourceStatus = _resourceStatus;
    m_resourceStatusHasBeenSet = true;
}

bool Procedure::ResourceStatusHasBeenSet() const
{
    return m_resourceStatusHasBeenSet;
}

