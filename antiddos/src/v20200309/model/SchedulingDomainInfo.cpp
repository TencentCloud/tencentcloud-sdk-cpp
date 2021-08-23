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

#include <tencentcloud/antiddos/v20200309/model/SchedulingDomainInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

SchedulingDomainInfo::SchedulingDomainInfo() :
    m_domainHasBeenSet(false),
    m_lineIPListHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_tTLHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_usrDomainNameHasBeenSet(false)
{
}

CoreInternalOutcome SchedulingDomainInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulingDomainInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("LineIPList") && !value["LineIPList"].IsNull())
    {
        if (!value["LineIPList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SchedulingDomainInfo.LineIPList` is not array type"));

        const rapidjson::Value &tmpValue = value["LineIPList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IPLineInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_lineIPList.push_back(item);
        }
        m_lineIPListHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulingDomainInfo.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("TTL") && !value["TTL"].IsNull())
    {
        if (!value["TTL"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulingDomainInfo.TTL` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tTL = value["TTL"].GetUint64();
        m_tTLHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulingDomainInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulingDomainInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulingDomainInfo.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("UsrDomainName") && !value["UsrDomainName"].IsNull())
    {
        if (!value["UsrDomainName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulingDomainInfo.UsrDomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usrDomainName = string(value["UsrDomainName"].GetString());
        m_usrDomainNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SchedulingDomainInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_lineIPListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineIPList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_lineIPList.begin(); itr != m_lineIPList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
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

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_usrDomainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsrDomainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usrDomainName.c_str(), allocator).Move(), allocator);
    }

}


string SchedulingDomainInfo::GetDomain() const
{
    return m_domain;
}

void SchedulingDomainInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool SchedulingDomainInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

vector<IPLineInfo> SchedulingDomainInfo::GetLineIPList() const
{
    return m_lineIPList;
}

void SchedulingDomainInfo::SetLineIPList(const vector<IPLineInfo>& _lineIPList)
{
    m_lineIPList = _lineIPList;
    m_lineIPListHasBeenSet = true;
}

bool SchedulingDomainInfo::LineIPListHasBeenSet() const
{
    return m_lineIPListHasBeenSet;
}

string SchedulingDomainInfo::GetMethod() const
{
    return m_method;
}

void SchedulingDomainInfo::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool SchedulingDomainInfo::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

uint64_t SchedulingDomainInfo::GetTTL() const
{
    return m_tTL;
}

void SchedulingDomainInfo::SetTTL(const uint64_t& _tTL)
{
    m_tTL = _tTL;
    m_tTLHasBeenSet = true;
}

bool SchedulingDomainInfo::TTLHasBeenSet() const
{
    return m_tTLHasBeenSet;
}

uint64_t SchedulingDomainInfo::GetStatus() const
{
    return m_status;
}

void SchedulingDomainInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SchedulingDomainInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SchedulingDomainInfo::GetCreatedTime() const
{
    return m_createdTime;
}

void SchedulingDomainInfo::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool SchedulingDomainInfo::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string SchedulingDomainInfo::GetModifyTime() const
{
    return m_modifyTime;
}

void SchedulingDomainInfo::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool SchedulingDomainInfo::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string SchedulingDomainInfo::GetUsrDomainName() const
{
    return m_usrDomainName;
}

void SchedulingDomainInfo::SetUsrDomainName(const string& _usrDomainName)
{
    m_usrDomainName = _usrDomainName;
    m_usrDomainNameHasBeenSet = true;
}

bool SchedulingDomainInfo::UsrDomainNameHasBeenSet() const
{
    return m_usrDomainNameHasBeenSet;
}

