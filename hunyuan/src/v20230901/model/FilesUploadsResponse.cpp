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

#include <tencentcloud/hunyuan/v20230901/model/FilesUploadsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

FilesUploadsResponse::FilesUploadsResponse() :
    m_iDHasBeenSet(false),
    m_objectHasBeenSet(false),
    m_bytesHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_filenameHasBeenSet(false),
    m_purposeHasBeenSet(false)
{
}

CoreInternalOutcome FilesUploadsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ID") && !rsp["ID"].IsNull())
    {
        if (!rsp["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(rsp["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (rsp.HasMember("Object") && !rsp["Object"].IsNull())
    {
        if (!rsp["Object"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Object` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_object = string(rsp["Object"].GetString());
        m_objectHasBeenSet = true;
    }

    if (rsp.HasMember("Bytes") && !rsp["Bytes"].IsNull())
    {
        if (!rsp["Bytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Bytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bytes = rsp["Bytes"].GetInt64();
        m_bytesHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedAt") && !rsp["CreatedAt"].IsNull())
    {
        if (!rsp["CreatedAt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedAt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = rsp["CreatedAt"].GetInt64();
        m_createdAtHasBeenSet = true;
    }

    if (rsp.HasMember("Filename") && !rsp["Filename"].IsNull())
    {
        if (!rsp["Filename"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Filename` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filename = string(rsp["Filename"].GetString());
        m_filenameHasBeenSet = true;
    }

    if (rsp.HasMember("Purpose") && !rsp["Purpose"].IsNull())
    {
        if (!rsp["Purpose"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Purpose` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_purpose = string(rsp["Purpose"].GetString());
        m_purposeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string FilesUploadsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_objectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Object";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_object.c_str(), allocator).Move(), allocator);
    }

    if (m_bytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bytes, allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdAt, allocator);
    }

    if (m_filenameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filename";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filename.c_str(), allocator).Move(), allocator);
    }

    if (m_purposeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Purpose";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_purpose.c_str(), allocator).Move(), allocator);
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


string FilesUploadsResponse::GetID() const
{
    return m_iD;
}

bool FilesUploadsResponse::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string FilesUploadsResponse::GetObject() const
{
    return m_object;
}

bool FilesUploadsResponse::ObjectHasBeenSet() const
{
    return m_objectHasBeenSet;
}

int64_t FilesUploadsResponse::GetBytes() const
{
    return m_bytes;
}

bool FilesUploadsResponse::BytesHasBeenSet() const
{
    return m_bytesHasBeenSet;
}

int64_t FilesUploadsResponse::GetCreatedAt() const
{
    return m_createdAt;
}

bool FilesUploadsResponse::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string FilesUploadsResponse::GetFilename() const
{
    return m_filename;
}

bool FilesUploadsResponse::FilenameHasBeenSet() const
{
    return m_filenameHasBeenSet;
}

string FilesUploadsResponse::GetPurpose() const
{
    return m_purpose;
}

bool FilesUploadsResponse::PurposeHasBeenSet() const
{
    return m_purposeHasBeenSet;
}


