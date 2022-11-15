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

#include <tencentcloud/organization/v20210331/model/OrgIdentity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

OrgIdentity::OrgIdentity() :
    m_identityIdHasBeenSet(false),
    m_identityAliasNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_identityPolicyHasBeenSet(false),
    m_identityTypeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome OrgIdentity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IdentityId") && !value["IdentityId"].IsNull())
    {
        if (!value["IdentityId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrgIdentity.IdentityId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_identityId = value["IdentityId"].GetInt64();
        m_identityIdHasBeenSet = true;
    }

    if (value.HasMember("IdentityAliasName") && !value["IdentityAliasName"].IsNull())
    {
        if (!value["IdentityAliasName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgIdentity.IdentityAliasName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identityAliasName = string(value["IdentityAliasName"].GetString());
        m_identityAliasNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgIdentity.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("IdentityPolicy") && !value["IdentityPolicy"].IsNull())
    {
        if (!value["IdentityPolicy"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OrgIdentity.IdentityPolicy` is not array type"));

        const rapidjson::Value &tmpValue = value["IdentityPolicy"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IdentityPolicy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_identityPolicy.push_back(item);
        }
        m_identityPolicyHasBeenSet = true;
    }

    if (value.HasMember("IdentityType") && !value["IdentityType"].IsNull())
    {
        if (!value["IdentityType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OrgIdentity.IdentityType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_identityType = value["IdentityType"].GetUint64();
        m_identityTypeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgIdentity.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OrgIdentity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_identityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_identityId, allocator);
    }

    if (m_identityAliasNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityAliasName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identityAliasName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_identityPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_identityPolicy.begin(); itr != m_identityPolicy.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_identityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_identityType, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t OrgIdentity::GetIdentityId() const
{
    return m_identityId;
}

void OrgIdentity::SetIdentityId(const int64_t& _identityId)
{
    m_identityId = _identityId;
    m_identityIdHasBeenSet = true;
}

bool OrgIdentity::IdentityIdHasBeenSet() const
{
    return m_identityIdHasBeenSet;
}

string OrgIdentity::GetIdentityAliasName() const
{
    return m_identityAliasName;
}

void OrgIdentity::SetIdentityAliasName(const string& _identityAliasName)
{
    m_identityAliasName = _identityAliasName;
    m_identityAliasNameHasBeenSet = true;
}

bool OrgIdentity::IdentityAliasNameHasBeenSet() const
{
    return m_identityAliasNameHasBeenSet;
}

string OrgIdentity::GetDescription() const
{
    return m_description;
}

void OrgIdentity::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool OrgIdentity::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<IdentityPolicy> OrgIdentity::GetIdentityPolicy() const
{
    return m_identityPolicy;
}

void OrgIdentity::SetIdentityPolicy(const vector<IdentityPolicy>& _identityPolicy)
{
    m_identityPolicy = _identityPolicy;
    m_identityPolicyHasBeenSet = true;
}

bool OrgIdentity::IdentityPolicyHasBeenSet() const
{
    return m_identityPolicyHasBeenSet;
}

uint64_t OrgIdentity::GetIdentityType() const
{
    return m_identityType;
}

void OrgIdentity::SetIdentityType(const uint64_t& _identityType)
{
    m_identityType = _identityType;
    m_identityTypeHasBeenSet = true;
}

bool OrgIdentity::IdentityTypeHasBeenSet() const
{
    return m_identityTypeHasBeenSet;
}

string OrgIdentity::GetUpdateTime() const
{
    return m_updateTime;
}

void OrgIdentity::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool OrgIdentity::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

