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

#include <tencentcloud/cme/v20191029/model/StreamConnectOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

StreamConnectOutput::StreamConnectOutput() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_pushUrlHasBeenSet(false)
{
}

CoreInternalOutcome StreamConnectOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamConnectOutput.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamConnectOutput.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamConnectOutput.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("PushUrl") && !value["PushUrl"].IsNull())
    {
        if (!value["PushUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamConnectOutput.PushUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pushUrl = string(value["PushUrl"].GetString());
        m_pushUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StreamConnectOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_pushUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pushUrl.c_str(), allocator).Move(), allocator);
    }

}


string StreamConnectOutput::GetId() const
{
    return m_id;
}

void StreamConnectOutput::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool StreamConnectOutput::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string StreamConnectOutput::GetName() const
{
    return m_name;
}

void StreamConnectOutput::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool StreamConnectOutput::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string StreamConnectOutput::GetType() const
{
    return m_type;
}

void StreamConnectOutput::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool StreamConnectOutput::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string StreamConnectOutput::GetPushUrl() const
{
    return m_pushUrl;
}

void StreamConnectOutput::SetPushUrl(const string& _pushUrl)
{
    m_pushUrl = _pushUrl;
    m_pushUrlHasBeenSet = true;
}

bool StreamConnectOutput::PushUrlHasBeenSet() const
{
    return m_pushUrlHasBeenSet;
}

