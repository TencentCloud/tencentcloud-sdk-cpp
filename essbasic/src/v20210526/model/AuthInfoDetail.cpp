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

#include <tencentcloud/essbasic/v20210526/model/AuthInfoDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

AuthInfoDetail::AuthInfoDetail() :
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_hasAuthUserListHasBeenSet(false),
    m_hasAuthOrganizationListHasBeenSet(false),
    m_authUserTotalHasBeenSet(false),
    m_authOrganizationTotalHasBeenSet(false)
{
}

CoreInternalOutcome AuthInfoDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthInfoDetail.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthInfoDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("HasAuthUserList") && !value["HasAuthUserList"].IsNull())
    {
        if (!value["HasAuthUserList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuthInfoDetail.HasAuthUserList` is not array type"));

        const rapidjson::Value &tmpValue = value["HasAuthUserList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HasAuthUser item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_hasAuthUserList.push_back(item);
        }
        m_hasAuthUserListHasBeenSet = true;
    }

    if (value.HasMember("HasAuthOrganizationList") && !value["HasAuthOrganizationList"].IsNull())
    {
        if (!value["HasAuthOrganizationList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuthInfoDetail.HasAuthOrganizationList` is not array type"));

        const rapidjson::Value &tmpValue = value["HasAuthOrganizationList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HasAuthOrganization item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_hasAuthOrganizationList.push_back(item);
        }
        m_hasAuthOrganizationListHasBeenSet = true;
    }

    if (value.HasMember("AuthUserTotal") && !value["AuthUserTotal"].IsNull())
    {
        if (!value["AuthUserTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthInfoDetail.AuthUserTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authUserTotal = value["AuthUserTotal"].GetInt64();
        m_authUserTotalHasBeenSet = true;
    }

    if (value.HasMember("AuthOrganizationTotal") && !value["AuthOrganizationTotal"].IsNull())
    {
        if (!value["AuthOrganizationTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthInfoDetail.AuthOrganizationTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authOrganizationTotal = value["AuthOrganizationTotal"].GetInt64();
        m_authOrganizationTotalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuthInfoDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_hasAuthUserListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasAuthUserList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_hasAuthUserList.begin(); itr != m_hasAuthUserList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_hasAuthOrganizationListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasAuthOrganizationList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_hasAuthOrganizationList.begin(); itr != m_hasAuthOrganizationList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_authUserTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthUserTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authUserTotal, allocator);
    }

    if (m_authOrganizationTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthOrganizationTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authOrganizationTotal, allocator);
    }

}


string AuthInfoDetail::GetType() const
{
    return m_type;
}

void AuthInfoDetail::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AuthInfoDetail::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string AuthInfoDetail::GetName() const
{
    return m_name;
}

void AuthInfoDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AuthInfoDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<HasAuthUser> AuthInfoDetail::GetHasAuthUserList() const
{
    return m_hasAuthUserList;
}

void AuthInfoDetail::SetHasAuthUserList(const vector<HasAuthUser>& _hasAuthUserList)
{
    m_hasAuthUserList = _hasAuthUserList;
    m_hasAuthUserListHasBeenSet = true;
}

bool AuthInfoDetail::HasAuthUserListHasBeenSet() const
{
    return m_hasAuthUserListHasBeenSet;
}

vector<HasAuthOrganization> AuthInfoDetail::GetHasAuthOrganizationList() const
{
    return m_hasAuthOrganizationList;
}

void AuthInfoDetail::SetHasAuthOrganizationList(const vector<HasAuthOrganization>& _hasAuthOrganizationList)
{
    m_hasAuthOrganizationList = _hasAuthOrganizationList;
    m_hasAuthOrganizationListHasBeenSet = true;
}

bool AuthInfoDetail::HasAuthOrganizationListHasBeenSet() const
{
    return m_hasAuthOrganizationListHasBeenSet;
}

int64_t AuthInfoDetail::GetAuthUserTotal() const
{
    return m_authUserTotal;
}

void AuthInfoDetail::SetAuthUserTotal(const int64_t& _authUserTotal)
{
    m_authUserTotal = _authUserTotal;
    m_authUserTotalHasBeenSet = true;
}

bool AuthInfoDetail::AuthUserTotalHasBeenSet() const
{
    return m_authUserTotalHasBeenSet;
}

int64_t AuthInfoDetail::GetAuthOrganizationTotal() const
{
    return m_authOrganizationTotal;
}

void AuthInfoDetail::SetAuthOrganizationTotal(const int64_t& _authOrganizationTotal)
{
    m_authOrganizationTotal = _authOrganizationTotal;
    m_authOrganizationTotalHasBeenSet = true;
}

bool AuthInfoDetail::AuthOrganizationTotalHasBeenSet() const
{
    return m_authOrganizationTotalHasBeenSet;
}

