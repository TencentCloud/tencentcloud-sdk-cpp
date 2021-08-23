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

#include <tencentcloud/cws/v20180312/model/DescribeConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cws::V20180312::Model;
using namespace std;

DescribeConfigResponse::DescribeConfigResponse() :
    m_noticeLevelHasBeenSet(false),
    m_idHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_appidHasBeenSet(false),
    m_contentLevelHasBeenSet(false)
{
}

CoreInternalOutcome DescribeConfigResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("NoticeLevel") && !rsp["NoticeLevel"].IsNull())
    {
        if (!rsp["NoticeLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NoticeLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_noticeLevel = string(rsp["NoticeLevel"].GetString());
        m_noticeLevelHasBeenSet = true;
    }

    if (rsp.HasMember("Id") && !rsp["Id"].IsNull())
    {
        if (!rsp["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = rsp["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedAt") && !rsp["CreatedAt"].IsNull())
    {
        if (!rsp["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(rsp["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (rsp.HasMember("UpdatedAt") && !rsp["UpdatedAt"].IsNull())
    {
        if (!rsp["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(rsp["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (rsp.HasMember("Appid") && !rsp["Appid"].IsNull())
    {
        if (!rsp["Appid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Appid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appid = rsp["Appid"].GetUint64();
        m_appidHasBeenSet = true;
    }

    if (rsp.HasMember("ContentLevel") && !rsp["ContentLevel"].IsNull())
    {
        if (!rsp["ContentLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ContentLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_contentLevel = rsp["ContentLevel"].GetUint64();
        m_contentLevelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeConfigResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_noticeLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_noticeLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_appidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Appid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appid, allocator);
    }

    if (m_contentLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_contentLevel, allocator);
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


string DescribeConfigResponse::GetNoticeLevel() const
{
    return m_noticeLevel;
}

bool DescribeConfigResponse::NoticeLevelHasBeenSet() const
{
    return m_noticeLevelHasBeenSet;
}

uint64_t DescribeConfigResponse::GetId() const
{
    return m_id;
}

bool DescribeConfigResponse::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescribeConfigResponse::GetCreatedAt() const
{
    return m_createdAt;
}

bool DescribeConfigResponse::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string DescribeConfigResponse::GetUpdatedAt() const
{
    return m_updatedAt;
}

bool DescribeConfigResponse::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

uint64_t DescribeConfigResponse::GetAppid() const
{
    return m_appid;
}

bool DescribeConfigResponse::AppidHasBeenSet() const
{
    return m_appidHasBeenSet;
}

uint64_t DescribeConfigResponse::GetContentLevel() const
{
    return m_contentLevel;
}

bool DescribeConfigResponse::ContentLevelHasBeenSet() const
{
    return m_contentLevelHasBeenSet;
}


