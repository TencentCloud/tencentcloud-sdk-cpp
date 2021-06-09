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

#include <tencentcloud/sqlserver/v20180328/model/ModifyDBNameRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

ModifyDBNameRequest::ModifyDBNameRequest() :
    m_instanceIdHasBeenSet(false),
    m_oldDBNameHasBeenSet(false),
    m_newDBNameHasBeenSet(false)
{
}

string ModifyDBNameRequest::ToJsonString() const
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

    if (m_oldDBNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldDBName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_oldDBName.c_str(), allocator).Move(), allocator);
    }

    if (m_newDBNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewDBName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newDBName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDBNameRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyDBNameRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyDBNameRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyDBNameRequest::GetOldDBName() const
{
    return m_oldDBName;
}

void ModifyDBNameRequest::SetOldDBName(const string& _oldDBName)
{
    m_oldDBName = _oldDBName;
    m_oldDBNameHasBeenSet = true;
}

bool ModifyDBNameRequest::OldDBNameHasBeenSet() const
{
    return m_oldDBNameHasBeenSet;
}

string ModifyDBNameRequest::GetNewDBName() const
{
    return m_newDBName;
}

void ModifyDBNameRequest::SetNewDBName(const string& _newDBName)
{
    m_newDBName = _newDBName;
    m_newDBNameHasBeenSet = true;
}

bool ModifyDBNameRequest::NewDBNameHasBeenSet() const
{
    return m_newDBNameHasBeenSet;
}


