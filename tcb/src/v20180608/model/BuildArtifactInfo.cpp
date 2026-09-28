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

#include <tencentcloud/tcb/v20180608/model/BuildArtifactInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

BuildArtifactInfo::BuildArtifactInfo() :
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_contentJsonHasBeenSet(false)
{
}

CoreInternalOutcome BuildArtifactInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuildArtifactInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuildArtifactInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuildArtifactInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ContentJson") && !value["ContentJson"].IsNull())
    {
        if (!value["ContentJson"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuildArtifactInfo.ContentJson` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentJson = string(value["ContentJson"].GetString());
        m_contentJsonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BuildArtifactInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_contentJsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentJson";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentJson.c_str(), allocator).Move(), allocator);
    }

}


string BuildArtifactInfo::GetType() const
{
    return m_type;
}

void BuildArtifactInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool BuildArtifactInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string BuildArtifactInfo::GetName() const
{
    return m_name;
}

void BuildArtifactInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BuildArtifactInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string BuildArtifactInfo::GetStatus() const
{
    return m_status;
}

void BuildArtifactInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BuildArtifactInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string BuildArtifactInfo::GetContentJson() const
{
    return m_contentJson;
}

void BuildArtifactInfo::SetContentJson(const string& _contentJson)
{
    m_contentJson = _contentJson;
    m_contentJsonHasBeenSet = true;
}

bool BuildArtifactInfo::ContentJsonHasBeenSet() const
{
    return m_contentJsonHasBeenSet;
}

