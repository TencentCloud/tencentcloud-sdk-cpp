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

#include <tencentcloud/bi/v20220105/model/UserTagInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

UserTagInfo::UserTagInfo() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_isExternalManageHasBeenSet(false),
    m_managePlatformHasBeenSet(false),
    m_importTypeHasBeenSet(false)
{
}

CoreInternalOutcome UserTagInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserTagInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserTagInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserTagInfo.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("IsExternalManage") && !value["IsExternalManage"].IsNull())
    {
        if (!value["IsExternalManage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UserTagInfo.IsExternalManage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isExternalManage = value["IsExternalManage"].GetBool();
        m_isExternalManageHasBeenSet = true;
    }

    if (value.HasMember("ManagePlatform") && !value["ManagePlatform"].IsNull())
    {
        if (!value["ManagePlatform"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserTagInfo.ManagePlatform` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_managePlatform = string(value["ManagePlatform"].GetString());
        m_managePlatformHasBeenSet = true;
    }

    if (value.HasMember("ImportType") && !value["ImportType"].IsNull())
    {
        if (!value["ImportType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserTagInfo.ImportType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_importType = string(value["ImportType"].GetString());
        m_importTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserTagInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_isExternalManageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsExternalManage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isExternalManage, allocator);
    }

    if (m_managePlatformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagePlatform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_managePlatform.c_str(), allocator).Move(), allocator);
    }

    if (m_importTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImportType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_importType.c_str(), allocator).Move(), allocator);
    }

}


int64_t UserTagInfo::GetId() const
{
    return m_id;
}

void UserTagInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool UserTagInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string UserTagInfo::GetName() const
{
    return m_name;
}

void UserTagInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UserTagInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string UserTagInfo::GetValue() const
{
    return m_value;
}

void UserTagInfo::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool UserTagInfo::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

bool UserTagInfo::GetIsExternalManage() const
{
    return m_isExternalManage;
}

void UserTagInfo::SetIsExternalManage(const bool& _isExternalManage)
{
    m_isExternalManage = _isExternalManage;
    m_isExternalManageHasBeenSet = true;
}

bool UserTagInfo::IsExternalManageHasBeenSet() const
{
    return m_isExternalManageHasBeenSet;
}

string UserTagInfo::GetManagePlatform() const
{
    return m_managePlatform;
}

void UserTagInfo::SetManagePlatform(const string& _managePlatform)
{
    m_managePlatform = _managePlatform;
    m_managePlatformHasBeenSet = true;
}

bool UserTagInfo::ManagePlatformHasBeenSet() const
{
    return m_managePlatformHasBeenSet;
}

string UserTagInfo::GetImportType() const
{
    return m_importType;
}

void UserTagInfo::SetImportType(const string& _importType)
{
    m_importType = _importType;
    m_importTypeHasBeenSet = true;
}

bool UserTagInfo::ImportTypeHasBeenSet() const
{
    return m_importTypeHasBeenSet;
}

