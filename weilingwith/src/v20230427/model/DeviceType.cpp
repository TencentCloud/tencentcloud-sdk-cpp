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

#include <tencentcloud/weilingwith/v20230427/model/DeviceType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

DeviceType::DeviceType() :
    m_codeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_parentCodeHasBeenSet(false),
    m_parentNameHasBeenSet(false),
    m_isSubsystemHasBeenSet(false)
{
}

CoreInternalOutcome DeviceType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceType.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceType.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ParentCode") && !value["ParentCode"].IsNull())
    {
        if (!value["ParentCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceType.ParentCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentCode = string(value["ParentCode"].GetString());
        m_parentCodeHasBeenSet = true;
    }

    if (value.HasMember("ParentName") && !value["ParentName"].IsNull())
    {
        if (!value["ParentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceType.ParentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentName = string(value["ParentName"].GetString());
        m_parentNameHasBeenSet = true;
    }

    if (value.HasMember("IsSubsystem") && !value["IsSubsystem"].IsNull())
    {
        if (!value["IsSubsystem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceType.IsSubsystem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isSubsystem = value["IsSubsystem"].GetInt64();
        m_isSubsystemHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_parentCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentCode.c_str(), allocator).Move(), allocator);
    }

    if (m_parentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentName.c_str(), allocator).Move(), allocator);
    }

    if (m_isSubsystemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSubsystem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSubsystem, allocator);
    }

}


string DeviceType::GetCode() const
{
    return m_code;
}

void DeviceType::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool DeviceType::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string DeviceType::GetName() const
{
    return m_name;
}

void DeviceType::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DeviceType::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DeviceType::GetParentCode() const
{
    return m_parentCode;
}

void DeviceType::SetParentCode(const string& _parentCode)
{
    m_parentCode = _parentCode;
    m_parentCodeHasBeenSet = true;
}

bool DeviceType::ParentCodeHasBeenSet() const
{
    return m_parentCodeHasBeenSet;
}

string DeviceType::GetParentName() const
{
    return m_parentName;
}

void DeviceType::SetParentName(const string& _parentName)
{
    m_parentName = _parentName;
    m_parentNameHasBeenSet = true;
}

bool DeviceType::ParentNameHasBeenSet() const
{
    return m_parentNameHasBeenSet;
}

int64_t DeviceType::GetIsSubsystem() const
{
    return m_isSubsystem;
}

void DeviceType::SetIsSubsystem(const int64_t& _isSubsystem)
{
    m_isSubsystem = _isSubsystem;
    m_isSubsystemHasBeenSet = true;
}

bool DeviceType::IsSubsystemHasBeenSet() const
{
    return m_isSubsystemHasBeenSet;
}

