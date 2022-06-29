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

#include <tencentcloud/organization/v20210331/model/MemberIdentity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

MemberIdentity::MemberIdentity() :
    m_identityIdHasBeenSet(false),
    m_identityAliasNameHasBeenSet(false)
{
}

CoreInternalOutcome MemberIdentity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IdentityId") && !value["IdentityId"].IsNull())
    {
        if (!value["IdentityId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MemberIdentity.IdentityId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_identityId = value["IdentityId"].GetInt64();
        m_identityIdHasBeenSet = true;
    }

    if (value.HasMember("IdentityAliasName") && !value["IdentityAliasName"].IsNull())
    {
        if (!value["IdentityAliasName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemberIdentity.IdentityAliasName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identityAliasName = string(value["IdentityAliasName"].GetString());
        m_identityAliasNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MemberIdentity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


int64_t MemberIdentity::GetIdentityId() const
{
    return m_identityId;
}

void MemberIdentity::SetIdentityId(const int64_t& _identityId)
{
    m_identityId = _identityId;
    m_identityIdHasBeenSet = true;
}

bool MemberIdentity::IdentityIdHasBeenSet() const
{
    return m_identityIdHasBeenSet;
}

string MemberIdentity::GetIdentityAliasName() const
{
    return m_identityAliasName;
}

void MemberIdentity::SetIdentityAliasName(const string& _identityAliasName)
{
    m_identityAliasName = _identityAliasName;
    m_identityAliasNameHasBeenSet = true;
}

bool MemberIdentity::IdentityAliasNameHasBeenSet() const
{
    return m_identityAliasNameHasBeenSet;
}

