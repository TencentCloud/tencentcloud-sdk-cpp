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

#include <tencentcloud/tcaplusdb/v20190823/model/SnapshotInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

SnapshotInfo::SnapshotInfo() :
    m_tableGroupIdHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_snapshotNameHasBeenSet(false),
    m_snapshotTimeHasBeenSet(false),
    m_snapshotDeadTimeHasBeenSet(false)
{
}

CoreInternalOutcome SnapshotInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableGroupId") && !value["TableGroupId"].IsNull())
    {
        if (!value["TableGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.TableGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableGroupId = string(value["TableGroupId"].GetString());
        m_tableGroupIdHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("SnapshotName") && !value["SnapshotName"].IsNull())
    {
        if (!value["SnapshotName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.SnapshotName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotName = string(value["SnapshotName"].GetString());
        m_snapshotNameHasBeenSet = true;
    }

    if (value.HasMember("SnapshotTime") && !value["SnapshotTime"].IsNull())
    {
        if (!value["SnapshotTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.SnapshotTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotTime = string(value["SnapshotTime"].GetString());
        m_snapshotTimeHasBeenSet = true;
    }

    if (value.HasMember("SnapshotDeadTime") && !value["SnapshotDeadTime"].IsNull())
    {
        if (!value["SnapshotDeadTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.SnapshotDeadTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotDeadTime = string(value["SnapshotDeadTime"].GetString());
        m_snapshotDeadTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SnapshotInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotName.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotTime.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotDeadTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotDeadTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotDeadTime.c_str(), allocator).Move(), allocator);
    }

}


string SnapshotInfo::GetTableGroupId() const
{
    return m_tableGroupId;
}

void SnapshotInfo::SetTableGroupId(const string& _tableGroupId)
{
    m_tableGroupId = _tableGroupId;
    m_tableGroupIdHasBeenSet = true;
}

bool SnapshotInfo::TableGroupIdHasBeenSet() const
{
    return m_tableGroupIdHasBeenSet;
}

string SnapshotInfo::GetTableName() const
{
    return m_tableName;
}

void SnapshotInfo::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool SnapshotInfo::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string SnapshotInfo::GetSnapshotName() const
{
    return m_snapshotName;
}

void SnapshotInfo::SetSnapshotName(const string& _snapshotName)
{
    m_snapshotName = _snapshotName;
    m_snapshotNameHasBeenSet = true;
}

bool SnapshotInfo::SnapshotNameHasBeenSet() const
{
    return m_snapshotNameHasBeenSet;
}

string SnapshotInfo::GetSnapshotTime() const
{
    return m_snapshotTime;
}

void SnapshotInfo::SetSnapshotTime(const string& _snapshotTime)
{
    m_snapshotTime = _snapshotTime;
    m_snapshotTimeHasBeenSet = true;
}

bool SnapshotInfo::SnapshotTimeHasBeenSet() const
{
    return m_snapshotTimeHasBeenSet;
}

string SnapshotInfo::GetSnapshotDeadTime() const
{
    return m_snapshotDeadTime;
}

void SnapshotInfo::SetSnapshotDeadTime(const string& _snapshotDeadTime)
{
    m_snapshotDeadTime = _snapshotDeadTime;
    m_snapshotDeadTimeHasBeenSet = true;
}

bool SnapshotInfo::SnapshotDeadTimeHasBeenSet() const
{
    return m_snapshotDeadTimeHasBeenSet;
}

