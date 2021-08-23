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

#include <tencentcloud/postgres/v20170312/model/Xlog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

Xlog::Xlog() :
    m_idHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_internalAddrHasBeenSet(false),
    m_externalAddrHasBeenSet(false),
    m_sizeHasBeenSet(false)
{
}

CoreInternalOutcome Xlog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Xlog.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Xlog.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Xlog.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("InternalAddr") && !value["InternalAddr"].IsNull())
    {
        if (!value["InternalAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Xlog.InternalAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internalAddr = string(value["InternalAddr"].GetString());
        m_internalAddrHasBeenSet = true;
    }

    if (value.HasMember("ExternalAddr") && !value["ExternalAddr"].IsNull())
    {
        if (!value["ExternalAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Xlog.ExternalAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalAddr = string(value["ExternalAddr"].GetString());
        m_externalAddrHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Xlog.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Xlog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_internalAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternalAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internalAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_externalAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

}


int64_t Xlog::GetId() const
{
    return m_id;
}

void Xlog::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Xlog::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string Xlog::GetStartTime() const
{
    return m_startTime;
}

void Xlog::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool Xlog::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string Xlog::GetEndTime() const
{
    return m_endTime;
}

void Xlog::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool Xlog::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string Xlog::GetInternalAddr() const
{
    return m_internalAddr;
}

void Xlog::SetInternalAddr(const string& _internalAddr)
{
    m_internalAddr = _internalAddr;
    m_internalAddrHasBeenSet = true;
}

bool Xlog::InternalAddrHasBeenSet() const
{
    return m_internalAddrHasBeenSet;
}

string Xlog::GetExternalAddr() const
{
    return m_externalAddr;
}

void Xlog::SetExternalAddr(const string& _externalAddr)
{
    m_externalAddr = _externalAddr;
    m_externalAddrHasBeenSet = true;
}

bool Xlog::ExternalAddrHasBeenSet() const
{
    return m_externalAddrHasBeenSet;
}

int64_t Xlog::GetSize() const
{
    return m_size;
}

void Xlog::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool Xlog::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

