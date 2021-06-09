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

#include <tencentcloud/dayu/v20180709/model/CreateDDoSPolicyCaseRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

CreateDDoSPolicyCaseRequest::CreateDDoSPolicyCaseRequest() :
    m_businessHasBeenSet(false),
    m_caseNameHasBeenSet(false),
    m_platformTypesHasBeenSet(false),
    m_appTypeHasBeenSet(false),
    m_appProtocolsHasBeenSet(false),
    m_tcpSportStartHasBeenSet(false),
    m_tcpSportEndHasBeenSet(false),
    m_udpSportStartHasBeenSet(false),
    m_udpSportEndHasBeenSet(false),
    m_hasAbroadHasBeenSet(false),
    m_hasInitiateTcpHasBeenSet(false),
    m_hasInitiateUdpHasBeenSet(false),
    m_peerTcpPortHasBeenSet(false),
    m_peerUdpPortHasBeenSet(false),
    m_tcpFootprintHasBeenSet(false),
    m_udpFootprintHasBeenSet(false),
    m_webApiUrlHasBeenSet(false),
    m_minTcpPackageLenHasBeenSet(false),
    m_maxTcpPackageLenHasBeenSet(false),
    m_minUdpPackageLenHasBeenSet(false),
    m_maxUdpPackageLenHasBeenSet(false),
    m_hasVPNHasBeenSet(false),
    m_tcpPortListHasBeenSet(false),
    m_udpPortListHasBeenSet(false)
{
}

string CreateDDoSPolicyCaseRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_businessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_business.c_str(), allocator).Move(), allocator);
    }

    if (m_caseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaseName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_caseName.c_str(), allocator).Move(), allocator);
    }

    if (m_platformTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_platformTypes.begin(); itr != m_platformTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_appTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appType.c_str(), allocator).Move(), allocator);
    }

    if (m_appProtocolsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppProtocols";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_appProtocols.begin(); itr != m_appProtocols.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tcpSportStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TcpSportStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tcpSportStart.c_str(), allocator).Move(), allocator);
    }

    if (m_tcpSportEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TcpSportEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tcpSportEnd.c_str(), allocator).Move(), allocator);
    }

    if (m_udpSportStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UdpSportStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_udpSportStart.c_str(), allocator).Move(), allocator);
    }

    if (m_udpSportEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UdpSportEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_udpSportEnd.c_str(), allocator).Move(), allocator);
    }

    if (m_hasAbroadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasAbroad";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hasAbroad.c_str(), allocator).Move(), allocator);
    }

    if (m_hasInitiateTcpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasInitiateTcp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hasInitiateTcp.c_str(), allocator).Move(), allocator);
    }

    if (m_hasInitiateUdpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasInitiateUdp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hasInitiateUdp.c_str(), allocator).Move(), allocator);
    }

    if (m_peerTcpPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerTcpPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_peerTcpPort.c_str(), allocator).Move(), allocator);
    }

    if (m_peerUdpPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerUdpPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_peerUdpPort.c_str(), allocator).Move(), allocator);
    }

    if (m_tcpFootprintHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TcpFootprint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tcpFootprint.c_str(), allocator).Move(), allocator);
    }

    if (m_udpFootprintHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UdpFootprint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_udpFootprint.c_str(), allocator).Move(), allocator);
    }

    if (m_webApiUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebApiUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_webApiUrl.begin(); itr != m_webApiUrl.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_minTcpPackageLenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinTcpPackageLen";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_minTcpPackageLen.c_str(), allocator).Move(), allocator);
    }

    if (m_maxTcpPackageLenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxTcpPackageLen";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_maxTcpPackageLen.c_str(), allocator).Move(), allocator);
    }

    if (m_minUdpPackageLenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinUdpPackageLen";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_minUdpPackageLen.c_str(), allocator).Move(), allocator);
    }

    if (m_maxUdpPackageLenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxUdpPackageLen";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_maxUdpPackageLen.c_str(), allocator).Move(), allocator);
    }

    if (m_hasVPNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasVPN";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hasVPN.c_str(), allocator).Move(), allocator);
    }

    if (m_tcpPortListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TcpPortList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tcpPortList.c_str(), allocator).Move(), allocator);
    }

    if (m_udpPortListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UdpPortList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_udpPortList.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDDoSPolicyCaseRequest::GetBusiness() const
{
    return m_business;
}

void CreateDDoSPolicyCaseRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool CreateDDoSPolicyCaseRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

string CreateDDoSPolicyCaseRequest::GetCaseName() const
{
    return m_caseName;
}

void CreateDDoSPolicyCaseRequest::SetCaseName(const string& _caseName)
{
    m_caseName = _caseName;
    m_caseNameHasBeenSet = true;
}

bool CreateDDoSPolicyCaseRequest::CaseNameHasBeenSet() const
{
    return m_caseNameHasBeenSet;
}

vector<string> CreateDDoSPolicyCaseRequest::GetPlatformTypes() const
{
    return m_platformTypes;
}

void CreateDDoSPolicyCaseRequest::SetPlatformTypes(const vector<string>& _platformTypes)
{
    m_platformTypes = _platformTypes;
    m_platformTypesHasBeenSet = true;
}

bool CreateDDoSPolicyCaseRequest::PlatformTypesHasBeenSet() const
{
    return m_platformTypesHasBeenSet;
}

string CreateDDoSPolicyCaseRequest::GetAppType() const
{
    return m_appType;
}

void CreateDDoSPolicyCaseRequest::SetAppType(const string& _appType)
{
    m_appType = _appType;
    m_appTypeHasBeenSet = true;
}

bool CreateDDoSPolicyCaseRequest::AppTypeHasBeenSet() const
{
    return m_appTypeHasBeenSet;
}

vector<string> CreateDDoSPolicyCaseRequest::GetAppProtocols() const
{
    return m_appProtocols;
}

void CreateDDoSPolicyCaseRequest::SetAppProtocols(const vector<string>& _appProtocols)
{
    m_appProtocols = _appProtocols;
    m_appProtocolsHasBeenSet = true;
}

bool CreateDDoSPolicyCaseRequest::AppProtocolsHasBeenSet() const
{
    return m_appProtocolsHasBeenSet;
}

string CreateDDoSPolicyCaseRequest::GetTcpSportStart() const
{
    return m_tcpSportStart;
}

void CreateDDoSPolicyCaseRequest::SetTcpSportStart(const string& _tcpSportStart)
{
    m_tcpSportStart = _tcpSportStart;
    m_tcpSportStartHasBeenSet = true;
}

bool CreateDDoSPolicyCaseRequest::TcpSportStartHasBeenSet() const
{
    return m_tcpSportStartHasBeenSet;
}

string CreateDDoSPolicyCaseRequest::GetTcpSportEnd() const
{
    return m_tcpSportEnd;
}

void CreateDDoSPolicyCaseRequest::SetTcpSportEnd(const string& _tcpSportEnd)
{
    m_tcpSportEnd = _tcpSportEnd;
    m_tcpSportEndHasBeenSet = true;
}

bool CreateDDoSPolicyCaseRequest::TcpSportEndHasBeenSet() const
{
    return m_tcpSportEndHasBeenSet;
}

string CreateDDoSPolicyCaseRequest::GetUdpSportStart() const
{
    return m_udpSportStart;
}

void CreateDDoSPolicyCaseRequest::SetUdpSportStart(const string& _udpSportStart)
{
    m_udpSportStart = _udpSportStart;
    m_udpSportStartHasBeenSet = true;
}

bool CreateDDoSPolicyCaseRequest::UdpSportStartHasBeenSet() const
{
    return m_udpSportStartHasBeenSet;
}

string CreateDDoSPolicyCaseRequest::GetUdpSportEnd() const
{
    return m_udpSportEnd;
}

void CreateDDoSPolicyCaseRequest::SetUdpSportEnd(const string& _udpSportEnd)
{
    m_udpSportEnd = _udpSportEnd;
    m_udpSportEndHasBeenSet = true;
}

bool CreateDDoSPolicyCaseRequest::UdpSportEndHasBeenSet() const
{
    return m_udpSportEndHasBeenSet;
}

string CreateDDoSPolicyCaseRequest::GetHasAbroad() const
{
    return m_hasAbroad;
}

void CreateDDoSPolicyCaseRequest::SetHasAbroad(const string& _hasAbroad)
{
    m_hasAbroad = _hasAbroad;
    m_hasAbroadHasBeenSet = true;
}

bool CreateDDoSPolicyCaseRequest::HasAbroadHasBeenSet() const
{
    return m_hasAbroadHasBeenSet;
}

string CreateDDoSPolicyCaseRequest::GetHasInitiateTcp() const
{
    return m_hasInitiateTcp;
}

void CreateDDoSPolicyCaseRequest::SetHasInitiateTcp(const string& _hasInitiateTcp)
{
    m_hasInitiateTcp = _hasInitiateTcp;
    m_hasInitiateTcpHasBeenSet = true;
}

bool CreateDDoSPolicyCaseRequest::HasInitiateTcpHasBeenSet() const
{
    return m_hasInitiateTcpHasBeenSet;
}

string CreateDDoSPolicyCaseRequest::GetHasInitiateUdp() const
{
    return m_hasInitiateUdp;
}

void CreateDDoSPolicyCaseRequest::SetHasInitiateUdp(const string& _hasInitiateUdp)
{
    m_hasInitiateUdp = _hasInitiateUdp;
    m_hasInitiateUdpHasBeenSet = true;
}

bool CreateDDoSPolicyCaseRequest::HasInitiateUdpHasBeenSet() const
{
    return m_hasInitiateUdpHasBeenSet;
}

string CreateDDoSPolicyCaseRequest::GetPeerTcpPort() const
{
    return m_peerTcpPort;
}

void CreateDDoSPolicyCaseRequest::SetPeerTcpPort(const string& _peerTcpPort)
{
    m_peerTcpPort = _peerTcpPort;
    m_peerTcpPortHasBeenSet = true;
}

bool CreateDDoSPolicyCaseRequest::PeerTcpPortHasBeenSet() const
{
    return m_peerTcpPortHasBeenSet;
}

string CreateDDoSPolicyCaseRequest::GetPeerUdpPort() const
{
    return m_peerUdpPort;
}

void CreateDDoSPolicyCaseRequest::SetPeerUdpPort(const string& _peerUdpPort)
{
    m_peerUdpPort = _peerUdpPort;
    m_peerUdpPortHasBeenSet = true;
}

bool CreateDDoSPolicyCaseRequest::PeerUdpPortHasBeenSet() const
{
    return m_peerUdpPortHasBeenSet;
}

string CreateDDoSPolicyCaseRequest::GetTcpFootprint() const
{
    return m_tcpFootprint;
}

void CreateDDoSPolicyCaseRequest::SetTcpFootprint(const string& _tcpFootprint)
{
    m_tcpFootprint = _tcpFootprint;
    m_tcpFootprintHasBeenSet = true;
}

bool CreateDDoSPolicyCaseRequest::TcpFootprintHasBeenSet() const
{
    return m_tcpFootprintHasBeenSet;
}

string CreateDDoSPolicyCaseRequest::GetUdpFootprint() const
{
    return m_udpFootprint;
}

void CreateDDoSPolicyCaseRequest::SetUdpFootprint(const string& _udpFootprint)
{
    m_udpFootprint = _udpFootprint;
    m_udpFootprintHasBeenSet = true;
}

bool CreateDDoSPolicyCaseRequest::UdpFootprintHasBeenSet() const
{
    return m_udpFootprintHasBeenSet;
}

vector<string> CreateDDoSPolicyCaseRequest::GetWebApiUrl() const
{
    return m_webApiUrl;
}

void CreateDDoSPolicyCaseRequest::SetWebApiUrl(const vector<string>& _webApiUrl)
{
    m_webApiUrl = _webApiUrl;
    m_webApiUrlHasBeenSet = true;
}

bool CreateDDoSPolicyCaseRequest::WebApiUrlHasBeenSet() const
{
    return m_webApiUrlHasBeenSet;
}

string CreateDDoSPolicyCaseRequest::GetMinTcpPackageLen() const
{
    return m_minTcpPackageLen;
}

void CreateDDoSPolicyCaseRequest::SetMinTcpPackageLen(const string& _minTcpPackageLen)
{
    m_minTcpPackageLen = _minTcpPackageLen;
    m_minTcpPackageLenHasBeenSet = true;
}

bool CreateDDoSPolicyCaseRequest::MinTcpPackageLenHasBeenSet() const
{
    return m_minTcpPackageLenHasBeenSet;
}

string CreateDDoSPolicyCaseRequest::GetMaxTcpPackageLen() const
{
    return m_maxTcpPackageLen;
}

void CreateDDoSPolicyCaseRequest::SetMaxTcpPackageLen(const string& _maxTcpPackageLen)
{
    m_maxTcpPackageLen = _maxTcpPackageLen;
    m_maxTcpPackageLenHasBeenSet = true;
}

bool CreateDDoSPolicyCaseRequest::MaxTcpPackageLenHasBeenSet() const
{
    return m_maxTcpPackageLenHasBeenSet;
}

string CreateDDoSPolicyCaseRequest::GetMinUdpPackageLen() const
{
    return m_minUdpPackageLen;
}

void CreateDDoSPolicyCaseRequest::SetMinUdpPackageLen(const string& _minUdpPackageLen)
{
    m_minUdpPackageLen = _minUdpPackageLen;
    m_minUdpPackageLenHasBeenSet = true;
}

bool CreateDDoSPolicyCaseRequest::MinUdpPackageLenHasBeenSet() const
{
    return m_minUdpPackageLenHasBeenSet;
}

string CreateDDoSPolicyCaseRequest::GetMaxUdpPackageLen() const
{
    return m_maxUdpPackageLen;
}

void CreateDDoSPolicyCaseRequest::SetMaxUdpPackageLen(const string& _maxUdpPackageLen)
{
    m_maxUdpPackageLen = _maxUdpPackageLen;
    m_maxUdpPackageLenHasBeenSet = true;
}

bool CreateDDoSPolicyCaseRequest::MaxUdpPackageLenHasBeenSet() const
{
    return m_maxUdpPackageLenHasBeenSet;
}

string CreateDDoSPolicyCaseRequest::GetHasVPN() const
{
    return m_hasVPN;
}

void CreateDDoSPolicyCaseRequest::SetHasVPN(const string& _hasVPN)
{
    m_hasVPN = _hasVPN;
    m_hasVPNHasBeenSet = true;
}

bool CreateDDoSPolicyCaseRequest::HasVPNHasBeenSet() const
{
    return m_hasVPNHasBeenSet;
}

string CreateDDoSPolicyCaseRequest::GetTcpPortList() const
{
    return m_tcpPortList;
}

void CreateDDoSPolicyCaseRequest::SetTcpPortList(const string& _tcpPortList)
{
    m_tcpPortList = _tcpPortList;
    m_tcpPortListHasBeenSet = true;
}

bool CreateDDoSPolicyCaseRequest::TcpPortListHasBeenSet() const
{
    return m_tcpPortListHasBeenSet;
}

string CreateDDoSPolicyCaseRequest::GetUdpPortList() const
{
    return m_udpPortList;
}

void CreateDDoSPolicyCaseRequest::SetUdpPortList(const string& _udpPortList)
{
    m_udpPortList = _udpPortList;
    m_udpPortListHasBeenSet = true;
}

bool CreateDDoSPolicyCaseRequest::UdpPortListHasBeenSet() const
{
    return m_udpPortListHasBeenSet;
}


