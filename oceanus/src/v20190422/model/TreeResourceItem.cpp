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

#include <tencentcloud/oceanus/v20190422/model/TreeResourceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

TreeResourceItem::TreeResourceItem() :
    m_resourceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_folderIdHasBeenSet(false),
    m_refJobStatusCountSetHasBeenSet(false)
{
}

CoreInternalOutcome TreeResourceItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreeResourceItem.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreeResourceItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TreeResourceItem.ResourceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = value["ResourceType"].GetInt64();
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreeResourceItem.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreeResourceItem.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FolderId") && !value["FolderId"].IsNull())
    {
        if (!value["FolderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreeResourceItem.FolderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderId = string(value["FolderId"].GetString());
        m_folderIdHasBeenSet = true;
    }

    if (value.HasMember("RefJobStatusCountSet") && !value["RefJobStatusCountSet"].IsNull())
    {
        if (!value["RefJobStatusCountSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TreeResourceItem.RefJobStatusCountSet` is not array type"));

        const rapidjson::Value &tmpValue = value["RefJobStatusCountSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RefJobStatusCountItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_refJobStatusCountSet.push_back(item);
        }
        m_refJobStatusCountSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TreeResourceItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceType, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_folderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_folderId.c_str(), allocator).Move(), allocator);
    }

    if (m_refJobStatusCountSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefJobStatusCountSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_refJobStatusCountSet.begin(); itr != m_refJobStatusCountSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string TreeResourceItem::GetResourceId() const
{
    return m_resourceId;
}

void TreeResourceItem::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool TreeResourceItem::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string TreeResourceItem::GetName() const
{
    return m_name;
}

void TreeResourceItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TreeResourceItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t TreeResourceItem::GetResourceType() const
{
    return m_resourceType;
}

void TreeResourceItem::SetResourceType(const int64_t& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool TreeResourceItem::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string TreeResourceItem::GetRemark() const
{
    return m_remark;
}

void TreeResourceItem::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool TreeResourceItem::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string TreeResourceItem::GetFileName() const
{
    return m_fileName;
}

void TreeResourceItem::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool TreeResourceItem::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string TreeResourceItem::GetFolderId() const
{
    return m_folderId;
}

void TreeResourceItem::SetFolderId(const string& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool TreeResourceItem::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

vector<RefJobStatusCountItem> TreeResourceItem::GetRefJobStatusCountSet() const
{
    return m_refJobStatusCountSet;
}

void TreeResourceItem::SetRefJobStatusCountSet(const vector<RefJobStatusCountItem>& _refJobStatusCountSet)
{
    m_refJobStatusCountSet = _refJobStatusCountSet;
    m_refJobStatusCountSetHasBeenSet = true;
}

bool TreeResourceItem::RefJobStatusCountSetHasBeenSet() const
{
    return m_refJobStatusCountSetHasBeenSet;
}

