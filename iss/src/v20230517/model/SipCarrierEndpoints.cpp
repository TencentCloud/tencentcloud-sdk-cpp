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

#include <tencentcloud/iss/v20230517/model/SipCarrierEndpoints.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

SipCarrierEndpoints::SipCarrierEndpoints() :
    m_cTHasBeenSet(false),
    m_cUHasBeenSet(false),
    m_cMCCHasBeenSet(false),
    m_bGPHasBeenSet(false),
    m_cAPHasBeenSet(false)
{
}

CoreInternalOutcome SipCarrierEndpoints::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CT") && !value["CT"].IsNull())
    {
        if (!value["CT"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SipCarrierEndpoints.CT` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cT = string(value["CT"].GetString());
        m_cTHasBeenSet = true;
    }

    if (value.HasMember("CU") && !value["CU"].IsNull())
    {
        if (!value["CU"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SipCarrierEndpoints.CU` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cU = string(value["CU"].GetString());
        m_cUHasBeenSet = true;
    }

    if (value.HasMember("CMCC") && !value["CMCC"].IsNull())
    {
        if (!value["CMCC"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SipCarrierEndpoints.CMCC` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cMCC = string(value["CMCC"].GetString());
        m_cMCCHasBeenSet = true;
    }

    if (value.HasMember("BGP") && !value["BGP"].IsNull())
    {
        if (!value["BGP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SipCarrierEndpoints.BGP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bGP = string(value["BGP"].GetString());
        m_bGPHasBeenSet = true;
    }

    if (value.HasMember("CAP") && !value["CAP"].IsNull())
    {
        if (!value["CAP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SipCarrierEndpoints.CAP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cAP = string(value["CAP"].GetString());
        m_cAPHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SipCarrierEndpoints::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cTHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CT";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cT.c_str(), allocator).Move(), allocator);
    }

    if (m_cUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cU.c_str(), allocator).Move(), allocator);
    }

    if (m_cMCCHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CMCC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cMCC.c_str(), allocator).Move(), allocator);
    }

    if (m_bGPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BGP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bGP.c_str(), allocator).Move(), allocator);
    }

    if (m_cAPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CAP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cAP.c_str(), allocator).Move(), allocator);
    }

}


string SipCarrierEndpoints::GetCT() const
{
    return m_cT;
}

void SipCarrierEndpoints::SetCT(const string& _cT)
{
    m_cT = _cT;
    m_cTHasBeenSet = true;
}

bool SipCarrierEndpoints::CTHasBeenSet() const
{
    return m_cTHasBeenSet;
}

string SipCarrierEndpoints::GetCU() const
{
    return m_cU;
}

void SipCarrierEndpoints::SetCU(const string& _cU)
{
    m_cU = _cU;
    m_cUHasBeenSet = true;
}

bool SipCarrierEndpoints::CUHasBeenSet() const
{
    return m_cUHasBeenSet;
}

string SipCarrierEndpoints::GetCMCC() const
{
    return m_cMCC;
}

void SipCarrierEndpoints::SetCMCC(const string& _cMCC)
{
    m_cMCC = _cMCC;
    m_cMCCHasBeenSet = true;
}

bool SipCarrierEndpoints::CMCCHasBeenSet() const
{
    return m_cMCCHasBeenSet;
}

string SipCarrierEndpoints::GetBGP() const
{
    return m_bGP;
}

void SipCarrierEndpoints::SetBGP(const string& _bGP)
{
    m_bGP = _bGP;
    m_bGPHasBeenSet = true;
}

bool SipCarrierEndpoints::BGPHasBeenSet() const
{
    return m_bGPHasBeenSet;
}

string SipCarrierEndpoints::GetCAP() const
{
    return m_cAP;
}

void SipCarrierEndpoints::SetCAP(const string& _cAP)
{
    m_cAP = _cAP;
    m_cAPHasBeenSet = true;
}

bool SipCarrierEndpoints::CAPHasBeenSet() const
{
    return m_cAPHasBeenSet;
}

