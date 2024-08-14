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

#include <tencentcloud/ess/v20201111/model/CreateBatchInitOrganizationUrlResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateBatchInitOrganizationUrlResponse::CreateBatchInitOrganizationUrlResponse() :
    m_miniAppPathHasBeenSet(false),
    m_operateLongUrlHasBeenSet(false),
    m_operateShortUrlHasBeenSet(false),
    m_qRCodeUrlHasBeenSet(false)
{
}

CoreInternalOutcome CreateBatchInitOrganizationUrlResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("MiniAppPath") && !rsp["MiniAppPath"].IsNull())
    {
        if (!rsp["MiniAppPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MiniAppPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_miniAppPath = string(rsp["MiniAppPath"].GetString());
        m_miniAppPathHasBeenSet = true;
    }

    if (rsp.HasMember("OperateLongUrl") && !rsp["OperateLongUrl"].IsNull())
    {
        if (!rsp["OperateLongUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperateLongUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operateLongUrl = string(rsp["OperateLongUrl"].GetString());
        m_operateLongUrlHasBeenSet = true;
    }

    if (rsp.HasMember("OperateShortUrl") && !rsp["OperateShortUrl"].IsNull())
    {
        if (!rsp["OperateShortUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperateShortUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operateShortUrl = string(rsp["OperateShortUrl"].GetString());
        m_operateShortUrlHasBeenSet = true;
    }

    if (rsp.HasMember("QRCodeUrl") && !rsp["QRCodeUrl"].IsNull())
    {
        if (!rsp["QRCodeUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QRCodeUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qRCodeUrl = string(rsp["QRCodeUrl"].GetString());
        m_qRCodeUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateBatchInitOrganizationUrlResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_miniAppPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniAppPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_miniAppPath.c_str(), allocator).Move(), allocator);
    }

    if (m_operateLongUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateLongUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operateLongUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_operateShortUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateShortUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operateShortUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_qRCodeUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QRCodeUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qRCodeUrl.c_str(), allocator).Move(), allocator);
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


string CreateBatchInitOrganizationUrlResponse::GetMiniAppPath() const
{
    return m_miniAppPath;
}

bool CreateBatchInitOrganizationUrlResponse::MiniAppPathHasBeenSet() const
{
    return m_miniAppPathHasBeenSet;
}

string CreateBatchInitOrganizationUrlResponse::GetOperateLongUrl() const
{
    return m_operateLongUrl;
}

bool CreateBatchInitOrganizationUrlResponse::OperateLongUrlHasBeenSet() const
{
    return m_operateLongUrlHasBeenSet;
}

string CreateBatchInitOrganizationUrlResponse::GetOperateShortUrl() const
{
    return m_operateShortUrl;
}

bool CreateBatchInitOrganizationUrlResponse::OperateShortUrlHasBeenSet() const
{
    return m_operateShortUrlHasBeenSet;
}

string CreateBatchInitOrganizationUrlResponse::GetQRCodeUrl() const
{
    return m_qRCodeUrl;
}

bool CreateBatchInitOrganizationUrlResponse::QRCodeUrlHasBeenSet() const
{
    return m_qRCodeUrlHasBeenSet;
}


