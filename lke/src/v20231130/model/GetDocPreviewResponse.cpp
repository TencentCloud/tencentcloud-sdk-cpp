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

#include <tencentcloud/lke/v20231130/model/GetDocPreviewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

GetDocPreviewResponse::GetDocPreviewResponse() :
    m_fileNameHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_cosUrlHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_newNameHasBeenSet(false),
    m_parseResultCosUrlHasBeenSet(false)
{
}

CoreInternalOutcome GetDocPreviewResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("FileName") && !rsp["FileName"].IsNull())
    {
        if (!rsp["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(rsp["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (rsp.HasMember("FileType") && !rsp["FileType"].IsNull())
    {
        if (!rsp["FileType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = string(rsp["FileType"].GetString());
        m_fileTypeHasBeenSet = true;
    }

    if (rsp.HasMember("CosUrl") && !rsp["CosUrl"].IsNull())
    {
        if (!rsp["CosUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosUrl = string(rsp["CosUrl"].GetString());
        m_cosUrlHasBeenSet = true;
    }

    if (rsp.HasMember("Url") && !rsp["Url"].IsNull())
    {
        if (!rsp["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(rsp["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (rsp.HasMember("Bucket") && !rsp["Bucket"].IsNull())
    {
        if (!rsp["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(rsp["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (rsp.HasMember("NewName") && !rsp["NewName"].IsNull())
    {
        if (!rsp["NewName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newName = string(rsp["NewName"].GetString());
        m_newNameHasBeenSet = true;
    }

    if (rsp.HasMember("ParseResultCosUrl") && !rsp["ParseResultCosUrl"].IsNull())
    {
        if (!rsp["ParseResultCosUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParseResultCosUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parseResultCosUrl = string(rsp["ParseResultCosUrl"].GetString());
        m_parseResultCosUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetDocPreviewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_cosUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_newNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newName.c_str(), allocator).Move(), allocator);
    }

    if (m_parseResultCosUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParseResultCosUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parseResultCosUrl.c_str(), allocator).Move(), allocator);
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


string GetDocPreviewResponse::GetFileName() const
{
    return m_fileName;
}

bool GetDocPreviewResponse::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string GetDocPreviewResponse::GetFileType() const
{
    return m_fileType;
}

bool GetDocPreviewResponse::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string GetDocPreviewResponse::GetCosUrl() const
{
    return m_cosUrl;
}

bool GetDocPreviewResponse::CosUrlHasBeenSet() const
{
    return m_cosUrlHasBeenSet;
}

string GetDocPreviewResponse::GetUrl() const
{
    return m_url;
}

bool GetDocPreviewResponse::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string GetDocPreviewResponse::GetBucket() const
{
    return m_bucket;
}

bool GetDocPreviewResponse::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string GetDocPreviewResponse::GetNewName() const
{
    return m_newName;
}

bool GetDocPreviewResponse::NewNameHasBeenSet() const
{
    return m_newNameHasBeenSet;
}

string GetDocPreviewResponse::GetParseResultCosUrl() const
{
    return m_parseResultCosUrl;
}

bool GetDocPreviewResponse::ParseResultCosUrlHasBeenSet() const
{
    return m_parseResultCosUrlHasBeenSet;
}


