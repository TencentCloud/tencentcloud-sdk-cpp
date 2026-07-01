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

#include <tencentcloud/cwp/v20180228/model/DescribeSafeInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeSafeInfoResponse::DescribeSafeInfoResponse() :
    m_contextHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_effectHostCountHasBeenSet(false),
    m_eventNameHasBeenSet(false),
    m_eventCategoryHasBeenSet(false),
    m_isShowHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSafeInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Context") && !rsp["Context"].IsNull())
    {
        if (!rsp["Context"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Context` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_context = string(rsp["Context"].GetString());
        m_contextHasBeenSet = true;
    }

    if (rsp.HasMember("Title") && !rsp["Title"].IsNull())
    {
        if (!rsp["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(rsp["Title"].GetString());
        m_titleHasBeenSet = true;
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

    if (rsp.HasMember("EffectHostCount") && !rsp["EffectHostCount"].IsNull())
    {
        if (!rsp["EffectHostCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EffectHostCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_effectHostCount = rsp["EffectHostCount"].GetUint64();
        m_effectHostCountHasBeenSet = true;
    }

    if (rsp.HasMember("EventName") && !rsp["EventName"].IsNull())
    {
        if (!rsp["EventName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventName = string(rsp["EventName"].GetString());
        m_eventNameHasBeenSet = true;
    }

    if (rsp.HasMember("EventCategory") && !rsp["EventCategory"].IsNull())
    {
        if (!rsp["EventCategory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EventCategory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventCategory = rsp["EventCategory"].GetUint64();
        m_eventCategoryHasBeenSet = true;
    }

    if (rsp.HasMember("IsShow") && !rsp["IsShow"].IsNull())
    {
        if (!rsp["IsShow"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsShow` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isShow = rsp["IsShow"].GetBool();
        m_isShowHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

string DescribeSafeInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_contextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Context";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_context.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_effectHostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectHostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_effectHostCount, allocator);
    }

    if (m_eventNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventName.c_str(), allocator).Move(), allocator);
    }

    if (m_eventCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventCategory, allocator);
    }

    if (m_isShowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsShow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isShow, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
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


string DescribeSafeInfoResponse::GetContext() const
{
    return m_context;
}

bool DescribeSafeInfoResponse::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}

string DescribeSafeInfoResponse::GetTitle() const
{
    return m_title;
}

bool DescribeSafeInfoResponse::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string DescribeSafeInfoResponse::GetUrl() const
{
    return m_url;
}

bool DescribeSafeInfoResponse::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

uint64_t DescribeSafeInfoResponse::GetEffectHostCount() const
{
    return m_effectHostCount;
}

bool DescribeSafeInfoResponse::EffectHostCountHasBeenSet() const
{
    return m_effectHostCountHasBeenSet;
}

string DescribeSafeInfoResponse::GetEventName() const
{
    return m_eventName;
}

bool DescribeSafeInfoResponse::EventNameHasBeenSet() const
{
    return m_eventNameHasBeenSet;
}

uint64_t DescribeSafeInfoResponse::GetEventCategory() const
{
    return m_eventCategory;
}

bool DescribeSafeInfoResponse::EventCategoryHasBeenSet() const
{
    return m_eventCategoryHasBeenSet;
}

bool DescribeSafeInfoResponse::GetIsShow() const
{
    return m_isShow;
}

bool DescribeSafeInfoResponse::IsShowHasBeenSet() const
{
    return m_isShowHasBeenSet;
}

uint64_t DescribeSafeInfoResponse::GetId() const
{
    return m_id;
}

bool DescribeSafeInfoResponse::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}


