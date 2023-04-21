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

#include <tencentcloud/antiddos/v20200309/model/IPLineInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

IPLineInfo::IPLineInfo() :
    m_typeHasBeenSet(false),
    m_eipHasBeenSet(false),
    m_cnameHasBeenSet(false),
    m_resourceFlagHasBeenSet(false),
    m_domainHasBeenSet(false)
{
}

CoreInternalOutcome IPLineInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPLineInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Eip") && !value["Eip"].IsNull())
    {
        if (!value["Eip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPLineInfo.Eip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eip = string(value["Eip"].GetString());
        m_eipHasBeenSet = true;
    }

    if (value.HasMember("Cname") && !value["Cname"].IsNull())
    {
        if (!value["Cname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPLineInfo.Cname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cname = string(value["Cname"].GetString());
        m_cnameHasBeenSet = true;
    }

    if (value.HasMember("ResourceFlag") && !value["ResourceFlag"].IsNull())
    {
        if (!value["ResourceFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IPLineInfo.ResourceFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceFlag = value["ResourceFlag"].GetInt64();
        m_resourceFlagHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPLineInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IPLineInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_eipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Eip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eip.c_str(), allocator).Move(), allocator);
    }

    if (m_cnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cname.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceFlag, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

}


string IPLineInfo::GetType() const
{
    return m_type;
}

void IPLineInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool IPLineInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string IPLineInfo::GetEip() const
{
    return m_eip;
}

void IPLineInfo::SetEip(const string& _eip)
{
    m_eip = _eip;
    m_eipHasBeenSet = true;
}

bool IPLineInfo::EipHasBeenSet() const
{
    return m_eipHasBeenSet;
}

string IPLineInfo::GetCname() const
{
    return m_cname;
}

void IPLineInfo::SetCname(const string& _cname)
{
    m_cname = _cname;
    m_cnameHasBeenSet = true;
}

bool IPLineInfo::CnameHasBeenSet() const
{
    return m_cnameHasBeenSet;
}

int64_t IPLineInfo::GetResourceFlag() const
{
    return m_resourceFlag;
}

void IPLineInfo::SetResourceFlag(const int64_t& _resourceFlag)
{
    m_resourceFlag = _resourceFlag;
    m_resourceFlagHasBeenSet = true;
}

bool IPLineInfo::ResourceFlagHasBeenSet() const
{
    return m_resourceFlagHasBeenSet;
}

string IPLineInfo::GetDomain() const
{
    return m_domain;
}

void IPLineInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool IPLineInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

