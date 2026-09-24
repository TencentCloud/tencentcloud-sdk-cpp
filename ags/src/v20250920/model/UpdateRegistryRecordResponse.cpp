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

#include <tencentcloud/ags/v20250920/model/UpdateRegistryRecordResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

UpdateRegistryRecordResponse::UpdateRegistryRecordResponse() :
    m_recordHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_uploadURLHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_contentStatusHasBeenSet(false)
{
}

CoreInternalOutcome UpdateRegistryRecordResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Record") && !rsp["Record"].IsNull())
    {
        if (!rsp["Record"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Record` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_record.Deserialize(rsp["Record"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_recordHasBeenSet = true;
    }

    if (rsp.HasMember("Version") && !rsp["Version"].IsNull())
    {
        if (!rsp["Version"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Version` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_version.Deserialize(rsp["Version"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_versionHasBeenSet = true;
    }

    if (rsp.HasMember("UploadURL") && !rsp["UploadURL"].IsNull())
    {
        if (!rsp["UploadURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uploadURL = string(rsp["UploadURL"].GetString());
        m_uploadURLHasBeenSet = true;
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

    if (rsp.HasMember("ContentStatus") && !rsp["ContentStatus"].IsNull())
    {
        if (!rsp["ContentStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContentStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentStatus = string(rsp["ContentStatus"].GetString());
        m_contentStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string UpdateRegistryRecordResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_recordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Record";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_record.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_version.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_uploadURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uploadURL.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_contentStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentStatus.c_str(), allocator).Move(), allocator);
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


CloudRecord UpdateRegistryRecordResponse::GetRecord() const
{
    return m_record;
}

bool UpdateRegistryRecordResponse::RecordHasBeenSet() const
{
    return m_recordHasBeenSet;
}

CloudRecordVersion UpdateRegistryRecordResponse::GetVersion() const
{
    return m_version;
}

bool UpdateRegistryRecordResponse::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string UpdateRegistryRecordResponse::GetUploadURL() const
{
    return m_uploadURL;
}

bool UpdateRegistryRecordResponse::UploadURLHasBeenSet() const
{
    return m_uploadURLHasBeenSet;
}

string UpdateRegistryRecordResponse::GetExpireTime() const
{
    return m_expireTime;
}

bool UpdateRegistryRecordResponse::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string UpdateRegistryRecordResponse::GetContentStatus() const
{
    return m_contentStatus;
}

bool UpdateRegistryRecordResponse::ContentStatusHasBeenSet() const
{
    return m_contentStatusHasBeenSet;
}


