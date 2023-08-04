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

#include <tencentcloud/postgres/v20170312/model/SwitchDBInstancePrimaryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

SwitchDBInstancePrimaryRequest::SwitchDBInstancePrimaryRequest() :
    m_dBInstanceIdHasBeenSet(false),
    m_forceHasBeenSet(false),
    m_switchTagHasBeenSet(false),
    m_switchStartTimeHasBeenSet(false),
    m_switchEndTimeHasBeenSet(false)
{
}

string SwitchDBInstancePrimaryRequest::ToJsonString() const
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

    if (m_forceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Force";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_force, allocator);
    }

    if (m_switchTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchTag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_switchTag, allocator);
    }

    if (m_switchStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_switchStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_switchEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchEndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_switchEndTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SwitchDBInstancePrimaryRequest::GetDBInstanceId() const
{
    return m_dBInstanceId;
}

void SwitchDBInstancePrimaryRequest::SetDBInstanceId(const string& _dBInstanceId)
{
    m_dBInstanceId = _dBInstanceId;
    m_dBInstanceIdHasBeenSet = true;
}

bool SwitchDBInstancePrimaryRequest::DBInstanceIdHasBeenSet() const
{
    return m_dBInstanceIdHasBeenSet;
}

bool SwitchDBInstancePrimaryRequest::GetForce() const
{
    return m_force;
}

void SwitchDBInstancePrimaryRequest::SetForce(const bool& _force)
{
    m_force = _force;
    m_forceHasBeenSet = true;
}

bool SwitchDBInstancePrimaryRequest::ForceHasBeenSet() const
{
    return m_forceHasBeenSet;
}

uint64_t SwitchDBInstancePrimaryRequest::GetSwitchTag() const
{
    return m_switchTag;
}

void SwitchDBInstancePrimaryRequest::SetSwitchTag(const uint64_t& _switchTag)
{
    m_switchTag = _switchTag;
    m_switchTagHasBeenSet = true;
}

bool SwitchDBInstancePrimaryRequest::SwitchTagHasBeenSet() const
{
    return m_switchTagHasBeenSet;
}

string SwitchDBInstancePrimaryRequest::GetSwitchStartTime() const
{
    return m_switchStartTime;
}

void SwitchDBInstancePrimaryRequest::SetSwitchStartTime(const string& _switchStartTime)
{
    m_switchStartTime = _switchStartTime;
    m_switchStartTimeHasBeenSet = true;
}

bool SwitchDBInstancePrimaryRequest::SwitchStartTimeHasBeenSet() const
{
    return m_switchStartTimeHasBeenSet;
}

string SwitchDBInstancePrimaryRequest::GetSwitchEndTime() const
{
    return m_switchEndTime;
}

void SwitchDBInstancePrimaryRequest::SetSwitchEndTime(const string& _switchEndTime)
{
    m_switchEndTime = _switchEndTime;
    m_switchEndTimeHasBeenSet = true;
}

bool SwitchDBInstancePrimaryRequest::SwitchEndTimeHasBeenSet() const
{
    return m_switchEndTimeHasBeenSet;
}


