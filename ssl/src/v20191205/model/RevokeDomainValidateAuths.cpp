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

#include <tencentcloud/ssl/v20191205/model/RevokeDomainValidateAuths.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

RevokeDomainValidateAuths::RevokeDomainValidateAuths() :
    m_domainValidateAuthPathHasBeenSet(false),
    m_domainValidateAuthKeyHasBeenSet(false),
    m_domainValidateAuthValueHasBeenSet(false),
    m_domainValidateAuthDomainHasBeenSet(false)
{
}

CoreInternalOutcome RevokeDomainValidateAuths::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DomainValidateAuthPath") && !value["DomainValidateAuthPath"].IsNull())
    {
        if (!value["DomainValidateAuthPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RevokeDomainValidateAuths.DomainValidateAuthPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainValidateAuthPath = string(value["DomainValidateAuthPath"].GetString());
        m_domainValidateAuthPathHasBeenSet = true;
    }

    if (value.HasMember("DomainValidateAuthKey") && !value["DomainValidateAuthKey"].IsNull())
    {
        if (!value["DomainValidateAuthKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RevokeDomainValidateAuths.DomainValidateAuthKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainValidateAuthKey = string(value["DomainValidateAuthKey"].GetString());
        m_domainValidateAuthKeyHasBeenSet = true;
    }

    if (value.HasMember("DomainValidateAuthValue") && !value["DomainValidateAuthValue"].IsNull())
    {
        if (!value["DomainValidateAuthValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RevokeDomainValidateAuths.DomainValidateAuthValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainValidateAuthValue = string(value["DomainValidateAuthValue"].GetString());
        m_domainValidateAuthValueHasBeenSet = true;
    }

    if (value.HasMember("DomainValidateAuthDomain") && !value["DomainValidateAuthDomain"].IsNull())
    {
        if (!value["DomainValidateAuthDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RevokeDomainValidateAuths.DomainValidateAuthDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainValidateAuthDomain = string(value["DomainValidateAuthDomain"].GetString());
        m_domainValidateAuthDomainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RevokeDomainValidateAuths::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainValidateAuthPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainValidateAuthPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainValidateAuthPath.c_str(), allocator).Move(), allocator);
    }

    if (m_domainValidateAuthKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainValidateAuthKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainValidateAuthKey.c_str(), allocator).Move(), allocator);
    }

    if (m_domainValidateAuthValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainValidateAuthValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainValidateAuthValue.c_str(), allocator).Move(), allocator);
    }

    if (m_domainValidateAuthDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainValidateAuthDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainValidateAuthDomain.c_str(), allocator).Move(), allocator);
    }

}


string RevokeDomainValidateAuths::GetDomainValidateAuthPath() const
{
    return m_domainValidateAuthPath;
}

void RevokeDomainValidateAuths::SetDomainValidateAuthPath(const string& _domainValidateAuthPath)
{
    m_domainValidateAuthPath = _domainValidateAuthPath;
    m_domainValidateAuthPathHasBeenSet = true;
}

bool RevokeDomainValidateAuths::DomainValidateAuthPathHasBeenSet() const
{
    return m_domainValidateAuthPathHasBeenSet;
}

string RevokeDomainValidateAuths::GetDomainValidateAuthKey() const
{
    return m_domainValidateAuthKey;
}

void RevokeDomainValidateAuths::SetDomainValidateAuthKey(const string& _domainValidateAuthKey)
{
    m_domainValidateAuthKey = _domainValidateAuthKey;
    m_domainValidateAuthKeyHasBeenSet = true;
}

bool RevokeDomainValidateAuths::DomainValidateAuthKeyHasBeenSet() const
{
    return m_domainValidateAuthKeyHasBeenSet;
}

string RevokeDomainValidateAuths::GetDomainValidateAuthValue() const
{
    return m_domainValidateAuthValue;
}

void RevokeDomainValidateAuths::SetDomainValidateAuthValue(const string& _domainValidateAuthValue)
{
    m_domainValidateAuthValue = _domainValidateAuthValue;
    m_domainValidateAuthValueHasBeenSet = true;
}

bool RevokeDomainValidateAuths::DomainValidateAuthValueHasBeenSet() const
{
    return m_domainValidateAuthValueHasBeenSet;
}

string RevokeDomainValidateAuths::GetDomainValidateAuthDomain() const
{
    return m_domainValidateAuthDomain;
}

void RevokeDomainValidateAuths::SetDomainValidateAuthDomain(const string& _domainValidateAuthDomain)
{
    m_domainValidateAuthDomain = _domainValidateAuthDomain;
    m_domainValidateAuthDomainHasBeenSet = true;
}

bool RevokeDomainValidateAuths::DomainValidateAuthDomainHasBeenSet() const
{
    return m_domainValidateAuthDomainHasBeenSet;
}

