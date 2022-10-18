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

#include <tencentcloud/trp/v20210515/model/DescribeCodePackUrlResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

DescribeCodePackUrlResponse::DescribeCodePackUrlResponse() :
    m_urlHasBeenSet(false),
    m_imgUrlHasBeenSet(false),
    m_fileKeyHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCodePackUrlResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Url") && !rsp["Url"].IsNull())
    {
        if (!rsp["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(rsp["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (rsp.HasMember("ImgUrl") && !rsp["ImgUrl"].IsNull())
    {
        if (!rsp["ImgUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImgUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imgUrl = string(rsp["ImgUrl"].GetString());
        m_imgUrlHasBeenSet = true;
    }

    if (rsp.HasMember("FileKey") && !rsp["FileKey"].IsNull())
    {
        if (!rsp["FileKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileKey = string(rsp["FileKey"].GetString());
        m_fileKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCodePackUrlResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_imgUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImgUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imgUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_fileKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileKey.c_str(), allocator).Move(), allocator);
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


string DescribeCodePackUrlResponse::GetUrl() const
{
    return m_url;
}

bool DescribeCodePackUrlResponse::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string DescribeCodePackUrlResponse::GetImgUrl() const
{
    return m_imgUrl;
}

bool DescribeCodePackUrlResponse::ImgUrlHasBeenSet() const
{
    return m_imgUrlHasBeenSet;
}

string DescribeCodePackUrlResponse::GetFileKey() const
{
    return m_fileKey;
}

bool DescribeCodePackUrlResponse::FileKeyHasBeenSet() const
{
    return m_fileKeyHasBeenSet;
}


