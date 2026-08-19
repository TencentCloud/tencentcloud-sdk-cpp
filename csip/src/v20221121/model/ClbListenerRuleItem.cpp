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

#include <tencentcloud/csip/v20221121/model/ClbListenerRuleItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ClbListenerRuleItem::ClbListenerRuleItem() :
    m_listenerIDHasBeenSet(false),
    m_locationIDHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome ClbListenerRuleItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ListenerID") && !value["ListenerID"].IsNull())
    {
        if (!value["ListenerID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClbListenerRuleItem.ListenerID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerID = string(value["ListenerID"].GetString());
        m_listenerIDHasBeenSet = true;
    }

    if (value.HasMember("LocationID") && !value["LocationID"].IsNull())
    {
        if (!value["LocationID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClbListenerRuleItem.LocationID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_locationID = string(value["LocationID"].GetString());
        m_locationIDHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClbListenerRuleItem.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClbListenerRuleItem.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClbListenerRuleItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClbListenerRuleItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_listenerIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerID.c_str(), allocator).Move(), allocator);
    }

    if (m_locationIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocationID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_locationID.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string ClbListenerRuleItem::GetListenerID() const
{
    return m_listenerID;
}

void ClbListenerRuleItem::SetListenerID(const string& _listenerID)
{
    m_listenerID = _listenerID;
    m_listenerIDHasBeenSet = true;
}

bool ClbListenerRuleItem::ListenerIDHasBeenSet() const
{
    return m_listenerIDHasBeenSet;
}

string ClbListenerRuleItem::GetLocationID() const
{
    return m_locationID;
}

void ClbListenerRuleItem::SetLocationID(const string& _locationID)
{
    m_locationID = _locationID;
    m_locationIDHasBeenSet = true;
}

bool ClbListenerRuleItem::LocationIDHasBeenSet() const
{
    return m_locationIDHasBeenSet;
}

string ClbListenerRuleItem::GetDomain() const
{
    return m_domain;
}

void ClbListenerRuleItem::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ClbListenerRuleItem::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ClbListenerRuleItem::GetUrl() const
{
    return m_url;
}

void ClbListenerRuleItem::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool ClbListenerRuleItem::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string ClbListenerRuleItem::GetCreateTime() const
{
    return m_createTime;
}

void ClbListenerRuleItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ClbListenerRuleItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

