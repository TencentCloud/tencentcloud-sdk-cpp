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

#include <tencentcloud/aca/v20210323/model/LoginOutHeader.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

LoginOutHeader::LoginOutHeader() :
    m_partnerIdHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_signatureHasBeenSet(false),
    m_hospitalIdHasBeenSet(false),
    m_platformIdHasBeenSet(false)
{
}

CoreInternalOutcome LoginOutHeader::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PartnerId") && !value["PartnerId"].IsNull())
    {
        if (!value["PartnerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginOutHeader.PartnerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partnerId = string(value["PartnerId"].GetString());
        m_partnerIdHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LoginOutHeader.Timestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetInt64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("Signature") && !value["Signature"].IsNull())
    {
        if (!value["Signature"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginOutHeader.Signature` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signature = string(value["Signature"].GetString());
        m_signatureHasBeenSet = true;
    }

    if (value.HasMember("HospitalId") && !value["HospitalId"].IsNull())
    {
        if (!value["HospitalId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginOutHeader.HospitalId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hospitalId = string(value["HospitalId"].GetString());
        m_hospitalIdHasBeenSet = true;
    }

    if (value.HasMember("PlatformId") && !value["PlatformId"].IsNull())
    {
        if (!value["PlatformId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginOutHeader.PlatformId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platformId = string(value["PlatformId"].GetString());
        m_platformIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoginOutHeader::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_partnerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartnerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_partnerId.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_signatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Signature";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signature.c_str(), allocator).Move(), allocator);
    }

    if (m_hospitalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HospitalId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hospitalId.c_str(), allocator).Move(), allocator);
    }

    if (m_platformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_platformId.c_str(), allocator).Move(), allocator);
    }

}


string LoginOutHeader::GetPartnerId() const
{
    return m_partnerId;
}

void LoginOutHeader::SetPartnerId(const string& _partnerId)
{
    m_partnerId = _partnerId;
    m_partnerIdHasBeenSet = true;
}

bool LoginOutHeader::PartnerIdHasBeenSet() const
{
    return m_partnerIdHasBeenSet;
}

int64_t LoginOutHeader::GetTimestamp() const
{
    return m_timestamp;
}

void LoginOutHeader::SetTimestamp(const int64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool LoginOutHeader::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string LoginOutHeader::GetSignature() const
{
    return m_signature;
}

void LoginOutHeader::SetSignature(const string& _signature)
{
    m_signature = _signature;
    m_signatureHasBeenSet = true;
}

bool LoginOutHeader::SignatureHasBeenSet() const
{
    return m_signatureHasBeenSet;
}

string LoginOutHeader::GetHospitalId() const
{
    return m_hospitalId;
}

void LoginOutHeader::SetHospitalId(const string& _hospitalId)
{
    m_hospitalId = _hospitalId;
    m_hospitalIdHasBeenSet = true;
}

bool LoginOutHeader::HospitalIdHasBeenSet() const
{
    return m_hospitalIdHasBeenSet;
}

string LoginOutHeader::GetPlatformId() const
{
    return m_platformId;
}

void LoginOutHeader::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool LoginOutHeader::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

