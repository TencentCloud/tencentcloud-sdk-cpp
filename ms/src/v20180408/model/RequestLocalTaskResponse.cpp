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

#include <tencentcloud/ms/v20180408/model/RequestLocalTaskResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

RequestLocalTaskResponse::RequestLocalTaskResponse() :
    m_sidHasBeenSet(false),
    m_srcFileMd5HasBeenSet(false),
    m_srcFileSizeHasBeenSet(false),
    m_srcFileUrlHasBeenSet(false),
    m_srcFileTypeHasBeenSet(false),
    m_srcFileVersionHasBeenSet(false),
    m_encryptParamHasBeenSet(false),
    m_encryptStateHasBeenSet(false)
{
}

CoreInternalOutcome RequestLocalTaskResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Sid") && !rsp["Sid"].IsNull())
    {
        if (!rsp["Sid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Sid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sid = string(rsp["Sid"].GetString());
        m_sidHasBeenSet = true;
    }

    if (rsp.HasMember("SrcFileMd5") && !rsp["SrcFileMd5"].IsNull())
    {
        if (!rsp["SrcFileMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SrcFileMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcFileMd5 = string(rsp["SrcFileMd5"].GetString());
        m_srcFileMd5HasBeenSet = true;
    }

    if (rsp.HasMember("SrcFileSize") && !rsp["SrcFileSize"].IsNull())
    {
        if (!rsp["SrcFileSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SrcFileSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_srcFileSize = rsp["SrcFileSize"].GetInt64();
        m_srcFileSizeHasBeenSet = true;
    }

    if (rsp.HasMember("SrcFileUrl") && !rsp["SrcFileUrl"].IsNull())
    {
        if (!rsp["SrcFileUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SrcFileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcFileUrl = string(rsp["SrcFileUrl"].GetString());
        m_srcFileUrlHasBeenSet = true;
    }

    if (rsp.HasMember("SrcFileType") && !rsp["SrcFileType"].IsNull())
    {
        if (!rsp["SrcFileType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SrcFileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcFileType = string(rsp["SrcFileType"].GetString());
        m_srcFileTypeHasBeenSet = true;
    }

    if (rsp.HasMember("SrcFileVersion") && !rsp["SrcFileVersion"].IsNull())
    {
        if (!rsp["SrcFileVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SrcFileVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcFileVersion = string(rsp["SrcFileVersion"].GetString());
        m_srcFileVersionHasBeenSet = true;
    }

    if (rsp.HasMember("EncryptParam") && !rsp["EncryptParam"].IsNull())
    {
        if (!rsp["EncryptParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptParam = string(rsp["EncryptParam"].GetString());
        m_encryptParamHasBeenSet = true;
    }

    if (rsp.HasMember("EncryptState") && !rsp["EncryptState"].IsNull())
    {
        if (!rsp["EncryptState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_encryptState = rsp["EncryptState"].GetInt64();
        m_encryptStateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string RequestLocalTaskResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_sidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sid.c_str(), allocator).Move(), allocator);
    }

    if (m_srcFileMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcFileMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcFileMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_srcFileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcFileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_srcFileSize, allocator);
    }

    if (m_srcFileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcFileUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcFileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_srcFileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcFileType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcFileType.c_str(), allocator).Move(), allocator);
    }

    if (m_srcFileVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcFileVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcFileVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptParam.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encryptState, allocator);
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


string RequestLocalTaskResponse::GetSid() const
{
    return m_sid;
}

bool RequestLocalTaskResponse::SidHasBeenSet() const
{
    return m_sidHasBeenSet;
}

string RequestLocalTaskResponse::GetSrcFileMd5() const
{
    return m_srcFileMd5;
}

bool RequestLocalTaskResponse::SrcFileMd5HasBeenSet() const
{
    return m_srcFileMd5HasBeenSet;
}

int64_t RequestLocalTaskResponse::GetSrcFileSize() const
{
    return m_srcFileSize;
}

bool RequestLocalTaskResponse::SrcFileSizeHasBeenSet() const
{
    return m_srcFileSizeHasBeenSet;
}

string RequestLocalTaskResponse::GetSrcFileUrl() const
{
    return m_srcFileUrl;
}

bool RequestLocalTaskResponse::SrcFileUrlHasBeenSet() const
{
    return m_srcFileUrlHasBeenSet;
}

string RequestLocalTaskResponse::GetSrcFileType() const
{
    return m_srcFileType;
}

bool RequestLocalTaskResponse::SrcFileTypeHasBeenSet() const
{
    return m_srcFileTypeHasBeenSet;
}

string RequestLocalTaskResponse::GetSrcFileVersion() const
{
    return m_srcFileVersion;
}

bool RequestLocalTaskResponse::SrcFileVersionHasBeenSet() const
{
    return m_srcFileVersionHasBeenSet;
}

string RequestLocalTaskResponse::GetEncryptParam() const
{
    return m_encryptParam;
}

bool RequestLocalTaskResponse::EncryptParamHasBeenSet() const
{
    return m_encryptParamHasBeenSet;
}

int64_t RequestLocalTaskResponse::GetEncryptState() const
{
    return m_encryptState;
}

bool RequestLocalTaskResponse::EncryptStateHasBeenSet() const
{
    return m_encryptStateHasBeenSet;
}


