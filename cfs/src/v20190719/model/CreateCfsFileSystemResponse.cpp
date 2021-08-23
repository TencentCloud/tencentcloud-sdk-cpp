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

#include <tencentcloud/cfs/v20190719/model/CreateCfsFileSystemResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

CreateCfsFileSystemResponse::CreateCfsFileSystemResponse() :
    m_creationTimeHasBeenSet(false),
    m_creationTokenHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_lifeCycleStateHasBeenSet(false),
    m_sizeByteHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_fsNameHasBeenSet(false),
    m_encryptedHasBeenSet(false)
{
}

CoreInternalOutcome CreateCfsFileSystemResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CreationTime") && !rsp["CreationTime"].IsNull())
    {
        if (!rsp["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(rsp["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (rsp.HasMember("CreationToken") && !rsp["CreationToken"].IsNull())
    {
        if (!rsp["CreationToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreationToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationToken = string(rsp["CreationToken"].GetString());
        m_creationTokenHasBeenSet = true;
    }

    if (rsp.HasMember("FileSystemId") && !rsp["FileSystemId"].IsNull())
    {
        if (!rsp["FileSystemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSystemId = string(rsp["FileSystemId"].GetString());
        m_fileSystemIdHasBeenSet = true;
    }

    if (rsp.HasMember("LifeCycleState") && !rsp["LifeCycleState"].IsNull())
    {
        if (!rsp["LifeCycleState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifeCycleState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lifeCycleState = string(rsp["LifeCycleState"].GetString());
        m_lifeCycleStateHasBeenSet = true;
    }

    if (rsp.HasMember("SizeByte") && !rsp["SizeByte"].IsNull())
    {
        if (!rsp["SizeByte"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SizeByte` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sizeByte = rsp["SizeByte"].GetUint64();
        m_sizeByteHasBeenSet = true;
    }

    if (rsp.HasMember("ZoneId") && !rsp["ZoneId"].IsNull())
    {
        if (!rsp["ZoneId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = rsp["ZoneId"].GetUint64();
        m_zoneIdHasBeenSet = true;
    }

    if (rsp.HasMember("FsName") && !rsp["FsName"].IsNull())
    {
        if (!rsp["FsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fsName = string(rsp["FsName"].GetString());
        m_fsNameHasBeenSet = true;
    }

    if (rsp.HasMember("Encrypted") && !rsp["Encrypted"].IsNull())
    {
        if (!rsp["Encrypted"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Encrypted` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_encrypted = rsp["Encrypted"].GetBool();
        m_encryptedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateCfsFileSystemResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationToken.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_lifeCycleStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeCycleState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lifeCycleState.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeByteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SizeByte";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sizeByte, allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_fsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fsName.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encrypted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encrypted, allocator);
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


string CreateCfsFileSystemResponse::GetCreationTime() const
{
    return m_creationTime;
}

bool CreateCfsFileSystemResponse::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

string CreateCfsFileSystemResponse::GetCreationToken() const
{
    return m_creationToken;
}

bool CreateCfsFileSystemResponse::CreationTokenHasBeenSet() const
{
    return m_creationTokenHasBeenSet;
}

string CreateCfsFileSystemResponse::GetFileSystemId() const
{
    return m_fileSystemId;
}

bool CreateCfsFileSystemResponse::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

string CreateCfsFileSystemResponse::GetLifeCycleState() const
{
    return m_lifeCycleState;
}

bool CreateCfsFileSystemResponse::LifeCycleStateHasBeenSet() const
{
    return m_lifeCycleStateHasBeenSet;
}

uint64_t CreateCfsFileSystemResponse::GetSizeByte() const
{
    return m_sizeByte;
}

bool CreateCfsFileSystemResponse::SizeByteHasBeenSet() const
{
    return m_sizeByteHasBeenSet;
}

uint64_t CreateCfsFileSystemResponse::GetZoneId() const
{
    return m_zoneId;
}

bool CreateCfsFileSystemResponse::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string CreateCfsFileSystemResponse::GetFsName() const
{
    return m_fsName;
}

bool CreateCfsFileSystemResponse::FsNameHasBeenSet() const
{
    return m_fsNameHasBeenSet;
}

bool CreateCfsFileSystemResponse::GetEncrypted() const
{
    return m_encrypted;
}

bool CreateCfsFileSystemResponse::EncryptedHasBeenSet() const
{
    return m_encryptedHasBeenSet;
}


