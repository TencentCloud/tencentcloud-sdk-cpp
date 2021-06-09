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

#include <tencentcloud/tcaplusdb/v20190823/model/ImportSnapshotsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

ImportSnapshotsRequest::ImportSnapshotsRequest() :
    m_clusterIdHasBeenSet(false),
    m_snapshotsHasBeenSet(false),
    m_importSpecialKeyHasBeenSet(false),
    m_importOriginTableHasBeenSet(false),
    m_keyFileHasBeenSet(false),
    m_newTableGroupIdHasBeenSet(false),
    m_newTableNameHasBeenSet(false)
{
}

string ImportSnapshotsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Snapshots";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_snapshots.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_importSpecialKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImportSpecialKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_importSpecialKey.c_str(), allocator).Move(), allocator);
    }

    if (m_importOriginTableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImportOriginTable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_importOriginTable.c_str(), allocator).Move(), allocator);
    }

    if (m_keyFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyFile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_keyFile.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_newTableGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewTableGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newTableGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_newTableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewTableName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newTableName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ImportSnapshotsRequest::GetClusterId() const
{
    return m_clusterId;
}

void ImportSnapshotsRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ImportSnapshotsRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

SnapshotInfo ImportSnapshotsRequest::GetSnapshots() const
{
    return m_snapshots;
}

void ImportSnapshotsRequest::SetSnapshots(const SnapshotInfo& _snapshots)
{
    m_snapshots = _snapshots;
    m_snapshotsHasBeenSet = true;
}

bool ImportSnapshotsRequest::SnapshotsHasBeenSet() const
{
    return m_snapshotsHasBeenSet;
}

string ImportSnapshotsRequest::GetImportSpecialKey() const
{
    return m_importSpecialKey;
}

void ImportSnapshotsRequest::SetImportSpecialKey(const string& _importSpecialKey)
{
    m_importSpecialKey = _importSpecialKey;
    m_importSpecialKeyHasBeenSet = true;
}

bool ImportSnapshotsRequest::ImportSpecialKeyHasBeenSet() const
{
    return m_importSpecialKeyHasBeenSet;
}

string ImportSnapshotsRequest::GetImportOriginTable() const
{
    return m_importOriginTable;
}

void ImportSnapshotsRequest::SetImportOriginTable(const string& _importOriginTable)
{
    m_importOriginTable = _importOriginTable;
    m_importOriginTableHasBeenSet = true;
}

bool ImportSnapshotsRequest::ImportOriginTableHasBeenSet() const
{
    return m_importOriginTableHasBeenSet;
}

KeyFile ImportSnapshotsRequest::GetKeyFile() const
{
    return m_keyFile;
}

void ImportSnapshotsRequest::SetKeyFile(const KeyFile& _keyFile)
{
    m_keyFile = _keyFile;
    m_keyFileHasBeenSet = true;
}

bool ImportSnapshotsRequest::KeyFileHasBeenSet() const
{
    return m_keyFileHasBeenSet;
}

string ImportSnapshotsRequest::GetNewTableGroupId() const
{
    return m_newTableGroupId;
}

void ImportSnapshotsRequest::SetNewTableGroupId(const string& _newTableGroupId)
{
    m_newTableGroupId = _newTableGroupId;
    m_newTableGroupIdHasBeenSet = true;
}

bool ImportSnapshotsRequest::NewTableGroupIdHasBeenSet() const
{
    return m_newTableGroupIdHasBeenSet;
}

string ImportSnapshotsRequest::GetNewTableName() const
{
    return m_newTableName;
}

void ImportSnapshotsRequest::SetNewTableName(const string& _newTableName)
{
    m_newTableName = _newTableName;
    m_newTableNameHasBeenSet = true;
}

bool ImportSnapshotsRequest::NewTableNameHasBeenSet() const
{
    return m_newTableNameHasBeenSet;
}


