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

#include <tencentcloud/dayu/v20180709/model/NewL7RuleEntry.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

NewL7RuleEntry::NewL7RuleEntry() :
    m_protocolHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_keepTimeHasBeenSet(false),
    m_sourceListHasBeenSet(false),
    m_lbTypeHasBeenSet(false),
    m_keepEnableHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_certTypeHasBeenSet(false),
    m_sSLIdHasBeenSet(false),
    m_certHasBeenSet(false),
    m_privateKeyHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_cCStatusHasBeenSet(false),
    m_cCEnableHasBeenSet(false),
    m_cCThresholdHasBeenSet(false),
    m_cCLevelHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_httpsToHttpEnableHasBeenSet(false),
    m_virtualPortHasBeenSet(false)
{
}

CoreInternalOutcome NewL7RuleEntry::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewL7RuleEntry.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewL7RuleEntry.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NewL7RuleEntry.SourceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = value["SourceType"].GetUint64();
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("KeepTime") && !value["KeepTime"].IsNull())
    {
        if (!value["KeepTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NewL7RuleEntry.KeepTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_keepTime = value["KeepTime"].GetUint64();
        m_keepTimeHasBeenSet = true;
    }

    if (value.HasMember("SourceList") && !value["SourceList"].IsNull())
    {
        if (!value["SourceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NewL7RuleEntry.SourceList` is not array type"));

        const rapidjson::Value &tmpValue = value["SourceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            L4RuleSource item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sourceList.push_back(item);
        }
        m_sourceListHasBeenSet = true;
    }

    if (value.HasMember("LbType") && !value["LbType"].IsNull())
    {
        if (!value["LbType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NewL7RuleEntry.LbType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lbType = value["LbType"].GetUint64();
        m_lbTypeHasBeenSet = true;
    }

    if (value.HasMember("KeepEnable") && !value["KeepEnable"].IsNull())
    {
        if (!value["KeepEnable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NewL7RuleEntry.KeepEnable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_keepEnable = value["KeepEnable"].GetUint64();
        m_keepEnableHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewL7RuleEntry.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("CertType") && !value["CertType"].IsNull())
    {
        if (!value["CertType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NewL7RuleEntry.CertType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_certType = value["CertType"].GetUint64();
        m_certTypeHasBeenSet = true;
    }

    if (value.HasMember("SSLId") && !value["SSLId"].IsNull())
    {
        if (!value["SSLId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewL7RuleEntry.SSLId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sSLId = string(value["SSLId"].GetString());
        m_sSLIdHasBeenSet = true;
    }

    if (value.HasMember("Cert") && !value["Cert"].IsNull())
    {
        if (!value["Cert"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewL7RuleEntry.Cert` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cert = string(value["Cert"].GetString());
        m_certHasBeenSet = true;
    }

    if (value.HasMember("PrivateKey") && !value["PrivateKey"].IsNull())
    {
        if (!value["PrivateKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewL7RuleEntry.PrivateKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateKey = string(value["PrivateKey"].GetString());
        m_privateKeyHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewL7RuleEntry.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NewL7RuleEntry.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CCStatus") && !value["CCStatus"].IsNull())
    {
        if (!value["CCStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NewL7RuleEntry.CCStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cCStatus = value["CCStatus"].GetUint64();
        m_cCStatusHasBeenSet = true;
    }

    if (value.HasMember("CCEnable") && !value["CCEnable"].IsNull())
    {
        if (!value["CCEnable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NewL7RuleEntry.CCEnable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cCEnable = value["CCEnable"].GetUint64();
        m_cCEnableHasBeenSet = true;
    }

    if (value.HasMember("CCThreshold") && !value["CCThreshold"].IsNull())
    {
        if (!value["CCThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NewL7RuleEntry.CCThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cCThreshold = value["CCThreshold"].GetUint64();
        m_cCThresholdHasBeenSet = true;
    }

    if (value.HasMember("CCLevel") && !value["CCLevel"].IsNull())
    {
        if (!value["CCLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewL7RuleEntry.CCLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cCLevel = string(value["CCLevel"].GetString());
        m_cCLevelHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NewL7RuleEntry.Region` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_region = value["Region"].GetUint64();
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewL7RuleEntry.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewL7RuleEntry.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewL7RuleEntry.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("HttpsToHttpEnable") && !value["HttpsToHttpEnable"].IsNull())
    {
        if (!value["HttpsToHttpEnable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NewL7RuleEntry.HttpsToHttpEnable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_httpsToHttpEnable = value["HttpsToHttpEnable"].GetUint64();
        m_httpsToHttpEnableHasBeenSet = true;
    }

    if (value.HasMember("VirtualPort") && !value["VirtualPort"].IsNull())
    {
        if (!value["VirtualPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NewL7RuleEntry.VirtualPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_virtualPort = value["VirtualPort"].GetUint64();
        m_virtualPortHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NewL7RuleEntry::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceType, allocator);
    }

    if (m_keepTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keepTime, allocator);
    }

    if (m_sourceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sourceList.begin(); itr != m_sourceList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_lbTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LbType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lbType, allocator);
    }

    if (m_keepEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keepEnable, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_certTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_certType, allocator);
    }

    if (m_sSLIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSLId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sSLId.c_str(), allocator).Move(), allocator);
    }

    if (m_certHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cert.c_str(), allocator).Move(), allocator);
    }

    if (m_privateKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateKey.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_cCStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CCStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cCStatus, allocator);
    }

    if (m_cCEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CCEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cCEnable, allocator);
    }

    if (m_cCThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CCThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cCThreshold, allocator);
    }

    if (m_cCLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CCLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cCLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_region, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_httpsToHttpEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpsToHttpEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_httpsToHttpEnable, allocator);
    }

    if (m_virtualPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_virtualPort, allocator);
    }

}


string NewL7RuleEntry::GetProtocol() const
{
    return m_protocol;
}

void NewL7RuleEntry::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool NewL7RuleEntry::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string NewL7RuleEntry::GetDomain() const
{
    return m_domain;
}

void NewL7RuleEntry::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool NewL7RuleEntry::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t NewL7RuleEntry::GetSourceType() const
{
    return m_sourceType;
}

void NewL7RuleEntry::SetSourceType(const uint64_t& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool NewL7RuleEntry::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

uint64_t NewL7RuleEntry::GetKeepTime() const
{
    return m_keepTime;
}

void NewL7RuleEntry::SetKeepTime(const uint64_t& _keepTime)
{
    m_keepTime = _keepTime;
    m_keepTimeHasBeenSet = true;
}

bool NewL7RuleEntry::KeepTimeHasBeenSet() const
{
    return m_keepTimeHasBeenSet;
}

vector<L4RuleSource> NewL7RuleEntry::GetSourceList() const
{
    return m_sourceList;
}

void NewL7RuleEntry::SetSourceList(const vector<L4RuleSource>& _sourceList)
{
    m_sourceList = _sourceList;
    m_sourceListHasBeenSet = true;
}

bool NewL7RuleEntry::SourceListHasBeenSet() const
{
    return m_sourceListHasBeenSet;
}

uint64_t NewL7RuleEntry::GetLbType() const
{
    return m_lbType;
}

void NewL7RuleEntry::SetLbType(const uint64_t& _lbType)
{
    m_lbType = _lbType;
    m_lbTypeHasBeenSet = true;
}

bool NewL7RuleEntry::LbTypeHasBeenSet() const
{
    return m_lbTypeHasBeenSet;
}

uint64_t NewL7RuleEntry::GetKeepEnable() const
{
    return m_keepEnable;
}

void NewL7RuleEntry::SetKeepEnable(const uint64_t& _keepEnable)
{
    m_keepEnable = _keepEnable;
    m_keepEnableHasBeenSet = true;
}

bool NewL7RuleEntry::KeepEnableHasBeenSet() const
{
    return m_keepEnableHasBeenSet;
}

string NewL7RuleEntry::GetRuleId() const
{
    return m_ruleId;
}

void NewL7RuleEntry::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool NewL7RuleEntry::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

uint64_t NewL7RuleEntry::GetCertType() const
{
    return m_certType;
}

void NewL7RuleEntry::SetCertType(const uint64_t& _certType)
{
    m_certType = _certType;
    m_certTypeHasBeenSet = true;
}

bool NewL7RuleEntry::CertTypeHasBeenSet() const
{
    return m_certTypeHasBeenSet;
}

string NewL7RuleEntry::GetSSLId() const
{
    return m_sSLId;
}

void NewL7RuleEntry::SetSSLId(const string& _sSLId)
{
    m_sSLId = _sSLId;
    m_sSLIdHasBeenSet = true;
}

bool NewL7RuleEntry::SSLIdHasBeenSet() const
{
    return m_sSLIdHasBeenSet;
}

string NewL7RuleEntry::GetCert() const
{
    return m_cert;
}

void NewL7RuleEntry::SetCert(const string& _cert)
{
    m_cert = _cert;
    m_certHasBeenSet = true;
}

bool NewL7RuleEntry::CertHasBeenSet() const
{
    return m_certHasBeenSet;
}

string NewL7RuleEntry::GetPrivateKey() const
{
    return m_privateKey;
}

void NewL7RuleEntry::SetPrivateKey(const string& _privateKey)
{
    m_privateKey = _privateKey;
    m_privateKeyHasBeenSet = true;
}

bool NewL7RuleEntry::PrivateKeyHasBeenSet() const
{
    return m_privateKeyHasBeenSet;
}

string NewL7RuleEntry::GetRuleName() const
{
    return m_ruleName;
}

void NewL7RuleEntry::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool NewL7RuleEntry::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

uint64_t NewL7RuleEntry::GetStatus() const
{
    return m_status;
}

void NewL7RuleEntry::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool NewL7RuleEntry::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t NewL7RuleEntry::GetCCStatus() const
{
    return m_cCStatus;
}

void NewL7RuleEntry::SetCCStatus(const uint64_t& _cCStatus)
{
    m_cCStatus = _cCStatus;
    m_cCStatusHasBeenSet = true;
}

bool NewL7RuleEntry::CCStatusHasBeenSet() const
{
    return m_cCStatusHasBeenSet;
}

uint64_t NewL7RuleEntry::GetCCEnable() const
{
    return m_cCEnable;
}

void NewL7RuleEntry::SetCCEnable(const uint64_t& _cCEnable)
{
    m_cCEnable = _cCEnable;
    m_cCEnableHasBeenSet = true;
}

bool NewL7RuleEntry::CCEnableHasBeenSet() const
{
    return m_cCEnableHasBeenSet;
}

uint64_t NewL7RuleEntry::GetCCThreshold() const
{
    return m_cCThreshold;
}

void NewL7RuleEntry::SetCCThreshold(const uint64_t& _cCThreshold)
{
    m_cCThreshold = _cCThreshold;
    m_cCThresholdHasBeenSet = true;
}

bool NewL7RuleEntry::CCThresholdHasBeenSet() const
{
    return m_cCThresholdHasBeenSet;
}

string NewL7RuleEntry::GetCCLevel() const
{
    return m_cCLevel;
}

void NewL7RuleEntry::SetCCLevel(const string& _cCLevel)
{
    m_cCLevel = _cCLevel;
    m_cCLevelHasBeenSet = true;
}

bool NewL7RuleEntry::CCLevelHasBeenSet() const
{
    return m_cCLevelHasBeenSet;
}

uint64_t NewL7RuleEntry::GetRegion() const
{
    return m_region;
}

void NewL7RuleEntry::SetRegion(const uint64_t& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool NewL7RuleEntry::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string NewL7RuleEntry::GetId() const
{
    return m_id;
}

void NewL7RuleEntry::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool NewL7RuleEntry::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string NewL7RuleEntry::GetIp() const
{
    return m_ip;
}

void NewL7RuleEntry::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool NewL7RuleEntry::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string NewL7RuleEntry::GetModifyTime() const
{
    return m_modifyTime;
}

void NewL7RuleEntry::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool NewL7RuleEntry::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

uint64_t NewL7RuleEntry::GetHttpsToHttpEnable() const
{
    return m_httpsToHttpEnable;
}

void NewL7RuleEntry::SetHttpsToHttpEnable(const uint64_t& _httpsToHttpEnable)
{
    m_httpsToHttpEnable = _httpsToHttpEnable;
    m_httpsToHttpEnableHasBeenSet = true;
}

bool NewL7RuleEntry::HttpsToHttpEnableHasBeenSet() const
{
    return m_httpsToHttpEnableHasBeenSet;
}

uint64_t NewL7RuleEntry::GetVirtualPort() const
{
    return m_virtualPort;
}

void NewL7RuleEntry::SetVirtualPort(const uint64_t& _virtualPort)
{
    m_virtualPort = _virtualPort;
    m_virtualPortHasBeenSet = true;
}

bool NewL7RuleEntry::VirtualPortHasBeenSet() const
{
    return m_virtualPortHasBeenSet;
}

