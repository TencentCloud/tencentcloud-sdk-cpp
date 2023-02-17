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

#include <tencentcloud/organization/v20210331/model/AuthNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

AuthNode::AuthNode() :
    m_relationIdHasBeenSet(false),
    m_authNameHasBeenSet(false),
    m_managerHasBeenSet(false)
{
}

CoreInternalOutcome AuthNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RelationId") && !value["RelationId"].IsNull())
    {
        if (!value["RelationId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthNode.RelationId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_relationId = value["RelationId"].GetInt64();
        m_relationIdHasBeenSet = true;
    }

    if (value.HasMember("AuthName") && !value["AuthName"].IsNull())
    {
        if (!value["AuthName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthNode.AuthName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authName = string(value["AuthName"].GetString());
        m_authNameHasBeenSet = true;
    }

    if (value.HasMember("Manager") && !value["Manager"].IsNull())
    {
        if (!value["Manager"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AuthNode.Manager` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_manager.Deserialize(value["Manager"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_managerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuthNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_relationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_relationId, allocator);
    }

    if (m_authNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authName.c_str(), allocator).Move(), allocator);
    }

    if (m_managerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Manager";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_manager.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t AuthNode::GetRelationId() const
{
    return m_relationId;
}

void AuthNode::SetRelationId(const int64_t& _relationId)
{
    m_relationId = _relationId;
    m_relationIdHasBeenSet = true;
}

bool AuthNode::RelationIdHasBeenSet() const
{
    return m_relationIdHasBeenSet;
}

string AuthNode::GetAuthName() const
{
    return m_authName;
}

void AuthNode::SetAuthName(const string& _authName)
{
    m_authName = _authName;
    m_authNameHasBeenSet = true;
}

bool AuthNode::AuthNameHasBeenSet() const
{
    return m_authNameHasBeenSet;
}

MemberMainInfo AuthNode::GetManager() const
{
    return m_manager;
}

void AuthNode::SetManager(const MemberMainInfo& _manager)
{
    m_manager = _manager;
    m_managerHasBeenSet = true;
}

bool AuthNode::ManagerHasBeenSet() const
{
    return m_managerHasBeenSet;
}

