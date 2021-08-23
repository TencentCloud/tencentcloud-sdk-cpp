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

#include <tencentcloud/cme/v20191029/model/AuthorizationInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

AuthorizationInfo::AuthorizationInfo() :
    m_authorizeeHasBeenSet(false),
    m_permissionSetHasBeenSet(false)
{
}

CoreInternalOutcome AuthorizationInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Authorizee") && !value["Authorizee"].IsNull())
    {
        if (!value["Authorizee"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizationInfo.Authorizee` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_authorizee.Deserialize(value["Authorizee"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_authorizeeHasBeenSet = true;
    }

    if (value.HasMember("PermissionSet") && !value["PermissionSet"].IsNull())
    {
        if (!value["PermissionSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuthorizationInfo.PermissionSet` is not array type"));

        const rapidjson::Value &tmpValue = value["PermissionSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_permissionSet.push_back((*itr).GetString());
        }
        m_permissionSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuthorizationInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_authorizeeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Authorizee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_authorizee.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_permissionSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermissionSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_permissionSet.begin(); itr != m_permissionSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


Entity AuthorizationInfo::GetAuthorizee() const
{
    return m_authorizee;
}

void AuthorizationInfo::SetAuthorizee(const Entity& _authorizee)
{
    m_authorizee = _authorizee;
    m_authorizeeHasBeenSet = true;
}

bool AuthorizationInfo::AuthorizeeHasBeenSet() const
{
    return m_authorizeeHasBeenSet;
}

vector<string> AuthorizationInfo::GetPermissionSet() const
{
    return m_permissionSet;
}

void AuthorizationInfo::SetPermissionSet(const vector<string>& _permissionSet)
{
    m_permissionSet = _permissionSet;
    m_permissionSetHasBeenSet = true;
}

bool AuthorizationInfo::PermissionSetHasBeenSet() const
{
    return m_permissionSetHasBeenSet;
}

