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

#include <tencentcloud/eiam/v20210420/model/InheritedForm.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

InheritedForm::InheritedForm() :
    m_userGroupIdsHasBeenSet(false),
    m_orgNodeIdsHasBeenSet(false)
{
}

CoreInternalOutcome InheritedForm::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserGroupIds") && !value["UserGroupIds"].IsNull())
    {
        if (!value["UserGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InheritedForm.UserGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["UserGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_userGroupIds.push_back((*itr).GetString());
        }
        m_userGroupIdsHasBeenSet = true;
    }

    if (value.HasMember("OrgNodeIds") && !value["OrgNodeIds"].IsNull())
    {
        if (!value["OrgNodeIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InheritedForm.OrgNodeIds` is not array type"));

        const rapidjson::Value &tmpValue = value["OrgNodeIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_orgNodeIds.push_back((*itr).GetString());
        }
        m_orgNodeIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InheritedForm::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_userGroupIds.begin(); itr != m_userGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_orgNodeIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgNodeIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_orgNodeIds.begin(); itr != m_orgNodeIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> InheritedForm::GetUserGroupIds() const
{
    return m_userGroupIds;
}

void InheritedForm::SetUserGroupIds(const vector<string>& _userGroupIds)
{
    m_userGroupIds = _userGroupIds;
    m_userGroupIdsHasBeenSet = true;
}

bool InheritedForm::UserGroupIdsHasBeenSet() const
{
    return m_userGroupIdsHasBeenSet;
}

vector<string> InheritedForm::GetOrgNodeIds() const
{
    return m_orgNodeIds;
}

void InheritedForm::SetOrgNodeIds(const vector<string>& _orgNodeIds)
{
    m_orgNodeIds = _orgNodeIds;
    m_orgNodeIdsHasBeenSet = true;
}

bool InheritedForm::OrgNodeIdsHasBeenSet() const
{
    return m_orgNodeIdsHasBeenSet;
}

