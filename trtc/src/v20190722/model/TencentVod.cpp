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

#include <tencentcloud/trtc/v20190722/model/TencentVod.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

TencentVod::TencentVod() :
    m_procedureHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_storageRegionHasBeenSet(false),
    m_classIdHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_sessionContextHasBeenSet(false),
    m_sourceContextHasBeenSet(false),
    m_mediaTypeHasBeenSet(false),
    m_userDefineRecordIdHasBeenSet(false)
{
}

CoreInternalOutcome TencentVod::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Procedure") && !value["Procedure"].IsNull())
    {
        if (!value["Procedure"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TencentVod.Procedure` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_procedure = string(value["Procedure"].GetString());
        m_procedureHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TencentVod.ExpireTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetUint64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("StorageRegion") && !value["StorageRegion"].IsNull())
    {
        if (!value["StorageRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TencentVod.StorageRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageRegion = string(value["StorageRegion"].GetString());
        m_storageRegionHasBeenSet = true;
    }

    if (value.HasMember("ClassId") && !value["ClassId"].IsNull())
    {
        if (!value["ClassId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TencentVod.ClassId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_classId = value["ClassId"].GetUint64();
        m_classIdHasBeenSet = true;
    }

    if (value.HasMember("SubAppId") && !value["SubAppId"].IsNull())
    {
        if (!value["SubAppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TencentVod.SubAppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_subAppId = value["SubAppId"].GetUint64();
        m_subAppIdHasBeenSet = true;
    }

    if (value.HasMember("SessionContext") && !value["SessionContext"].IsNull())
    {
        if (!value["SessionContext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TencentVod.SessionContext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionContext = string(value["SessionContext"].GetString());
        m_sessionContextHasBeenSet = true;
    }

    if (value.HasMember("SourceContext") && !value["SourceContext"].IsNull())
    {
        if (!value["SourceContext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TencentVod.SourceContext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceContext = string(value["SourceContext"].GetString());
        m_sourceContextHasBeenSet = true;
    }

    if (value.HasMember("MediaType") && !value["MediaType"].IsNull())
    {
        if (!value["MediaType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TencentVod.MediaType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mediaType = value["MediaType"].GetUint64();
        m_mediaTypeHasBeenSet = true;
    }

    if (value.HasMember("UserDefineRecordId") && !value["UserDefineRecordId"].IsNull())
    {
        if (!value["UserDefineRecordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TencentVod.UserDefineRecordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userDefineRecordId = string(value["UserDefineRecordId"].GetString());
        m_userDefineRecordIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TencentVod::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_mediaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mediaType, allocator);
    }

    if (m_userDefineRecordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserDefineRecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userDefineRecordId.c_str(), allocator).Move(), allocator);
    }

}


string TencentVod::GetProcedure() const
{
    return m_procedure;
}

void TencentVod::SetProcedure(const string& _procedure)
{
    m_procedure = _procedure;
    m_procedureHasBeenSet = true;
}

bool TencentVod::ProcedureHasBeenSet() const
{
    return m_procedureHasBeenSet;
}

uint64_t TencentVod::GetExpireTime() const
{
    return m_expireTime;
}

void TencentVod::SetExpireTime(const uint64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool TencentVod::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string TencentVod::GetStorageRegion() const
{
    return m_storageRegion;
}

void TencentVod::SetStorageRegion(const string& _storageRegion)
{
    m_storageRegion = _storageRegion;
    m_storageRegionHasBeenSet = true;
}

bool TencentVod::StorageRegionHasBeenSet() const
{
    return m_storageRegionHasBeenSet;
}

uint64_t TencentVod::GetClassId() const
{
    return m_classId;
}

void TencentVod::SetClassId(const uint64_t& _classId)
{
    m_classId = _classId;
    m_classIdHasBeenSet = true;
}

bool TencentVod::ClassIdHasBeenSet() const
{
    return m_classIdHasBeenSet;
}

uint64_t TencentVod::GetSubAppId() const
{
    return m_subAppId;
}

void TencentVod::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool TencentVod::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string TencentVod::GetSessionContext() const
{
    return m_sessionContext;
}

void TencentVod::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool TencentVod::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

string TencentVod::GetSourceContext() const
{
    return m_sourceContext;
}

void TencentVod::SetSourceContext(const string& _sourceContext)
{
    m_sourceContext = _sourceContext;
    m_sourceContextHasBeenSet = true;
}

bool TencentVod::SourceContextHasBeenSet() const
{
    return m_sourceContextHasBeenSet;
}

uint64_t TencentVod::GetMediaType() const
{
    return m_mediaType;
}

void TencentVod::SetMediaType(const uint64_t& _mediaType)
{
    m_mediaType = _mediaType;
    m_mediaTypeHasBeenSet = true;
}

bool TencentVod::MediaTypeHasBeenSet() const
{
    return m_mediaTypeHasBeenSet;
}

string TencentVod::GetUserDefineRecordId() const
{
    return m_userDefineRecordId;
}

void TencentVod::SetUserDefineRecordId(const string& _userDefineRecordId)
{
    m_userDefineRecordId = _userDefineRecordId;
    m_userDefineRecordIdHasBeenSet = true;
}

bool TencentVod::UserDefineRecordIdHasBeenSet() const
{
    return m_userDefineRecordIdHasBeenSet;
}

