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

#include <tencentcloud/sqlserver/v20180328/model/RollbackInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

RollbackInstanceRequest::RollbackInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_dBsHasBeenSet(false),
    m_targetInstanceIdHasBeenSet(false),
    m_renameRestoreHasBeenSet(false)
{
}

string RollbackInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_dBsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dBs.begin(); itr != m_dBs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_targetInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_renameRestoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenameRestore";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_renameRestore.begin(); itr != m_renameRestore.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RollbackInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void RollbackInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RollbackInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t RollbackInstanceRequest::GetType() const
{
    return m_type;
}

void RollbackInstanceRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RollbackInstanceRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string RollbackInstanceRequest::GetTime() const
{
    return m_time;
}

void RollbackInstanceRequest::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool RollbackInstanceRequest::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

vector<string> RollbackInstanceRequest::GetDBs() const
{
    return m_dBs;
}

void RollbackInstanceRequest::SetDBs(const vector<string>& _dBs)
{
    m_dBs = _dBs;
    m_dBsHasBeenSet = true;
}

bool RollbackInstanceRequest::DBsHasBeenSet() const
{
    return m_dBsHasBeenSet;
}

string RollbackInstanceRequest::GetTargetInstanceId() const
{
    return m_targetInstanceId;
}

void RollbackInstanceRequest::SetTargetInstanceId(const string& _targetInstanceId)
{
    m_targetInstanceId = _targetInstanceId;
    m_targetInstanceIdHasBeenSet = true;
}

bool RollbackInstanceRequest::TargetInstanceIdHasBeenSet() const
{
    return m_targetInstanceIdHasBeenSet;
}

vector<RenameRestoreDatabase> RollbackInstanceRequest::GetRenameRestore() const
{
    return m_renameRestore;
}

void RollbackInstanceRequest::SetRenameRestore(const vector<RenameRestoreDatabase>& _renameRestore)
{
    m_renameRestore = _renameRestore;
    m_renameRestoreHasBeenSet = true;
}

bool RollbackInstanceRequest::RenameRestoreHasBeenSet() const
{
    return m_renameRestoreHasBeenSet;
}


