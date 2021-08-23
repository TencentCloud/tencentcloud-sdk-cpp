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

#include <tencentcloud/cfs/v20190719/model/UpdateCfsFileSystemNameResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

UpdateCfsFileSystemNameResponse::UpdateCfsFileSystemNameResponse() :
    m_creationTokenHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_fsNameHasBeenSet(false)
{
}

CoreInternalOutcome UpdateCfsFileSystemNameResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("FsName") && !rsp["FsName"].IsNull())
    {
        if (!rsp["FsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fsName = string(rsp["FsName"].GetString());
        m_fsNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string UpdateCfsFileSystemNameResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    if (m_fsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fsName.c_str(), allocator).Move(), allocator);
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


string UpdateCfsFileSystemNameResponse::GetCreationToken() const
{
    return m_creationToken;
}

bool UpdateCfsFileSystemNameResponse::CreationTokenHasBeenSet() const
{
    return m_creationTokenHasBeenSet;
}

string UpdateCfsFileSystemNameResponse::GetFileSystemId() const
{
    return m_fileSystemId;
}

bool UpdateCfsFileSystemNameResponse::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

string UpdateCfsFileSystemNameResponse::GetFsName() const
{
    return m_fsName;
}

bool UpdateCfsFileSystemNameResponse::FsNameHasBeenSet() const
{
    return m_fsNameHasBeenSet;
}


