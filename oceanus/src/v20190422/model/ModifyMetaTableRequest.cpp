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

#include <tencentcloud/oceanus/v20190422/model/ModifyMetaTableRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

ModifyMetaTableRequest::ModifyMetaTableRequest() :
    m_clusterIdHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_sqlCodeHasBeenSet(false),
    m_flinkVersionHasBeenSet(false),
    m_workSpaceIdHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string ModifyMetaTableRequest::ToJsonString() const
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

    if (m_tableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableId.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sqlCode.c_str(), allocator).Move(), allocator);
    }

    if (m_flinkVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlinkVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flinkVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_workSpaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkSpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workSpaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyMetaTableRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyMetaTableRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyMetaTableRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ModifyMetaTableRequest::GetTableId() const
{
    return m_tableId;
}

void ModifyMetaTableRequest::SetTableId(const string& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool ModifyMetaTableRequest::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

string ModifyMetaTableRequest::GetSqlCode() const
{
    return m_sqlCode;
}

void ModifyMetaTableRequest::SetSqlCode(const string& _sqlCode)
{
    m_sqlCode = _sqlCode;
    m_sqlCodeHasBeenSet = true;
}

bool ModifyMetaTableRequest::SqlCodeHasBeenSet() const
{
    return m_sqlCodeHasBeenSet;
}

string ModifyMetaTableRequest::GetFlinkVersion() const
{
    return m_flinkVersion;
}

void ModifyMetaTableRequest::SetFlinkVersion(const string& _flinkVersion)
{
    m_flinkVersion = _flinkVersion;
    m_flinkVersionHasBeenSet = true;
}

bool ModifyMetaTableRequest::FlinkVersionHasBeenSet() const
{
    return m_flinkVersionHasBeenSet;
}

string ModifyMetaTableRequest::GetWorkSpaceId() const
{
    return m_workSpaceId;
}

void ModifyMetaTableRequest::SetWorkSpaceId(const string& _workSpaceId)
{
    m_workSpaceId = _workSpaceId;
    m_workSpaceIdHasBeenSet = true;
}

bool ModifyMetaTableRequest::WorkSpaceIdHasBeenSet() const
{
    return m_workSpaceIdHasBeenSet;
}

string ModifyMetaTableRequest::GetRemark() const
{
    return m_remark;
}

void ModifyMetaTableRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyMetaTableRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


