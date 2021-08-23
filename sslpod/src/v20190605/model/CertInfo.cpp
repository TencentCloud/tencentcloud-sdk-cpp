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

#include <tencentcloud/sslpod/v20190605/model/CertInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sslpod::V20190605::Model;
using namespace std;

CertInfo::CertInfo() :
    m_hashHasBeenSet(false),
    m_cNHasBeenSet(false),
    m_sANsHasBeenSet(false),
    m_keyAlgoHasBeenSet(false),
    m_issuerHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_daysHasBeenSet(false),
    m_brandHasBeenSet(false),
    m_trustStatusHasBeenSet(false),
    m_certTypeHasBeenSet(false)
{
}

CoreInternalOutcome CertInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Hash") && !value["Hash"].IsNull())
    {
        if (!value["Hash"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertInfo.Hash` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hash = string(value["Hash"].GetString());
        m_hashHasBeenSet = true;
    }

    if (value.HasMember("CN") && !value["CN"].IsNull())
    {
        if (!value["CN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertInfo.CN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cN = string(value["CN"].GetString());
        m_cNHasBeenSet = true;
    }

    if (value.HasMember("SANs") && !value["SANs"].IsNull())
    {
        if (!value["SANs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertInfo.SANs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sANs = string(value["SANs"].GetString());
        m_sANsHasBeenSet = true;
    }

    if (value.HasMember("KeyAlgo") && !value["KeyAlgo"].IsNull())
    {
        if (!value["KeyAlgo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertInfo.KeyAlgo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyAlgo = string(value["KeyAlgo"].GetString());
        m_keyAlgoHasBeenSet = true;
    }

    if (value.HasMember("Issuer") && !value["Issuer"].IsNull())
    {
        if (!value["Issuer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertInfo.Issuer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuer = string(value["Issuer"].GetString());
        m_issuerHasBeenSet = true;
    }

    if (value.HasMember("BeginTime") && !value["BeginTime"].IsNull())
    {
        if (!value["BeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertInfo.BeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = string(value["BeginTime"].GetString());
        m_beginTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Days") && !value["Days"].IsNull())
    {
        if (!value["Days"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CertInfo.Days` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_days = value["Days"].GetInt64();
        m_daysHasBeenSet = true;
    }

    if (value.HasMember("Brand") && !value["Brand"].IsNull())
    {
        if (!value["Brand"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertInfo.Brand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brand = string(value["Brand"].GetString());
        m_brandHasBeenSet = true;
    }

    if (value.HasMember("TrustStatus") && !value["TrustStatus"].IsNull())
    {
        if (!value["TrustStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertInfo.TrustStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trustStatus = string(value["TrustStatus"].GetString());
        m_trustStatusHasBeenSet = true;
    }

    if (value.HasMember("CertType") && !value["CertType"].IsNull())
    {
        if (!value["CertType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertInfo.CertType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certType = string(value["CertType"].GetString());
        m_certTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CertInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hash";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hash.c_str(), allocator).Move(), allocator);
    }

    if (m_cNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cN.c_str(), allocator).Move(), allocator);
    }

    if (m_sANsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SANs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sANs.c_str(), allocator).Move(), allocator);
    }

    if (m_keyAlgoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyAlgo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyAlgo.c_str(), allocator).Move(), allocator);
    }

    if (m_issuerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Issuer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuer.c_str(), allocator).Move(), allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_daysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Days";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_days, allocator);
    }

    if (m_brandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Brand";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brand.c_str(), allocator).Move(), allocator);
    }

    if (m_trustStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrustStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trustStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_certTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certType.c_str(), allocator).Move(), allocator);
    }

}


string CertInfo::GetHash() const
{
    return m_hash;
}

void CertInfo::SetHash(const string& _hash)
{
    m_hash = _hash;
    m_hashHasBeenSet = true;
}

bool CertInfo::HashHasBeenSet() const
{
    return m_hashHasBeenSet;
}

string CertInfo::GetCN() const
{
    return m_cN;
}

void CertInfo::SetCN(const string& _cN)
{
    m_cN = _cN;
    m_cNHasBeenSet = true;
}

bool CertInfo::CNHasBeenSet() const
{
    return m_cNHasBeenSet;
}

string CertInfo::GetSANs() const
{
    return m_sANs;
}

void CertInfo::SetSANs(const string& _sANs)
{
    m_sANs = _sANs;
    m_sANsHasBeenSet = true;
}

bool CertInfo::SANsHasBeenSet() const
{
    return m_sANsHasBeenSet;
}

string CertInfo::GetKeyAlgo() const
{
    return m_keyAlgo;
}

void CertInfo::SetKeyAlgo(const string& _keyAlgo)
{
    m_keyAlgo = _keyAlgo;
    m_keyAlgoHasBeenSet = true;
}

bool CertInfo::KeyAlgoHasBeenSet() const
{
    return m_keyAlgoHasBeenSet;
}

string CertInfo::GetIssuer() const
{
    return m_issuer;
}

void CertInfo::SetIssuer(const string& _issuer)
{
    m_issuer = _issuer;
    m_issuerHasBeenSet = true;
}

bool CertInfo::IssuerHasBeenSet() const
{
    return m_issuerHasBeenSet;
}

string CertInfo::GetBeginTime() const
{
    return m_beginTime;
}

void CertInfo::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool CertInfo::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string CertInfo::GetEndTime() const
{
    return m_endTime;
}

void CertInfo::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CertInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t CertInfo::GetDays() const
{
    return m_days;
}

void CertInfo::SetDays(const int64_t& _days)
{
    m_days = _days;
    m_daysHasBeenSet = true;
}

bool CertInfo::DaysHasBeenSet() const
{
    return m_daysHasBeenSet;
}

string CertInfo::GetBrand() const
{
    return m_brand;
}

void CertInfo::SetBrand(const string& _brand)
{
    m_brand = _brand;
    m_brandHasBeenSet = true;
}

bool CertInfo::BrandHasBeenSet() const
{
    return m_brandHasBeenSet;
}

string CertInfo::GetTrustStatus() const
{
    return m_trustStatus;
}

void CertInfo::SetTrustStatus(const string& _trustStatus)
{
    m_trustStatus = _trustStatus;
    m_trustStatusHasBeenSet = true;
}

bool CertInfo::TrustStatusHasBeenSet() const
{
    return m_trustStatusHasBeenSet;
}

string CertInfo::GetCertType() const
{
    return m_certType;
}

void CertInfo::SetCertType(const string& _certType)
{
    m_certType = _certType;
    m_certTypeHasBeenSet = true;
}

bool CertInfo::CertTypeHasBeenSet() const
{
    return m_certTypeHasBeenSet;
}

