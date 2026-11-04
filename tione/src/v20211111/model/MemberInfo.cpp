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

#include <tencentcloud/tione/v20211111/model/MemberInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

MemberInfo::MemberInfo() :
    m_superAdminsHasBeenSet(false),
    m_adminsHasBeenSet(false)
{
}

CoreInternalOutcome MemberInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SuperAdmins") && !value["SuperAdmins"].IsNull())
    {
        if (!value["SuperAdmins"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MemberInfo.SuperAdmins` is not array type"));

        const rapidjson::Value &tmpValue = value["SuperAdmins"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UserBriefInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_superAdmins.push_back(item);
        }
        m_superAdminsHasBeenSet = true;
    }

    if (value.HasMember("Admins") && !value["Admins"].IsNull())
    {
        if (!value["Admins"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MemberInfo.Admins` is not array type"));

        const rapidjson::Value &tmpValue = value["Admins"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UserBriefInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_admins.push_back(item);
        }
        m_adminsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MemberInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_superAdminsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuperAdmins";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_superAdmins.begin(); itr != m_superAdmins.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_adminsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Admins";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_admins.begin(); itr != m_admins.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<UserBriefInfo> MemberInfo::GetSuperAdmins() const
{
    return m_superAdmins;
}

void MemberInfo::SetSuperAdmins(const vector<UserBriefInfo>& _superAdmins)
{
    m_superAdmins = _superAdmins;
    m_superAdminsHasBeenSet = true;
}

bool MemberInfo::SuperAdminsHasBeenSet() const
{
    return m_superAdminsHasBeenSet;
}

vector<UserBriefInfo> MemberInfo::GetAdmins() const
{
    return m_admins;
}

void MemberInfo::SetAdmins(const vector<UserBriefInfo>& _admins)
{
    m_admins = _admins;
    m_adminsHasBeenSet = true;
}

bool MemberInfo::AdminsHasBeenSet() const
{
    return m_adminsHasBeenSet;
}

