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

#include <tencentcloud/tcaplusdb/v20190823/model/TableGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace rapidjson;
using namespace std;

TableGroupInfo::TableGroupInfo() :
    m_tableGroupIdHasBeenSet(false),
    m_tableGroupNameHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_tableCountHasBeenSet(false),
    m_totalSizeHasBeenSet(false)
{
}

CoreInternalOutcome TableGroupInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("TableGroupId") && !value["TableGroupId"].IsNull())
    {
        if (!value["TableGroupId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TableGroupInfo.TableGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableGroupId = string(value["TableGroupId"].GetString());
        m_tableGroupIdHasBeenSet = true;
    }

    if (value.HasMember("TableGroupName") && !value["TableGroupName"].IsNull())
    {
        if (!value["TableGroupName"].IsString())
        {
            return CoreInternalOutcome(Error("response `TableGroupInfo.TableGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableGroupName = string(value["TableGroupName"].GetString());
        m_tableGroupNameHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `TableGroupInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("TableCount") && !value["TableCount"].IsNull())
    {
        if (!value["TableCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TableGroupInfo.TableCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tableCount = value["TableCount"].GetUint64();
        m_tableCountHasBeenSet = true;
    }

    if (value.HasMember("TotalSize") && !value["TotalSize"].IsNull())
    {
        if (!value["TotalSize"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TableGroupInfo.TotalSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalSize = value["TotalSize"].GetUint64();
        m_totalSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableGroupInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_tableGroupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TableGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tableGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableGroupNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TableGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tableGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_tableCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TableCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tableCount, allocator);
    }

    if (m_totalSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TotalSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalSize, allocator);
    }

}


string TableGroupInfo::GetTableGroupId() const
{
    return m_tableGroupId;
}

void TableGroupInfo::SetTableGroupId(const string& _tableGroupId)
{
    m_tableGroupId = _tableGroupId;
    m_tableGroupIdHasBeenSet = true;
}

bool TableGroupInfo::TableGroupIdHasBeenSet() const
{
    return m_tableGroupIdHasBeenSet;
}

string TableGroupInfo::GetTableGroupName() const
{
    return m_tableGroupName;
}

void TableGroupInfo::SetTableGroupName(const string& _tableGroupName)
{
    m_tableGroupName = _tableGroupName;
    m_tableGroupNameHasBeenSet = true;
}

bool TableGroupInfo::TableGroupNameHasBeenSet() const
{
    return m_tableGroupNameHasBeenSet;
}

string TableGroupInfo::GetCreatedTime() const
{
    return m_createdTime;
}

void TableGroupInfo::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool TableGroupInfo::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

uint64_t TableGroupInfo::GetTableCount() const
{
    return m_tableCount;
}

void TableGroupInfo::SetTableCount(const uint64_t& _tableCount)
{
    m_tableCount = _tableCount;
    m_tableCountHasBeenSet = true;
}

bool TableGroupInfo::TableCountHasBeenSet() const
{
    return m_tableCountHasBeenSet;
}

uint64_t TableGroupInfo::GetTotalSize() const
{
    return m_totalSize;
}

void TableGroupInfo::SetTotalSize(const uint64_t& _totalSize)
{
    m_totalSize = _totalSize;
    m_totalSizeHasBeenSet = true;
}

bool TableGroupInfo::TotalSizeHasBeenSet() const
{
    return m_totalSizeHasBeenSet;
}

