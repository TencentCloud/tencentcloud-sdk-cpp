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

#include <tencentcloud/antiddos/v20200309/model/BGPIPL7RuleEntry.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

BGPIPL7RuleEntry::BGPIPL7RuleEntry() :
    m_protocolHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_lbTypeHasBeenSet(false),
    m_keepEnableHasBeenSet(false),
    m_keepTimeHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_sourceListHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_certTypeHasBeenSet(false),
    m_sSLIdHasBeenSet(false),
    m_certHasBeenSet(false),
    m_privateKeyHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_cCStatusHasBeenSet(false),
    m_cCEnableHasBeenSet(false),
    m_cCThresholdHasBeenSet(false),
    m_cCLevelHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_httpsToHttpEnableHasBeenSet(false),
    m_virtualPortHasBeenSet(false),
    m_rewriteHttpsHasBeenSet(false),
    m_errCodeHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

CoreInternalOutcome BGPIPL7RuleEntry::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPL7RuleEntry.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPL7RuleEntry.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("LbType") && !value["LbType"].IsNull())
    {
        if (!value["LbType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPL7RuleEntry.LbType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lbType = value["LbType"].GetUint64();
        m_lbTypeHasBeenSet = true;
    }

    if (value.HasMember("KeepEnable") && !value["KeepEnable"].IsNull())
    {
        if (!value["KeepEnable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPL7RuleEntry.KeepEnable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_keepEnable = value["KeepEnable"].GetUint64();
        m_keepEnableHasBeenSet = true;
    }

    if (value.HasMember("KeepTime") && !value["KeepTime"].IsNull())
    {
        if (!value["KeepTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPL7RuleEntry.KeepTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_keepTime = value["KeepTime"].GetUint64();
        m_keepTimeHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPL7RuleEntry.SourceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = value["SourceType"].GetUint64();
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceList") && !value["SourceList"].IsNull())
    {
        if (!value["SourceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BGPIPL7RuleEntry.SourceList` is not array type"));

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

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPL7RuleEntry.Region` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_region = value["Region"].GetUint64();
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPL7RuleEntry.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPL7RuleEntry.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPL7RuleEntry.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPL7RuleEntry.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("CertType") && !value["CertType"].IsNull())
    {
        if (!value["CertType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPL7RuleEntry.CertType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_certType = value["CertType"].GetUint64();
        m_certTypeHasBeenSet = true;
    }

    if (value.HasMember("SSLId") && !value["SSLId"].IsNull())
    {
        if (!value["SSLId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPL7RuleEntry.SSLId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sSLId = string(value["SSLId"].GetString());
        m_sSLIdHasBeenSet = true;
    }

    if (value.HasMember("Cert") && !value["Cert"].IsNull())
    {
        if (!value["Cert"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPL7RuleEntry.Cert` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cert = string(value["Cert"].GetString());
        m_certHasBeenSet = true;
    }

    if (value.HasMember("PrivateKey") && !value["PrivateKey"].IsNull())
    {
        if (!value["PrivateKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPL7RuleEntry.PrivateKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateKey = string(value["PrivateKey"].GetString());
        m_privateKeyHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPL7RuleEntry.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CCStatus") && !value["CCStatus"].IsNull())
    {
        if (!value["CCStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPL7RuleEntry.CCStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cCStatus = value["CCStatus"].GetUint64();
        m_cCStatusHasBeenSet = true;
    }

    if (value.HasMember("CCEnable") && !value["CCEnable"].IsNull())
    {
        if (!value["CCEnable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPL7RuleEntry.CCEnable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cCEnable = value["CCEnable"].GetUint64();
        m_cCEnableHasBeenSet = true;
    }

    if (value.HasMember("CCThreshold") && !value["CCThreshold"].IsNull())
    {
        if (!value["CCThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPL7RuleEntry.CCThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cCThreshold = value["CCThreshold"].GetInt64();
        m_cCThresholdHasBeenSet = true;
    }

    if (value.HasMember("CCLevel") && !value["CCLevel"].IsNull())
    {
        if (!value["CCLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPL7RuleEntry.CCLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cCLevel = string(value["CCLevel"].GetString());
        m_cCLevelHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPL7RuleEntry.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("HttpsToHttpEnable") && !value["HttpsToHttpEnable"].IsNull())
    {
        if (!value["HttpsToHttpEnable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPL7RuleEntry.HttpsToHttpEnable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_httpsToHttpEnable = value["HttpsToHttpEnable"].GetUint64();
        m_httpsToHttpEnableHasBeenSet = true;
    }

    if (value.HasMember("VirtualPort") && !value["VirtualPort"].IsNull())
    {
        if (!value["VirtualPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPL7RuleEntry.VirtualPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_virtualPort = value["VirtualPort"].GetUint64();
        m_virtualPortHasBeenSet = true;
    }

    if (value.HasMember("RewriteHttps") && !value["RewriteHttps"].IsNull())
    {
        if (!value["RewriteHttps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPL7RuleEntry.RewriteHttps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rewriteHttps = value["RewriteHttps"].GetUint64();
        m_rewriteHttpsHasBeenSet = true;
    }

    if (value.HasMember("ErrCode") && !value["ErrCode"].IsNull())
    {
        if (!value["ErrCode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPL7RuleEntry.ErrCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = value["ErrCode"].GetUint64();
        m_errCodeHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPL7RuleEntry.Version` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_version = value["Version"].GetUint64();
        m_versionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BGPIPL7RuleEntry::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_keepTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keepTime, allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceType, allocator);
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

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
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

    if (m_rewriteHttpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RewriteHttps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rewriteHttps, allocator);
    }

    if (m_errCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errCode, allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_version, allocator);
    }

}


string BGPIPL7RuleEntry::GetProtocol() const
{
    return m_protocol;
}

void BGPIPL7RuleEntry::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool BGPIPL7RuleEntry::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string BGPIPL7RuleEntry::GetDomain() const
{
    return m_domain;
}

void BGPIPL7RuleEntry::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool BGPIPL7RuleEntry::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t BGPIPL7RuleEntry::GetLbType() const
{
    return m_lbType;
}

void BGPIPL7RuleEntry::SetLbType(const uint64_t& _lbType)
{
    m_lbType = _lbType;
    m_lbTypeHasBeenSet = true;
}

bool BGPIPL7RuleEntry::LbTypeHasBeenSet() const
{
    return m_lbTypeHasBeenSet;
}

uint64_t BGPIPL7RuleEntry::GetKeepEnable() const
{
    return m_keepEnable;
}

void BGPIPL7RuleEntry::SetKeepEnable(const uint64_t& _keepEnable)
{
    m_keepEnable = _keepEnable;
    m_keepEnableHasBeenSet = true;
}

bool BGPIPL7RuleEntry::KeepEnableHasBeenSet() const
{
    return m_keepEnableHasBeenSet;
}

uint64_t BGPIPL7RuleEntry::GetKeepTime() const
{
    return m_keepTime;
}

void BGPIPL7RuleEntry::SetKeepTime(const uint64_t& _keepTime)
{
    m_keepTime = _keepTime;
    m_keepTimeHasBeenSet = true;
}

bool BGPIPL7RuleEntry::KeepTimeHasBeenSet() const
{
    return m_keepTimeHasBeenSet;
}

uint64_t BGPIPL7RuleEntry::GetSourceType() const
{
    return m_sourceType;
}

void BGPIPL7RuleEntry::SetSourceType(const uint64_t& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool BGPIPL7RuleEntry::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

vector<L4RuleSource> BGPIPL7RuleEntry::GetSourceList() const
{
    return m_sourceList;
}

void BGPIPL7RuleEntry::SetSourceList(const vector<L4RuleSource>& _sourceList)
{
    m_sourceList = _sourceList;
    m_sourceListHasBeenSet = true;
}

bool BGPIPL7RuleEntry::SourceListHasBeenSet() const
{
    return m_sourceListHasBeenSet;
}

uint64_t BGPIPL7RuleEntry::GetRegion() const
{
    return m_region;
}

void BGPIPL7RuleEntry::SetRegion(const uint64_t& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool BGPIPL7RuleEntry::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string BGPIPL7RuleEntry::GetId() const
{
    return m_id;
}

void BGPIPL7RuleEntry::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool BGPIPL7RuleEntry::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string BGPIPL7RuleEntry::GetIp() const
{
    return m_ip;
}

void BGPIPL7RuleEntry::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool BGPIPL7RuleEntry::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string BGPIPL7RuleEntry::GetRuleId() const
{
    return m_ruleId;
}

void BGPIPL7RuleEntry::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool BGPIPL7RuleEntry::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string BGPIPL7RuleEntry::GetRuleName() const
{
    return m_ruleName;
}

void BGPIPL7RuleEntry::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool BGPIPL7RuleEntry::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

uint64_t BGPIPL7RuleEntry::GetCertType() const
{
    return m_certType;
}

void BGPIPL7RuleEntry::SetCertType(const uint64_t& _certType)
{
    m_certType = _certType;
    m_certTypeHasBeenSet = true;
}

bool BGPIPL7RuleEntry::CertTypeHasBeenSet() const
{
    return m_certTypeHasBeenSet;
}

string BGPIPL7RuleEntry::GetSSLId() const
{
    return m_sSLId;
}

void BGPIPL7RuleEntry::SetSSLId(const string& _sSLId)
{
    m_sSLId = _sSLId;
    m_sSLIdHasBeenSet = true;
}

bool BGPIPL7RuleEntry::SSLIdHasBeenSet() const
{
    return m_sSLIdHasBeenSet;
}

string BGPIPL7RuleEntry::GetCert() const
{
    return m_cert;
}

void BGPIPL7RuleEntry::SetCert(const string& _cert)
{
    m_cert = _cert;
    m_certHasBeenSet = true;
}

bool BGPIPL7RuleEntry::CertHasBeenSet() const
{
    return m_certHasBeenSet;
}

string BGPIPL7RuleEntry::GetPrivateKey() const
{
    return m_privateKey;
}

void BGPIPL7RuleEntry::SetPrivateKey(const string& _privateKey)
{
    m_privateKey = _privateKey;
    m_privateKeyHasBeenSet = true;
}

bool BGPIPL7RuleEntry::PrivateKeyHasBeenSet() const
{
    return m_privateKeyHasBeenSet;
}

uint64_t BGPIPL7RuleEntry::GetStatus() const
{
    return m_status;
}

void BGPIPL7RuleEntry::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BGPIPL7RuleEntry::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t BGPIPL7RuleEntry::GetCCStatus() const
{
    return m_cCStatus;
}

void BGPIPL7RuleEntry::SetCCStatus(const uint64_t& _cCStatus)
{
    m_cCStatus = _cCStatus;
    m_cCStatusHasBeenSet = true;
}

bool BGPIPL7RuleEntry::CCStatusHasBeenSet() const
{
    return m_cCStatusHasBeenSet;
}

uint64_t BGPIPL7RuleEntry::GetCCEnable() const
{
    return m_cCEnable;
}

void BGPIPL7RuleEntry::SetCCEnable(const uint64_t& _cCEnable)
{
    m_cCEnable = _cCEnable;
    m_cCEnableHasBeenSet = true;
}

bool BGPIPL7RuleEntry::CCEnableHasBeenSet() const
{
    return m_cCEnableHasBeenSet;
}

int64_t BGPIPL7RuleEntry::GetCCThreshold() const
{
    return m_cCThreshold;
}

void BGPIPL7RuleEntry::SetCCThreshold(const int64_t& _cCThreshold)
{
    m_cCThreshold = _cCThreshold;
    m_cCThresholdHasBeenSet = true;
}

bool BGPIPL7RuleEntry::CCThresholdHasBeenSet() const
{
    return m_cCThresholdHasBeenSet;
}

string BGPIPL7RuleEntry::GetCCLevel() const
{
    return m_cCLevel;
}

void BGPIPL7RuleEntry::SetCCLevel(const string& _cCLevel)
{
    m_cCLevel = _cCLevel;
    m_cCLevelHasBeenSet = true;
}

bool BGPIPL7RuleEntry::CCLevelHasBeenSet() const
{
    return m_cCLevelHasBeenSet;
}

string BGPIPL7RuleEntry::GetModifyTime() const
{
    return m_modifyTime;
}

void BGPIPL7RuleEntry::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool BGPIPL7RuleEntry::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

uint64_t BGPIPL7RuleEntry::GetHttpsToHttpEnable() const
{
    return m_httpsToHttpEnable;
}

void BGPIPL7RuleEntry::SetHttpsToHttpEnable(const uint64_t& _httpsToHttpEnable)
{
    m_httpsToHttpEnable = _httpsToHttpEnable;
    m_httpsToHttpEnableHasBeenSet = true;
}

bool BGPIPL7RuleEntry::HttpsToHttpEnableHasBeenSet() const
{
    return m_httpsToHttpEnableHasBeenSet;
}

uint64_t BGPIPL7RuleEntry::GetVirtualPort() const
{
    return m_virtualPort;
}

void BGPIPL7RuleEntry::SetVirtualPort(const uint64_t& _virtualPort)
{
    m_virtualPort = _virtualPort;
    m_virtualPortHasBeenSet = true;
}

bool BGPIPL7RuleEntry::VirtualPortHasBeenSet() const
{
    return m_virtualPortHasBeenSet;
}

uint64_t BGPIPL7RuleEntry::GetRewriteHttps() const
{
    return m_rewriteHttps;
}

void BGPIPL7RuleEntry::SetRewriteHttps(const uint64_t& _rewriteHttps)
{
    m_rewriteHttps = _rewriteHttps;
    m_rewriteHttpsHasBeenSet = true;
}

bool BGPIPL7RuleEntry::RewriteHttpsHasBeenSet() const
{
    return m_rewriteHttpsHasBeenSet;
}

uint64_t BGPIPL7RuleEntry::GetErrCode() const
{
    return m_errCode;
}

void BGPIPL7RuleEntry::SetErrCode(const uint64_t& _errCode)
{
    m_errCode = _errCode;
    m_errCodeHasBeenSet = true;
}

bool BGPIPL7RuleEntry::ErrCodeHasBeenSet() const
{
    return m_errCodeHasBeenSet;
}

uint64_t BGPIPL7RuleEntry::GetVersion() const
{
    return m_version;
}

void BGPIPL7RuleEntry::SetVersion(const uint64_t& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool BGPIPL7RuleEntry::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

