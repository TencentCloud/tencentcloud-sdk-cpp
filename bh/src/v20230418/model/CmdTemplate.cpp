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

#include <tencentcloud/bh/v20230418/model/CmdTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

CmdTemplate::CmdTemplate() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_cmdListHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome CmdTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CmdTemplate.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CmdTemplate.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("CmdList") && !value["CmdList"].IsNull())
    {
        if (!value["CmdList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CmdTemplate.CmdList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmdList = string(value["CmdList"].GetString());
        m_cmdListHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CmdTemplate.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CmdTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_cmdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cmdList.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

}


uint64_t CmdTemplate::GetId() const
{
    return m_id;
}

void CmdTemplate::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CmdTemplate::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string CmdTemplate::GetName() const
{
    return m_name;
}

void CmdTemplate::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CmdTemplate::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CmdTemplate::GetCmdList() const
{
    return m_cmdList;
}

void CmdTemplate::SetCmdList(const string& _cmdList)
{
    m_cmdList = _cmdList;
    m_cmdListHasBeenSet = true;
}

bool CmdTemplate::CmdListHasBeenSet() const
{
    return m_cmdListHasBeenSet;
}

uint64_t CmdTemplate::GetType() const
{
    return m_type;
}

void CmdTemplate::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CmdTemplate::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

