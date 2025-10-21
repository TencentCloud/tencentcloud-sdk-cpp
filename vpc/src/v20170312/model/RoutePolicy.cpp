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

#include <tencentcloud/vpc/v20170312/model/RoutePolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

RoutePolicy::RoutePolicy() :
    m_routePolicyIdHasBeenSet(false),
    m_routePolicyNameHasBeenSet(false),
    m_routePolicyDescriptionHasBeenSet(false),
    m_routePolicyEntrySetHasBeenSet(false),
    m_routePolicyAssociationSetHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_tagSetHasBeenSet(false)
{
}

CoreInternalOutcome RoutePolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoutePolicyId") && !value["RoutePolicyId"].IsNull())
    {
        if (!value["RoutePolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoutePolicy.RoutePolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routePolicyId = string(value["RoutePolicyId"].GetString());
        m_routePolicyIdHasBeenSet = true;
    }

    if (value.HasMember("RoutePolicyName") && !value["RoutePolicyName"].IsNull())
    {
        if (!value["RoutePolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoutePolicy.RoutePolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routePolicyName = string(value["RoutePolicyName"].GetString());
        m_routePolicyNameHasBeenSet = true;
    }

    if (value.HasMember("RoutePolicyDescription") && !value["RoutePolicyDescription"].IsNull())
    {
        if (!value["RoutePolicyDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoutePolicy.RoutePolicyDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routePolicyDescription = string(value["RoutePolicyDescription"].GetString());
        m_routePolicyDescriptionHasBeenSet = true;
    }

    if (value.HasMember("RoutePolicyEntrySet") && !value["RoutePolicyEntrySet"].IsNull())
    {
        if (!value["RoutePolicyEntrySet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RoutePolicy.RoutePolicyEntrySet` is not array type"));

        const rapidjson::Value &tmpValue = value["RoutePolicyEntrySet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RoutePolicyEntry item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_routePolicyEntrySet.push_back(item);
        }
        m_routePolicyEntrySetHasBeenSet = true;
    }

    if (value.HasMember("RoutePolicyAssociationSet") && !value["RoutePolicyAssociationSet"].IsNull())
    {
        if (!value["RoutePolicyAssociationSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RoutePolicy.RoutePolicyAssociationSet` is not array type"));

        const rapidjson::Value &tmpValue = value["RoutePolicyAssociationSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RoutePolicyAssociation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_routePolicyAssociationSet.push_back(item);
        }
        m_routePolicyAssociationSetHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoutePolicy.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RoutePolicy.TagSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TagSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagSet.push_back(item);
        }
        m_tagSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoutePolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_routePolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutePolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routePolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_routePolicyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutePolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routePolicyName.c_str(), allocator).Move(), allocator);
    }

    if (m_routePolicyDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutePolicyDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routePolicyDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_routePolicyEntrySetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutePolicyEntrySet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_routePolicyEntrySet.begin(); itr != m_routePolicyEntrySet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_routePolicyAssociationSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutePolicyAssociationSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_routePolicyAssociationSet.begin(); itr != m_routePolicyAssociationSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_tagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSet.begin(); itr != m_tagSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string RoutePolicy::GetRoutePolicyId() const
{
    return m_routePolicyId;
}

void RoutePolicy::SetRoutePolicyId(const string& _routePolicyId)
{
    m_routePolicyId = _routePolicyId;
    m_routePolicyIdHasBeenSet = true;
}

bool RoutePolicy::RoutePolicyIdHasBeenSet() const
{
    return m_routePolicyIdHasBeenSet;
}

string RoutePolicy::GetRoutePolicyName() const
{
    return m_routePolicyName;
}

void RoutePolicy::SetRoutePolicyName(const string& _routePolicyName)
{
    m_routePolicyName = _routePolicyName;
    m_routePolicyNameHasBeenSet = true;
}

bool RoutePolicy::RoutePolicyNameHasBeenSet() const
{
    return m_routePolicyNameHasBeenSet;
}

string RoutePolicy::GetRoutePolicyDescription() const
{
    return m_routePolicyDescription;
}

void RoutePolicy::SetRoutePolicyDescription(const string& _routePolicyDescription)
{
    m_routePolicyDescription = _routePolicyDescription;
    m_routePolicyDescriptionHasBeenSet = true;
}

bool RoutePolicy::RoutePolicyDescriptionHasBeenSet() const
{
    return m_routePolicyDescriptionHasBeenSet;
}

vector<RoutePolicyEntry> RoutePolicy::GetRoutePolicyEntrySet() const
{
    return m_routePolicyEntrySet;
}

void RoutePolicy::SetRoutePolicyEntrySet(const vector<RoutePolicyEntry>& _routePolicyEntrySet)
{
    m_routePolicyEntrySet = _routePolicyEntrySet;
    m_routePolicyEntrySetHasBeenSet = true;
}

bool RoutePolicy::RoutePolicyEntrySetHasBeenSet() const
{
    return m_routePolicyEntrySetHasBeenSet;
}

vector<RoutePolicyAssociation> RoutePolicy::GetRoutePolicyAssociationSet() const
{
    return m_routePolicyAssociationSet;
}

void RoutePolicy::SetRoutePolicyAssociationSet(const vector<RoutePolicyAssociation>& _routePolicyAssociationSet)
{
    m_routePolicyAssociationSet = _routePolicyAssociationSet;
    m_routePolicyAssociationSetHasBeenSet = true;
}

bool RoutePolicy::RoutePolicyAssociationSetHasBeenSet() const
{
    return m_routePolicyAssociationSetHasBeenSet;
}

string RoutePolicy::GetCreatedTime() const
{
    return m_createdTime;
}

void RoutePolicy::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool RoutePolicy::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

vector<Tag> RoutePolicy::GetTagSet() const
{
    return m_tagSet;
}

void RoutePolicy::SetTagSet(const vector<Tag>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool RoutePolicy::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

