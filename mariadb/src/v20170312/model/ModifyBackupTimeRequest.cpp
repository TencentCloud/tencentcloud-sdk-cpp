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

#include <tencentcloud/mariadb/v20170312/model/ModifyBackupTimeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

ModifyBackupTimeRequest::ModifyBackupTimeRequest() :
    m_instanceIdHasBeenSet(false),
    m_startBackupTimeHasBeenSet(false),
    m_endBackupTimeHasBeenSet(false)
{
}

string ModifyBackupTimeRequest::ToJsonString() const
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

    if (m_startBackupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartBackupTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startBackupTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endBackupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndBackupTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endBackupTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyBackupTimeRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyBackupTimeRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyBackupTimeRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyBackupTimeRequest::GetStartBackupTime() const
{
    return m_startBackupTime;
}

void ModifyBackupTimeRequest::SetStartBackupTime(const string& _startBackupTime)
{
    m_startBackupTime = _startBackupTime;
    m_startBackupTimeHasBeenSet = true;
}

bool ModifyBackupTimeRequest::StartBackupTimeHasBeenSet() const
{
    return m_startBackupTimeHasBeenSet;
}

string ModifyBackupTimeRequest::GetEndBackupTime() const
{
    return m_endBackupTime;
}

void ModifyBackupTimeRequest::SetEndBackupTime(const string& _endBackupTime)
{
    m_endBackupTime = _endBackupTime;
    m_endBackupTimeHasBeenSet = true;
}

bool ModifyBackupTimeRequest::EndBackupTimeHasBeenSet() const
{
    return m_endBackupTimeHasBeenSet;
}


