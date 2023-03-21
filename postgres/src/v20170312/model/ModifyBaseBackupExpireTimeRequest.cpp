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

#include <tencentcloud/postgres/v20170312/model/ModifyBaseBackupExpireTimeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

ModifyBaseBackupExpireTimeRequest::ModifyBaseBackupExpireTimeRequest() :
    m_dBInstanceIdHasBeenSet(false),
    m_baseBackupIdHasBeenSet(false),
    m_newExpireTimeHasBeenSet(false)
{
}

string ModifyBaseBackupExpireTimeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dBInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_baseBackupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseBackupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_baseBackupId.c_str(), allocator).Move(), allocator);
    }

    if (m_newExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newExpireTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyBaseBackupExpireTimeRequest::GetDBInstanceId() const
{
    return m_dBInstanceId;
}

void ModifyBaseBackupExpireTimeRequest::SetDBInstanceId(const string& _dBInstanceId)
{
    m_dBInstanceId = _dBInstanceId;
    m_dBInstanceIdHasBeenSet = true;
}

bool ModifyBaseBackupExpireTimeRequest::DBInstanceIdHasBeenSet() const
{
    return m_dBInstanceIdHasBeenSet;
}

string ModifyBaseBackupExpireTimeRequest::GetBaseBackupId() const
{
    return m_baseBackupId;
}

void ModifyBaseBackupExpireTimeRequest::SetBaseBackupId(const string& _baseBackupId)
{
    m_baseBackupId = _baseBackupId;
    m_baseBackupIdHasBeenSet = true;
}

bool ModifyBaseBackupExpireTimeRequest::BaseBackupIdHasBeenSet() const
{
    return m_baseBackupIdHasBeenSet;
}

string ModifyBaseBackupExpireTimeRequest::GetNewExpireTime() const
{
    return m_newExpireTime;
}

void ModifyBaseBackupExpireTimeRequest::SetNewExpireTime(const string& _newExpireTime)
{
    m_newExpireTime = _newExpireTime;
    m_newExpireTimeHasBeenSet = true;
}

bool ModifyBaseBackupExpireTimeRequest::NewExpireTimeHasBeenSet() const
{
    return m_newExpireTimeHasBeenSet;
}


