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

#include <tencentcloud/omics/v20221128/model/GetRunMetadataFileResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

GetRunMetadataFileResponse::GetRunMetadataFileResponse() :
    m_cosSignedUrlHasBeenSet(false),
    m_cosSignedUrlsHasBeenSet(false)
{
}

CoreInternalOutcome GetRunMetadataFileResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CosSignedUrl") && !rsp["CosSignedUrl"].IsNull())
    {
        if (!rsp["CosSignedUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosSignedUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosSignedUrl = string(rsp["CosSignedUrl"].GetString());
        m_cosSignedUrlHasBeenSet = true;
    }

    if (rsp.HasMember("CosSignedUrls") && !rsp["CosSignedUrls"].IsNull())
    {
        if (!rsp["CosSignedUrls"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CosSignedUrls` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CosSignedUrls"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cosSignedUrls.push_back((*itr).GetString());
        }
        m_cosSignedUrlsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetRunMetadataFileResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_cosSignedUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosSignedUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosSignedUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_cosSignedUrlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosSignedUrls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cosSignedUrls.begin(); itr != m_cosSignedUrls.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


string GetRunMetadataFileResponse::GetCosSignedUrl() const
{
    return m_cosSignedUrl;
}

bool GetRunMetadataFileResponse::CosSignedUrlHasBeenSet() const
{
    return m_cosSignedUrlHasBeenSet;
}

vector<string> GetRunMetadataFileResponse::GetCosSignedUrls() const
{
    return m_cosSignedUrls;
}

bool GetRunMetadataFileResponse::CosSignedUrlsHasBeenSet() const
{
    return m_cosSignedUrlsHasBeenSet;
}


