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

#include <tencentcloud/wedata/v20210820/model/AcquireLockResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

AcquireLockResponse::AcquireLockResponse() :
    m_resourcePathHasBeenSet(false),
    m_lockerIdHasBeenSet(false),
    m_lockerNameHasBeenSet(false),
    m_lockedByMeHasBeenSet(false),
    m_editFlagHasBeenSet(false),
    m_lockTimeHasBeenSet(false)
{
}

CoreInternalOutcome AcquireLockResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("LockedByMe") && !rsp["LockedByMe"].IsNull())
    {
        if (!rsp["LockedByMe"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LockedByMe` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_lockedByMe = rsp["LockedByMe"].GetBool();
        m_lockedByMeHasBeenSet = true;
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

string AcquireLockResponse::ToJsonString() const
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

    if (m_lockedByMeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockedByMe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lockedByMe, allocator);
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


string AcquireLockResponse::GetResourcePath() const
{
    return m_resourcePath;
}

bool AcquireLockResponse::ResourcePathHasBeenSet() const
{
    return m_resourcePathHasBeenSet;
}

uint64_t AcquireLockResponse::GetLockerId() const
{
    return m_lockerId;
}

bool AcquireLockResponse::LockerIdHasBeenSet() const
{
    return m_lockerIdHasBeenSet;
}

string AcquireLockResponse::GetLockerName() const
{
    return m_lockerName;
}

bool AcquireLockResponse::LockerNameHasBeenSet() const
{
    return m_lockerNameHasBeenSet;
}

bool AcquireLockResponse::GetLockedByMe() const
{
    return m_lockedByMe;
}

bool AcquireLockResponse::LockedByMeHasBeenSet() const
{
    return m_lockedByMeHasBeenSet;
}

bool AcquireLockResponse::GetEditFlag() const
{
    return m_editFlag;
}

bool AcquireLockResponse::EditFlagHasBeenSet() const
{
    return m_editFlagHasBeenSet;
}

uint64_t AcquireLockResponse::GetLockTime() const
{
    return m_lockTime;
}

bool AcquireLockResponse::LockTimeHasBeenSet() const
{
    return m_lockTimeHasBeenSet;
}


