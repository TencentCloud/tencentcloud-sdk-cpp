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

#include <tencentcloud/cls/v20201016/model/SearchDashboardSubscribeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

SearchDashboardSubscribeRequest::SearchDashboardSubscribeRequest() :
    m_dashboardIdHasBeenSet(false),
    m_subscribeDataHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

string SearchDashboardSubscribeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dashboardIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DashboardId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dashboardId.c_str(), allocator).Move(), allocator);
    }

    if (m_subscribeDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subscribeData.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SearchDashboardSubscribeRequest::GetDashboardId() const
{
    return m_dashboardId;
}

void SearchDashboardSubscribeRequest::SetDashboardId(const string& _dashboardId)
{
    m_dashboardId = _dashboardId;
    m_dashboardIdHasBeenSet = true;
}

bool SearchDashboardSubscribeRequest::DashboardIdHasBeenSet() const
{
    return m_dashboardIdHasBeenSet;
}

DashboardSubscribeData SearchDashboardSubscribeRequest::GetSubscribeData() const
{
    return m_subscribeData;
}

void SearchDashboardSubscribeRequest::SetSubscribeData(const DashboardSubscribeData& _subscribeData)
{
    m_subscribeData = _subscribeData;
    m_subscribeDataHasBeenSet = true;
}

bool SearchDashboardSubscribeRequest::SubscribeDataHasBeenSet() const
{
    return m_subscribeDataHasBeenSet;
}

uint64_t SearchDashboardSubscribeRequest::GetId() const
{
    return m_id;
}

void SearchDashboardSubscribeRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool SearchDashboardSubscribeRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string SearchDashboardSubscribeRequest::GetName() const
{
    return m_name;
}

void SearchDashboardSubscribeRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SearchDashboardSubscribeRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}


