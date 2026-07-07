/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/alb/v20251030/model/SecurityPolicyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

SecurityPolicyInfo::SecurityPolicyInfo() :
    m_ciphersHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_securityPolicyIdHasBeenSet(false),
    m_securityPolicyNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tLSVersionsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome SecurityPolicyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ciphers") && !value["Ciphers"].IsNull())
    {
        if (!value["Ciphers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecurityPolicyInfo.Ciphers` is not array type"));

        const rapidjson::Value &tmpValue = value["Ciphers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ciphers.push_back((*itr).GetString());
        }
        m_ciphersHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityPolicyInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("SecurityPolicyId") && !value["SecurityPolicyId"].IsNull())
    {
        if (!value["SecurityPolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityPolicyInfo.SecurityPolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityPolicyId = string(value["SecurityPolicyId"].GetString());
        m_securityPolicyIdHasBeenSet = true;
    }

    if (value.HasMember("SecurityPolicyName") && !value["SecurityPolicyName"].IsNull())
    {
        if (!value["SecurityPolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityPolicyInfo.SecurityPolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityPolicyName = string(value["SecurityPolicyName"].GetString());
        m_securityPolicyNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityPolicyInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TLSVersions") && !value["TLSVersions"].IsNull())
    {
        if (!value["TLSVersions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecurityPolicyInfo.TLSVersions` is not array type"));

        const rapidjson::Value &tmpValue = value["TLSVersions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tLSVersions.push_back((*itr).GetString());
        }
        m_tLSVersionsHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecurityPolicyInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityPolicyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ciphersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ciphers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ciphers.begin(); itr != m_ciphers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_securityPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityPolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_securityPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_securityPolicyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityPolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_securityPolicyName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_tLSVersionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TLSVersions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tLSVersions.begin(); itr != m_tLSVersions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<string> SecurityPolicyInfo::GetCiphers() const
{
    return m_ciphers;
}

void SecurityPolicyInfo::SetCiphers(const vector<string>& _ciphers)
{
    m_ciphers = _ciphers;
    m_ciphersHasBeenSet = true;
}

bool SecurityPolicyInfo::CiphersHasBeenSet() const
{
    return m_ciphersHasBeenSet;
}

string SecurityPolicyInfo::GetCreateTime() const
{
    return m_createTime;
}

void SecurityPolicyInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SecurityPolicyInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SecurityPolicyInfo::GetSecurityPolicyId() const
{
    return m_securityPolicyId;
}

void SecurityPolicyInfo::SetSecurityPolicyId(const string& _securityPolicyId)
{
    m_securityPolicyId = _securityPolicyId;
    m_securityPolicyIdHasBeenSet = true;
}

bool SecurityPolicyInfo::SecurityPolicyIdHasBeenSet() const
{
    return m_securityPolicyIdHasBeenSet;
}

string SecurityPolicyInfo::GetSecurityPolicyName() const
{
    return m_securityPolicyName;
}

void SecurityPolicyInfo::SetSecurityPolicyName(const string& _securityPolicyName)
{
    m_securityPolicyName = _securityPolicyName;
    m_securityPolicyNameHasBeenSet = true;
}

bool SecurityPolicyInfo::SecurityPolicyNameHasBeenSet() const
{
    return m_securityPolicyNameHasBeenSet;
}

string SecurityPolicyInfo::GetStatus() const
{
    return m_status;
}

void SecurityPolicyInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SecurityPolicyInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> SecurityPolicyInfo::GetTLSVersions() const
{
    return m_tLSVersions;
}

void SecurityPolicyInfo::SetTLSVersions(const vector<string>& _tLSVersions)
{
    m_tLSVersions = _tLSVersions;
    m_tLSVersionsHasBeenSet = true;
}

bool SecurityPolicyInfo::TLSVersionsHasBeenSet() const
{
    return m_tLSVersionsHasBeenSet;
}

vector<TagInfo> SecurityPolicyInfo::GetTags() const
{
    return m_tags;
}

void SecurityPolicyInfo::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool SecurityPolicyInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

