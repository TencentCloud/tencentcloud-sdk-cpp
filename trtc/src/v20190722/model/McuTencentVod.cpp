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

#include <tencentcloud/trtc/v20190722/model/McuTencentVod.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

McuTencentVod::McuTencentVod() :
    m_procedureHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_storageRegionHasBeenSet(false),
    m_classIdHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_sessionContextHasBeenSet(false),
    m_sourceContextHasBeenSet(false)
{
}

CoreInternalOutcome McuTencentVod::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Procedure") && !value["Procedure"].IsNull())
    {
        if (!value["Procedure"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McuTencentVod.Procedure` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_procedure = string(value["Procedure"].GetString());
        m_procedureHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuTencentVod.ExpireTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetUint64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("StorageRegion") && !value["StorageRegion"].IsNull())
    {
        if (!value["StorageRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McuTencentVod.StorageRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageRegion = string(value["StorageRegion"].GetString());
        m_storageRegionHasBeenSet = true;
    }

    if (value.HasMember("ClassId") && !value["ClassId"].IsNull())
    {
        if (!value["ClassId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuTencentVod.ClassId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_classId = value["ClassId"].GetUint64();
        m_classIdHasBeenSet = true;
    }

    if (value.HasMember("SubAppId") && !value["SubAppId"].IsNull())
    {
        if (!value["SubAppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuTencentVod.SubAppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_subAppId = value["SubAppId"].GetUint64();
        m_subAppIdHasBeenSet = true;
    }

    if (value.HasMember("SessionContext") && !value["SessionContext"].IsNull())
    {
        if (!value["SessionContext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McuTencentVod.SessionContext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionContext = string(value["SessionContext"].GetString());
        m_sessionContextHasBeenSet = true;
    }

    if (value.HasMember("SourceContext") && !value["SourceContext"].IsNull())
    {
        if (!value["SourceContext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McuTencentVod.SourceContext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceContext = string(value["SourceContext"].GetString());
        m_sourceContextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void McuTencentVod::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_procedureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Procedure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_procedure.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_storageRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_classIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_classId, allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_sessionContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionContext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionContext.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceContext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceContext.c_str(), allocator).Move(), allocator);
    }

}


string McuTencentVod::GetProcedure() const
{
    return m_procedure;
}

void McuTencentVod::SetProcedure(const string& _procedure)
{
    m_procedure = _procedure;
    m_procedureHasBeenSet = true;
}

bool McuTencentVod::ProcedureHasBeenSet() const
{
    return m_procedureHasBeenSet;
}

uint64_t McuTencentVod::GetExpireTime() const
{
    return m_expireTime;
}

void McuTencentVod::SetExpireTime(const uint64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool McuTencentVod::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string McuTencentVod::GetStorageRegion() const
{
    return m_storageRegion;
}

void McuTencentVod::SetStorageRegion(const string& _storageRegion)
{
    m_storageRegion = _storageRegion;
    m_storageRegionHasBeenSet = true;
}

bool McuTencentVod::StorageRegionHasBeenSet() const
{
    return m_storageRegionHasBeenSet;
}

uint64_t McuTencentVod::GetClassId() const
{
    return m_classId;
}

void McuTencentVod::SetClassId(const uint64_t& _classId)
{
    m_classId = _classId;
    m_classIdHasBeenSet = true;
}

bool McuTencentVod::ClassIdHasBeenSet() const
{
    return m_classIdHasBeenSet;
}

uint64_t McuTencentVod::GetSubAppId() const
{
    return m_subAppId;
}

void McuTencentVod::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool McuTencentVod::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string McuTencentVod::GetSessionContext() const
{
    return m_sessionContext;
}

void McuTencentVod::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool McuTencentVod::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

string McuTencentVod::GetSourceContext() const
{
    return m_sourceContext;
}

void McuTencentVod::SetSourceContext(const string& _sourceContext)
{
    m_sourceContext = _sourceContext;
    m_sourceContextHasBeenSet = true;
}

bool McuTencentVod::SourceContextHasBeenSet() const
{
    return m_sourceContextHasBeenSet;
}

