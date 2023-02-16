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

#include <tencentcloud/bma/v20221115/model/ServiceData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bma::V20221115::Model;
using namespace std;

ServiceData::ServiceData() :
    m_protectURLCountHasBeenSet(false),
    m_protectURLExpireTimeHasBeenSet(false),
    m_protectAPPCountHasBeenSet(false),
    m_protectAPPExpireTimeHasBeenSet(false),
    m_protectOfficialAccountCountHasBeenSet(false),
    m_protectOfficialAccountExpireTimeHasBeenSet(false),
    m_protectMiniProgramCountHasBeenSet(false),
    m_protectMiniProgramExpireTimeHasBeenSet(false),
    m_offlineCountHasBeenSet(false)
{
}

CoreInternalOutcome ServiceData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProtectURLCount") && !value["ProtectURLCount"].IsNull())
    {
        if (!value["ProtectURLCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceData.ProtectURLCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_protectURLCount = value["ProtectURLCount"].GetInt64();
        m_protectURLCountHasBeenSet = true;
    }

    if (value.HasMember("ProtectURLExpireTime") && !value["ProtectURLExpireTime"].IsNull())
    {
        if (!value["ProtectURLExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceData.ProtectURLExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectURLExpireTime = string(value["ProtectURLExpireTime"].GetString());
        m_protectURLExpireTimeHasBeenSet = true;
    }

    if (value.HasMember("ProtectAPPCount") && !value["ProtectAPPCount"].IsNull())
    {
        if (!value["ProtectAPPCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceData.ProtectAPPCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_protectAPPCount = value["ProtectAPPCount"].GetInt64();
        m_protectAPPCountHasBeenSet = true;
    }

    if (value.HasMember("ProtectAPPExpireTime") && !value["ProtectAPPExpireTime"].IsNull())
    {
        if (!value["ProtectAPPExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceData.ProtectAPPExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectAPPExpireTime = string(value["ProtectAPPExpireTime"].GetString());
        m_protectAPPExpireTimeHasBeenSet = true;
    }

    if (value.HasMember("ProtectOfficialAccountCount") && !value["ProtectOfficialAccountCount"].IsNull())
    {
        if (!value["ProtectOfficialAccountCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceData.ProtectOfficialAccountCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_protectOfficialAccountCount = value["ProtectOfficialAccountCount"].GetInt64();
        m_protectOfficialAccountCountHasBeenSet = true;
    }

    if (value.HasMember("ProtectOfficialAccountExpireTime") && !value["ProtectOfficialAccountExpireTime"].IsNull())
    {
        if (!value["ProtectOfficialAccountExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceData.ProtectOfficialAccountExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectOfficialAccountExpireTime = string(value["ProtectOfficialAccountExpireTime"].GetString());
        m_protectOfficialAccountExpireTimeHasBeenSet = true;
    }

    if (value.HasMember("ProtectMiniProgramCount") && !value["ProtectMiniProgramCount"].IsNull())
    {
        if (!value["ProtectMiniProgramCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceData.ProtectMiniProgramCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_protectMiniProgramCount = value["ProtectMiniProgramCount"].GetInt64();
        m_protectMiniProgramCountHasBeenSet = true;
    }

    if (value.HasMember("ProtectMiniProgramExpireTime") && !value["ProtectMiniProgramExpireTime"].IsNull())
    {
        if (!value["ProtectMiniProgramExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceData.ProtectMiniProgramExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectMiniProgramExpireTime = string(value["ProtectMiniProgramExpireTime"].GetString());
        m_protectMiniProgramExpireTimeHasBeenSet = true;
    }

    if (value.HasMember("OfflineCount") && !value["OfflineCount"].IsNull())
    {
        if (!value["OfflineCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceData.OfflineCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_offlineCount = value["OfflineCount"].GetInt64();
        m_offlineCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_protectURLCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectURLCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectURLCount, allocator);
    }

    if (m_protectURLExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectURLExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectURLExpireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_protectAPPCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectAPPCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectAPPCount, allocator);
    }

    if (m_protectAPPExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectAPPExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectAPPExpireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_protectOfficialAccountCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectOfficialAccountCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectOfficialAccountCount, allocator);
    }

    if (m_protectOfficialAccountExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectOfficialAccountExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectOfficialAccountExpireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_protectMiniProgramCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectMiniProgramCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectMiniProgramCount, allocator);
    }

    if (m_protectMiniProgramExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectMiniProgramExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectMiniProgramExpireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_offlineCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfflineCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offlineCount, allocator);
    }

}


int64_t ServiceData::GetProtectURLCount() const
{
    return m_protectURLCount;
}

void ServiceData::SetProtectURLCount(const int64_t& _protectURLCount)
{
    m_protectURLCount = _protectURLCount;
    m_protectURLCountHasBeenSet = true;
}

bool ServiceData::ProtectURLCountHasBeenSet() const
{
    return m_protectURLCountHasBeenSet;
}

string ServiceData::GetProtectURLExpireTime() const
{
    return m_protectURLExpireTime;
}

void ServiceData::SetProtectURLExpireTime(const string& _protectURLExpireTime)
{
    m_protectURLExpireTime = _protectURLExpireTime;
    m_protectURLExpireTimeHasBeenSet = true;
}

bool ServiceData::ProtectURLExpireTimeHasBeenSet() const
{
    return m_protectURLExpireTimeHasBeenSet;
}

int64_t ServiceData::GetProtectAPPCount() const
{
    return m_protectAPPCount;
}

void ServiceData::SetProtectAPPCount(const int64_t& _protectAPPCount)
{
    m_protectAPPCount = _protectAPPCount;
    m_protectAPPCountHasBeenSet = true;
}

bool ServiceData::ProtectAPPCountHasBeenSet() const
{
    return m_protectAPPCountHasBeenSet;
}

string ServiceData::GetProtectAPPExpireTime() const
{
    return m_protectAPPExpireTime;
}

void ServiceData::SetProtectAPPExpireTime(const string& _protectAPPExpireTime)
{
    m_protectAPPExpireTime = _protectAPPExpireTime;
    m_protectAPPExpireTimeHasBeenSet = true;
}

bool ServiceData::ProtectAPPExpireTimeHasBeenSet() const
{
    return m_protectAPPExpireTimeHasBeenSet;
}

int64_t ServiceData::GetProtectOfficialAccountCount() const
{
    return m_protectOfficialAccountCount;
}

void ServiceData::SetProtectOfficialAccountCount(const int64_t& _protectOfficialAccountCount)
{
    m_protectOfficialAccountCount = _protectOfficialAccountCount;
    m_protectOfficialAccountCountHasBeenSet = true;
}

bool ServiceData::ProtectOfficialAccountCountHasBeenSet() const
{
    return m_protectOfficialAccountCountHasBeenSet;
}

string ServiceData::GetProtectOfficialAccountExpireTime() const
{
    return m_protectOfficialAccountExpireTime;
}

void ServiceData::SetProtectOfficialAccountExpireTime(const string& _protectOfficialAccountExpireTime)
{
    m_protectOfficialAccountExpireTime = _protectOfficialAccountExpireTime;
    m_protectOfficialAccountExpireTimeHasBeenSet = true;
}

bool ServiceData::ProtectOfficialAccountExpireTimeHasBeenSet() const
{
    return m_protectOfficialAccountExpireTimeHasBeenSet;
}

int64_t ServiceData::GetProtectMiniProgramCount() const
{
    return m_protectMiniProgramCount;
}

void ServiceData::SetProtectMiniProgramCount(const int64_t& _protectMiniProgramCount)
{
    m_protectMiniProgramCount = _protectMiniProgramCount;
    m_protectMiniProgramCountHasBeenSet = true;
}

bool ServiceData::ProtectMiniProgramCountHasBeenSet() const
{
    return m_protectMiniProgramCountHasBeenSet;
}

string ServiceData::GetProtectMiniProgramExpireTime() const
{
    return m_protectMiniProgramExpireTime;
}

void ServiceData::SetProtectMiniProgramExpireTime(const string& _protectMiniProgramExpireTime)
{
    m_protectMiniProgramExpireTime = _protectMiniProgramExpireTime;
    m_protectMiniProgramExpireTimeHasBeenSet = true;
}

bool ServiceData::ProtectMiniProgramExpireTimeHasBeenSet() const
{
    return m_protectMiniProgramExpireTimeHasBeenSet;
}

int64_t ServiceData::GetOfflineCount() const
{
    return m_offlineCount;
}

void ServiceData::SetOfflineCount(const int64_t& _offlineCount)
{
    m_offlineCount = _offlineCount;
    m_offlineCountHasBeenSet = true;
}

bool ServiceData::OfflineCountHasBeenSet() const
{
    return m_offlineCountHasBeenSet;
}

