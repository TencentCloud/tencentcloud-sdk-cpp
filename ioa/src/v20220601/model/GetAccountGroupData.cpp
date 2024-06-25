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

#include <tencentcloud/ioa/v20220601/model/GetAccountGroupData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

GetAccountGroupData::GetAccountGroupData() :
    m_namePathHasBeenSet(false),
    m_idPathArrHasBeenSet(false),
    m_extraInfoHasBeenSet(false),
    m_utimeHasBeenSet(false),
    m_parentIdHasBeenSet(false),
    m_orgIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_idPathHasBeenSet(false),
    m_itimeHasBeenSet(false),
    m_parentOrgIdHasBeenSet(false),
    m_importHasBeenSet(false),
    m_importEnableHasBeenSet(false),
    m_importTypeHasBeenSet(false),
    m_miniIamIdHasBeenSet(false)
{
}

CoreInternalOutcome GetAccountGroupData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NamePath") && !value["NamePath"].IsNull())
    {
        if (!value["NamePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetAccountGroupData.NamePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namePath = string(value["NamePath"].GetString());
        m_namePathHasBeenSet = true;
    }

    if (value.HasMember("IdPathArr") && !value["IdPathArr"].IsNull())
    {
        if (!value["IdPathArr"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GetAccountGroupData.IdPathArr` is not array type"));

        const rapidjson::Value &tmpValue = value["IdPathArr"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_idPathArr.push_back((*itr).GetInt64());
        }
        m_idPathArrHasBeenSet = true;
    }

    if (value.HasMember("ExtraInfo") && !value["ExtraInfo"].IsNull())
    {
        if (!value["ExtraInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetAccountGroupData.ExtraInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extraInfo = string(value["ExtraInfo"].GetString());
        m_extraInfoHasBeenSet = true;
    }

    if (value.HasMember("Utime") && !value["Utime"].IsNull())
    {
        if (!value["Utime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetAccountGroupData.Utime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_utime = string(value["Utime"].GetString());
        m_utimeHasBeenSet = true;
    }

    if (value.HasMember("ParentId") && !value["ParentId"].IsNull())
    {
        if (!value["ParentId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GetAccountGroupData.ParentId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_parentId = value["ParentId"].GetUint64();
        m_parentIdHasBeenSet = true;
    }

    if (value.HasMember("OrgId") && !value["OrgId"].IsNull())
    {
        if (!value["OrgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetAccountGroupData.OrgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgId = string(value["OrgId"].GetString());
        m_orgIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetAccountGroupData.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GetAccountGroupData.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetAccountGroupData.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GetAccountGroupData.Source` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_source = value["Source"].GetUint64();
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("IdPath") && !value["IdPath"].IsNull())
    {
        if (!value["IdPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetAccountGroupData.IdPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idPath = string(value["IdPath"].GetString());
        m_idPathHasBeenSet = true;
    }

    if (value.HasMember("Itime") && !value["Itime"].IsNull())
    {
        if (!value["Itime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetAccountGroupData.Itime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itime = string(value["Itime"].GetString());
        m_itimeHasBeenSet = true;
    }

    if (value.HasMember("ParentOrgId") && !value["ParentOrgId"].IsNull())
    {
        if (!value["ParentOrgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetAccountGroupData.ParentOrgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentOrgId = string(value["ParentOrgId"].GetString());
        m_parentOrgIdHasBeenSet = true;
    }

    if (value.HasMember("Import") && !value["Import"].IsNull())
    {
        if (!value["Import"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetAccountGroupData.Import` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_import = string(value["Import"].GetString());
        m_importHasBeenSet = true;
    }

    if (value.HasMember("ImportEnable") && !value["ImportEnable"].IsNull())
    {
        if (!value["ImportEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GetAccountGroupData.ImportEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_importEnable = value["ImportEnable"].GetBool();
        m_importEnableHasBeenSet = true;
    }

    if (value.HasMember("ImportType") && !value["ImportType"].IsNull())
    {
        if (!value["ImportType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetAccountGroupData.ImportType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_importType = string(value["ImportType"].GetString());
        m_importTypeHasBeenSet = true;
    }

    if (value.HasMember("MiniIamId") && !value["MiniIamId"].IsNull())
    {
        if (!value["MiniIamId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetAccountGroupData.MiniIamId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_miniIamId = string(value["MiniIamId"].GetString());
        m_miniIamIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GetAccountGroupData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_namePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namePath.c_str(), allocator).Move(), allocator);
    }

    if (m_idPathArrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdPathArr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_idPathArr.begin(); itr != m_idPathArr.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_extraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extraInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_utimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Utime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_utime.c_str(), allocator).Move(), allocator);
    }

    if (m_parentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_parentId, allocator);
    }

    if (m_orgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orgId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_source, allocator);
    }

    if (m_idPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idPath.c_str(), allocator).Move(), allocator);
    }

    if (m_itimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Itime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itime.c_str(), allocator).Move(), allocator);
    }

    if (m_parentOrgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentOrgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentOrgId.c_str(), allocator).Move(), allocator);
    }

    if (m_importHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Import";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_import.c_str(), allocator).Move(), allocator);
    }

    if (m_importEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImportEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_importEnable, allocator);
    }

    if (m_importTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImportType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_importType.c_str(), allocator).Move(), allocator);
    }

    if (m_miniIamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniIamId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_miniIamId.c_str(), allocator).Move(), allocator);
    }

}


string GetAccountGroupData::GetNamePath() const
{
    return m_namePath;
}

void GetAccountGroupData::SetNamePath(const string& _namePath)
{
    m_namePath = _namePath;
    m_namePathHasBeenSet = true;
}

bool GetAccountGroupData::NamePathHasBeenSet() const
{
    return m_namePathHasBeenSet;
}

vector<int64_t> GetAccountGroupData::GetIdPathArr() const
{
    return m_idPathArr;
}

void GetAccountGroupData::SetIdPathArr(const vector<int64_t>& _idPathArr)
{
    m_idPathArr = _idPathArr;
    m_idPathArrHasBeenSet = true;
}

bool GetAccountGroupData::IdPathArrHasBeenSet() const
{
    return m_idPathArrHasBeenSet;
}

string GetAccountGroupData::GetExtraInfo() const
{
    return m_extraInfo;
}

void GetAccountGroupData::SetExtraInfo(const string& _extraInfo)
{
    m_extraInfo = _extraInfo;
    m_extraInfoHasBeenSet = true;
}

bool GetAccountGroupData::ExtraInfoHasBeenSet() const
{
    return m_extraInfoHasBeenSet;
}

string GetAccountGroupData::GetUtime() const
{
    return m_utime;
}

void GetAccountGroupData::SetUtime(const string& _utime)
{
    m_utime = _utime;
    m_utimeHasBeenSet = true;
}

bool GetAccountGroupData::UtimeHasBeenSet() const
{
    return m_utimeHasBeenSet;
}

uint64_t GetAccountGroupData::GetParentId() const
{
    return m_parentId;
}

void GetAccountGroupData::SetParentId(const uint64_t& _parentId)
{
    m_parentId = _parentId;
    m_parentIdHasBeenSet = true;
}

bool GetAccountGroupData::ParentIdHasBeenSet() const
{
    return m_parentIdHasBeenSet;
}

string GetAccountGroupData::GetOrgId() const
{
    return m_orgId;
}

void GetAccountGroupData::SetOrgId(const string& _orgId)
{
    m_orgId = _orgId;
    m_orgIdHasBeenSet = true;
}

bool GetAccountGroupData::OrgIdHasBeenSet() const
{
    return m_orgIdHasBeenSet;
}

string GetAccountGroupData::GetName() const
{
    return m_name;
}

void GetAccountGroupData::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool GetAccountGroupData::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t GetAccountGroupData::GetId() const
{
    return m_id;
}

void GetAccountGroupData::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool GetAccountGroupData::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string GetAccountGroupData::GetDescription() const
{
    return m_description;
}

void GetAccountGroupData::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool GetAccountGroupData::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t GetAccountGroupData::GetSource() const
{
    return m_source;
}

void GetAccountGroupData::SetSource(const uint64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool GetAccountGroupData::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string GetAccountGroupData::GetIdPath() const
{
    return m_idPath;
}

void GetAccountGroupData::SetIdPath(const string& _idPath)
{
    m_idPath = _idPath;
    m_idPathHasBeenSet = true;
}

bool GetAccountGroupData::IdPathHasBeenSet() const
{
    return m_idPathHasBeenSet;
}

string GetAccountGroupData::GetItime() const
{
    return m_itime;
}

void GetAccountGroupData::SetItime(const string& _itime)
{
    m_itime = _itime;
    m_itimeHasBeenSet = true;
}

bool GetAccountGroupData::ItimeHasBeenSet() const
{
    return m_itimeHasBeenSet;
}

string GetAccountGroupData::GetParentOrgId() const
{
    return m_parentOrgId;
}

void GetAccountGroupData::SetParentOrgId(const string& _parentOrgId)
{
    m_parentOrgId = _parentOrgId;
    m_parentOrgIdHasBeenSet = true;
}

bool GetAccountGroupData::ParentOrgIdHasBeenSet() const
{
    return m_parentOrgIdHasBeenSet;
}

string GetAccountGroupData::GetImport() const
{
    return m_import;
}

void GetAccountGroupData::SetImport(const string& _import)
{
    m_import = _import;
    m_importHasBeenSet = true;
}

bool GetAccountGroupData::ImportHasBeenSet() const
{
    return m_importHasBeenSet;
}

bool GetAccountGroupData::GetImportEnable() const
{
    return m_importEnable;
}

void GetAccountGroupData::SetImportEnable(const bool& _importEnable)
{
    m_importEnable = _importEnable;
    m_importEnableHasBeenSet = true;
}

bool GetAccountGroupData::ImportEnableHasBeenSet() const
{
    return m_importEnableHasBeenSet;
}

string GetAccountGroupData::GetImportType() const
{
    return m_importType;
}

void GetAccountGroupData::SetImportType(const string& _importType)
{
    m_importType = _importType;
    m_importTypeHasBeenSet = true;
}

bool GetAccountGroupData::ImportTypeHasBeenSet() const
{
    return m_importTypeHasBeenSet;
}

string GetAccountGroupData::GetMiniIamId() const
{
    return m_miniIamId;
}

void GetAccountGroupData::SetMiniIamId(const string& _miniIamId)
{
    m_miniIamId = _miniIamId;
    m_miniIamIdHasBeenSet = true;
}

bool GetAccountGroupData::MiniIamIdHasBeenSet() const
{
    return m_miniIamIdHasBeenSet;
}

