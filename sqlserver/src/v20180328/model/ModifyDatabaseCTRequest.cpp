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

#include <tencentcloud/sqlserver/v20180328/model/ModifyDatabaseCTRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

ModifyDatabaseCTRequest::ModifyDatabaseCTRequest() :
    m_dBNamesHasBeenSet(false),
    m_modifyTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_changeRetentionDayHasBeenSet(false)
{
}

string ModifyDatabaseCTRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dBNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dBNames.begin(); itr != m_dBNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_modifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modifyType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_changeRetentionDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChangeRetentionDay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_changeRetentionDay, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyDatabaseCTRequest::GetDBNames() const
{
    return m_dBNames;
}

void ModifyDatabaseCTRequest::SetDBNames(const vector<string>& _dBNames)
{
    m_dBNames = _dBNames;
    m_dBNamesHasBeenSet = true;
}

bool ModifyDatabaseCTRequest::DBNamesHasBeenSet() const
{
    return m_dBNamesHasBeenSet;
}

string ModifyDatabaseCTRequest::GetModifyType() const
{
    return m_modifyType;
}

void ModifyDatabaseCTRequest::SetModifyType(const string& _modifyType)
{
    m_modifyType = _modifyType;
    m_modifyTypeHasBeenSet = true;
}

bool ModifyDatabaseCTRequest::ModifyTypeHasBeenSet() const
{
    return m_modifyTypeHasBeenSet;
}

string ModifyDatabaseCTRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyDatabaseCTRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyDatabaseCTRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t ModifyDatabaseCTRequest::GetChangeRetentionDay() const
{
    return m_changeRetentionDay;
}

void ModifyDatabaseCTRequest::SetChangeRetentionDay(const int64_t& _changeRetentionDay)
{
    m_changeRetentionDay = _changeRetentionDay;
    m_changeRetentionDayHasBeenSet = true;
}

bool ModifyDatabaseCTRequest::ChangeRetentionDayHasBeenSet() const
{
    return m_changeRetentionDayHasBeenSet;
}


