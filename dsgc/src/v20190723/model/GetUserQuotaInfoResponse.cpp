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

#include <tencentcloud/dsgc/v20190723/model/GetUserQuotaInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

GetUserQuotaInfoResponse::GetUserQuotaInfoResponse() :
    m_dspaIdHasBeenSet(false),
    m_dbTotalQuotaHasBeenSet(false),
    m_cosTotalQuotaHasBeenSet(false),
    m_dbRemainQuotaHasBeenSet(false),
    m_cosRemainQuotaHasBeenSet(false),
    m_cosQuotaUnitHasBeenSet(false),
    m_dBUnbindNumHasBeenSet(false),
    m_cOSUnbindNumHasBeenSet(false),
    m_insTotalQuotaHasBeenSet(false),
    m_insRemainQuotaHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

CoreInternalOutcome GetUserQuotaInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DspaId") && !rsp["DspaId"].IsNull())
    {
        if (!rsp["DspaId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dspaId = string(rsp["DspaId"].GetString());
        m_dspaIdHasBeenSet = true;
    }

    if (rsp.HasMember("DbTotalQuota") && !rsp["DbTotalQuota"].IsNull())
    {
        if (!rsp["DbTotalQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DbTotalQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dbTotalQuota = rsp["DbTotalQuota"].GetInt64();
        m_dbTotalQuotaHasBeenSet = true;
    }

    if (rsp.HasMember("CosTotalQuota") && !rsp["CosTotalQuota"].IsNull())
    {
        if (!rsp["CosTotalQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosTotalQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cosTotalQuota = rsp["CosTotalQuota"].GetInt64();
        m_cosTotalQuotaHasBeenSet = true;
    }

    if (rsp.HasMember("DbRemainQuota") && !rsp["DbRemainQuota"].IsNull())
    {
        if (!rsp["DbRemainQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DbRemainQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dbRemainQuota = rsp["DbRemainQuota"].GetInt64();
        m_dbRemainQuotaHasBeenSet = true;
    }

    if (rsp.HasMember("CosRemainQuota") && !rsp["CosRemainQuota"].IsNull())
    {
        if (!rsp["CosRemainQuota"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CosRemainQuota` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cosRemainQuota = rsp["CosRemainQuota"].GetDouble();
        m_cosRemainQuotaHasBeenSet = true;
    }

    if (rsp.HasMember("CosQuotaUnit") && !rsp["CosQuotaUnit"].IsNull())
    {
        if (!rsp["CosQuotaUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosQuotaUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosQuotaUnit = string(rsp["CosQuotaUnit"].GetString());
        m_cosQuotaUnitHasBeenSet = true;
    }

    if (rsp.HasMember("DBUnbindNum") && !rsp["DBUnbindNum"].IsNull())
    {
        if (!rsp["DBUnbindNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBUnbindNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dBUnbindNum = rsp["DBUnbindNum"].GetInt64();
        m_dBUnbindNumHasBeenSet = true;
    }

    if (rsp.HasMember("COSUnbindNum") && !rsp["COSUnbindNum"].IsNull())
    {
        if (!rsp["COSUnbindNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `COSUnbindNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cOSUnbindNum = rsp["COSUnbindNum"].GetInt64();
        m_cOSUnbindNumHasBeenSet = true;
    }

    if (rsp.HasMember("InsTotalQuota") && !rsp["InsTotalQuota"].IsNull())
    {
        if (!rsp["InsTotalQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InsTotalQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_insTotalQuota = rsp["InsTotalQuota"].GetInt64();
        m_insTotalQuotaHasBeenSet = true;
    }

    if (rsp.HasMember("InsRemainQuota") && !rsp["InsRemainQuota"].IsNull())
    {
        if (!rsp["InsRemainQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InsRemainQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_insRemainQuota = rsp["InsRemainQuota"].GetInt64();
        m_insRemainQuotaHasBeenSet = true;
    }

    if (rsp.HasMember("Version") && !rsp["Version"].IsNull())
    {
        if (!rsp["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(rsp["Version"].GetString());
        m_versionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetUserQuotaInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_dspaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dspaId.c_str(), allocator).Move(), allocator);
    }

    if (m_dbTotalQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbTotalQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dbTotalQuota, allocator);
    }

    if (m_cosTotalQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosTotalQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cosTotalQuota, allocator);
    }

    if (m_dbRemainQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbRemainQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dbRemainQuota, allocator);
    }

    if (m_cosRemainQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosRemainQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cosRemainQuota, allocator);
    }

    if (m_cosQuotaUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosQuotaUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosQuotaUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_dBUnbindNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBUnbindNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dBUnbindNum, allocator);
    }

    if (m_cOSUnbindNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "COSUnbindNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cOSUnbindNum, allocator);
    }

    if (m_insTotalQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsTotalQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_insTotalQuota, allocator);
    }

    if (m_insRemainQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsRemainQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_insRemainQuota, allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
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


string GetUserQuotaInfoResponse::GetDspaId() const
{
    return m_dspaId;
}

bool GetUserQuotaInfoResponse::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

int64_t GetUserQuotaInfoResponse::GetDbTotalQuota() const
{
    return m_dbTotalQuota;
}

bool GetUserQuotaInfoResponse::DbTotalQuotaHasBeenSet() const
{
    return m_dbTotalQuotaHasBeenSet;
}

int64_t GetUserQuotaInfoResponse::GetCosTotalQuota() const
{
    return m_cosTotalQuota;
}

bool GetUserQuotaInfoResponse::CosTotalQuotaHasBeenSet() const
{
    return m_cosTotalQuotaHasBeenSet;
}

int64_t GetUserQuotaInfoResponse::GetDbRemainQuota() const
{
    return m_dbRemainQuota;
}

bool GetUserQuotaInfoResponse::DbRemainQuotaHasBeenSet() const
{
    return m_dbRemainQuotaHasBeenSet;
}

double GetUserQuotaInfoResponse::GetCosRemainQuota() const
{
    return m_cosRemainQuota;
}

bool GetUserQuotaInfoResponse::CosRemainQuotaHasBeenSet() const
{
    return m_cosRemainQuotaHasBeenSet;
}

string GetUserQuotaInfoResponse::GetCosQuotaUnit() const
{
    return m_cosQuotaUnit;
}

bool GetUserQuotaInfoResponse::CosQuotaUnitHasBeenSet() const
{
    return m_cosQuotaUnitHasBeenSet;
}

int64_t GetUserQuotaInfoResponse::GetDBUnbindNum() const
{
    return m_dBUnbindNum;
}

bool GetUserQuotaInfoResponse::DBUnbindNumHasBeenSet() const
{
    return m_dBUnbindNumHasBeenSet;
}

int64_t GetUserQuotaInfoResponse::GetCOSUnbindNum() const
{
    return m_cOSUnbindNum;
}

bool GetUserQuotaInfoResponse::COSUnbindNumHasBeenSet() const
{
    return m_cOSUnbindNumHasBeenSet;
}

int64_t GetUserQuotaInfoResponse::GetInsTotalQuota() const
{
    return m_insTotalQuota;
}

bool GetUserQuotaInfoResponse::InsTotalQuotaHasBeenSet() const
{
    return m_insTotalQuotaHasBeenSet;
}

int64_t GetUserQuotaInfoResponse::GetInsRemainQuota() const
{
    return m_insRemainQuota;
}

bool GetUserQuotaInfoResponse::InsRemainQuotaHasBeenSet() const
{
    return m_insRemainQuotaHasBeenSet;
}

string GetUserQuotaInfoResponse::GetVersion() const
{
    return m_version;
}

bool GetUserQuotaInfoResponse::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}


