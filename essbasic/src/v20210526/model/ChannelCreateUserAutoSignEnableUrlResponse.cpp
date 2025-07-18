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

#include <tencentcloud/essbasic/v20210526/model/ChannelCreateUserAutoSignEnableUrlResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ChannelCreateUserAutoSignEnableUrlResponse::ChannelCreateUserAutoSignEnableUrlResponse() :
    m_urlHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_appOriginalIdHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_qrCodeHasBeenSet(false),
    m_urlTypeHasBeenSet(false)
{
}

CoreInternalOutcome ChannelCreateUserAutoSignEnableUrlResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("AppId") && !rsp["AppId"].IsNull())
    {
        if (!rsp["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(rsp["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (rsp.HasMember("AppOriginalId") && !rsp["AppOriginalId"].IsNull())
    {
        if (!rsp["AppOriginalId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppOriginalId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appOriginalId = string(rsp["AppOriginalId"].GetString());
        m_appOriginalIdHasBeenSet = true;
    }

    if (rsp.HasMember("Path") && !rsp["Path"].IsNull())
    {
        if (!rsp["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(rsp["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (rsp.HasMember("QrCode") && !rsp["QrCode"].IsNull())
    {
        if (!rsp["QrCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QrCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qrCode = string(rsp["QrCode"].GetString());
        m_qrCodeHasBeenSet = true;
    }

    if (rsp.HasMember("UrlType") && !rsp["UrlType"].IsNull())
    {
        if (!rsp["UrlType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UrlType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_urlType = string(rsp["UrlType"].GetString());
        m_urlTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ChannelCreateUserAutoSignEnableUrlResponse::ToJsonString() const
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

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_appOriginalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppOriginalId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appOriginalId.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_qrCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QrCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qrCode.c_str(), allocator).Move(), allocator);
    }

    if (m_urlTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_urlType.c_str(), allocator).Move(), allocator);
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


string ChannelCreateUserAutoSignEnableUrlResponse::GetUrl() const
{
    return m_url;
}

bool ChannelCreateUserAutoSignEnableUrlResponse::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string ChannelCreateUserAutoSignEnableUrlResponse::GetAppId() const
{
    return m_appId;
}

bool ChannelCreateUserAutoSignEnableUrlResponse::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string ChannelCreateUserAutoSignEnableUrlResponse::GetAppOriginalId() const
{
    return m_appOriginalId;
}

bool ChannelCreateUserAutoSignEnableUrlResponse::AppOriginalIdHasBeenSet() const
{
    return m_appOriginalIdHasBeenSet;
}

string ChannelCreateUserAutoSignEnableUrlResponse::GetPath() const
{
    return m_path;
}

bool ChannelCreateUserAutoSignEnableUrlResponse::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string ChannelCreateUserAutoSignEnableUrlResponse::GetQrCode() const
{
    return m_qrCode;
}

bool ChannelCreateUserAutoSignEnableUrlResponse::QrCodeHasBeenSet() const
{
    return m_qrCodeHasBeenSet;
}

string ChannelCreateUserAutoSignEnableUrlResponse::GetUrlType() const
{
    return m_urlType;
}

bool ChannelCreateUserAutoSignEnableUrlResponse::UrlTypeHasBeenSet() const
{
    return m_urlTypeHasBeenSet;
}


