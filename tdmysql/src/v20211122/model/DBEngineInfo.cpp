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

#include <tencentcloud/tdmysql/v20211122/model/DBEngineInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

DBEngineInfo::DBEngineInfo() :
    m_typeHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_newHasBeenSet(false),
    m_sQLModeHasBeenSet(false),
    m_isSupportParamTemplateHasBeenSet(false),
    m_isSupportServerlessHasBeenSet(false)
{
}

CoreInternalOutcome DBEngineInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBEngineInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBEngineInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBEngineInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBEngineInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("New") && !value["New"].IsNull())
    {
        if (!value["New"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DBEngineInfo.New` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_new = value["New"].GetBool();
        m_newHasBeenSet = true;
    }

    if (value.HasMember("SQLMode") && !value["SQLMode"].IsNull())
    {
        if (!value["SQLMode"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DBEngineInfo.SQLMode` is not array type"));

        const rapidjson::Value &tmpValue = value["SQLMode"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sQLMode.push_back((*itr).GetString());
        }
        m_sQLModeHasBeenSet = true;
    }

    if (value.HasMember("IsSupportParamTemplate") && !value["IsSupportParamTemplate"].IsNull())
    {
        if (!value["IsSupportParamTemplate"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DBEngineInfo.IsSupportParamTemplate` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportParamTemplate = value["IsSupportParamTemplate"].GetBool();
        m_isSupportParamTemplateHasBeenSet = true;
    }

    if (value.HasMember("IsSupportServerless") && !value["IsSupportServerless"].IsNull())
    {
        if (!value["IsSupportServerless"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DBEngineInfo.IsSupportServerless` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportServerless = value["IsSupportServerless"].GetBool();
        m_isSupportServerlessHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DBEngineInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_newHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "New";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_new, allocator);
    }

    if (m_sQLModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SQLMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sQLMode.begin(); itr != m_sQLMode.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isSupportParamTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportParamTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportParamTemplate, allocator);
    }

    if (m_isSupportServerlessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportServerless";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportServerless, allocator);
    }

}


string DBEngineInfo::GetType() const
{
    return m_type;
}

void DBEngineInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DBEngineInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DBEngineInfo::GetVersion() const
{
    return m_version;
}

void DBEngineInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool DBEngineInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string DBEngineInfo::GetName() const
{
    return m_name;
}

void DBEngineInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DBEngineInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DBEngineInfo::GetDescription() const
{
    return m_description;
}

void DBEngineInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DBEngineInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

bool DBEngineInfo::GetNew() const
{
    return m_new;
}

void DBEngineInfo::SetNew(const bool& _new)
{
    m_new = _new;
    m_newHasBeenSet = true;
}

bool DBEngineInfo::NewHasBeenSet() const
{
    return m_newHasBeenSet;
}

vector<string> DBEngineInfo::GetSQLMode() const
{
    return m_sQLMode;
}

void DBEngineInfo::SetSQLMode(const vector<string>& _sQLMode)
{
    m_sQLMode = _sQLMode;
    m_sQLModeHasBeenSet = true;
}

bool DBEngineInfo::SQLModeHasBeenSet() const
{
    return m_sQLModeHasBeenSet;
}

bool DBEngineInfo::GetIsSupportParamTemplate() const
{
    return m_isSupportParamTemplate;
}

void DBEngineInfo::SetIsSupportParamTemplate(const bool& _isSupportParamTemplate)
{
    m_isSupportParamTemplate = _isSupportParamTemplate;
    m_isSupportParamTemplateHasBeenSet = true;
}

bool DBEngineInfo::IsSupportParamTemplateHasBeenSet() const
{
    return m_isSupportParamTemplateHasBeenSet;
}

bool DBEngineInfo::GetIsSupportServerless() const
{
    return m_isSupportServerless;
}

void DBEngineInfo::SetIsSupportServerless(const bool& _isSupportServerless)
{
    m_isSupportServerless = _isSupportServerless;
    m_isSupportServerlessHasBeenSet = true;
}

bool DBEngineInfo::IsSupportServerlessHasBeenSet() const
{
    return m_isSupportServerlessHasBeenSet;
}

