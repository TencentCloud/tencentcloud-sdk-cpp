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

#include <tencentcloud/tsf/v20180326/model/Resource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

Resource::Resource() :
    m_resourceIdHasBeenSet(false),
    m_resourceCodeHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_serviceCodeHasBeenSet(false),
    m_resourceActionHasBeenSet(false),
    m_idFieldHasBeenSet(false),
    m_nameFieldHasBeenSet(false),
    m_selectIdsFieldHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_deleteFlagHasBeenSet(false),
    m_resourceDescHasBeenSet(false),
    m_canSelectAllHasBeenSet(false),
    m_searchWordFieldHasBeenSet(false),
    m_indexHasBeenSet(false)
{
}

CoreInternalOutcome Resource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceCode") && !value["ResourceCode"].IsNull())
    {
        if (!value["ResourceCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.ResourceCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceCode = string(value["ResourceCode"].GetString());
        m_resourceCodeHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("ServiceCode") && !value["ServiceCode"].IsNull())
    {
        if (!value["ServiceCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.ServiceCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceCode = string(value["ServiceCode"].GetString());
        m_serviceCodeHasBeenSet = true;
    }

    if (value.HasMember("ResourceAction") && !value["ResourceAction"].IsNull())
    {
        if (!value["ResourceAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.ResourceAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceAction = string(value["ResourceAction"].GetString());
        m_resourceActionHasBeenSet = true;
    }

    if (value.HasMember("IdField") && !value["IdField"].IsNull())
    {
        if (!value["IdField"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.IdField` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idField = string(value["IdField"].GetString());
        m_idFieldHasBeenSet = true;
    }

    if (value.HasMember("NameField") && !value["NameField"].IsNull())
    {
        if (!value["NameField"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.NameField` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nameField = string(value["NameField"].GetString());
        m_nameFieldHasBeenSet = true;
    }

    if (value.HasMember("SelectIdsField") && !value["SelectIdsField"].IsNull())
    {
        if (!value["SelectIdsField"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.SelectIdsField` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_selectIdsField = string(value["SelectIdsField"].GetString());
        m_selectIdsFieldHasBeenSet = true;
    }

    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.CreationTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = value["CreationTime"].GetInt64();
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("LastUpdateTime") && !value["LastUpdateTime"].IsNull())
    {
        if (!value["LastUpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.LastUpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdateTime = value["LastUpdateTime"].GetInt64();
        m_lastUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("DeleteFlag") && !value["DeleteFlag"].IsNull())
    {
        if (!value["DeleteFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.DeleteFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deleteFlag = value["DeleteFlag"].GetBool();
        m_deleteFlagHasBeenSet = true;
    }

    if (value.HasMember("ResourceDesc") && !value["ResourceDesc"].IsNull())
    {
        if (!value["ResourceDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.ResourceDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceDesc = string(value["ResourceDesc"].GetString());
        m_resourceDescHasBeenSet = true;
    }

    if (value.HasMember("CanSelectAll") && !value["CanSelectAll"].IsNull())
    {
        if (!value["CanSelectAll"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.CanSelectAll` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canSelectAll = value["CanSelectAll"].GetBool();
        m_canSelectAllHasBeenSet = true;
    }

    if (value.HasMember("SearchWordField") && !value["SearchWordField"].IsNull())
    {
        if (!value["SearchWordField"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.SearchWordField` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_searchWordField = string(value["SearchWordField"].GetString());
        m_searchWordFieldHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.Index` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_index = value["Index"].GetInt64();
        m_indexHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Resource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceCode.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceCode.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceAction.c_str(), allocator).Move(), allocator);
    }

    if (m_idFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idField.c_str(), allocator).Move(), allocator);
    }

    if (m_nameFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nameField.c_str(), allocator).Move(), allocator);
    }

    if (m_selectIdsFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectIdsField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_selectIdsField.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_creationTime, allocator);
    }

    if (m_lastUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastUpdateTime, allocator);
    }

    if (m_deleteFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleteFlag, allocator);
    }

    if (m_resourceDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_canSelectAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanSelectAll";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canSelectAll, allocator);
    }

    if (m_searchWordFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchWordField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_searchWordField.c_str(), allocator).Move(), allocator);
    }

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_index, allocator);
    }

}


string Resource::GetResourceId() const
{
    return m_resourceId;
}

void Resource::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool Resource::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string Resource::GetResourceCode() const
{
    return m_resourceCode;
}

void Resource::SetResourceCode(const string& _resourceCode)
{
    m_resourceCode = _resourceCode;
    m_resourceCodeHasBeenSet = true;
}

bool Resource::ResourceCodeHasBeenSet() const
{
    return m_resourceCodeHasBeenSet;
}

string Resource::GetResourceName() const
{
    return m_resourceName;
}

void Resource::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool Resource::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string Resource::GetServiceCode() const
{
    return m_serviceCode;
}

void Resource::SetServiceCode(const string& _serviceCode)
{
    m_serviceCode = _serviceCode;
    m_serviceCodeHasBeenSet = true;
}

bool Resource::ServiceCodeHasBeenSet() const
{
    return m_serviceCodeHasBeenSet;
}

string Resource::GetResourceAction() const
{
    return m_resourceAction;
}

void Resource::SetResourceAction(const string& _resourceAction)
{
    m_resourceAction = _resourceAction;
    m_resourceActionHasBeenSet = true;
}

bool Resource::ResourceActionHasBeenSet() const
{
    return m_resourceActionHasBeenSet;
}

string Resource::GetIdField() const
{
    return m_idField;
}

void Resource::SetIdField(const string& _idField)
{
    m_idField = _idField;
    m_idFieldHasBeenSet = true;
}

bool Resource::IdFieldHasBeenSet() const
{
    return m_idFieldHasBeenSet;
}

string Resource::GetNameField() const
{
    return m_nameField;
}

void Resource::SetNameField(const string& _nameField)
{
    m_nameField = _nameField;
    m_nameFieldHasBeenSet = true;
}

bool Resource::NameFieldHasBeenSet() const
{
    return m_nameFieldHasBeenSet;
}

string Resource::GetSelectIdsField() const
{
    return m_selectIdsField;
}

void Resource::SetSelectIdsField(const string& _selectIdsField)
{
    m_selectIdsField = _selectIdsField;
    m_selectIdsFieldHasBeenSet = true;
}

bool Resource::SelectIdsFieldHasBeenSet() const
{
    return m_selectIdsFieldHasBeenSet;
}

int64_t Resource::GetCreationTime() const
{
    return m_creationTime;
}

void Resource::SetCreationTime(const int64_t& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool Resource::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

int64_t Resource::GetLastUpdateTime() const
{
    return m_lastUpdateTime;
}

void Resource::SetLastUpdateTime(const int64_t& _lastUpdateTime)
{
    m_lastUpdateTime = _lastUpdateTime;
    m_lastUpdateTimeHasBeenSet = true;
}

bool Resource::LastUpdateTimeHasBeenSet() const
{
    return m_lastUpdateTimeHasBeenSet;
}

bool Resource::GetDeleteFlag() const
{
    return m_deleteFlag;
}

void Resource::SetDeleteFlag(const bool& _deleteFlag)
{
    m_deleteFlag = _deleteFlag;
    m_deleteFlagHasBeenSet = true;
}

bool Resource::DeleteFlagHasBeenSet() const
{
    return m_deleteFlagHasBeenSet;
}

string Resource::GetResourceDesc() const
{
    return m_resourceDesc;
}

void Resource::SetResourceDesc(const string& _resourceDesc)
{
    m_resourceDesc = _resourceDesc;
    m_resourceDescHasBeenSet = true;
}

bool Resource::ResourceDescHasBeenSet() const
{
    return m_resourceDescHasBeenSet;
}

bool Resource::GetCanSelectAll() const
{
    return m_canSelectAll;
}

void Resource::SetCanSelectAll(const bool& _canSelectAll)
{
    m_canSelectAll = _canSelectAll;
    m_canSelectAllHasBeenSet = true;
}

bool Resource::CanSelectAllHasBeenSet() const
{
    return m_canSelectAllHasBeenSet;
}

string Resource::GetSearchWordField() const
{
    return m_searchWordField;
}

void Resource::SetSearchWordField(const string& _searchWordField)
{
    m_searchWordField = _searchWordField;
    m_searchWordFieldHasBeenSet = true;
}

bool Resource::SearchWordFieldHasBeenSet() const
{
    return m_searchWordFieldHasBeenSet;
}

int64_t Resource::GetIndex() const
{
    return m_index;
}

void Resource::SetIndex(const int64_t& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool Resource::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

