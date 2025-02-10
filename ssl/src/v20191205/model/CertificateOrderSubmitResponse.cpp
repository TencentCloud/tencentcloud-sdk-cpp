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

#include <tencentcloud/ssl/v20191205/model/CertificateOrderSubmitResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

CertificateOrderSubmitResponse::CertificateOrderSubmitResponse() :
    m_orderIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isAuditedHasBeenSet(false)
{
}

CoreInternalOutcome CertificateOrderSubmitResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("OrderId") && !rsp["OrderId"].IsNull())
    {
        if (!rsp["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(rsp["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("IsAudited") && !rsp["IsAudited"].IsNull())
    {
        if (!rsp["IsAudited"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsAudited` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAudited = rsp["IsAudited"].GetBool();
        m_isAuditedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CertificateOrderSubmitResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_isAuditedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAudited";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAudited, allocator);
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


string CertificateOrderSubmitResponse::GetOrderId() const
{
    return m_orderId;
}

bool CertificateOrderSubmitResponse::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

uint64_t CertificateOrderSubmitResponse::GetStatus() const
{
    return m_status;
}

bool CertificateOrderSubmitResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool CertificateOrderSubmitResponse::GetIsAudited() const
{
    return m_isAudited;
}

bool CertificateOrderSubmitResponse::IsAuditedHasBeenSet() const
{
    return m_isAuditedHasBeenSet;
}


