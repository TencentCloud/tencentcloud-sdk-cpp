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

#include <tencentcloud/ssl/v20191205/model/DvAuthDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

DvAuthDetail::DvAuthDetail() :
    m_dvAuthKeyHasBeenSet(false),
    m_dvAuthValueHasBeenSet(false),
    m_dvAuthDomainHasBeenSet(false),
    m_dvAuthPathHasBeenSet(false),
    m_dvAuthKeySubDomainHasBeenSet(false),
    m_dvAuthsHasBeenSet(false)
{
}

CoreInternalOutcome DvAuthDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DvAuthKey") && !value["DvAuthKey"].IsNull())
    {
        if (!value["DvAuthKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DvAuthDetail.DvAuthKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dvAuthKey = string(value["DvAuthKey"].GetString());
        m_dvAuthKeyHasBeenSet = true;
    }

    if (value.HasMember("DvAuthValue") && !value["DvAuthValue"].IsNull())
    {
        if (!value["DvAuthValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DvAuthDetail.DvAuthValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dvAuthValue = string(value["DvAuthValue"].GetString());
        m_dvAuthValueHasBeenSet = true;
    }

    if (value.HasMember("DvAuthDomain") && !value["DvAuthDomain"].IsNull())
    {
        if (!value["DvAuthDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DvAuthDetail.DvAuthDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dvAuthDomain = string(value["DvAuthDomain"].GetString());
        m_dvAuthDomainHasBeenSet = true;
    }

    if (value.HasMember("DvAuthPath") && !value["DvAuthPath"].IsNull())
    {
        if (!value["DvAuthPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DvAuthDetail.DvAuthPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dvAuthPath = string(value["DvAuthPath"].GetString());
        m_dvAuthPathHasBeenSet = true;
    }

    if (value.HasMember("DvAuthKeySubDomain") && !value["DvAuthKeySubDomain"].IsNull())
    {
        if (!value["DvAuthKeySubDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DvAuthDetail.DvAuthKeySubDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dvAuthKeySubDomain = string(value["DvAuthKeySubDomain"].GetString());
        m_dvAuthKeySubDomainHasBeenSet = true;
    }

    if (value.HasMember("DvAuths") && !value["DvAuths"].IsNull())
    {
        if (!value["DvAuths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DvAuthDetail.DvAuths` is not array type"));

        const rapidjson::Value &tmpValue = value["DvAuths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DvAuths item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dvAuths.push_back(item);
        }
        m_dvAuthsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DvAuthDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_dvAuthKeySubDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DvAuthKeySubDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dvAuthKeySubDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_dvAuthsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DvAuths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dvAuths.begin(); itr != m_dvAuths.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DvAuthDetail::GetDvAuthKey() const
{
    return m_dvAuthKey;
}

void DvAuthDetail::SetDvAuthKey(const string& _dvAuthKey)
{
    m_dvAuthKey = _dvAuthKey;
    m_dvAuthKeyHasBeenSet = true;
}

bool DvAuthDetail::DvAuthKeyHasBeenSet() const
{
    return m_dvAuthKeyHasBeenSet;
}

string DvAuthDetail::GetDvAuthValue() const
{
    return m_dvAuthValue;
}

void DvAuthDetail::SetDvAuthValue(const string& _dvAuthValue)
{
    m_dvAuthValue = _dvAuthValue;
    m_dvAuthValueHasBeenSet = true;
}

bool DvAuthDetail::DvAuthValueHasBeenSet() const
{
    return m_dvAuthValueHasBeenSet;
}

string DvAuthDetail::GetDvAuthDomain() const
{
    return m_dvAuthDomain;
}

void DvAuthDetail::SetDvAuthDomain(const string& _dvAuthDomain)
{
    m_dvAuthDomain = _dvAuthDomain;
    m_dvAuthDomainHasBeenSet = true;
}

bool DvAuthDetail::DvAuthDomainHasBeenSet() const
{
    return m_dvAuthDomainHasBeenSet;
}

string DvAuthDetail::GetDvAuthPath() const
{
    return m_dvAuthPath;
}

void DvAuthDetail::SetDvAuthPath(const string& _dvAuthPath)
{
    m_dvAuthPath = _dvAuthPath;
    m_dvAuthPathHasBeenSet = true;
}

bool DvAuthDetail::DvAuthPathHasBeenSet() const
{
    return m_dvAuthPathHasBeenSet;
}

string DvAuthDetail::GetDvAuthKeySubDomain() const
{
    return m_dvAuthKeySubDomain;
}

void DvAuthDetail::SetDvAuthKeySubDomain(const string& _dvAuthKeySubDomain)
{
    m_dvAuthKeySubDomain = _dvAuthKeySubDomain;
    m_dvAuthKeySubDomainHasBeenSet = true;
}

bool DvAuthDetail::DvAuthKeySubDomainHasBeenSet() const
{
    return m_dvAuthKeySubDomainHasBeenSet;
}

vector<DvAuths> DvAuthDetail::GetDvAuths() const
{
    return m_dvAuths;
}

void DvAuthDetail::SetDvAuths(const vector<DvAuths>& _dvAuths)
{
    m_dvAuths = _dvAuths;
    m_dvAuthsHasBeenSet = true;
}

bool DvAuthDetail::DvAuthsHasBeenSet() const
{
    return m_dvAuthsHasBeenSet;
}

