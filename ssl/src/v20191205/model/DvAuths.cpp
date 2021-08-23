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

#include <tencentcloud/ssl/v20191205/model/DvAuths.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

DvAuths::DvAuths() :
    m_dvAuthKeyHasBeenSet(false),
    m_dvAuthValueHasBeenSet(false),
    m_dvAuthDomainHasBeenSet(false),
    m_dvAuthPathHasBeenSet(false),
    m_dvAuthSubDomainHasBeenSet(false),
    m_dvAuthVerifyTypeHasBeenSet(false)
{
}

CoreInternalOutcome DvAuths::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DvAuthKey") && !value["DvAuthKey"].IsNull())
    {
        if (!value["DvAuthKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DvAuths.DvAuthKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dvAuthKey = string(value["DvAuthKey"].GetString());
        m_dvAuthKeyHasBeenSet = true;
    }

    if (value.HasMember("DvAuthValue") && !value["DvAuthValue"].IsNull())
    {
        if (!value["DvAuthValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DvAuths.DvAuthValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dvAuthValue = string(value["DvAuthValue"].GetString());
        m_dvAuthValueHasBeenSet = true;
    }

    if (value.HasMember("DvAuthDomain") && !value["DvAuthDomain"].IsNull())
    {
        if (!value["DvAuthDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DvAuths.DvAuthDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dvAuthDomain = string(value["DvAuthDomain"].GetString());
        m_dvAuthDomainHasBeenSet = true;
    }

    if (value.HasMember("DvAuthPath") && !value["DvAuthPath"].IsNull())
    {
        if (!value["DvAuthPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DvAuths.DvAuthPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dvAuthPath = string(value["DvAuthPath"].GetString());
        m_dvAuthPathHasBeenSet = true;
    }

    if (value.HasMember("DvAuthSubDomain") && !value["DvAuthSubDomain"].IsNull())
    {
        if (!value["DvAuthSubDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DvAuths.DvAuthSubDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dvAuthSubDomain = string(value["DvAuthSubDomain"].GetString());
        m_dvAuthSubDomainHasBeenSet = true;
    }

    if (value.HasMember("DvAuthVerifyType") && !value["DvAuthVerifyType"].IsNull())
    {
        if (!value["DvAuthVerifyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DvAuths.DvAuthVerifyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dvAuthVerifyType = string(value["DvAuthVerifyType"].GetString());
        m_dvAuthVerifyTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DvAuths::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dvAuthKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DvAuthKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dvAuthKey.c_str(), allocator).Move(), allocator);
    }

    if (m_dvAuthValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DvAuthValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dvAuthValue.c_str(), allocator).Move(), allocator);
    }

    if (m_dvAuthDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DvAuthDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dvAuthDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_dvAuthPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DvAuthPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dvAuthPath.c_str(), allocator).Move(), allocator);
    }

    if (m_dvAuthSubDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DvAuthSubDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dvAuthSubDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_dvAuthVerifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DvAuthVerifyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dvAuthVerifyType.c_str(), allocator).Move(), allocator);
    }

}


string DvAuths::GetDvAuthKey() const
{
    return m_dvAuthKey;
}

void DvAuths::SetDvAuthKey(const string& _dvAuthKey)
{
    m_dvAuthKey = _dvAuthKey;
    m_dvAuthKeyHasBeenSet = true;
}

bool DvAuths::DvAuthKeyHasBeenSet() const
{
    return m_dvAuthKeyHasBeenSet;
}

string DvAuths::GetDvAuthValue() const
{
    return m_dvAuthValue;
}

void DvAuths::SetDvAuthValue(const string& _dvAuthValue)
{
    m_dvAuthValue = _dvAuthValue;
    m_dvAuthValueHasBeenSet = true;
}

bool DvAuths::DvAuthValueHasBeenSet() const
{
    return m_dvAuthValueHasBeenSet;
}

string DvAuths::GetDvAuthDomain() const
{
    return m_dvAuthDomain;
}

void DvAuths::SetDvAuthDomain(const string& _dvAuthDomain)
{
    m_dvAuthDomain = _dvAuthDomain;
    m_dvAuthDomainHasBeenSet = true;
}

bool DvAuths::DvAuthDomainHasBeenSet() const
{
    return m_dvAuthDomainHasBeenSet;
}

string DvAuths::GetDvAuthPath() const
{
    return m_dvAuthPath;
}

void DvAuths::SetDvAuthPath(const string& _dvAuthPath)
{
    m_dvAuthPath = _dvAuthPath;
    m_dvAuthPathHasBeenSet = true;
}

bool DvAuths::DvAuthPathHasBeenSet() const
{
    return m_dvAuthPathHasBeenSet;
}

string DvAuths::GetDvAuthSubDomain() const
{
    return m_dvAuthSubDomain;
}

void DvAuths::SetDvAuthSubDomain(const string& _dvAuthSubDomain)
{
    m_dvAuthSubDomain = _dvAuthSubDomain;
    m_dvAuthSubDomainHasBeenSet = true;
}

bool DvAuths::DvAuthSubDomainHasBeenSet() const
{
    return m_dvAuthSubDomainHasBeenSet;
}

string DvAuths::GetDvAuthVerifyType() const
{
    return m_dvAuthVerifyType;
}

void DvAuths::SetDvAuthVerifyType(const string& _dvAuthVerifyType)
{
    m_dvAuthVerifyType = _dvAuthVerifyType;
    m_dvAuthVerifyTypeHasBeenSet = true;
}

bool DvAuths::DvAuthVerifyTypeHasBeenSet() const
{
    return m_dvAuthVerifyTypeHasBeenSet;
}

