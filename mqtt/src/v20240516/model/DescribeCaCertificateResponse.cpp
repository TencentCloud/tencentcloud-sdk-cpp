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

#include <tencentcloud/mqtt/v20240516/model/DescribeCaCertificateResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

DescribeCaCertificateResponse::DescribeCaCertificateResponse() :
    m_createdTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_notAfterTimeHasBeenSet(false),
    m_lastActivationTimeHasBeenSet(false),
    m_lastInactivationTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_caSnHasBeenSet(false),
    m_caCnHasBeenSet(false),
    m_caCertificateHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_caIssuerCnHasBeenSet(false),
    m_notBeforeTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCaCertificateResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CreatedTime") && !rsp["CreatedTime"].IsNull())
    {
        if (!rsp["CreatedTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = rsp["CreatedTime"].GetInt64();
        m_createdTimeHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = rsp["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("NotAfterTime") && !rsp["NotAfterTime"].IsNull())
    {
        if (!rsp["NotAfterTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NotAfterTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_notAfterTime = rsp["NotAfterTime"].GetInt64();
        m_notAfterTimeHasBeenSet = true;
    }

    if (rsp.HasMember("LastActivationTime") && !rsp["LastActivationTime"].IsNull())
    {
        if (!rsp["LastActivationTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LastActivationTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastActivationTime = rsp["LastActivationTime"].GetInt64();
        m_lastActivationTimeHasBeenSet = true;
    }

    if (rsp.HasMember("LastInactivationTime") && !rsp["LastInactivationTime"].IsNull())
    {
        if (!rsp["LastInactivationTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LastInactivationTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastInactivationTime = rsp["LastInactivationTime"].GetInt64();
        m_lastInactivationTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("CaSn") && !rsp["CaSn"].IsNull())
    {
        if (!rsp["CaSn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CaSn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_caSn = string(rsp["CaSn"].GetString());
        m_caSnHasBeenSet = true;
    }

    if (rsp.HasMember("CaCn") && !rsp["CaCn"].IsNull())
    {
        if (!rsp["CaCn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CaCn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_caCn = string(rsp["CaCn"].GetString());
        m_caCnHasBeenSet = true;
    }

    if (rsp.HasMember("CaCertificate") && !rsp["CaCertificate"].IsNull())
    {
        if (!rsp["CaCertificate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CaCertificate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_caCertificate = string(rsp["CaCertificate"].GetString());
        m_caCertificateHasBeenSet = true;
    }

    if (rsp.HasMember("Format") && !rsp["Format"].IsNull())
    {
        if (!rsp["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(rsp["Format"].GetString());
        m_formatHasBeenSet = true;
    }

    if (rsp.HasMember("CaIssuerCn") && !rsp["CaIssuerCn"].IsNull())
    {
        if (!rsp["CaIssuerCn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CaIssuerCn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_caIssuerCn = string(rsp["CaIssuerCn"].GetString());
        m_caIssuerCnHasBeenSet = true;
    }

    if (rsp.HasMember("NotBeforeTime") && !rsp["NotBeforeTime"].IsNull())
    {
        if (!rsp["NotBeforeTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NotBeforeTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_notBeforeTime = rsp["NotBeforeTime"].GetInt64();
        m_notBeforeTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCaCertificateResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_notAfterTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotAfterTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notAfterTime, allocator);
    }

    if (m_lastActivationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastActivationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastActivationTime, allocator);
    }

    if (m_lastInactivationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastInactivationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastInactivationTime, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_caSnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaSn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_caSn.c_str(), allocator).Move(), allocator);
    }

    if (m_caCnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaCn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_caCn.c_str(), allocator).Move(), allocator);
    }

    if (m_caCertificateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaCertificate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_caCertificate.c_str(), allocator).Move(), allocator);
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_caIssuerCnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaIssuerCn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_caIssuerCn.c_str(), allocator).Move(), allocator);
    }

    if (m_notBeforeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotBeforeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notBeforeTime, allocator);
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


int64_t DescribeCaCertificateResponse::GetCreatedTime() const
{
    return m_createdTime;
}

bool DescribeCaCertificateResponse::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

int64_t DescribeCaCertificateResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool DescribeCaCertificateResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t DescribeCaCertificateResponse::GetNotAfterTime() const
{
    return m_notAfterTime;
}

bool DescribeCaCertificateResponse::NotAfterTimeHasBeenSet() const
{
    return m_notAfterTimeHasBeenSet;
}

int64_t DescribeCaCertificateResponse::GetLastActivationTime() const
{
    return m_lastActivationTime;
}

bool DescribeCaCertificateResponse::LastActivationTimeHasBeenSet() const
{
    return m_lastActivationTimeHasBeenSet;
}

int64_t DescribeCaCertificateResponse::GetLastInactivationTime() const
{
    return m_lastInactivationTime;
}

bool DescribeCaCertificateResponse::LastInactivationTimeHasBeenSet() const
{
    return m_lastInactivationTimeHasBeenSet;
}

string DescribeCaCertificateResponse::GetStatus() const
{
    return m_status;
}

bool DescribeCaCertificateResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeCaCertificateResponse::GetCaSn() const
{
    return m_caSn;
}

bool DescribeCaCertificateResponse::CaSnHasBeenSet() const
{
    return m_caSnHasBeenSet;
}

string DescribeCaCertificateResponse::GetCaCn() const
{
    return m_caCn;
}

bool DescribeCaCertificateResponse::CaCnHasBeenSet() const
{
    return m_caCnHasBeenSet;
}

string DescribeCaCertificateResponse::GetCaCertificate() const
{
    return m_caCertificate;
}

bool DescribeCaCertificateResponse::CaCertificateHasBeenSet() const
{
    return m_caCertificateHasBeenSet;
}

string DescribeCaCertificateResponse::GetFormat() const
{
    return m_format;
}

bool DescribeCaCertificateResponse::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

string DescribeCaCertificateResponse::GetCaIssuerCn() const
{
    return m_caIssuerCn;
}

bool DescribeCaCertificateResponse::CaIssuerCnHasBeenSet() const
{
    return m_caIssuerCnHasBeenSet;
}

int64_t DescribeCaCertificateResponse::GetNotBeforeTime() const
{
    return m_notBeforeTime;
}

bool DescribeCaCertificateResponse::NotBeforeTimeHasBeenSet() const
{
    return m_notBeforeTimeHasBeenSet;
}


