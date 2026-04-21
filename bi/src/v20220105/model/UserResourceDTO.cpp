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

#include <tencentcloud/bi/v20220105/model/UserResourceDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

UserResourceDTO::UserResourceDTO() :
    m_corpIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_resourceListHasBeenSet(false)
{
}

CoreInternalOutcome UserResourceDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CorpId") && !value["CorpId"].IsNull())
    {
        if (!value["CorpId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserResourceDTO.CorpId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_corpId = string(value["CorpId"].GetString());
        m_corpIdHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserResourceDTO.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserResourceDTO.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceList") && !value["ResourceList"].IsNull())
    {
        if (!value["ResourceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserResourceDTO.ResourceList` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourceItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceList.push_back(item);
        }
        m_resourceListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserResourceDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_corpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_corpId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceList.begin(); itr != m_resourceList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string UserResourceDTO::GetCorpId() const
{
    return m_corpId;
}

void UserResourceDTO::SetCorpId(const string& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool UserResourceDTO::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

string UserResourceDTO::GetUserId() const
{
    return m_userId;
}

void UserResourceDTO::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool UserResourceDTO::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string UserResourceDTO::GetUserName() const
{
    return m_userName;
}

void UserResourceDTO::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool UserResourceDTO::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

vector<ResourceItem> UserResourceDTO::GetResourceList() const
{
    return m_resourceList;
}

void UserResourceDTO::SetResourceList(const vector<ResourceItem>& _resourceList)
{
    m_resourceList = _resourceList;
    m_resourceListHasBeenSet = true;
}

bool UserResourceDTO::ResourceListHasBeenSet() const
{
    return m_resourceListHasBeenSet;
}

