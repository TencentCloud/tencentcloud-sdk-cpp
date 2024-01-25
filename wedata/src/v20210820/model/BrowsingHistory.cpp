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

#include <tencentcloud/wedata/v20210820/model/BrowsingHistory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

BrowsingHistory::BrowsingHistory() :
    m_titleHasBeenSet(false),
    m_visitTimeHasBeenSet(false),
    m_extraInfoHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false)
{
}

CoreInternalOutcome BrowsingHistory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrowsingHistory.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("VisitTime") && !value["VisitTime"].IsNull())
    {
        if (!value["VisitTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrowsingHistory.VisitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_visitTime = string(value["VisitTime"].GetString());
        m_visitTimeHasBeenSet = true;
    }

    if (value.HasMember("ExtraInfo") && !value["ExtraInfo"].IsNull())
    {
        if (!value["ExtraInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrowsingHistory.ExtraInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extraInfo = string(value["ExtraInfo"].GetString());
        m_extraInfoHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrowsingHistory.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrowsingHistory.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BrowsingHistory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_visitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VisitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_visitTime.c_str(), allocator).Move(), allocator);
    }

    if (m_extraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extraInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

}


string BrowsingHistory::GetTitle() const
{
    return m_title;
}

void BrowsingHistory::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool BrowsingHistory::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string BrowsingHistory::GetVisitTime() const
{
    return m_visitTime;
}

void BrowsingHistory::SetVisitTime(const string& _visitTime)
{
    m_visitTime = _visitTime;
    m_visitTimeHasBeenSet = true;
}

bool BrowsingHistory::VisitTimeHasBeenSet() const
{
    return m_visitTimeHasBeenSet;
}

string BrowsingHistory::GetExtraInfo() const
{
    return m_extraInfo;
}

void BrowsingHistory::SetExtraInfo(const string& _extraInfo)
{
    m_extraInfo = _extraInfo;
    m_extraInfoHasBeenSet = true;
}

bool BrowsingHistory::ExtraInfoHasBeenSet() const
{
    return m_extraInfoHasBeenSet;
}

string BrowsingHistory::GetResourceType() const
{
    return m_resourceType;
}

void BrowsingHistory::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool BrowsingHistory::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string BrowsingHistory::GetResourceId() const
{
    return m_resourceId;
}

void BrowsingHistory::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool BrowsingHistory::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

