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

#include <tencentcloud/dnspod/v20210323/model/DomainCreateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

DomainCreateInfo::DomainCreateInfo() :
    m_idHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_punycodeHasBeenSet(false),
    m_gradeNsListHasBeenSet(false)
{
}

CoreInternalOutcome DomainCreateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainCreateInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainCreateInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Punycode") && !value["Punycode"].IsNull())
    {
        if (!value["Punycode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainCreateInfo.Punycode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_punycode = string(value["Punycode"].GetString());
        m_punycodeHasBeenSet = true;
    }

    if (value.HasMember("GradeNsList") && !value["GradeNsList"].IsNull())
    {
        if (!value["GradeNsList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainCreateInfo.GradeNsList` is not array type"));

        const rapidjson::Value &tmpValue = value["GradeNsList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_gradeNsList.push_back((*itr).GetString());
        }
        m_gradeNsListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainCreateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_punycodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Punycode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_punycode.c_str(), allocator).Move(), allocator);
    }

    if (m_gradeNsListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GradeNsList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_gradeNsList.begin(); itr != m_gradeNsList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


uint64_t DomainCreateInfo::GetId() const
{
    return m_id;
}

void DomainCreateInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DomainCreateInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DomainCreateInfo::GetDomain() const
{
    return m_domain;
}

void DomainCreateInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DomainCreateInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DomainCreateInfo::GetPunycode() const
{
    return m_punycode;
}

void DomainCreateInfo::SetPunycode(const string& _punycode)
{
    m_punycode = _punycode;
    m_punycodeHasBeenSet = true;
}

bool DomainCreateInfo::PunycodeHasBeenSet() const
{
    return m_punycodeHasBeenSet;
}

vector<string> DomainCreateInfo::GetGradeNsList() const
{
    return m_gradeNsList;
}

void DomainCreateInfo::SetGradeNsList(const vector<string>& _gradeNsList)
{
    m_gradeNsList = _gradeNsList;
    m_gradeNsListHasBeenSet = true;
}

bool DomainCreateInfo::GradeNsListHasBeenSet() const
{
    return m_gradeNsListHasBeenSet;
}

