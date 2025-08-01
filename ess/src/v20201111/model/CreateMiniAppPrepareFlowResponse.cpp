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

#include <tencentcloud/ess/v20201111/model/CreateMiniAppPrepareFlowResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateMiniAppPrepareFlowResponse::CreateMiniAppPrepareFlowResponse() :
    m_longUrlHasBeenSet(false),
    m_shortUrlHasBeenSet(false),
    m_miniAppPathHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_qrcodeUrlHasBeenSet(false),
    m_weixinQrcodeUrlHasBeenSet(false),
    m_expiredOnHasBeenSet(false)
{
}

CoreInternalOutcome CreateMiniAppPrepareFlowResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("LongUrl") && !rsp["LongUrl"].IsNull())
    {
        if (!rsp["LongUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LongUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_longUrl = string(rsp["LongUrl"].GetString());
        m_longUrlHasBeenSet = true;
    }

    if (rsp.HasMember("ShortUrl") && !rsp["ShortUrl"].IsNull())
    {
        if (!rsp["ShortUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShortUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shortUrl = string(rsp["ShortUrl"].GetString());
        m_shortUrlHasBeenSet = true;
    }

    if (rsp.HasMember("MiniAppPath") && !rsp["MiniAppPath"].IsNull())
    {
        if (!rsp["MiniAppPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MiniAppPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_miniAppPath = string(rsp["MiniAppPath"].GetString());
        m_miniAppPathHasBeenSet = true;
    }

    if (rsp.HasMember("FlowId") && !rsp["FlowId"].IsNull())
    {
        if (!rsp["FlowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = string(rsp["FlowId"].GetString());
        m_flowIdHasBeenSet = true;
    }

    if (rsp.HasMember("QrcodeUrl") && !rsp["QrcodeUrl"].IsNull())
    {
        if (!rsp["QrcodeUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QrcodeUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qrcodeUrl = string(rsp["QrcodeUrl"].GetString());
        m_qrcodeUrlHasBeenSet = true;
    }

    if (rsp.HasMember("WeixinQrcodeUrl") && !rsp["WeixinQrcodeUrl"].IsNull())
    {
        if (!rsp["WeixinQrcodeUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeixinQrcodeUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_weixinQrcodeUrl = string(rsp["WeixinQrcodeUrl"].GetString());
        m_weixinQrcodeUrlHasBeenSet = true;
    }

    if (rsp.HasMember("ExpiredOn") && !rsp["ExpiredOn"].IsNull())
    {
        if (!rsp["ExpiredOn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpiredOn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expiredOn = rsp["ExpiredOn"].GetInt64();
        m_expiredOnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateMiniAppPrepareFlowResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_longUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LongUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_longUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_shortUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShortUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shortUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_miniAppPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniAppPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_miniAppPath.c_str(), allocator).Move(), allocator);
    }

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

    if (m_qrcodeUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QrcodeUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qrcodeUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_weixinQrcodeUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeixinQrcodeUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_weixinQrcodeUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expiredOn, allocator);
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


string CreateMiniAppPrepareFlowResponse::GetLongUrl() const
{
    return m_longUrl;
}

bool CreateMiniAppPrepareFlowResponse::LongUrlHasBeenSet() const
{
    return m_longUrlHasBeenSet;
}

string CreateMiniAppPrepareFlowResponse::GetShortUrl() const
{
    return m_shortUrl;
}

bool CreateMiniAppPrepareFlowResponse::ShortUrlHasBeenSet() const
{
    return m_shortUrlHasBeenSet;
}

string CreateMiniAppPrepareFlowResponse::GetMiniAppPath() const
{
    return m_miniAppPath;
}

bool CreateMiniAppPrepareFlowResponse::MiniAppPathHasBeenSet() const
{
    return m_miniAppPathHasBeenSet;
}

string CreateMiniAppPrepareFlowResponse::GetFlowId() const
{
    return m_flowId;
}

bool CreateMiniAppPrepareFlowResponse::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

string CreateMiniAppPrepareFlowResponse::GetQrcodeUrl() const
{
    return m_qrcodeUrl;
}

bool CreateMiniAppPrepareFlowResponse::QrcodeUrlHasBeenSet() const
{
    return m_qrcodeUrlHasBeenSet;
}

string CreateMiniAppPrepareFlowResponse::GetWeixinQrcodeUrl() const
{
    return m_weixinQrcodeUrl;
}

bool CreateMiniAppPrepareFlowResponse::WeixinQrcodeUrlHasBeenSet() const
{
    return m_weixinQrcodeUrlHasBeenSet;
}

int64_t CreateMiniAppPrepareFlowResponse::GetExpiredOn() const
{
    return m_expiredOn;
}

bool CreateMiniAppPrepareFlowResponse::ExpiredOnHasBeenSet() const
{
    return m_expiredOnHasBeenSet;
}


