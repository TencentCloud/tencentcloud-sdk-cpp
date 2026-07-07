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

#include <tencentcloud/clb/v20180317/model/IntentRouterItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

IntentRouterItem::IntentRouterItem() :
    m_createdTimeHasBeenSet(false),
    m_intentRouterIdHasBeenSet(false),
    m_routeNameHasBeenSet(false),
    m_routerDescribeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tiersHasBeenSet(false),
    m_updatedTimeHasBeenSet(false)
{
}

CoreInternalOutcome IntentRouterItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntentRouterItem.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("IntentRouterId") && !value["IntentRouterId"].IsNull())
    {
        if (!value["IntentRouterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntentRouterItem.IntentRouterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_intentRouterId = string(value["IntentRouterId"].GetString());
        m_intentRouterIdHasBeenSet = true;
    }

    if (value.HasMember("RouteName") && !value["RouteName"].IsNull())
    {
        if (!value["RouteName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntentRouterItem.RouteName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeName = string(value["RouteName"].GetString());
        m_routeNameHasBeenSet = true;
    }

    if (value.HasMember("RouterDescribe") && !value["RouterDescribe"].IsNull())
    {
        if (!value["RouterDescribe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntentRouterItem.RouterDescribe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routerDescribe = string(value["RouterDescribe"].GetString());
        m_routerDescribeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntentRouterItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Tiers") && !value["Tiers"].IsNull())
    {
        if (!value["Tiers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IntentRouterItem.Tiers` is not array type"));

        const rapidjson::Value &tmpValue = value["Tiers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IntentRouterTierItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tiers.push_back(item);
        }
        m_tiersHasBeenSet = true;
    }

    if (value.HasMember("UpdatedTime") && !value["UpdatedTime"].IsNull())
    {
        if (!value["UpdatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntentRouterItem.UpdatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedTime = string(value["UpdatedTime"].GetString());
        m_updatedTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IntentRouterItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_intentRouterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntentRouterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_intentRouterId.c_str(), allocator).Move(), allocator);
    }

    if (m_routeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeName.c_str(), allocator).Move(), allocator);
    }

    if (m_routerDescribeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouterDescribe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routerDescribe.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_tiersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tiers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tiers.begin(); itr != m_tiers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_updatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedTime.c_str(), allocator).Move(), allocator);
    }

}


string IntentRouterItem::GetCreatedTime() const
{
    return m_createdTime;
}

void IntentRouterItem::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool IntentRouterItem::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string IntentRouterItem::GetIntentRouterId() const
{
    return m_intentRouterId;
}

void IntentRouterItem::SetIntentRouterId(const string& _intentRouterId)
{
    m_intentRouterId = _intentRouterId;
    m_intentRouterIdHasBeenSet = true;
}

bool IntentRouterItem::IntentRouterIdHasBeenSet() const
{
    return m_intentRouterIdHasBeenSet;
}

string IntentRouterItem::GetRouteName() const
{
    return m_routeName;
}

void IntentRouterItem::SetRouteName(const string& _routeName)
{
    m_routeName = _routeName;
    m_routeNameHasBeenSet = true;
}

bool IntentRouterItem::RouteNameHasBeenSet() const
{
    return m_routeNameHasBeenSet;
}

string IntentRouterItem::GetRouterDescribe() const
{
    return m_routerDescribe;
}

void IntentRouterItem::SetRouterDescribe(const string& _routerDescribe)
{
    m_routerDescribe = _routerDescribe;
    m_routerDescribeHasBeenSet = true;
}

bool IntentRouterItem::RouterDescribeHasBeenSet() const
{
    return m_routerDescribeHasBeenSet;
}

string IntentRouterItem::GetStatus() const
{
    return m_status;
}

void IntentRouterItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool IntentRouterItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<IntentRouterTierItem> IntentRouterItem::GetTiers() const
{
    return m_tiers;
}

void IntentRouterItem::SetTiers(const vector<IntentRouterTierItem>& _tiers)
{
    m_tiers = _tiers;
    m_tiersHasBeenSet = true;
}

bool IntentRouterItem::TiersHasBeenSet() const
{
    return m_tiersHasBeenSet;
}

string IntentRouterItem::GetUpdatedTime() const
{
    return m_updatedTime;
}

void IntentRouterItem::SetUpdatedTime(const string& _updatedTime)
{
    m_updatedTime = _updatedTime;
    m_updatedTimeHasBeenSet = true;
}

bool IntentRouterItem::UpdatedTimeHasBeenSet() const
{
    return m_updatedTimeHasBeenSet;
}

