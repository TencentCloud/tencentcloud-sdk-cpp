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

#include <tencentcloud/ags/v20250920/model/GetSkillPackageDownloadURLResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

GetSkillPackageDownloadURLResponse::GetSkillPackageDownloadURLResponse() :
    m_downloadURLHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_sHA256HasBeenSet(false),
    m_resolvedVersionIdHasBeenSet(false)
{
}

CoreInternalOutcome GetSkillPackageDownloadURLResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("ExpireTime") && !rsp["ExpireTime"].IsNull())
    {
        if (!rsp["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(rsp["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (rsp.HasMember("SHA256") && !rsp["SHA256"].IsNull())
    {
        if (!rsp["SHA256"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SHA256` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sHA256 = string(rsp["SHA256"].GetString());
        m_sHA256HasBeenSet = true;
    }

    if (rsp.HasMember("ResolvedVersionId") && !rsp["ResolvedVersionId"].IsNull())
    {
        if (!rsp["ResolvedVersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResolvedVersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolvedVersionId = string(rsp["ResolvedVersionId"].GetString());
        m_resolvedVersionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetSkillPackageDownloadURLResponse::ToJsonString() const
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

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sHA256HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SHA256";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sHA256.c_str(), allocator).Move(), allocator);
    }

    if (m_resolvedVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResolvedVersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resolvedVersionId.c_str(), allocator).Move(), allocator);
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


string GetSkillPackageDownloadURLResponse::GetDownloadURL() const
{
    return m_downloadURL;
}

bool GetSkillPackageDownloadURLResponse::DownloadURLHasBeenSet() const
{
    return m_downloadURLHasBeenSet;
}

string GetSkillPackageDownloadURLResponse::GetExpireTime() const
{
    return m_expireTime;
}

bool GetSkillPackageDownloadURLResponse::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string GetSkillPackageDownloadURLResponse::GetSHA256() const
{
    return m_sHA256;
}

bool GetSkillPackageDownloadURLResponse::SHA256HasBeenSet() const
{
    return m_sHA256HasBeenSet;
}

string GetSkillPackageDownloadURLResponse::GetResolvedVersionId() const
{
    return m_resolvedVersionId;
}

bool GetSkillPackageDownloadURLResponse::ResolvedVersionIdHasBeenSet() const
{
    return m_resolvedVersionIdHasBeenSet;
}


