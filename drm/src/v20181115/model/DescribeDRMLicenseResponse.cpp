/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/drm/v20181115/model/DescribeDRMLicenseResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Drm::V20181115::Model;
using namespace std;

DescribeDRMLicenseResponse::DescribeDRMLicenseResponse() :
    m_contentIdHasBeenSet(false),
    m_tXEncryptionTokenHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDRMLicenseResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ContentId") && !rsp["ContentId"].IsNull())
    {
        if (!rsp["ContentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentId = string(rsp["ContentId"].GetString());
        m_contentIdHasBeenSet = true;
    }

    if (rsp.HasMember("TXEncryptionToken") && !rsp["TXEncryptionToken"].IsNull())
    {
        if (!rsp["TXEncryptionToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TXEncryptionToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tXEncryptionToken = string(rsp["TXEncryptionToken"].GetString());
        m_tXEncryptionTokenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDRMLicenseResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_contentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentId.c_str(), allocator).Move(), allocator);
    }

    if (m_tXEncryptionTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TXEncryptionToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tXEncryptionToken.c_str(), allocator).Move(), allocator);
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


string DescribeDRMLicenseResponse::GetContentId() const
{
    return m_contentId;
}

bool DescribeDRMLicenseResponse::ContentIdHasBeenSet() const
{
    return m_contentIdHasBeenSet;
}

string DescribeDRMLicenseResponse::GetTXEncryptionToken() const
{
    return m_tXEncryptionToken;
}

bool DescribeDRMLicenseResponse::TXEncryptionTokenHasBeenSet() const
{
    return m_tXEncryptionTokenHasBeenSet;
}


