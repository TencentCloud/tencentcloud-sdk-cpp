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

#include <tencentcloud/dayu/v20180709/model/SchedulingDomain.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

SchedulingDomain::SchedulingDomain() :
    m_domainHasBeenSet(false),
    m_bGPIpListHasBeenSet(false),
    m_cTCCIpListHasBeenSet(false),
    m_cUCCIpListHasBeenSet(false),
    m_cMCCIpListHasBeenSet(false),
    m_overseaIpListHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_tTLHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_modifyTimeHasBeenSet(false)
{
}

CoreInternalOutcome SchedulingDomain::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulingDomain.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("BGPIpList") && !value["BGPIpList"].IsNull())
    {
        if (!value["BGPIpList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SchedulingDomain.BGPIpList` is not array type"));

        const rapidjson::Value &tmpValue = value["BGPIpList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_bGPIpList.push_back((*itr).GetString());
        }
        m_bGPIpListHasBeenSet = true;
    }

    if (value.HasMember("CTCCIpList") && !value["CTCCIpList"].IsNull())
    {
        if (!value["CTCCIpList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SchedulingDomain.CTCCIpList` is not array type"));

        const rapidjson::Value &tmpValue = value["CTCCIpList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cTCCIpList.push_back((*itr).GetString());
        }
        m_cTCCIpListHasBeenSet = true;
    }

    if (value.HasMember("CUCCIpList") && !value["CUCCIpList"].IsNull())
    {
        if (!value["CUCCIpList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SchedulingDomain.CUCCIpList` is not array type"));

        const rapidjson::Value &tmpValue = value["CUCCIpList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cUCCIpList.push_back((*itr).GetString());
        }
        m_cUCCIpListHasBeenSet = true;
    }

    if (value.HasMember("CMCCIpList") && !value["CMCCIpList"].IsNull())
    {
        if (!value["CMCCIpList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SchedulingDomain.CMCCIpList` is not array type"));

        const rapidjson::Value &tmpValue = value["CMCCIpList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cMCCIpList.push_back((*itr).GetString());
        }
        m_cMCCIpListHasBeenSet = true;
    }

    if (value.HasMember("OverseaIpList") && !value["OverseaIpList"].IsNull())
    {
        if (!value["OverseaIpList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SchedulingDomain.OverseaIpList` is not array type"));

        const rapidjson::Value &tmpValue = value["OverseaIpList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_overseaIpList.push_back((*itr).GetString());
        }
        m_overseaIpListHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulingDomain.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulingDomain.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("TTL") && !value["TTL"].IsNull())
    {
        if (!value["TTL"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulingDomain.TTL` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tTL = value["TTL"].GetUint64();
        m_tTLHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulingDomain.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulingDomain.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SchedulingDomain::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_bGPIpListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BGPIpList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bGPIpList.begin(); itr != m_bGPIpList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cTCCIpListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CTCCIpList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cTCCIpList.begin(); itr != m_cTCCIpList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cUCCIpListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CUCCIpList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cUCCIpList.begin(); itr != m_cUCCIpList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cMCCIpListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CMCCIpList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cMCCIpList.begin(); itr != m_cMCCIpList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_overseaIpListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OverseaIpList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_overseaIpList.begin(); itr != m_overseaIpList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_tTLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tTL, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

}


string SchedulingDomain::GetDomain() const
{
    return m_domain;
}

void SchedulingDomain::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool SchedulingDomain::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

vector<string> SchedulingDomain::GetBGPIpList() const
{
    return m_bGPIpList;
}

void SchedulingDomain::SetBGPIpList(const vector<string>& _bGPIpList)
{
    m_bGPIpList = _bGPIpList;
    m_bGPIpListHasBeenSet = true;
}

bool SchedulingDomain::BGPIpListHasBeenSet() const
{
    return m_bGPIpListHasBeenSet;
}

vector<string> SchedulingDomain::GetCTCCIpList() const
{
    return m_cTCCIpList;
}

void SchedulingDomain::SetCTCCIpList(const vector<string>& _cTCCIpList)
{
    m_cTCCIpList = _cTCCIpList;
    m_cTCCIpListHasBeenSet = true;
}

bool SchedulingDomain::CTCCIpListHasBeenSet() const
{
    return m_cTCCIpListHasBeenSet;
}

vector<string> SchedulingDomain::GetCUCCIpList() const
{
    return m_cUCCIpList;
}

void SchedulingDomain::SetCUCCIpList(const vector<string>& _cUCCIpList)
{
    m_cUCCIpList = _cUCCIpList;
    m_cUCCIpListHasBeenSet = true;
}

bool SchedulingDomain::CUCCIpListHasBeenSet() const
{
    return m_cUCCIpListHasBeenSet;
}

vector<string> SchedulingDomain::GetCMCCIpList() const
{
    return m_cMCCIpList;
}

void SchedulingDomain::SetCMCCIpList(const vector<string>& _cMCCIpList)
{
    m_cMCCIpList = _cMCCIpList;
    m_cMCCIpListHasBeenSet = true;
}

bool SchedulingDomain::CMCCIpListHasBeenSet() const
{
    return m_cMCCIpListHasBeenSet;
}

vector<string> SchedulingDomain::GetOverseaIpList() const
{
    return m_overseaIpList;
}

void SchedulingDomain::SetOverseaIpList(const vector<string>& _overseaIpList)
{
    m_overseaIpList = _overseaIpList;
    m_overseaIpListHasBeenSet = true;
}

bool SchedulingDomain::OverseaIpListHasBeenSet() const
{
    return m_overseaIpListHasBeenSet;
}

string SchedulingDomain::GetMethod() const
{
    return m_method;
}

void SchedulingDomain::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool SchedulingDomain::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string SchedulingDomain::GetCreateTime() const
{
    return m_createTime;
}

void SchedulingDomain::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SchedulingDomain::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t SchedulingDomain::GetTTL() const
{
    return m_tTL;
}

void SchedulingDomain::SetTTL(const uint64_t& _tTL)
{
    m_tTL = _tTL;
    m_tTLHasBeenSet = true;
}

bool SchedulingDomain::TTLHasBeenSet() const
{
    return m_tTLHasBeenSet;
}

uint64_t SchedulingDomain::GetStatus() const
{
    return m_status;
}

void SchedulingDomain::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SchedulingDomain::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SchedulingDomain::GetModifyTime() const
{
    return m_modifyTime;
}

void SchedulingDomain::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool SchedulingDomain::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

