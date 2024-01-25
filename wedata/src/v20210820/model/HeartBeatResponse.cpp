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

#include <tencentcloud/wedata/v20210820/model/HeartBeatResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

HeartBeatResponse::HeartBeatResponse() :
    m_resourcePathHasBeenSet(false),
    m_lockerIdHasBeenSet(false),
    m_lockerNameHasBeenSet(false),
    m_stealFlagHasBeenSet(false),
    m_lockedByMeHasBeenSet(false),
    m_lockedHasBeenSet(false),
    m_editFlagHasBeenSet(false),
    m_lockTimeHasBeenSet(false)
{
}

CoreInternalOutcome HeartBeatResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("ResourcePath") && !rsp["ResourcePath"].IsNull())
    {
        if (!rsp["ResourcePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourcePath = string(rsp["ResourcePath"].GetString());
        m_resourcePathHasBeenSet = true;
    }

    if (rsp.HasMember("LockerId") && !rsp["LockerId"].IsNull())
    {
        if (!rsp["LockerId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LockerId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lockerId = rsp["LockerId"].GetUint64();
        m_lockerIdHasBeenSet = true;
    }

    if (rsp.HasMember("LockerName") && !rsp["LockerName"].IsNull())
    {
        if (!rsp["LockerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LockerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lockerName = string(rsp["LockerName"].GetString());
        m_lockerNameHasBeenSet = true;
    }

    if (rsp.HasMember("StealFlag") && !rsp["StealFlag"].IsNull())
    {
        if (!rsp["StealFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `StealFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_stealFlag = rsp["StealFlag"].GetBool();
        m_stealFlagHasBeenSet = true;
    }

    if (rsp.HasMember("LockedByMe") && !rsp["LockedByMe"].IsNull())
    {
        if (!rsp["LockedByMe"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LockedByMe` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_lockedByMe = rsp["LockedByMe"].GetBool();
        m_lockedByMeHasBeenSet = true;
    }

    if (rsp.HasMember("Locked") && !rsp["Locked"].IsNull())
    {
        if (!rsp["Locked"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Locked` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_locked = rsp["Locked"].GetBool();
        m_lockedHasBeenSet = true;
    }

    if (rsp.HasMember("EditFlag") && !rsp["EditFlag"].IsNull())
    {
        if (!rsp["EditFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EditFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_editFlag = rsp["EditFlag"].GetBool();
        m_editFlagHasBeenSet = true;
    }

    if (rsp.HasMember("LockTime") && !rsp["LockTime"].IsNull())
    {
        if (!rsp["LockTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LockTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lockTime = rsp["LockTime"].GetUint64();
        m_lockTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string HeartBeatResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_resourcePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourcePath.c_str(), allocator).Move(), allocator);
    }

    if (m_lockerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lockerId, allocator);
    }

    if (m_lockerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lockerName.c_str(), allocator).Move(), allocator);
    }

    if (m_stealFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StealFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stealFlag, allocator);
    }

    if (m_lockedByMeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockedByMe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lockedByMe, allocator);
    }

    if (m_lockedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Locked";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_locked, allocator);
    }

    if (m_editFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EditFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_editFlag, allocator);
    }

    if (m_lockTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lockTime, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string HeartBeatResponse::GetResourcePath() const
{
    return m_resourcePath;
}

bool HeartBeatResponse::ResourcePathHasBeenSet() const
{
    return m_resourcePathHasBeenSet;
}

uint64_t HeartBeatResponse::GetLockerId() const
{
    return m_lockerId;
}

bool HeartBeatResponse::LockerIdHasBeenSet() const
{
    return m_lockerIdHasBeenSet;
}

string HeartBeatResponse::GetLockerName() const
{
    return m_lockerName;
}

bool HeartBeatResponse::LockerNameHasBeenSet() const
{
    return m_lockerNameHasBeenSet;
}

bool HeartBeatResponse::GetStealFlag() const
{
    return m_stealFlag;
}

bool HeartBeatResponse::StealFlagHasBeenSet() const
{
    return m_stealFlagHasBeenSet;
}

bool HeartBeatResponse::GetLockedByMe() const
{
    return m_lockedByMe;
}

bool HeartBeatResponse::LockedByMeHasBeenSet() const
{
    return m_lockedByMeHasBeenSet;
}

bool HeartBeatResponse::GetLocked() const
{
    return m_locked;
}

bool HeartBeatResponse::LockedHasBeenSet() const
{
    return m_lockedHasBeenSet;
}

bool HeartBeatResponse::GetEditFlag() const
{
    return m_editFlag;
}

bool HeartBeatResponse::EditFlagHasBeenSet() const
{
    return m_editFlagHasBeenSet;
}

uint64_t HeartBeatResponse::GetLockTime() const
{
    return m_lockTime;
}

bool HeartBeatResponse::LockTimeHasBeenSet() const
{
    return m_lockTimeHasBeenSet;
}


