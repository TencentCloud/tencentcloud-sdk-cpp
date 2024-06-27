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

#include <tencentcloud/ioa/v20220601/model/DescribeAccountGroupsData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DescribeAccountGroupsData::DescribeAccountGroupsData() :
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
    m_importTypeHasBeenSet(false),
    m_miniIamIdHasBeenSet(false),
    m_userTotalHasBeenSet(false),
    m_isLeafHasBeenSet(false),
    m_readOnlyHasBeenSet(false),
    m_latestSyncResultHasBeenSet(false),
    m_latestSyncTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAccountGroupsData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NamePath") && !value["NamePath"].IsNull())
    {
        if (!value["NamePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountGroupsData.NamePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namePath = string(value["NamePath"].GetString());
        m_namePathHasBeenSet = true;
    }

    if (value.HasMember("IdPathArr") && !value["IdPathArr"].IsNull())
    {
        if (!value["IdPathArr"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeAccountGroupsData.IdPathArr` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `DescribeAccountGroupsData.ExtraInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extraInfo = string(value["ExtraInfo"].GetString());
        m_extraInfoHasBeenSet = true;
    }

    if (value.HasMember("Utime") && !value["Utime"].IsNull())
    {
        if (!value["Utime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountGroupsData.Utime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_utime = string(value["Utime"].GetString());
        m_utimeHasBeenSet = true;
    }

    if (value.HasMember("ParentId") && !value["ParentId"].IsNull())
    {
        if (!value["ParentId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountGroupsData.ParentId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_parentId = value["ParentId"].GetInt64();
        m_parentIdHasBeenSet = true;
    }

    if (value.HasMember("OrgId") && !value["OrgId"].IsNull())
    {
        if (!value["OrgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountGroupsData.OrgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgId = string(value["OrgId"].GetString());
        m_orgIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountGroupsData.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountGroupsData.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountGroupsData.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountGroupsData.Source` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_source = value["Source"].GetInt64();
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("IdPath") && !value["IdPath"].IsNull())
    {
        if (!value["IdPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountGroupsData.IdPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idPath = string(value["IdPath"].GetString());
        m_idPathHasBeenSet = true;
    }

    if (value.HasMember("Itime") && !value["Itime"].IsNull())
    {
        if (!value["Itime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountGroupsData.Itime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itime = string(value["Itime"].GetString());
        m_itimeHasBeenSet = true;
    }

    if (value.HasMember("ParentOrgId") && !value["ParentOrgId"].IsNull())
    {
        if (!value["ParentOrgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountGroupsData.ParentOrgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentOrgId = string(value["ParentOrgId"].GetString());
        m_parentOrgIdHasBeenSet = true;
    }

    if (value.HasMember("ImportType") && !value["ImportType"].IsNull())
    {
        if (!value["ImportType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountGroupsData.ImportType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_importType = string(value["ImportType"].GetString());
        m_importTypeHasBeenSet = true;
    }

    if (value.HasMember("MiniIamId") && !value["MiniIamId"].IsNull())
    {
        if (!value["MiniIamId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountGroupsData.MiniIamId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_miniIamId = string(value["MiniIamId"].GetString());
        m_miniIamIdHasBeenSet = true;
    }

    if (value.HasMember("UserTotal") && !value["UserTotal"].IsNull())
    {
        if (!value["UserTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountGroupsData.UserTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_userTotal = value["UserTotal"].GetInt64();
        m_userTotalHasBeenSet = true;
    }

    if (value.HasMember("IsLeaf") && !value["IsLeaf"].IsNull())
    {
        if (!value["IsLeaf"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountGroupsData.IsLeaf` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isLeaf = value["IsLeaf"].GetBool();
        m_isLeafHasBeenSet = true;
    }

    if (value.HasMember("ReadOnly") && !value["ReadOnly"].IsNull())
    {
        if (!value["ReadOnly"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountGroupsData.ReadOnly` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_readOnly = value["ReadOnly"].GetBool();
        m_readOnlyHasBeenSet = true;
    }

    if (value.HasMember("LatestSyncResult") && !value["LatestSyncResult"].IsNull())
    {
        if (!value["LatestSyncResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountGroupsData.LatestSyncResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestSyncResult = string(value["LatestSyncResult"].GetString());
        m_latestSyncResultHasBeenSet = true;
    }

    if (value.HasMember("LatestSyncTime") && !value["LatestSyncTime"].IsNull())
    {
        if (!value["LatestSyncTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountGroupsData.LatestSyncTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestSyncTime = string(value["LatestSyncTime"].GetString());
        m_latestSyncTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeAccountGroupsData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_userTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userTotal, allocator);
    }

    if (m_isLeafHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLeaf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLeaf, allocator);
    }

    if (m_readOnlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readOnly, allocator);
    }

    if (m_latestSyncResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestSyncResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestSyncResult.c_str(), allocator).Move(), allocator);
    }

    if (m_latestSyncTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestSyncTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestSyncTime.c_str(), allocator).Move(), allocator);
    }

}


string DescribeAccountGroupsData::GetNamePath() const
{
    return m_namePath;
}

void DescribeAccountGroupsData::SetNamePath(const string& _namePath)
{
    m_namePath = _namePath;
    m_namePathHasBeenSet = true;
}

bool DescribeAccountGroupsData::NamePathHasBeenSet() const
{
    return m_namePathHasBeenSet;
}

vector<int64_t> DescribeAccountGroupsData::GetIdPathArr() const
{
    return m_idPathArr;
}

void DescribeAccountGroupsData::SetIdPathArr(const vector<int64_t>& _idPathArr)
{
    m_idPathArr = _idPathArr;
    m_idPathArrHasBeenSet = true;
}

bool DescribeAccountGroupsData::IdPathArrHasBeenSet() const
{
    return m_idPathArrHasBeenSet;
}

string DescribeAccountGroupsData::GetExtraInfo() const
{
    return m_extraInfo;
}

void DescribeAccountGroupsData::SetExtraInfo(const string& _extraInfo)
{
    m_extraInfo = _extraInfo;
    m_extraInfoHasBeenSet = true;
}

bool DescribeAccountGroupsData::ExtraInfoHasBeenSet() const
{
    return m_extraInfoHasBeenSet;
}

string DescribeAccountGroupsData::GetUtime() const
{
    return m_utime;
}

void DescribeAccountGroupsData::SetUtime(const string& _utime)
{
    m_utime = _utime;
    m_utimeHasBeenSet = true;
}

bool DescribeAccountGroupsData::UtimeHasBeenSet() const
{
    return m_utimeHasBeenSet;
}

int64_t DescribeAccountGroupsData::GetParentId() const
{
    return m_parentId;
}

void DescribeAccountGroupsData::SetParentId(const int64_t& _parentId)
{
    m_parentId = _parentId;
    m_parentIdHasBeenSet = true;
}

bool DescribeAccountGroupsData::ParentIdHasBeenSet() const
{
    return m_parentIdHasBeenSet;
}

string DescribeAccountGroupsData::GetOrgId() const
{
    return m_orgId;
}

void DescribeAccountGroupsData::SetOrgId(const string& _orgId)
{
    m_orgId = _orgId;
    m_orgIdHasBeenSet = true;
}

bool DescribeAccountGroupsData::OrgIdHasBeenSet() const
{
    return m_orgIdHasBeenSet;
}

string DescribeAccountGroupsData::GetName() const
{
    return m_name;
}

void DescribeAccountGroupsData::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeAccountGroupsData::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t DescribeAccountGroupsData::GetId() const
{
    return m_id;
}

void DescribeAccountGroupsData::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DescribeAccountGroupsData::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescribeAccountGroupsData::GetDescription() const
{
    return m_description;
}

void DescribeAccountGroupsData::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DescribeAccountGroupsData::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t DescribeAccountGroupsData::GetSource() const
{
    return m_source;
}

void DescribeAccountGroupsData::SetSource(const int64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool DescribeAccountGroupsData::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string DescribeAccountGroupsData::GetIdPath() const
{
    return m_idPath;
}

void DescribeAccountGroupsData::SetIdPath(const string& _idPath)
{
    m_idPath = _idPath;
    m_idPathHasBeenSet = true;
}

bool DescribeAccountGroupsData::IdPathHasBeenSet() const
{
    return m_idPathHasBeenSet;
}

string DescribeAccountGroupsData::GetItime() const
{
    return m_itime;
}

void DescribeAccountGroupsData::SetItime(const string& _itime)
{
    m_itime = _itime;
    m_itimeHasBeenSet = true;
}

bool DescribeAccountGroupsData::ItimeHasBeenSet() const
{
    return m_itimeHasBeenSet;
}

string DescribeAccountGroupsData::GetParentOrgId() const
{
    return m_parentOrgId;
}

void DescribeAccountGroupsData::SetParentOrgId(const string& _parentOrgId)
{
    m_parentOrgId = _parentOrgId;
    m_parentOrgIdHasBeenSet = true;
}

bool DescribeAccountGroupsData::ParentOrgIdHasBeenSet() const
{
    return m_parentOrgIdHasBeenSet;
}

string DescribeAccountGroupsData::GetImportType() const
{
    return m_importType;
}

void DescribeAccountGroupsData::SetImportType(const string& _importType)
{
    m_importType = _importType;
    m_importTypeHasBeenSet = true;
}

bool DescribeAccountGroupsData::ImportTypeHasBeenSet() const
{
    return m_importTypeHasBeenSet;
}

string DescribeAccountGroupsData::GetMiniIamId() const
{
    return m_miniIamId;
}

void DescribeAccountGroupsData::SetMiniIamId(const string& _miniIamId)
{
    m_miniIamId = _miniIamId;
    m_miniIamIdHasBeenSet = true;
}

bool DescribeAccountGroupsData::MiniIamIdHasBeenSet() const
{
    return m_miniIamIdHasBeenSet;
}

int64_t DescribeAccountGroupsData::GetUserTotal() const
{
    return m_userTotal;
}

void DescribeAccountGroupsData::SetUserTotal(const int64_t& _userTotal)
{
    m_userTotal = _userTotal;
    m_userTotalHasBeenSet = true;
}

bool DescribeAccountGroupsData::UserTotalHasBeenSet() const
{
    return m_userTotalHasBeenSet;
}

bool DescribeAccountGroupsData::GetIsLeaf() const
{
    return m_isLeaf;
}

void DescribeAccountGroupsData::SetIsLeaf(const bool& _isLeaf)
{
    m_isLeaf = _isLeaf;
    m_isLeafHasBeenSet = true;
}

bool DescribeAccountGroupsData::IsLeafHasBeenSet() const
{
    return m_isLeafHasBeenSet;
}

bool DescribeAccountGroupsData::GetReadOnly() const
{
    return m_readOnly;
}

void DescribeAccountGroupsData::SetReadOnly(const bool& _readOnly)
{
    m_readOnly = _readOnly;
    m_readOnlyHasBeenSet = true;
}

bool DescribeAccountGroupsData::ReadOnlyHasBeenSet() const
{
    return m_readOnlyHasBeenSet;
}

string DescribeAccountGroupsData::GetLatestSyncResult() const
{
    return m_latestSyncResult;
}

void DescribeAccountGroupsData::SetLatestSyncResult(const string& _latestSyncResult)
{
    m_latestSyncResult = _latestSyncResult;
    m_latestSyncResultHasBeenSet = true;
}

bool DescribeAccountGroupsData::LatestSyncResultHasBeenSet() const
{
    return m_latestSyncResultHasBeenSet;
}

string DescribeAccountGroupsData::GetLatestSyncTime() const
{
    return m_latestSyncTime;
}

void DescribeAccountGroupsData::SetLatestSyncTime(const string& _latestSyncTime)
{
    m_latestSyncTime = _latestSyncTime;
    m_latestSyncTimeHasBeenSet = true;
}

bool DescribeAccountGroupsData::LatestSyncTimeHasBeenSet() const
{
    return m_latestSyncTimeHasBeenSet;
}

