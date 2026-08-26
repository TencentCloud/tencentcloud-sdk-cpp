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

#include <tencentcloud/monitor/v20230616/model/GetAIWorkbenchArtifactDownloadURLResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

GetAIWorkbenchArtifactDownloadURLResponse::GetAIWorkbenchArtifactDownloadURLResponse() :
    m_downloadURLHasBeenSet(false),
    m_expiredAtHasBeenSet(false)
{
}

CoreInternalOutcome GetAIWorkbenchArtifactDownloadURLResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DownloadURL") && !rsp["DownloadURL"].IsNull())
    {
        if (!rsp["DownloadURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DownloadURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downloadURL = string(rsp["DownloadURL"].GetString());
        m_downloadURLHasBeenSet = true;
    }

    if (rsp.HasMember("ExpiredAt") && !rsp["ExpiredAt"].IsNull())
    {
        if (!rsp["ExpiredAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpiredAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredAt = string(rsp["ExpiredAt"].GetString());
        m_expiredAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetAIWorkbenchArtifactDownloadURLResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_downloadURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downloadURL.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiredAt.c_str(), allocator).Move(), allocator);
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


string GetAIWorkbenchArtifactDownloadURLResponse::GetDownloadURL() const
{
    return m_downloadURL;
}

bool GetAIWorkbenchArtifactDownloadURLResponse::DownloadURLHasBeenSet() const
{
    return m_downloadURLHasBeenSet;
}

string GetAIWorkbenchArtifactDownloadURLResponse::GetExpiredAt() const
{
    return m_expiredAt;
}

bool GetAIWorkbenchArtifactDownloadURLResponse::ExpiredAtHasBeenSet() const
{
    return m_expiredAtHasBeenSet;
}


